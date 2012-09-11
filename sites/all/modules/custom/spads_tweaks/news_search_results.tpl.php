<?php
  foreach ($results as $result) {
    echo views_embed_view('news_case_studies', 'default', $result['fields']['entity_id']);
  }
?>
