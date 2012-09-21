<?php 
/*
 * The drush interface
 */
include_once 'spads_sites.inc';

/*
 * Implementation of hook_drush_command
 * 
 */
function spads_sites_drush_command() {
  $items = array();
  
  $items['scratchpads-import'] = array(
    'description' => 'Import the list of scratchpad sites',
    'options' => array(
      'url' => array(
         'description' => "URI to fetch the data from. Defaults to " . SPADS_SITES_URL,
         'value' => 'required',          
      ),
      'offset' => array(
        'description' => "Where to start importing in the data. Defaults to 0.",
        'value' => 'required',
      ),
      'count' => array(
        'description' => "Number of entries to import. Defaults to the total number of entries",
        'value' => 'required',
      )
    ),
  );
  
  $items['scratchpads-list'] = array(
    'description' => 'Outputs the list of scratchpads, and when they were last imported',
    'options' => array(
      'url' => array(
         'description' => "URI to fetch the data from. Defaults to " . SPADS_SITES_URL,
         'value' => 'required',          
      ),
    ),
  );
  
  $items['scratchpads-purge'] = array(
    'description' => 'Deletes nodes for site that are not listed anymore',
    'options' => array(
      'url' => array(
        'description' => "URI to fetch the data from. Defaults to " . SPADS_SITES_URL,
        'value' => 'required',    
      ),
    ),
  );
  
  $items['scratchpads-stats'] = array(
    'description' => 'Refreshes and displays Scratchpads statistics',
  );
  
  return $items;
}

/*
 * Implementation of hook_drush_help
 */
function spads_sites_drush_help($section) {
  switch($section) {
    case 'drush:scratchpads-import':
      return dt("This command will import all the scratchpad sites information");
    case 'drush:scratchpads-list':
      return dt("This command will list all the scratchpads sites");
    case 'drush:scratchpads-purge':
      return dt("This command will delete nodes for sites that are not listed anymore");
    case 'drush:scratchpads-stats':
      return dt("This command refreshes the Scratchpads statistics and displays them");
  }
}

/*
 * scratchpads-list command
 */
function drush_spads_sites_scratchpads_list() {
  $url = drush_get_option('url', SPADS_SITES_URL);
  
  $data = _spads_sites_load_data($url);
  
  drush_print("Total number of Scratchpads that can be imported: " . count($data) . "\n");
  foreach ($data as $site => $row) {
    $node = _spads_sites_find_site($row['site_url']);
    drush_print("\n");
    drush_print("Site: " . $site);
    if (!empty($node->nid)) {
      drush_print("Last import:" . date('m.d.Y', $node->changed));
    } else {
      drush_print("This site was never imported");
    }
  }
}

/*
 * scratchpads-import command
 */
function drush_spads_sites_scratchpads_import() {
  $url = drush_get_option('url', SPADS_SITES_URL);
  $start = drush_get_option('offset', 0);
  $count = drush_get_option('count', -1);

  drush_print("Loading site list...");
  $data = _spads_sites_load_data($url);
  if ($count <= 0) {
    $count = count($data);
  }
  
  drush_print("Importing sites $start..." . ($start+$count) . " out of ".count($data));
  $slice = array_slice($data, $start, $count);
  foreach ($slice as $row) {
    drush_print("Importing " . $row['site_url'] . "...");
    $node = _spads_sites_find_site($row['site_url']);
    _spads_sites_set_node_data($node, $row);
    node_save($node);    
  }
  drush_print("All done!");  
}

/*
 * scratchpads-purge command
 */
function drush_spads_sites_scratchpads_purge() {
  $url = drush_get_option('url', SPADS_SITES_URL);
  
  drush_print("Loading site list...");
  $data = _spads_sites_load_data($url);
  
  drush_print("Purging nodes...");
  $count = _spads_sites_purge($data);
  drush_print("Done. $count nodes were deleted.");
}

/*
 * scratchpads-stats command
 */
function drush_spads_sites_scratchpads_stats() {
  _spads_sites_statistics();
  
  drush_print("Total sites: " . 
    number_format(variable_get('scratchpads_total_sites', 0), 0, '.', ' '));
  drush_print("Total views: " . 
    number_format(variable_get('scratchpads_total_views', 0), 0, '.', ' '));
  drush_print("Total pages: " . 
    number_format(variable_get('scratchpads_total_pages', 0), 0, '.', ' '));
  drush_print("Total users: " . 
    number_format(variable_get('scratchpads_total_users', 0), 0, '.', ' '));

  $profiles = variable_get('scratchpads_total_profiles', array());
  foreach ($profiles as $profile => $count) {
    drush_print("Total number of installs for $profile: $count");
  }
}
