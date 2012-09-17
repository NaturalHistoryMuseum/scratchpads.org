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
      'alpha_libraries' => array(
        'omega_formalize' => 'omega_formalize',
        'omega_mediaqueries' => 'omega_mediaqueries',
        'omega_equalheights' => 'omega_equalheights',
      ),
      'alpha_exclude' => array(
        'modules/comment/comment.css' => 0,
        'sites/all/modules/contrib/date/date_api/date.css' => 0,
        'sites/all/modules/contrib/date/date_popup/themes/datepicker.1.7.css' => 0,
        'modules/field/theme/field.css' => 0,
        'modules/node/node.css' => 0,
        'modules/search/search.css' => 0,
        'modules/user/user.css' => 0,
        'sites/all/modules/contrib/views/css/views.css' => 0,
        'misc/vertical-tabs.css' => 0,
        'modules/aggregator/aggregator.css' => 0,
        'modules/block/block.css' => 0,
        'modules/dblog/dblog.css' => 0,
        'modules/file/file.css' => 0,
        'modules/filter/filter.css' => 0,
        'modules/help/help.css' => 0,
        'modules/menu/menu.css' => 0,
        'modules/openid/openid.css' => 0,
        'modules/profile/profile.css' => 0,
        'modules/statistics/statistics.css' => 0,
        'modules/syslog/syslog.css' => 0,
        'modules/system/admin.css' => 0,
        'modules/system/maintenance.css' => 0,
        'modules/system/system.css' => 0,
        'modules/system/system.admin.css' => 0,
        'modules/system/system.base.css' => 0,
        'modules/system/system.maintenance.css' => 0,
        'modules/system/system.menus.css' => 0,
        'modules/system/system.messages.css' => 0,
        'modules/system/system.theme.css' => 0,
        'modules/taxonomy/taxonomy.css' => 0,
        'modules/tracker/tracker.css' => 0,
        'modules/update/update.css' => 0,
      ),
      'alpha_debug_grid_roles' => array(
        1 => '1',
        2 => '2',
        3 => '3',
        4 => 0,
        5 => 0,
      ),
      'alpha_toggle_breadcrumb' => 0,
      'alpha_region_logo_zone' => 'header',
      'alpha_region_logo_weight' => '-10',
      'alpha_region_logo_equal_height_element' => 0,
      'alpha_region_search_zone' => 'header',
      'alpha_region_search_weight' => '0',
      'alpha_region_search_equal_height_element' => 0,
      'alpha_region_menu_zone' => 'header',
      'alpha_region_menu_columns' => '24',
      'alpha_region_menu_equal_height_element' => 0,
      'alpha_zone_home_content_section' => 'content',
      'alpha_zone_home_content_columns' => '24',
      'alpha_region_home_accordeon_zone' => 'home_content',
      'alpha_region_home_accordeon_columns' => '24',
      'alpha_region_home_accordeon_weight' => '0',
      'alpha_region_home_right_zone' => 'home_content',
      'alpha_region_home_right_columns' => '16',
      'alpha_region_home_left_zone' => 'home_content',
      'alpha_region_home_left_columns' => '8',
      'alpha_zone_content_equal_height_container' => 1,
      'alpha_region_sidebar_first_columns' => '6',
      'alpha_region_sidebar_first_equal_height_element' => 1,
      'alpha_region_content_columns' => '18',
      'alpha_region_content_equal_height_element' => 1,
      'alpha_region_logo_list_columns' => '24',
      'alpha_region_site_map_columns' => '24',
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
      'alpha_exclude' => array(
        'modules/comment/comment.css' => 0,
        'sites/all/modules/contrib/date/date_api/date.css' => 0,
        'sites/all/modules/contrib/date/date_popup/themes/datepicker.1.7.css' => 0,
        'modules/field/theme/field.css' => 0,
        'modules/node/node.css' => 0,
        'modules/search/search.css' => 0,
        'modules/user/user.css' => 0,
        'sites/all/modules/contrib/views/css/views.css' => 0,
        'misc/vertical-tabs.css' => 0,
        'modules/aggregator/aggregator.css' => 0,
        'modules/block/block.css' => 0,
        'modules/dblog/dblog.css' => 0,
        'modules/file/file.css' => 0,
        'modules/filter/filter.css' => 0,
        'modules/help/help.css' => 0,
        'modules/menu/menu.css' => 0,
        'modules/openid/openid.css' => 0,
        'modules/profile/profile.css' => 0,
        'modules/statistics/statistics.css' => 0,
        'modules/syslog/syslog.css' => 0,
        'modules/system/admin.css' => 0,
        'modules/system/maintenance.css' => 0,
        'modules/system/system.css' => 0,
        'modules/system/system.admin.css' => 0,
        'modules/system/system.base.css' => 0,
        'modules/system/system.maintenance.css' => 0,
        'modules/system/system.menus.css' => 0,
        'modules/system/system.messages.css' => 0,
        'modules/system/system.theme.css' => 0,
        'modules/taxonomy/taxonomy.css' => 0,
        'modules/tracker/tracker.css' => 0,
        'modules/update/update.css' => 0,
      ),
      'alpha_debug_grid_roles' => array(
        1 => '1',
        2 => '2',
        3 => '3',
        4 => 0,
        5 => 0,
      ),
      'alpha_zone_home_content_section' => NULL,
      'alpha_region_menu_equal_height_element' => 0,
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
      'alpha_zone_content_section' => NULL,
      'alpha_region_home_right_columns' => '14',
      'alpha_region_home_left_columns' => '10',
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
