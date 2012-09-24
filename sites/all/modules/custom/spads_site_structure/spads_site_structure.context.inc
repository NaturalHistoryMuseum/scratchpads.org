<?php
/**
 * @file
 * spads_site_structure.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function spads_site_structure_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news_case_study_item_blocks';
  $context->description = '';
  $context->tag = 'blocks';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'article' => 'article',
        'case_study' => 'case_study',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-terms_of_current_node-block' => array(
          'module' => 'views',
          'delta' => 'terms_of_current_node-block',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'apachesolr_search-mlt-001' => array(
          'module' => 'apachesolr_search',
          'delta' => 'mlt-001',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('blocks');
  $export['news_case_study_item_blocks'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news_search';
  $context->description = 'Search  blocks on news page';
  $context->tag = 'blocks';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'news' => 'news',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-3' => array(
          'module' => 'block',
          'delta' => '3',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'facetapi-wWWinJ0eOefOtAMbjo2yl86Mnf1rO12j' => array(
          'module' => 'facetapi',
          'delta' => 'wWWinJ0eOefOtAMbjo2yl86Mnf1rO12j',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'facetapi-4Zh0ggJMBgeeYbrLPJCe8EML3A6PLE0J' => array(
          'module' => 'facetapi',
          'delta' => '4Zh0ggJMBgeeYbrLPJCe8EML3A6PLE0J',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'facetapi-n18E4x0qRRaIP7nV6I0SDYiCJsq77HCB' => array(
          'module' => 'facetapi',
          'delta' => 'n18E4x0qRRaIP7nV6I0SDYiCJsq77HCB',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Search  blocks on news page');
  t('blocks');
  $export['news_search'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'register_form_trail';
  $context->description = '';
  $context->tag = 'trails';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/*/register' => 'node/*/register',
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
  $export['register_form_trail'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'search';
  $context->description = '';
  $context->tag = 'blocks';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'search/*' => 'search/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'facetapi-4Zh0ggJMBgeeYbrLPJCe8EML3A6PLE0J' => array(
          'module' => 'facetapi',
          'delta' => '4Zh0ggJMBgeeYbrLPJCe8EML3A6PLE0J',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'apachesolr_search-sort' => array(
          'module' => 'apachesolr_search',
          'delta' => 'sort',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('blocks');
  $export['search'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sites_list_blocks';
  $context->description = '';
  $context->tag = 'blocks';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'explore/sites-list' => 'explore/sites-list',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'quicktabs-sites_list' => array(
          'module' => 'quicktabs',
          'delta' => 'sites_list',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('blocks');
  $export['sites_list_blocks'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'statistics_block';
  $context->description = '';
  $context->tag = 'blocks';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'explore' => 'explore',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-site_list-block_3' => array(
          'module' => 'views',
          'delta' => 'site_list-block_3',
          'region' => 'content',
          'weight' => '9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('blocks');
  $export['statistics_block'] = $context;

  return $export;
}
