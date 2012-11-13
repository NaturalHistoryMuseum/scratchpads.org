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
    'menu_block-1' => array(
      'delta' => '1',
      'module' => 'menu_block',
    ),
    'menu_block-2' => array(
      'delta' => '2',
      'module' => 'menu_block',
    ),
    'menu_block-3' => array(
      'delta' => '3',
      'module' => 'menu_block',
    ),
    'quicktabs-home_news_feeds' => array(
      'delta' => 'home_news_feeds',
      'module' => 'quicktabs',
    ),
    'quicktabs-sites_list' => array(
      'delta' => 'sites_list',
      'module' => 'quicktabs',
    ),
    'spads_tweaks-0' => array(
      'module' => 'spads_tweaks',
    ),
    'views--exp-resources_pages-page_3' => array(
      'delta' => '-exp-resources_pages-page_3',
      'module' => 'views',
    ),
    'views-case_studies_slideshow-block_1' => array(
      'delta' => 'case_studies_slideshow-block_1',
      'module' => 'views',
    ),
    'views-news_case_studies-block_1' => array(
      'delta' => 'news_case_studies-block_1',
      'module' => 'views',
    ),
    'views-nodequeue_1-block' => array(
      'delta' => 'nodequeue_1-block',
      'module' => 'views',
    ),
    'views-site_list-block_1' => array(
      'delta' => 'site_list-block_1',
      'module' => 'views',
    ),
    'views-site_list-block_2' => array(
      'delta' => 'site_list-block_2',
      'module' => 'views',
    ),
    'views-site_list-block_3' => array(
      'delta' => 'site_list-block_3',
      'module' => 'views',
    ),
  );

  // bartik
  $theme = array();

  $theme['menu_block-1'] = array(
    'module' => 'menu_block',
    'delta' => '1',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'news
news/*
casestudy/*',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu_block-2'] = array(
    'module' => 'menu_block',
    'delta' => '2',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu_block-3'] = array(
    'module' => 'menu_block',
    'delta' => '3',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['quicktabs-home_news_feeds'] = array(
    'module' => 'quicktabs',
    'delta' => 'home_news_feeds',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Feeds',
    'cache' => '1',
  );

  $theme['quicktabs-sites_list'] = array(
    'module' => 'quicktabs',
    'delta' => 'sites_list',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '1',
  );

  $theme['spads_tweaks-0'] = array(
    'module' => 'spads_tweaks',
    'delta' => '0',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views--exp-resources_pages-page_3'] = array(
    'module' => 'views',
    'delta' => '-exp-resources_pages-page_3',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'about/resources',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-case_studies_slideshow-block_1'] = array(
    'module' => 'views',
    'delta' => 'case_studies_slideshow-block_1',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-news_case_studies-block_1'] = array(
    'module' => 'views',
    'delta' => 'news_case_studies-block_1',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-nodequeue_1-block'] = array(
    'module' => 'views',
    'delta' => 'nodequeue_1-block',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-site_list-block_1'] = array(
    'module' => 'views',
    'delta' => 'site_list-block_1',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-site_list-block_2'] = array(
    'module' => 'views',
    'delta' => 'site_list-block_2',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-site_list-block_3'] = array(
    'module' => 'views',
    'delta' => 'site_list-block_3',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $export['theme']['bartik'] = $theme;

  // omega
  $theme = array();

  $theme['menu_block-1'] = array(
    'module' => 'menu_block',
    'delta' => '1',
    'theme' => 'omega',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'news
news/*
casestudy/*',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu_block-2'] = array(
    'module' => 'menu_block',
    'delta' => '2',
    'theme' => 'omega',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu_block-3'] = array(
    'module' => 'menu_block',
    'delta' => '3',
    'theme' => 'omega',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['quicktabs-home_news_feeds'] = array(
    'module' => 'quicktabs',
    'delta' => 'home_news_feeds',
    'theme' => 'omega',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Feeds',
    'cache' => '1',
  );

  $theme['quicktabs-sites_list'] = array(
    'module' => 'quicktabs',
    'delta' => 'sites_list',
    'theme' => 'omega',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '1',
  );

  $theme['spads_tweaks-0'] = array(
    'module' => 'spads_tweaks',
    'delta' => '0',
    'theme' => 'omega',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views--exp-resources_pages-page_3'] = array(
    'module' => 'views',
    'delta' => '-exp-resources_pages-page_3',
    'theme' => 'omega',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'about/resources',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-case_studies_slideshow-block_1'] = array(
    'module' => 'views',
    'delta' => 'case_studies_slideshow-block_1',
    'theme' => 'omega',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-news_case_studies-block_1'] = array(
    'module' => 'views',
    'delta' => 'news_case_studies-block_1',
    'theme' => 'omega',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-nodequeue_1-block'] = array(
    'module' => 'views',
    'delta' => 'nodequeue_1-block',
    'theme' => 'omega',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-site_list-block_1'] = array(
    'module' => 'views',
    'delta' => 'site_list-block_1',
    'theme' => 'omega',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-site_list-block_2'] = array(
    'module' => 'views',
    'delta' => 'site_list-block_2',
    'theme' => 'omega',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-site_list-block_3'] = array(
    'module' => 'views',
    'delta' => 'site_list-block_3',
    'theme' => 'omega',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $export['theme']['omega'] = $theme;

  // scratchpads_eu
  $theme = array();

  $theme['menu_block-1'] = array(
    'module' => 'menu_block',
    'delta' => '1',
    'theme' => 'scratchpads_eu',
    'status' => '1',
    'weight' => '0',
    'region' => 'sidebar_first',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'news
news/*
casestudy/*',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu_block-2'] = array(
    'module' => 'menu_block',
    'delta' => '2',
    'theme' => 'scratchpads_eu',
    'status' => '1',
    'weight' => '0',
    'region' => 'menu',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu_block-3'] = array(
    'module' => 'menu_block',
    'delta' => '3',
    'theme' => 'scratchpads_eu',
    'status' => '1',
    'weight' => '-29',
    'region' => 'site_map',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['quicktabs-home_news_feeds'] = array(
    'module' => 'quicktabs',
    'delta' => 'home_news_feeds',
    'theme' => 'scratchpads_eu',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Feeds',
    'cache' => '1',
  );

  $theme['quicktabs-sites_list'] = array(
    'module' => 'quicktabs',
    'delta' => 'sites_list',
    'theme' => 'scratchpads_eu',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '1',
  );

  $theme['spads_tweaks-0'] = array(
    'module' => 'spads_tweaks',
    'delta' => '0',
    'theme' => 'scratchpads_eu',
    'status' => '1',
    'weight' => '0',
    'region' => 'search',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views--exp-resources_pages-page_3'] = array(
    'module' => 'views',
    'delta' => '-exp-resources_pages-page_3',
    'theme' => 'scratchpads_eu',
    'status' => '1',
    'weight' => '0',
    'region' => 'sidebar_first',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'about/resources',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-case_studies_slideshow-block_1'] = array(
    'module' => 'views',
    'delta' => 'case_studies_slideshow-block_1',
    'theme' => 'scratchpads_eu',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-news_case_studies-block_1'] = array(
    'module' => 'views',
    'delta' => 'news_case_studies-block_1',
    'theme' => 'scratchpads_eu',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-nodequeue_1-block'] = array(
    'module' => 'views',
    'delta' => 'nodequeue_1-block',
    'theme' => 'scratchpads_eu',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-site_list-block_1'] = array(
    'module' => 'views',
    'delta' => 'site_list-block_1',
    'theme' => 'scratchpads_eu',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-site_list-block_2'] = array(
    'module' => 'views',
    'delta' => 'site_list-block_2',
    'theme' => 'scratchpads_eu',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-site_list-block_3'] = array(
    'module' => 'views',
    'delta' => 'site_list-block_3',
    'theme' => 'scratchpads_eu',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $export['theme']['scratchpads_eu'] = $theme;

  // seven
  $theme = array();

  $theme['menu_block-1'] = array(
    'module' => 'menu_block',
    'delta' => '1',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'news
news/*
casestudy/*',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu_block-2'] = array(
    'module' => 'menu_block',
    'delta' => '2',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu_block-3'] = array(
    'module' => 'menu_block',
    'delta' => '3',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['quicktabs-home_news_feeds'] = array(
    'module' => 'quicktabs',
    'delta' => 'home_news_feeds',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Feeds',
    'cache' => '1',
  );

  $theme['quicktabs-sites_list'] = array(
    'module' => 'quicktabs',
    'delta' => 'sites_list',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '1',
  );

  $theme['spads_tweaks-0'] = array(
    'module' => 'spads_tweaks',
    'delta' => '0',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views--exp-resources_pages-page_3'] = array(
    'module' => 'views',
    'delta' => '-exp-resources_pages-page_3',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'about/resources',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-case_studies_slideshow-block_1'] = array(
    'module' => 'views',
    'delta' => 'case_studies_slideshow-block_1',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-news_case_studies-block_1'] = array(
    'module' => 'views',
    'delta' => 'news_case_studies-block_1',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-nodequeue_1-block'] = array(
    'module' => 'views',
    'delta' => 'nodequeue_1-block',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-site_list-block_1'] = array(
    'module' => 'views',
    'delta' => 'site_list-block_1',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-site_list-block_2'] = array(
    'module' => 'views',
    'delta' => 'site_list-block_2',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-site_list-block_3'] = array(
    'module' => 'views',
    'delta' => 'site_list-block_3',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
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
