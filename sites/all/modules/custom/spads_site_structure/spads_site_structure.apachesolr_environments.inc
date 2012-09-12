<?php
/**
 * @file
 * spads_site_structure.apachesolr_environments.inc
 */

/**
 * Implements hook_apachesolr_environments().
 */
function spads_site_structure_apachesolr_environments() {
  $export = array();

  $environment = new stdClass();
  $environment->api_version = 1;
  $environment->env_id = 'multi_site';
  $environment->name = 'Multi site';
  $environment->url = 'http://localhost:8080/solr';
  $environment->service_class = '';
  $environment->conf = array(
    'apachesolr_read_only' => '1',
  );
  $environment->index_bundles = array();
  $export['multi_site'] = $environment;

  $environment = new stdClass();
  $environment->api_version = 1;
  $environment->env_id = 'solr';
  $environment->name = 'localhost server';
  $environment->url = 'http://localhost:8080/solr';
  $environment->service_class = '';
  $environment->conf = array(
    'apachesolr_read_only' => '0',
    'apachesolr_search_facet_pages' => '',
    'apachesolr_search_show_facets' => 0,
  );
  $environment->index_bundles = array(
    'node' => array(
      0 => 'article',
      1 => 'case_study',
      2 => 'event',
      3 => 'page',
      4 => 'resource',
    ),
  );
  $export['solr'] = $environment;

  return $export;
}
