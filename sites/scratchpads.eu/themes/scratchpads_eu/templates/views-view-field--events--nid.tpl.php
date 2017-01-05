<?php 
  require_once drupal_get_path('theme', variable_get('theme_default', NULL)) . '/template.php';
  $open = _scratchpads_eu_event_status($row);
  if ($open == 'open') {
    echo $output;
  } else if ($open == 'waitinglist') {
    echo preg_replace('/<\/a>/', t(' (Waiting list)') . '</a>', $output);
  }
