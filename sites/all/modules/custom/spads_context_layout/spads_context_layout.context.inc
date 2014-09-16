<?php
/**
 * @file
 * spads_context_layout.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function spads_context_layout_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'about_us';
  $context->description = '';
  $context->tag = 'theme';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'about' => 'about',
        'about/*' => 'about/*',
        'about/*/*' => 'about/*/*',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'general_page_layout',
    ),
    'theme_html' => array(
      'class' => 'context-about',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('theme');
  $export['about_us'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ambassador_material_theme';
  $context->description = '';
  $context->tag = 'theme';
  $context->conditions = array(
    'node_taxonomy' => array(
      'values' => array(
        13 => 13,
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'path' => array(
      'values' => array(
        'resource/*/*' => 'resource/*/*',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'general_page_layout',
    ),
    'theme_html' => array(
      'class' => 'context-support',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('theme');
  $export['ambassador_material_theme'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ambassador_material_trail';
  $context->description = '';
  $context->tag = 'trails';
  $context->conditions = array(
    'node_taxonomy' => array(
      'values' => array(
        13 => 13,
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'path' => array(
      'values' => array(
        'resource/*' => 'resource/*',
        'resource/*/*' => 'resource/*/*',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => 'support/ambassadors/material',
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('trails');
  $export['ambassador_material_trail'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ambassador_theme';
  $context->description = '';
  $context->tag = 'theme';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'ambassador/*' => 'ambassador/*',
      ),
    ),
  );
  $context->reactions = array(
    'debug' => array(
      'debug' => 1,
    ),
    'delta' => array(
      'delta_template' => 'general_page_layout',
    ),
    'theme_html' => array(
      'class' => 'context-support',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('theme');
  $export['ambassador_theme'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ambassador_trail';
  $context->description = '';
  $context->tag = 'trails';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'ambassador/*' => 'ambassador/*',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => 'support/ambassadors/current',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('trails');
  $export['ambassador_trail'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'case_study_trail';
  $context->description = '';
  $context->tag = 'trails';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'casestudy/*/*' => 'casestudy/*/*',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => 'news',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('trails');
  $export['case_study_trail'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'defaults';
  $context->description = '';
  $context->tag = 'theme';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        '~explore' => '~explore',
        '~about_us' => '~about_us',
        '~home' => '~home',
        '~news' => '~news',
        '~support' => '~support',
        '~develop' => '~develop',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'basic_layout',
    ),
    'region' => array(
      'bartik' => array(
        'disable' => array(
          'header' => 0,
          'help' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'highlighted' => 0,
          'featured' => 0,
          'content' => 0,
          'sidebar_first' => 0,
          'sidebar_second' => 0,
          'triptych_first' => 0,
          'triptych_middle' => 0,
          'triptych_last' => 0,
          'footer_firstcolumn' => 0,
          'footer_secondcolumn' => 0,
          'footer_thirdcolumn' => 0,
          'footer_fourthcolumn' => 0,
          'footer' => 0,
        ),
      ),
      'omega' => array(
        'disable' => array(
          'page_top' => 0,
          'page_bottom' => 0,
          'content' => 0,
          'user_first' => 0,
          'user_second' => 0,
          'branding' => 0,
          'menu' => 0,
          'sidebar_first' => 0,
          'sidebar_second' => 0,
          'header_first' => 0,
          'header_second' => 0,
          'preface_first' => 0,
          'preface_second' => 0,
          'preface_third' => 0,
          'postscript_first' => 0,
          'postscript_second' => 0,
          'postscript_third' => 0,
          'postscript_fourth' => 0,
          'footer_first' => 0,
          'footer_second' => 0,
        ),
      ),
      'scratchpads_eu' => array(
        'disable' => array(
          'home_accordeon' => 'home_accordeon',
          'home_left' => 'home_left',
          'home_right' => 'home_right',
          'logo' => 0,
          'search' => 0,
          'menu' => 0,
          'logo_list' => 0,
          'site_map' => 0,
          'content' => 0,
          'sidebar_first' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
        ),
      ),
      'seven' => array(
        'disable' => array(
          'content' => 0,
          'help' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'sidebar_first' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('theme');
  $export['defaults'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'develop';
  $context->description = '';
  $context->tag = 'theme';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'develop' => 'develop',
        'develop/*' => 'develop/*',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'general_page_layout',
    ),
    'theme_html' => array(
      'class' => 'context-develop',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('theme');
  $export['develop'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'event_trail';
  $context->description = '';
  $context->tag = 'trails';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'event/*' => 'event/*',
        'event/*/*' => 'event/*/*',
        'event/*/*/*' => 'event/*/*/*',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => 'support/training/events',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('trails');
  $export['event_trail'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'explore';
  $context->description = '';
  $context->tag = 'theme';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'explore' => 'explore',
        'explore/*' => 'explore/*',
        'stats' => 'stats',
        'stats/*' => 'stats/*'
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'general_page_layout',
    ),
    'theme_html' => array(
      'class' => 'context-explore',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('theme');
  $export['explore'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'home';
  $context->description = '';
  $context->tag = 'theme';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'home_layout',
    ),
    'theme_html' => array(
      'class' => 'context-home',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('theme');
  $export['home'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'home_blocks';
  $context->description = '';
  $context->tag = 'blocks';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-nodequeue_1-block' => array(
          'module' => 'views',
          'delta' => 'nodequeue_1-block',
          'region' => 'home_accordeon',
          'weight' => '-10',
        ),
        'menu-menu-join-the-community' => array(
          'module' => 'menu',
          'delta' => 'menu-join-the-community',
          'region' => 'home_left',
          'weight' => '-26',
        ),
        'quicktabs-home_news_feeds' => array(
          'module' => 'quicktabs',
          'delta' => 'home_news_feeds',
          'region' => 'home_left',
          'weight' => '-25',
        ),
        'views-case_studies_slideshow-block_1' => array(
          'module' => 'views',
          'delta' => 'case_studies_slideshow-block_1',
          'region' => 'home_right',
          'weight' => '-10',
        ),
        'block-5' => array(
          'module' => 'block',
          'delta' => '5',
          'region' => 'home_right',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('blocks');
  $export['home_blocks'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news';
  $context->description = '';
  $context->tag = 'theme';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'news' => 'news',
        'news/*' => 'news/*',
        'casestudy/*/*' => 'casestudy/*/*',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'general_page_layout',
    ),
    'theme_html' => array(
      'class' => 'context-news',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('theme');
  $export['news'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news_item_trail';
  $context->description = '';
  $context->tag = 'trails';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'news/*' => 'news/*',
        'news/*/*' => 'news/*/*',
        'news/*/*/*' => 'news/*/*/*',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => 'news',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('trails');
  $export['news_item_trail'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'register_form_theme';
  $context->description = '';
  $context->tag = 'theme';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/*/register' => 'node/*/register',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'general_page_layout',
    ),
    'theme_html' => array(
      'class' => 'context-support',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('theme');
  $export['register_form_theme'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'resources_theme';
  $context->description = '';
  $context->tag = 'theme';
  $context->conditions = array(
    'node_taxonomy' => array(
      'values' => array(
        7 => 7,
        8 => 8,
        9 => 9,
        10 => 10,
        11 => 11,
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'path' => array(
      'values' => array(
        'resource/*/*' => 'resource/*/*',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'general_page_layout',
    ),
    'theme_html' => array(
      'class' => 'context-about',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('theme');
  $export['resources_theme'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'resources_trail';
  $context->description = '';
  $context->tag = 'trails';
  $context->conditions = array(
    'node_taxonomy' => array(
      'values' => array(
        7 => 7,
        8 => 8,
        9 => 9,
        10 => 10,
        11 => 11,
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'path' => array(
      'values' => array(
        'resource/*' => 'resource/*',
        'resource/*/*' => 'resource/*/*',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => 'about/resources',
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('trails');
  $export['resources_trail'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'support';
  $context->description = '';
  $context->tag = 'theme';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'support' => 'support',
        'support/*' => 'support/*',
        'event/*' => 'event/*',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'general_page_layout',
    ),
    'theme_html' => array(
      'class' => 'context-support',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('theme');
  $export['support'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'team_theme';
  $context->description = '';
  $context->tag = 'theme';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'team/*' => 'team/*',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'general_page_layout',
    ),
    'theme_html' => array(
      'class' => 'context-about',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('theme');
  $export['team_theme'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'team_trail';
  $context->description = '';
  $context->tag = 'trails';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'team/*' => 'team/*',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => 'about/team',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('trails');
  $export['team_trail'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'training_material_theme';
  $context->description = '';
  $context->tag = 'theme';
  $context->conditions = array(
    'node_taxonomy' => array(
      'values' => array(
        12 => 12,
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'path' => array(
      'values' => array(
        'resource/*/*' => 'resource/*/*',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'general_page_layout',
    ),
    'theme_html' => array(
      'class' => 'context-support',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('theme');
  $export['training_material_theme'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'training_material_trail';
  $context->description = '';
  $context->tag = 'trails';
  $context->conditions = array(
    'node_taxonomy' => array(
      'values' => array(
        12 => 12,
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'path' => array(
      'values' => array(
        'resource/*' => 'resource/*',
        'resource/*/*' => 'resource/*/*',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => 'support/training/material',
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('trails');
  $export['training_material_trail'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'why_scratchpads';
  $context->description = '';
  $context->tag = 'theme';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'about/why' => 'about/why',
        'about/why/*' => 'about/why/*',
      ),
    ),
  );
  $context->reactions = array(
    'theme_html' => array(
      'class' => 'context-about-why',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('theme');
  $export['why_scratchpads'] = $context;

  return $export;
}
