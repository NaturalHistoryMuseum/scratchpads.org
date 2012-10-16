<?php
/**
 * @file
 * spads_site_structure.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function spads_site_structure_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Sponsor logos';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'sponsor_logos_block';
  $fe_block_boxes->body = '<?php
  $logos = array(
   \'ner\' => \'http://www.nerc.ac.uk/\',
   \'emonocot\' => \'http://e-monocot.org/\',
   \'vibrant\' => \'http://vrant.eu\',
   \'einfra\' => \'http://cordis.europa.eu/fp7/ict/e-infrastructure/\',
   \'nhm\' => \'http://www.nhm.ac.uk\', 
  );
  $path = base_path() . \'/\' . drupal_get_path(\'theme\', variable_get(\'theme_default\', NULL)) . \'/images\';
  foreach ($logos as $logo => $url) {
    echo "<a href=\'$url\'><img id=\'$logo\' src=\'$path/sponsor-logo-$logo.png\' /></a>";
  }
?>';

  $export['sponsor_logos_block'] = $fe_block_boxes;

  return $export;
}
