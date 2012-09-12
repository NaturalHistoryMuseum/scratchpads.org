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
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'general_page_layout',
    ),
    'theme_html' => array(
      'class' => 'context-about-us',
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
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
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
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
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
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
      'seven' => array(
        'disable' => array(
          'content' => 0,
          'help' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'sidebar_first' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
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
  $context->name = 'explore';
  $context->description = '';
  $context->tag = 'theme';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'explore' => 'explore',
        'explore/*' => 'explore/*',
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
  $context->name = 'news';
  $context->description = '';
  $context->tag = 'theme';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'news' => 'news',
        'news/*' => 'news/*',
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
  $context->name = 'support';
  $context->description = '';
  $context->tag = 'theme';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'support' => 'support',
        'support/*' => 'support/*',
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

  return $export;
}
