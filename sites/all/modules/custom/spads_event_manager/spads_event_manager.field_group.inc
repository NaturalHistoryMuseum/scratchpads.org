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
  $field_group->identifier = 'group_registration_settings|node|event|form';
  $field_group->group_name = 'group_registration_settings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Registration Settings',
    'weight' => '3',
    'children' => array(
      0 => 'field_registration_type',
      1 => 'field_capacity',
      2 => 'field_waiting_list_size',
      3 => 'field_instructions',
      4 => 'field_from_address',
      5 => 'field_enable_registrations',
    ),
    'format_type' => 'fieldset',
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

  return $export;
}
