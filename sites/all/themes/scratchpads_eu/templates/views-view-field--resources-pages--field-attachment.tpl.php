<?php

/**
 * @file
 * This template is used to print a single field in a view.
 *
 * It is not actually used in default Views, as this is registered as a theme
 * function which has better performance. For single overrides, the template is
 * perfectly okay.
 *
 * Variables available:
 * - $view: The view object
 * - $field: The field handler object that can process the input
 * - $row: The raw SQL result that can be used
 * - $output: The processed output that will normally be used.
 *
 * When fetching output from the $row, this construct should be used:
 * $data = $row->{$field->field_alias}
 *
 * The above will guarantee that you'll always get the correct data,
 * regardless of any changes in the aliasing that might happen if
 * the view is modified.
 */
?>
<?php 
  if ($output) {
    $mime = $row->field_field_attachment_1[0]['raw']['filemime'];
    $mime_icon = file_icon_map((object)(array('filemime' => $mime)));
    
    echo $output;
    
    if ($mime_icon) {
      $mime_icon = $mime_icon . ".png";
      $icon = base_path() . drupal_get_path('module', 'file').'/icons/'.$mime_icon;
      echo "&nbsp<img src='$icon' />";
    }
  }
?>