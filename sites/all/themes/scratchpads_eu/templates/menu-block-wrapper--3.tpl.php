<?php
/**
 * @file
 * Default theme implementation to wrap menu blocks.
 *
 * Available variables:
 * - $content: The renderable array containing the menu.
 * - $classes: A string containing the CSS classes for the DIV tag. Includes:
 *   menu-block-DELTA, menu-name-NAME, parent-mlid-MLID, and menu-level-LEVEL.
 * - $classes_array: An array containing each of the CSS classes.
 *
 * The following variables are provided for contextual information.
 * - $delta: (string) The menu_block's block delta.
 * - $config: An array of the block's configuration settings. Includes
 *   menu_name, parent_mlid, title_link, admin_title, level, follow, depth,
 *   expanded, and sort.
 *
 * @see template_preprocess_menu_block_wrapper()
 */

?>
<div class="<?php print $classes; ?>">
  <?php //print render($content); ?>
<ul class='menu'>
    <li class='site-map-col site-map-col1'><ul>
      <?php print render($content[487]);?>
      <?php print render($content[399]);?>
    </ul></li>
    <li class='site-map-col site-map-col2'><ul>
      <?php print render($content[400]);?>
      <?php print render($content[406]);?>
    </ul></li>
    <li class='site-map-col site-map-col3'><ul>
      <?php print render($content[624]);?>
    </ul></li>
    <li class='site-map-col site-map-col4'><ul>  
      <?php print render($content[407]);?>
    </li>
  </ul>
</div>
