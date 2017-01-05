<?php

class RevolutionSlider extends Entity {
  public $id;

  public $name;

  public $attributes;

  public $slides = array();

  public function loadSlides() {
    $this->slides = aviators_revolution_slide_load_multiple(FALSE, array('slider_id' => $this->id));
    usort($this->slides, array($this, 'sortSlides'));
    return $this->slides;
  }

  public function sortSlides($slide1, $slide2) {
    if($slide1->weight > $slide2->weight) {
      return TRUE;
    }

    return FALSE;
  }
}


function aviators_revolution_slider_create($values = array()) {
  $controller = entity_get_controller('revolution_slider');
  return $controller->create($values);
}

function aviators_revolution_slider_save(RevolutionSlider $slider) {
  return entity_save('revolution_slider', $slider);
}

function aviators_revolution_slider_load($id, $reset = FALSE) {
  $sliders = aviators_revolution_slider_load_multiple(array($id), array(), $reset);

  return reset($sliders);
}

function aviators_revolution_slider_load_multiple($ids = FALSE, $conditions = array(), $reset = TRUE) {
  $sliders = entity_load('revolution_slider', $ids, $conditions, $reset);

  foreach($sliders as $slider) {
    if(!is_array($slider->attributes)) {
      $slider->attributes = unserialize($slider->attributes);
    }
  }

  return $sliders;
}

function aviators_revolution_slider_delete(RevolutionSlider $slider) {
  $slides = $slider->loadSlides();
  foreach($slides as $slide) {
    aviators_revolution_slide_delete($slide);
  }
  entity_delete('revolution_slider', entity_id('revolution_slider', $slider));
}

function aviators_revolution_slider_delete_multiple($ids) {
  entity_delete_multiple('revolution_slider', $ids);
}

