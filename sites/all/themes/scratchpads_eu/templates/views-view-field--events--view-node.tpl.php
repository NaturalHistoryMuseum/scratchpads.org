<?php
  $open = _scratchpads_eu_event_status($row);
  
  switch ($open) {
    case 'open':
    case 'notyet':
    case 'waitinglist':
      echo $output;
      break;
    case 'full':
      echo 'Full (' . $output . ')';
      break;
    case 'closed':
      echo 'Closed (' . $output . ')';
      break;
  }
