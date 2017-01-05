<?php

class RevolutionSlide extends Entity {

  public $id;

  public $slider_id;

  public $name;

  public $fid;

  public $weight;

  public $attributes;

  public $components;

  public function loadComponents() {
    $this->components = aviators_revolution_component_load_multiple(FALSE, array('slide_id' => $this->id));
    usort($this->components, array($this, 'sortComponents'));
    return $this->components;
  }

  public function sortComponents($slide1, $slide2) {
    if($slide1->weight > $slide2->weight) {
      return TRUE;
    }

    return FALSE;
  }
}

function aviators_revolution_slide_create($values = array()) {
  $controller = entity_get_controller('revolution_slide');
  return $controller->create($values);
}

function aviators_revolution_slide_save(RevolutionSlide $slide) {
  return entity_save('revolution_slide', $slide);
}

function aviators_revolution_slide_load($id, $reset = FALSE) {
  $slides = aviators_revolution_slide_load_multiple(array($id), array(), $reset);
  return reset($slides);
}

function aviators_revolution_slide_load_multiple($ids = FALSE, $conditions = array(), $reset = FALSE) {
  return entity_load('revolution_slide', $ids, $conditions, $reset);
}

function aviators_revolution_slide_delete(RevolutionSlide $slide) {
  $components = $slide->loadComponents();

  foreach($components as $component) {
    aviators_revolution_component_delete($component);
  }
  entity_delete('revolution_slide', entity_id('revolution_slide', $slide));
}

function aviators_revolution_slide_delete_multiple($ids) {
  entity_delete_multiple('revolution_slide', $ids);
}

