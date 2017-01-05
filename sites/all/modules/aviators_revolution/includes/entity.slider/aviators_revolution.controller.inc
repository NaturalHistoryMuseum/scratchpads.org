<?php

class RevolutionSliderController extends EntityAPIController {
  //
}

/**
 * Entity create/update form
 * @param $form
 * @param $form_state
 * @param $slider
 * @return mixed
 */
function aviators_revolution_slider_form($form, &$form_state, $slider = NULL) {
  if(!$slider) {
    $slider = entity_get_controller('revolution_slider')->create();
  }

  $form['slider'] = array(
    '#type' => 'value',
    '#value' => $slider,
  );

  $form['name'] = array(
    '#title' => t('Name'),
    '#description' => t('Human readable label'),
    '#type' => 'textfield',
    '#default_value' => isset($slider->name) ? $slider->name : '',
    '#required' => TRUE,
  );

  $form['attributes'] = array(
    '#type' => 'container',
    '#tree' => TRUE,
  );

  $form['attributes']['delay'] = array(
    '#type' => 'textfield',
    '#title' => t('Delay'),
    '#default_value' => isset($slider->attributes['delay']) ? ($slider->attributes['delay']) : 9000,
    '#descripton' => t('The time one slide stays on the screen in Milliseconds'),
    '#required' => TRUE,
  );

  $form['attributes']['fullwidth'] = array(
    '#type' => 'checkbox',
    '#title' => t('Fullwidth'),
    '#description' => t('Check to make slider full-width automatically'),
    '#default_value' => isset($slider->attributes['fullwidth']) ? ($slider->attributes['fullwidth']) : NULL,
    '#ajax' => array(
      'callback' => 'aviators_revolution_slider_ajax_form',
      'wrapper' => 'fullwidth-slider',
    ),
  );

  $disabled = FALSE;
  if((isset($form_state['values']['attributes']['fullwidth']))) {
    $disabled = $form_state['values']['attributes']['fullwidth'];
  } else if (isset($slider->attributes) && $slider->attributes['fullwidth']) {
    $disabled = TRUE;
  }

  $form['attributes']['startwidth'] = array(
    '#type' => 'textfield',
    '#title' => t('Start width'),
    '#prefix' => '<div id="fullwidth-slider">',
    '#suffix' => '</div>',
    '#disabled' => $disabled,
    '#default_value' => isset($slider->attributes['startwidth']) ? ($slider->attributes['startwidth']) : 890,
    '#descripton' => t(
      'Basic Width of the Slider in the desktop resolution in pixel, other screen sizes will be calculated from this '
    ),
    '#required' => TRUE,
  );

  $form['attributes']['startheight'] = array(
    '#type' => 'textfield',
    '#title' => t('Start height'),
    '#default_value' => isset($slider->attributes['startheight']) ? ($slider->attributes['startheight']) : 490,
    '#descripton' => t(
      'Basic Height of the Slider in the desktop resolution in pixel, other screen sizes will be calculated from this'
    ),
    '#required' => TRUE,
  );

  $form['attributes']['hideThumbs'] = array(
    '#type' => 'textfield',
    '#title' => t('Hide thumbnails'),
    '#default_value' => isset($slider->attributes['hideThumbs']) ? ($slider->attributes['hideThumbs']) : 200,
    '#descripton' => t('Time after that the Thumbs will be hidden'),
    '#required' => TRUE,
  );

  $form['attributes']['navigationType'] = array(
    '#type' => 'select',
    '#title' => t('Navigation type'),
    '#options' => array(
      'none' => t('None'),
      'bullet' => t('Bullet'),
      'thumb' => t('Thumbnails'),
      'both' => t('Both'),
    ),
    '#default_value' => isset($slider->attributes['navigationType']) ? ($slider->attributes['navigationType']) : 'none',
    '#descripton' => t('Display type of the navigation bar'),
    '#required' => TRUE,
  );

  $form['attributes']['navigationStyle'] = array(
    '#type' => 'select',
    '#title' => t('Navigation type'),
    '#options' => array(
      'round' => t('Round'),
      'square' => t('Square'),
      'navbar' => t('Navbar'),
    ),
    '#default_value' => isset($slider->attributes['navigationStyle']) ? ($slider->attributes['navigationStyle']) : 'round',
    '#descripton' => t('Look of the navigation bullets'),
    '#required' => TRUE,
  );

  $form['attributes']['touchenabled'] = array(
    '#type' => 'select',
    '#title' => t('Touch enabled'),
    '#options' => array(
      'on' => t('On'),
      'off' => t('Off'),
    ),
    '#default_value' => isset($slider->attributes['navigationStyle']) ? ($slider->attributes['navigationStyle']) : 'on',
    '#descripton' => t('Enable Swipe Function on touch devices'),
    '#required' => TRUE,
  );

  $form['attributes']['shadow'] = array(
    '#type' => 'select',
    '#title' => t('Shadow'),
    '#options' => array(
      t('No shadow'),
      t('Type 1'),
      t('Type 2'),
      t('Type 3'),
    ),
    '#default_value' => isset($slider->attributes['shadow']) ? ($slider->attributes['shadow']) : 'on',
    '#descripton' => t('The Shadow display underneath the banner'),
    '#required' => TRUE,
  );

  $form['attributes']['onHoverStop'] = array(
    '#type' => 'select',
    '#title' => t('Stop on hover'),
    '#options' => array(
      'on' => t('On'),
      'off' => t('Off'),
    ),
    '#default_value' => isset($slider->attributes['navigationStyle']) ? ($slider->attributes['navigationStyle']) : 'on',
    '#descripton' => t('Stop the Timer when hovering the slider'),
    '#required' => TRUE,
  );

  $form['attributes']['navOffsetHorizontal'] = array(
    '#type' => 'textfield',
    '#title' => t('Navigation offset - horizontal'),
    '#default_value' => isset($slider->attributes['navOffsetHorizontal']) ? ($slider->attributes['navOffsetHorizontal']) : 0,
    '#descripton' => t('The Bar is centered but could be moved this pixel count left(e.g. -10) or right (Default: 0)'),
    '#required' => TRUE,
  );

  $form['attributes']['navOffsetVertical'] = array(
    '#type' => 'textfield',
    '#title' => t('Navigation offset - vertical'),
    '#default_value' => isset($slider->attributes['navOffsetVertical']) ? ($slider->attributes['navOffsetVertical']) : 20,
    '#descripton' => t('The Bar is bound to the bottom but could be moved this pixel count up (e. g. -20) or down (Default: 20)'),
    '#required' => TRUE,
  );

  $form['attributes']['thumbWidth'] = array(
    '#type' => 'textfield',
    '#title' => t('Thumbnail width'),
    '#default_value' => isset($slider->attributes['thumbWidth']) ? ($slider->attributes['thumbWidth']) : 100,
    '#descripton' => t('Width of one Thumbnail (only if thumb is selected. Default:100)'),
    '#required' => TRUE,
  );

  $form['attributes']['thumbHeight'] = array(
    '#type' => 'textfield',
    '#title' => t('Thumbnail height'),
    '#default_value' => isset($slider->attributes['thumbHeight']) ? ($slider->attributes['thumbHeight']) : 100,
    '#descripton' => t('Height of one Thumbnail (only if thumb is selected Default 50)'),
    '#required' => TRUE,
  );

  $form['attributes']['thumbAmount'] = array(
    '#type' => 'textfield',
    '#title' => t('Thumbnail amount'),
    '#default_value' => isset($slider->attributes['thumbAmount']) ? ($slider->attributes['thumbAmount']) : 5,
    '#descripton' => t('Amount of the Thumbs visible same time (only if thumb is selected)'),
    '#required' => TRUE,
  );

  $form['actions'] = array('#type' => 'actions');

  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#submit' => array('aviators_revolution_slider_form_submit'),
    '#value' => t('Save'),
    '#weight' => 40,
  );

  if (isset($slider->id)) {
    $form['actions']['delete'] = array(
      '#type' => 'submit',
      '#submit' => array('aviators_revolution_slider_form_delete'),
      '#value' => t('Delete'),
      '#weight' => 41,
    );
  }

  $form['actions']['cancel'] = array(
    '#markup' => l(t('Cancel'), 'admin/revolution/slider'),
    '#weight' => 42,
  );

  return $form;
}

