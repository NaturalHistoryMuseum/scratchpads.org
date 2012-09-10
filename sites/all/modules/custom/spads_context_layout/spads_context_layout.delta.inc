<?php
/**
 * @file
 * spads_context_layout.delta.inc
 */

/**
 * Implements hook_delta_default_templates().
 */
function spads_context_layout_delta_default_templates() {
  $export = array();

  $delta = new stdClass();
  $delta->disabled = FALSE; /* Edit this to true to make a default delta disabled initially */
  $delta->api_version = 3;
  $delta->machine_name = 'basic_layout';
  $delta->name = 'Combined layout';
  $delta->description = '';
  $delta->theme = 'scratchpads_eu';
  $delta->mode = 'preserve';
  $delta->parent = '';
  $delta->settings = array(
    'theme_scratchpads_eu_settings' => array(
      'toggle_logo' => 0,
      'toggle_name' => 0,
      'toggle_slogan' => 0,
      'toggle_node_user_picture' => 0,
      'toggle_main_menu' => 0,
      'toggle_secondary_menu' => 0,
      'alpha_toggle_breadcrumb' => 0,
      'alpha_region_logo_force' => 1,
      'alpha_region_logo_zone' => 'header',
      'alpha_region_logo_prefix' => '0',
      'alpha_region_logo_columns' => '12',
      'alpha_region_logo_suffix' => '0',
      'alpha_region_logo_weight' => '-10',
      'alpha_region_logo_position' => '0',
      'alpha_region_logo_css' => '',
      'alpha_region_logo_equal_height_element' => 0,
      'alpha_region_logo_equal_height_container' => 0,
      'alpha_region_search_force' => 1,
      'alpha_region_search_zone' => 'header',
      'alpha_region_search_prefix' => '0',
      'alpha_region_search_columns' => '12',
      'alpha_region_search_suffix' => '0',
      'alpha_region_search_weight' => '0',
      'alpha_region_search_position' => '0',
      'alpha_region_search_css' => '',
      'alpha_region_search_equal_height_element' => 0,
      'alpha_region_search_equal_height_container' => 0,
      'alpha_region_menu_zone' => 'header',
      'alpha_region_menu_columns' => '24',
      'alpha_zone_home_content_wrapper' => 0,
      'alpha_zone_home_content_force' => 0,
      'alpha_zone_home_content_order' => 0,
      'alpha_zone_home_content_section' => 'content',
      'alpha_zone_home_content_weight' => '0',
      'alpha_zone_home_content_columns' => '24',
      'alpha_zone_home_content_css' => '',
      'alpha_zone_home_content_wrapper_css' => '',
      'alpha_zone_home_content_equal_height_container' => 0,
      'alpha_region_home_accordeon_force' => 0,
      'alpha_region_home_accordeon_zone' => 'home_content',
      'alpha_region_home_accordeon_prefix' => '0',
      'alpha_region_home_accordeon_columns' => '24',
      'alpha_region_home_accordeon_suffix' => '0',
      'alpha_region_home_accordeon_weight' => '0',
      'alpha_region_home_accordeon_position' => '0',
      'alpha_region_home_accordeon_css' => '',
      'alpha_region_home_accordeon_equal_height_element' => 0,
      'alpha_region_home_accordeon_equal_height_container' => 0,
      'alpha_region_home_right_force' => 0,
      'alpha_region_home_right_zone' => 'home_content',
      'alpha_region_home_right_prefix' => '0',
      'alpha_region_home_right_columns' => '16',
      'alpha_region_home_right_suffix' => '0',
      'alpha_region_home_right_weight' => '2',
      'alpha_region_home_right_position' => '0',
      'alpha_region_home_right_css' => '',
      'alpha_region_home_right_equal_height_element' => 0,
      'alpha_region_home_right_equal_height_container' => 0,
      'alpha_region_home_left_force' => 0,
      'alpha_region_home_left_zone' => 'home_content',
      'alpha_region_home_left_prefix' => '0',
      'alpha_region_home_left_columns' => '8',
      'alpha_region_home_left_suffix' => '0',
      'alpha_region_home_left_weight' => '2',
      'alpha_region_home_left_position' => '0',
      'alpha_region_home_left_css' => '',
      'alpha_region_home_left_equal_height_element' => 0,
      'alpha_region_home_left_equal_height_container' => 0,
      'alpha_region_sidebar_first_columns' => '6',
      'alpha_region_content_columns' => '18',
      'alpha_region_logo_list_force' => 0,
      'alpha_region_logo_list_zone' => 'footer',
      'alpha_region_logo_list_prefix' => '0',
      'alpha_region_logo_list_columns' => '24',
      'alpha_region_logo_list_suffix' => '0',
      'alpha_region_logo_list_weight' => '1',
      'alpha_region_logo_list_position' => '0',
      'alpha_region_logo_list_css' => '',
      'alpha_region_logo_list_equal_height_element' => 0,
      'alpha_region_logo_list_equal_height_container' => 0,
      'alpha_region_site_map_force' => 0,
      'alpha_region_site_map_zone' => 'footer',
      'alpha_region_site_map_prefix' => '0',
      'alpha_region_site_map_columns' => '24',
      'alpha_region_site_map_suffix' => '0',
      'alpha_region_site_map_weight' => '2',
      'alpha_region_site_map_position' => '0',
      'alpha_region_site_map_css' => '',
      'alpha_region_site_map_equal_height_element' => 0,
      'alpha_region_site_map_equal_height_container' => 0,
    ),
    'color_scratchpads_eu_files' => NULL,
    'color_scratchpads_eu_logo' => NULL,
    'color_scratchpads_eu_palette' => NULL,
    'color_scratchpads_eu_stylesheets' => NULL,
    'color_scratchpads_eu_screenshot' => NULL,
  );
  $export['basic_layout'] = $delta;

  $delta = new stdClass();
  $delta->disabled = FALSE; /* Edit this to true to make a default delta disabled initially */
  $delta->api_version = 3;
  $delta->machine_name = 'general_page_layout';
  $delta->name = 'General page layout';
  $delta->description = '';
  $delta->theme = 'scratchpads_eu';
  $delta->mode = 'preserve';
  $delta->parent = 'basic_layout';
  $delta->settings = array(
    'theme_scratchpads_eu_settings' => array(
      'alpha_region_menu_equal_height_element' => 0,
      'alpha_zone_home_content_section' => NULL,
    ),
    'color_scratchpads_eu_files' => NULL,
    'color_scratchpads_eu_logo' => NULL,
    'color_scratchpads_eu_palette' => NULL,
    'color_scratchpads_eu_stylesheets' => NULL,
    'color_scratchpads_eu_screenshot' => NULL,
  );
  $export['general_page_layout'] = $delta;

  $delta = new stdClass();
  $delta->disabled = FALSE; /* Edit this to true to make a default delta disabled initially */
  $delta->api_version = 3;
  $delta->machine_name = 'home_layout';
  $delta->name = 'Home layout';
  $delta->description = '';
  $delta->theme = 'scratchpads_eu';
  $delta->mode = 'preserve';
  $delta->parent = 'basic_layout';
  $delta->settings = array(
    'theme_scratchpads_eu_settings' => array(
      'alpha_region_menu_equal_height_element' => 0,
      'alpha_zone_content_section' => NULL,
    ),
    'color_scratchpads_eu_files' => NULL,
    'color_scratchpads_eu_logo' => NULL,
    'color_scratchpads_eu_palette' => NULL,
    'color_scratchpads_eu_stylesheets' => NULL,
    'color_scratchpads_eu_screenshot' => NULL,
  );
  $export['home_layout'] = $delta;

  return $export;
}
