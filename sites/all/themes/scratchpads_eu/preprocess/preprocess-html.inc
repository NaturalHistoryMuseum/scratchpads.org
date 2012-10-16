<?php
drupal_add_css(path_to_theme() . '/css/ie/lte-8.css', array(
  'group' => CSS_THEME,
  'browsers' => array(
    'IE' => 'lte IE 8',
    '!IE' => FALSE
  ),
  'preprocess' => FALSE
));