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
  $context->name = 'news_search';
  $context->description = 'Search  blocks on news page';
  $context->tag = 'search';
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
        'facetapi-4Zh0ggJMBgeeYbrLPJCe8EML3A6PLE0J' => array(
          'module' => 'facetapi',
          'delta' => '4Zh0ggJMBgeeYbrLPJCe8EML3A6PLE0J',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Search  blocks on news page');
  t('search');
  $export['news_search'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'search';
  $context->description = '';
  $context->tag = 'search';
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
  t('search');
  $export['search'] = $context;

  return $export;
}
