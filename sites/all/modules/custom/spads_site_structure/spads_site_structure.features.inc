<?php
/**
 * @file
 * spads_site_structure.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function spads_site_structure_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function spads_site_structure_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function spads_site_structure_node_info() {
  $items = array(
    'article' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => t('Use <em>News</em> for news items'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'case_study' => array(
      'name' => t('Case Study'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'feature' => array(
      'name' => t('Feature'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'resource' => array(
      'name' => t('Resource'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
