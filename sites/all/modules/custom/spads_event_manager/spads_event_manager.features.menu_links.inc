<?php
/**
 * @file
 * spads_event_manager.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function spads_event_manager_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:support/training/events
  $menu_links['main-menu:support/training/events'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'support/training/events',
    'router_path' => 'support/training/events',
    'link_title' => ' Courses',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'node/44',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t(' Courses');


  return $menu_links;
}
