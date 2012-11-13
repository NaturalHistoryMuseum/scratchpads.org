<?php

/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
 * 
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 */

function scratchpads_eu_facetapi_link_active($variables) {
  return theme_link($variables);
}

function scratchpads_eu_menu_local_task($variables) {
  $link = $variables['element']['#link'];
  $link_text = $link['title'];

  if (!empty($variables['element']['#active'])) {
    // Add text to indicate active tab for non-visual users.
    $active = '<span class="element-invisible">' . t('(active tab)') . '</span>';

    // If the link does not contain HTML already, check_plain() it now.
    // After we set 'html'=TRUE the link will not be sanitized by l().
    if (empty($link['localized_options']['html'])) {
      $link['title'] = check_plain($link['title']);
    }
    $link['localized_options']['html'] = TRUE;
    $link_text = t('!local-task-title!active', array('!local-task-title' => $link['title'], '!active' => $active));
  }

  $class = 'localtab-' . preg_replace('/[^a-zA-Z0-9]+/', '', $variables['element']['#link']['path']);
  if (!empty($variables['element']['#active'])) {
    $class .= ' active';
  }
  return '<li class="' . $class . '">' . l($link_text, $link['href'], $link['localized_options']) . "</li>\n";
}

/**
 * Given a Views row representing an Event and containing at least the following fields:
 * 
 * field_field_enable_registrations
 * field_field_registration_opening_date
 * registration_entity_node_capacity
 * field_field_waiting_list_size
 * 
 * returns one of 'open', 'closed', 'notyet', 'full' or 'waitinglist'
 * 
 */
function _scratchpads_eu_event_status($row) {
  $open = ($row->field_field_enable_registrations[0]['raw']['value'] == 1) ? 'open' : 'closed';
  if ($open == 'open') {
    $now = date('Y-m-d H:i:s');
    if ($row->field_field_registration_opening_date[0]['raw']['value2'] < $now) {
      $open = 'closed';
    } else if ($row->field_field_registration_opening_date[0]['raw']['value'] > $now) {
      $open = 'notyet';
    } else {
      $room = $row->registration_entity_node_capacity;
      $wl = $row->field_field_waiting_list_size[0]['raw']['value'];

      list($entity_id) = entity_extract_ids($row->_field_data['nid']['entity_type'], $row->_field_data['nid']['entity']);
      $used = registration_event_count($row->_field_data['nid']['entity_type'], $entity_id);

      if ($room - $used <= 0) {
        $open = 'full';
      } else if ($room - $used <= $wl) {
        $open = 'waitinglist';
      }
    }
  }

  return $open;
}
