<?php
/*
 * This file contains the functionality for the spads_sites module,
 * available via the module and via drush
 */
define('SPADS_SITES_URL', 'http://dev.scratchpads.eu/scratchpads/serial');
define('SPADS_SCREENSHOT_NORMAL', 'screenshots.scratchpads.eu/%s.small.jpg');
define('SPADS_SCREENSHOT_ANNOTATED', 'screenshots.scratchpads.eu/%s.small.annotated.jpg');
define('SPADS_SITES_ALIAS', 'explore/sites');

/*
 * Load and format the site information data
 * Returns the data as an array on success,
 * false on failure.
 * 
 */
function _spads_sites_load_data($url) {
  $raw_data = file_get_contents($url);
  if ($raw_data) {
    $data = unserialize($raw_data);
    $new_data = array();
    foreach ($data as $row) {
      $url = _spads_sites_format_url($row['site_url']);
      $new_data[$url] = $row;
      
      // Clean URL
      $new_data[$url]['site_url'] = $url;
      // Calculate total pages
      $new_data[$url]['pages'] = 0;
      $new_data[$url]['taxa'] = 0;
      if (!empty($row['nodes'])) {
        foreach ($row['nodes'] as $type => $count) {
          $new_data[$url]['pages'] += $count;
          if ($type == 'spm') {
            $new_data[$url]['taxa'] += $count;
          }
        }
      }
      // Ensure we have some values
      if (empty($row['last_node_changed_time'])) {
        $new_data[$url]['last_node_changed_time'] = 0;
      }
      if (empty($row['last_login_time'])) {
        $new_data[$url]['last_login_time'] = 0;
      }
    }
    
    return $new_data;
  } else {
    return FALSE;
  }
}

/*
 * Ensure URLs are formatted in a consistent manner
 */
function _spads_sites_format_url($url) {
  $url = preg_replace('/^http:\/\//', '', $url);
  $url = preg_replace('/\/+$/', '', $url);
  
  return $url;
}

/*
 * Given a site url, look for an existing node and
* return the node object, or a new blank node object
* if not found.
*/
function _spads_sites_find_site($url) {
  $query = new EntityFieldQuery();

  $query
  ->entityCondition('entity_type', 'node')
  ->entityCondition('bundle', 'scratchpads')
  ->fieldCondition('field_website', 'url', $url, '=')
  ->range(0,1);

  $result = $query->execute();

  if (!empty($result['node'])) {
    $nid = array_pop(array_keys($result['node']));
    $node = node_load($nid);
  } else {
    $node = new stdClass();
    $node->type = 'scratchpads';
    node_object_prepare($node);

    $node->language = LANGUAGE_NONE;
    $node->body = array();

    if (module_load_include('inc', 'pathauto')) {
      $node->path = array(
          'alias' => SPADS_SITES_ALIAS . '/' . pathauto_cleanstring(preg_replace('/^http:\/\//', '', $url)),
      );
    } else {
      $node->path = array(
          'alias' => SPADS_SITES_ALIAS . '/' . preg_replace('/(http|[^a-zA-Z0-9]+)/', '', $url),
      );
    }
  }

  return $node;
}

/*
 * Given a type, sets a value on a node's field
 */
function _spads_sites_set_value($node, $field, $type, $value, $options = array()) {
  $options = array_merge(array(
  'title' => NULL,
  'attributes' => array(),
  'format' => 'plain_text',
      'timezone' => 'Europe/London',
      'timezone_db' => 'UTC',
      'date_type' => 'timestamp',
   ), $options);

  if (!is_array($value)) {
    $value = array($value);
  }
  
  $final = array();
  foreach($value as $val) {
    switch($type) {
      case 'url':
        $final[] = array(
          'url' => $val,
          'title' => $options['title'],
          'attributes' => $options['attributes'],
        );
        break;
      case 'text':
        $final[] = array(
          'value' => $val,
          'format' => $options['format'],
          'safe_value' => '<p>' . htmlspecialchars($val) . '</p>',
        );
        break;
      case 'int':
        $final[] = array(
          'value' => $val,
        );
        break;
      case 'date':
        $final[] = array(
          'value' => $val,
          'timezone' => $options['timezone'],
          'timezone_db' => $options['timezone_db'],
          'date_type' => $options['date_type'],
        );
        break;
    }    
  }
  
  $f =& $node->$field;
  $f[$node->language] = $final;
}

