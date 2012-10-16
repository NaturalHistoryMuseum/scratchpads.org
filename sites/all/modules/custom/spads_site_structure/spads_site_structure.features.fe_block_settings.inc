<?php
/**
 * @file
 * spads_site_structure.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function spads_site_structure_default_fe_block_settings() {
  $export = array();

  $export['version'] = '1.0';

  // Theme independent visibility settings.
  $export['visibility'] = array(
    'block-sponsor_logos_block' => array(
      'machine_name' => 'sponsor_logos_block',
      'module' => 'block',
    ),
  );

  // bartik
  $theme = array();

  $theme['block-sponsor_logos_block'] = array(
    'module' => 'block',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'machine_name' => 'sponsor_logos_block',
  );

  $export['theme']['bartik'] = $theme;

  // omega
  $theme = array();

  $theme['block-sponsor_logos_block'] = array(
    'module' => 'block',
    'theme' => 'omega',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'machine_name' => 'sponsor_logos_block',
  );

  $export['theme']['omega'] = $theme;

  // scratchpads_eu
  $theme = array();

  $theme['block-sponsor_logos_block'] = array(
    'module' => 'block',
    'theme' => 'scratchpads_eu',
    'status' => '1',
    'weight' => '0',
    'region' => 'logo_list',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'machine_name' => 'sponsor_logos_block',
  );

  $export['theme']['scratchpads_eu'] = $theme;

  // seven
  $theme = array();

  $theme['block-sponsor_logos_block'] = array(
    'module' => 'block',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'machine_name' => 'sponsor_logos_block',
  );

  $export['theme']['seven'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export['theme'][$theme_key]);
    }
  }
  return $export;
}
