<?php
/**
 * @file
 * spads_site_structure.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function spads_site_structure_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_external_resource|node|resource|form';
  $field_group->group_name = 'group_external_resource';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'resource';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_resource';
  $field_group->data = array(
    'label' => 'External Resource',
    'weight' => '11',
    'children' => array(
      0 => 'field_website',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'External Resource',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '<em>Use only one of <strong>External Resource</strong>, <strong>Image Resource</strong> or <strong>File resource</strong>.</em>',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_external_resource|node|resource|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_file_resource|node|resource|form';
  $field_group->group_name = 'group_file_resource';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'resource';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_resource';
  $field_group->data = array(
    'label' => 'File resource',
    'weight' => '13',
    'children' => array(
      0 => 'field_attachment',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'File resource',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '<em>Use only one of <strong>External Resource</strong>, <strong>Image Resource</strong> or <strong>File resource</strong>.</em>',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_file_resource|node|resource|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image_resource|node|resource|form';
  $field_group->group_name = 'group_image_resource';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'resource';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_resource';
  $field_group->data = array(
    'label' => 'Image Resource',
    'weight' => '12',
    'children' => array(
      0 => 'field_image',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Image Resource',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '<em>Use only one of <strong>External Resource</strong>, <strong>Image Resource</strong> or <strong>File resource</strong>.</em>',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_image_resource|node|resource|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resource|node|resource|form';
  $field_group->group_name = 'group_resource';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'resource';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resource',
    'weight' => '4',
    'children' => array(
      0 => 'group_external_resource',
      1 => 'group_image_resource',
      2 => 'group_file_resource',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_resource|node|resource|form'] = $field_group;

  return $export;
}