/*
 * Given a node and an array with site data, update the node
* values
*/
function _spads_sites_set_node_data($node, $data) {
  $node->title = $data['site_title'];

  _spads_sites_set_value($node, 'field_website', 'url', $data['site_url']);
  _spads_sites_set_value($node, 'field_mission', 'text', $data['site_mission']);
  _spads_sites_set_value($node, 'field_profile', 'text', $data['profile']);
  _spads_sites_set_value($node, 'field_views', 'int', $data['views']);
  _spads_sites_set_value($node, 'field_pages', 'int', $data['pages']);
  _spads_sites_set_value($node, 'field_last_login', 'date', $data['last_login_time']);
  _spads_sites_set_value($node, 'field_last_node_changed', 'date', $data['last_node_changed_time']);
  _spads_sites_set_value($node, 'field_total_users', 'int', $data['users']['total']); 
  _spads_sites_set_value($node, 'field_total_logins', 'int', $data['users']['login']); 
  _spads_sites_set_value($node, 'field_recent_logins', 'int', $data['users']['month']);
  _spads_sites_set_value($node, 'field_taxa', 'int', $data['taxa']);
  
  $screen_shot_normal = sprintf(SPADS_SCREENSHOT_NORMAL, $data['site_url']);
  $screen_shot_annotated = sprintf(SPADS_SCREENSHOT_ANNOTATED, $data['site_url']);

  if (_spads_url_exists('http://' . $screen_shot_normal)) {
    _spads_sites_set_value($node, 'field_screen_shot_normal', 'url', $screen_shot_normal);
    $node->field_screen_shot_normal_[$node->language] = array(0 => array(
        'url' => $screen_shot_normal,
        'title' => NULL,
        'attributes' => array(),
    ));    
  } else {
    _spads_sites_set_value($node, 'field_screen_shot_normal', 'url', array());
  }

  if (_spads_url_exists('http://' . $screen_shot_annotated)) {
    _spads_sites_set_value($node, 'field_screen_shot_annotated', 'url', $screen_shot_annotated);
  } else {
    _spads_sites_set_value($node, 'field_screen_shot_annotated', 'url', array());
  }  
}

/*
 * Purge sites that don't exist anymore.
 * 
 * Returns the number of nodes that were deleted.
 */
function _spads_sites_purge($data) {
  // Perform the query
  $query = new EntityFieldQuery();  
  $query
  ->entityCondition('entity_type', 'node')
  ->entityCondition('bundle', 'scratchpads')
  ->fieldCondition('field_website', 'url', '%', 'LIKE')
  ;
  
  $result = $query->execute();

  $purge_count = 0;
  foreach (array_keys($result['node']) as $nid) {
    $node = node_load($nid);
    $url = $node->field_website[$node->language][0]['url'];
    if (!isset($data[$url])) {
      node_delete($nid);
      $purge_count++;
    }
  }
  
  return $purge_count;
}

/*
 * Calculate statistics
 */
function _spads_sites_statistics() {
  // Perform the query
  $query = new EntityFieldQuery();
  $query
  ->entityCondition('entity_type', 'node')
  ->entityCondition('bundle', 'scratchpads')
  ->fieldCondition('field_website', 'url', '%', 'LIKE')
  ;
  
  $result = $query->execute();

  $total_sites = count($result['node']);
  $total_views = 0;
  $total_pages = 0;
  $total_users = 0;
  $total_taxa = 0;
  $total_profiles = array();
  
  foreach (array_keys($result['node']) as $nid) {
    $node = node_load($nid);

    $total_views += $node->field_views[$node->language][0]['value'];
    $total_pages += $node->field_pages[$node->language][0]['value'];
    $total_users += $node->field_total_users[$node->language][0]['value'];
    $total_taxa += $node->field_taxa[$node->language][0]['value'];
    
    $profile = $node->field_profile[$node->language][0]['value'];
    if (!isset($total_profiles[$profile])) {
      $total_profiles[$profile] = 1;
    } else {
      $total_profiles[$profile]++;
    }
  }

  variable_set('scratchpads_total_sites', $total_sites);
  variable_set('scratchpads_total_views', $total_views);
  variable_set('scratchpads_total_pages', $total_pages);
  variable_set('scratchpads_total_users', $total_users);
  variable_set('scratchpads_total_profiles', $total_profiles);
  variable_set('scratchpads_total_taxa', $total_taxa);
}

/*
 * Check if a given url exits
 */
function _spads_url_exists($url) {
  $headers = @get_headers($url);
  if ($headers[0] == 'HTTP/1.1 404 Not Found') {
    return FALSE;
  } else {
    return TRUE;
  }
}


