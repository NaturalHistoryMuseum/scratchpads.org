<?php

class RevolutionSlideController extends EntityAPIController {
  public function create(array $values = array()) {
    $values += array(
      'weight' => 0,
    );

    return parent::create($values);
  }
}

/**
 * Entity create/update form
 * @param $form
 * @param $form_state
 * @param $slider
 * @param $slide
 * @return mixed
 */
function aviators_revolution_slide_form($form, &$form_state, $slider, $slide = NULL) {

  if(!$slide) {
    // create default value
    $slide = aviators_revolution_slide_create();
  }

  if(!$slider) {
    $slider = aviators_revolution_slider_load($slide->slider_id);
  }

  if(isset($slide->attributes)) {
    $slide->attributes = unserialize($slide->attributes);
  }

  $form['slide'] = array(
    '#type' => 'value',
    '#value' => $slide,
  );

  $form['slider_id'] = array(
    '#type' => 'value',
    '#value' => $slider->id,
  );

  $form['image'] = array(
    '#type' => 'managed_file',
    '#title' => t('Background image'),
    '#default_value' => isset($slide->fid) ? $slide->fid : NULL,
    '#upload_location' => 'public://revolution_slide/',
    '#required' => TRUE,
  );

  $form['name'] = array(
    '#title' => t('Name'),
    '#description' => t('Human readable label'),
    '#required' => TRUE,
    '#type' => 'textfield',
    '#default_value' => isset($slide->name) ? $slide->name : '',
  );

  $form['attributes'] = array(
    '#type' => 'container',
    '#tree' => TRUE,
  );


  $form['attributes']['data-transition'] = array(
    '#type' => 'select',
    '#title' => t('Slide transition effect'),
    '#description' => t('The appearance transition of this slide'),
    '#default_value' => isset($slide->attributes['data-transition']) ? $slide->attributes['data-transition'] : 'boxslide',
    '#options' => array(
      'boxslide' => 'boxslide',
      'boxfade' => 'boxfade',
      'slotzoom-horizontal' => 'slotzoom-horizontal',
      'slotslide-horizontal' => 'slotslide-horizontal',
      'slotfade-horizontal' => 'slotfade-horizontal',
      'slotzoom-vertical' => 'slotzoom-vertical',
      'slotslide-vertical' => 'slotslide-vertical',
      'slotfade-vertical' => 'slotfade-vertical',
      'curtain-1' => 'curtain-1',
      'curtain-2' => 'curtain-2',
      'curtain-3' => 'curtain-3',
      'slideleft' => 'slideleft',
      'slideright' => 'slideright',
      'slideup' => 'slideup',
      'slidedown' => 'slidedown',
      'fade' => 'fade',
    ),
  );

  $form['attributes']['data-slotamount'] = array(
    '#type' => 'textfield',
    '#title' => t('Slot amoung'),
    '#description' => t(
      'The number of slots or boxes the slide is divided into. If you use boxfade, over 7 slots can be juggy.'
    ),
    '#required' => TRUE,
    '#default_value' => isset($slide->attributes['data-slotamount']) ? $slide->attributes['data-slotamount'] : 7,
  );

  $form['actions'] = array('#type' => 'actions');
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#submit' => array('aviators_revolution_slide_form_submit'),
    '#value' => t('Save'),
    '#weight' => 40,
  );


  return $form;
}

function aviators_revolution_slide_form_submit($form, &$form_state) {

  $slide = $form_state['values']['slide'];
  form_state_values_clean($form_state);

  $form_state['values']['attributes'] = serialize($form_state['values']['attributes']);

  $file = file_load($form_state['values']['image']);
  $file->status = FILE_STATUS_PERMANENT;
  $form_state['values']['fid'] = $file->fid;

  entity_form_submit_build_entity('revolution_slide', $slide, $form, $form_state);

  if(aviators_revolution_slide_save($slide)) {
    drupal_set_message('Slide saved');
  }

  file_usage_add($file, 'revolution_slide', 'revolution_slide', $slide->id);

  $form_state['redirect'] = 'admin/revolution/slide/' . $slide->id . '/view';
}

function aviators_revolution_slide_form_delete($form, &$form_state, RevolutionSlide $slide) {

  $form['slide'] = array(
    '#type' => 'value',
    '#value' => $slide,
  );

  $return_path = 'admin/revolution/slide/' . $slide->id . '/view';

  return confirm_form(
    $form,
    t('Are you sure you want to remove this slide: "!name" ?', array('!name' => $slide->name)),
    $return_path
  );
}

function aviators_revolution_slide_form_delete_submit($form, &$form_state) {
  $slide = $form_state['values']['slide'];

  $form_state['redirect'] = 'admin/revolution/slider/' . $slide->slider_id . '/view';

  if(aviators_revolution_slide_delete($slide)) {
    drupal_set_message(t('Slide !name was removed', array('!name' => $slide->name)));
  }
}