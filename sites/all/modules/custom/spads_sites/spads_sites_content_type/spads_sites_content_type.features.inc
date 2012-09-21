<?php
/**
 * @file
 * spads_sites_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function spads_sites_content_type_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function spads_sites_content_type_node_info() {
  $items = array(
    'scratchpads' => array(
      'name' => t('Scratchpads'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
