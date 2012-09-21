<?php
/**
 * @file
 * spads_site_structure.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function spads_site_structure_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'home_news_feeds';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Home News & Tweets';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'news_case_studies',
      'display' => 'block_1',
      'args' => '',
      'title' => 'News',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'bid' => 'twitter_block_delta_default',
      'hide_title' => 1,
      'title' => 'Twitter',
      'weight' => '-99',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Home News & Tweets');
  t('News');
  t('Twitter');

  $export['home_news_feeds'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'sites_list';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Sites list';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'site_list',
      'display' => 'block_2',
      'args' => '',
      'title' => 'Sites list',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'site_list',
      'display' => 'block_1',
      'args' => '',
      'title' => 'Thumbnails',
      'weight' => '-99',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Sites list');
  t('Thumbnails');

  $export['sites_list'] = $quicktabs;

  return $export;
}
