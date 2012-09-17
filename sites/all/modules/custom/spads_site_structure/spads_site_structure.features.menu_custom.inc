<?php
/**
 * @file
 * spads_site_structure.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function spads_site_structure_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-join-the-community.
  $menus['menu-join-the-community'] = array(
    'menu_name' => 'menu-join-the-community',
    'title' => 'Join the community',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Join the community');
  t('Main menu');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');


  return $menus;
}
