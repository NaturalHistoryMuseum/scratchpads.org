<?php

class RevolutionComponentType extends Entity {
  public $id;

  public $type;

  public $label;

  public $weight;

  public $status;

  public $module;

  public $locked;
}



class RevolutionComponent extends Entity {

  public $id;

  public $slide_id;

  public $type;

  public $name;

  public $weight;

  public $attributes;
}

function revolution_component_type_load($id) {
  $component_types = revolution_component_type_load_multiple(array($id), array());
  return reset($component_types);
}

function revolution_component_type_save($component_type) {
  return entity_save('revolution_component_type', $component_type);
}

function revolution_component_type_delete($component_type) {
  return entity_delete('revolution_component_type', entity_id('revolution_component_type', $component_type));
}

function revolution_component_type_load_multiple($ids = array(), $conditions = array(), $reset = FALSE) {
  return entity_load('revolution_component_type', $ids, $conditions, $reset);
}


function aviators_revolution_component_create($values = array()) {
  $controller = entity_get_controller('revolution_component');
  return $controller->create($values);
}

function aviators_revolution_component_save(RevolutionComponent $component) {
  return entity_save('revolution_component', $component);
}

function aviators_revolution_component_load($id, $reset = FALSE) {
  $components = aviators_revolution_component_load_multiple(array($id), array(), $reset);
  return reset($components);
}

function aviators_revolution_component_load_multiple($ids = FALSE, $conditions = array(), $reset = FALSE) {
  return entity_load('revolution_component', $ids, $conditions, $reset);
}

function aviators_revolution_component_delete($component) {
  entity_delete('revolution_component', entity_id('revolution_component', $component));
}

function aviators_revolution_component_delete_multiple($ids) {
  entity_delete_multiple('revolution_component', $ids);
}