<?php
/**
 * @file
 * spads_event_manager.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function spads_event_manager_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_registration_capacity|node|event|form';
  $field_group->group_name = 'group_registration_capacity';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_registration_settings';
  $field_group->data = array(
    'label' => 'Capacity and Waiting List',
    'weight' => '14',
    'children' => array(
      0 => 'field_capacity',
      1 => 'field_waiting_list_size',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_registration_capacity|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_registration_dates|node|event|form';
  $field_group->group_name = 'group_registration_dates';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_registration_settings';
  $field_group->data = array(
    'label' => 'Registration Dates',
    'weight' => '13',
    'children' => array(
      0 => 'field_registration_opening_date',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_registration_dates|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_registration_email|node|event|form';
  $field_group->group_name = 'group_registration_email';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_registration_settings';
  $field_group->data = array(
    'label' => 'Email settings',
    'weight' => '15',
    'children' => array(
      0 => 'field_instructions',
      1 => 'field_from_address',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_registration_email|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_registration_settings|node|event|form';
  $field_group->group_name = 'group_registration_settings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Registration Settings',
    'weight' => '4',
    'children' => array(
      0 => 'group_registration_type',
      1 => 'group_registration_dates',
      2 => 'group_registration_capacity',
      3 => 'group_registration_email',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_registration_settings|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_registration_type|node|event|form';
  $field_group->group_name = 'group_registration_type';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_registration_settings';
  $field_group->data = array(
    'label' => 'Registration type',
    'weight' => '12',
    'children' => array(
      0 => 'field_registration_type',
      1 => 'field_enable_registrations',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_registration_type|node|event|form'] = $field_group;

  return $export;
}