function aviators_revolution_slider_ajax_form($form, &$form_state) {
  $form_state['rebuild'] = TRUE;
  return $form['attributes']['startwidth'];
}
/**
 * @param $form
 * @param $form_state
 */
function aviators_revolution_slider_form_submit($form, &$form_state) {
  $slider = $form_state['values']['slider'];

  $form_state['values']['attributes'] = serialize($form_state['values']['attributes']);

  form_state_values_clean($form_state);
  entity_form_submit_build_entity('revolution_slider', $slider, $form, $form_state);

  if(aviators_revolution_slider_save($slider)) {
    drupal_set_message(t('Slider saved'));
  }

  $form_state['redirect'] = 'admin/revolution/slider/' . $slider->id . '/view';
}

function aviators_revolution_slider_form_delete($form, &$form_state) {
  $slider = $form_state['values']['slider'];
  $form_state['redirect'] = 'admin/revolution/slider/' . $slider->id . '/delete';
}

function aviators_revolution_slider_delete_form($form, &$form_state, RevolutionSlider $slider) {

  $form['slider'] = array(
    '#type' => 'value',
    '#value' => $slider,
  );

  $return_path = 'admin/revolution/slider/' . $slider->id . '/edit';

  return confirm_form(
    $form,
    t('Are you sure you want to remove this slider: "!name" ?', array('!name' => $slider->name)),
    $return_path
  );
}

function aviators_revolution_slider_delete_form_submit($form, &$form_state) {
  $slider = $form_state['values']['slider'];
  $form_state['redirect'] = 'admin/revolution/slider';

  if (aviators_revolution_slider_delete($slider)) {
    drupal_set_message(t('Slider !name was removed', array('!name' => $slider->name)));
  }
}