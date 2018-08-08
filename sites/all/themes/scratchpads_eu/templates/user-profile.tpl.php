<?php 
  echo $user_profile['user_picture']['#markup'];
  if (isset($user_profile['field_bio'])) {
    echo $user_profile['field_bio'][0]['#markup'];
  }
?>