<?php

/**
 * Class RevolutionComponentTypeUIController
 */
class RevolutionComponentTypeUIController extends EntityDefaultUIController {

  public function hook_menu() {

    $items = parent::hook_menu();
    $items[$this->path]['description'] = 'Component type';

    return $items;
  }
}

/**
 * @param $form
 * @param $form_state
 * @return array
 */
function revolution_component_type_form($form, &$form_state, $component_type = NULL) {

  if(!$component_type) {
    $component_type = entity_get_controller('revolution_component_type')->create();
  }

  $form['component_type'] = array(
    '#type' => 'value',
    '#value' => $component_type,
  );

  $form['type'] = array(
    '#title' => t('Type'),
    '#type' => 'machine_name',
    '#description' => t('Machine readable name'),
    '#disabled' => isset($component_type->type) ? TRUE : FALSE,
    '#machine_name' => array(
      'exists' => 'revolution_component_type_exists',
    ),
    '#default_value' => isset($component_type->type) ?$component_type->type : '',
    '#required' => TRUE,
  );

  $form['label'] = array(
    '#title' => t('Label'),
    '#type' => 'textfield',
    '#default_value' => isset($component_type->label) ?$component_type->label : '',
    '#required' => TRUE,
  );

  $form['actions'] = array(
    '#type' => 'container',
  );

  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
    '#submit' => array('revolution_component_type_form_submit'),
  );

  return $form;
}

function revolution_component_type_exists($value) {
  $data = db_select('aviators_revolution_component_type', 'ct')
    ->fields('ct', array('type'))
    ->condition('type', $value)
    ->execute()->fetchCol();

  if($data) {
    return TRUE;
  }

  return FALSE;
}
/**
 * @param $form
 * @param $form_state
 */
function revolution_component_type_form_submit($form, &$form_state) {
  $component_type = $form_state['values']['component_type'];
  form_state_values_clean($form_state);
  $form_state['values']['module'] = 'aviators_revolution';

  entity_form_submit_build_entity('revolution_component_type', $component_type, $form, $form_state);

  if(revolution_component_type_save($component_type)) {
    drupal_set_message(t('Component type saved'));
  }

  $form_state['redirect'] = "admin/structure/revolution/manage/" . $component_type->type . "/fields";
}

/**
 * Class RevolutionComponentController
 */
class RevolutionComponentController extends EntityAPIController {

  public function buildContent($entity, $view_mode = 'full', $langcode = NULL) {
    $content = parent::buildContent($entity, $view_mode, $langcode);
    return $content;
  }

  public function create(array $values = array()) {
    $values += array(
      'weight' => 0,
    );

    return parent::create($values);
  }
}


/**
 * @param $form
 * @param $form_state
 * @param $slide
 * @param $component
 * @return mixed
 */
function aviators_revolution_component_form($form, &$form_state, $slide = NULL, $component = NULL) {

  if (!$component) {
    $component = aviators_revolution_component_create(array('type' => 'caption'));
  }

  if(!$slide) {
    $slide = aviators_revolution_slide_load($component->slide_id);
  }


  $component->attributes = unserialize($component->attributes);

  $form['component'] = array(
    '#type' => 'value',
    '#value' => $component,
  );

  $form['slide'] = array(
    '#type' => 'value',
    '#value' => $slide,
  );

  $form['slide_id'] = array(
    '#type' => 'value',
    '#value' => $slide->id,
  );

  $form['name'] = array(
    '#title' => t('Name'),
    '#description' => t('Human readable label'),
    '#type' => 'textfield',
    '#default_value' => isset($component->name) ? $component->name : '',
  );

  field_attach_form('revolution_component', $component, $form, $form_state);

  $form['attributes'] = array(
    '#type' => 'fieldset',
    '#title' => t('Attributes'),
    '#tree' => TRUE,
    '#weight' => 100,
  );

  $form['attributes']['data-x'] = array(
    '#type' => 'textfield',
    '#size' => 5,
    '#title' => t('X coordinate'),
    '#description' => t(
      'Horizontal position in the standard (via startwidth option defined) screen size (other screen sizes will be calculated)'
    ),
    '#default_value' => isset($component->attributes['data-x']) ? $component->attributes['data-x'] : 0,
  );

  $form['attributes']['data-y'] = array(
    '#type' => 'textfield',
    '#size' => 5,
    '#title' => t('Y coordinate'),
    '#description' => t(
      'Vertical position in the standard (via startheight option defined) screen size (other screen sizes will be calculated)'
    ),
    '#default_value' => isset($component->attributes['data-y']) ? $component->attributes['data-y'] : 0,
  );

  $form['attributes']['data-easing'] = array(
    '#type' => 'select',
    '#options' => array(
      'easeOutBack' => 'easeOutBack',
      'easeInQuad' => 'easeInQuad',
      'easeOutQuad' => 'easeOutQuad',
      'easeInOutQuad' => 'easeInOutQuad',
      'easeInCubic' => 'easeInCubic',
      'easeOutCubic' => 'easeOutCubic',
      'easeInOutCubic' => 'easeInOutCubic',
      'easeInQuart' => 'easeInQuart',
      'easeOutQuart' => 'easeOutQuart',
      'easeInOutQuart' => 'easeInOutQuart',
      'easeInQuint' => 'easeInQuint',
      'easeOutQuint' => 'easeOutQuint',
      'easeInOutQuint' => 'easeInOutQuint',
      'easeInSine' => 'easeInSine',
      'easeOutSine' => 'easeOutSine',
      'easeInOutSine' => 'easeInOutSine',
      'easeInExpo' => 'easeInExpo',
      'easeOutExpo' => 'easeOutExpo',
      'easeInOutExpo' => 'easeInOutExpo',
      'easeInCirc' => 'easeInCirc',
      'easeOutCirc' => 'easeOutCirc',
      'easeInOutCirc' => 'easeInOutCirc',
      'easeInElastic' => 'easeInElastic',
      'easeOutElastic' => 'easeOutElastic',
      'easeInOutElastic' => 'easeInOutElastic',
      'easeOutBack' => 'easeOutBack',
      'easeInBack' => 'easeInBack',
      'easeInOutBack' => 'easeInOutBack',
      'easeInBounce' => 'easeInBounce',
      'easeOutBounce' => 'easeOutBounce',
      'easeInOutBounce' => 'easeInOutBounce',
    ),
  );

  $form['attributes']['data-start'] = array(
    '#type' => 'textfield',
    '#size' => 5,
    '#title' => t('Start transition after'),
    '#description' => t('How many milliseconds should this caption start to show'),
    '#default_value' => isset($component->attributes['data-start']) ? $component->attributes['data-start'] : 1000,
  );

  $form['attributes']['data-speed'] = array(
    '#type' => 'textfield',
    '#size' => 5,
    '#title' => t('Transition speed'),
    '#description' => t('duration of the animation in milliseconds'),
    '#default_value' => isset($component->attributes['data-start']) ? $component->attributes['data-start'] : 1000,
  );

  $form['attributes']['class'][0] = array(
    '#type' => 'select',
    '#title' => t('Transition'),
    '#options' => array(
      'sft' => t('Short from Top'),
      'sfb' => t('Short from Bottom'),
      'sfr' => t('Short from Right'),
      'sfl' => t('Short from Left'),
      'lft' => t('Long from Top'),
      'lfb' => t('Long from Bottom'),
      'lfr' => t('Long from Right'),
      'lfl' => t('Long from Left'),
      'fade' => t("fading"),
    ),
    '#default_value' => isset($component->attributes['class'][0]) ? $component->attributes['class'][0] : 'sft',
  );

  $form['attributes']['class'][1] = array(
    '#type' => 'select',
    '#multiple' => TRUE,
    '#title' => t('Style'),
    '#options' => array(
      '' => t('Default'),
      'big_white' => t('Big White'),
      'big_orange' => t('Big Orange'),
      'big_black' => t('Big Black'),
      'medium_grey' => t('Medium Grey'),
      'small_text' => t('Small text'),
      'large_text' => t('Large text'),
      'very_large_text' => t('Very Large text'),
      'medium_grey' => t('Medium Grey'),
      'bold_red_text' => t('Bold red text'),
      'bold_brown_text' => t('Bold brown text'),
      'bold_green_text' => t('Bold green text'),
      'very_big_white' => t('Very big white'),
      'very_big_black' => t('Very big black'),
      'boxshadow' => t('Box shadow')
    ),
    '#default_value' => isset($component->attributes['class'][1]) ? $component->attributes['class'][1] : '',
  );





  $form['actions'] = array(
    '#type' => 'actions',
    '#weight' => 101,
  );

  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#submit' => array('aviators_revolution_component_form_submit'),
    '#value' => t('Save'),
    '#weight' => 40,
  );

  return $form;
}


function aviators_revolution_component_form_submit($form, &$form_state) {
  $component = $form_state['values']['component'];
  form_state_values_clean($form_state);

  $form_state['values']['attributes']['class'] += $form_state['values']['attributes']['class'][1];
  unset($form_state['values']['attributes']['class'][1]);

  $form_state['values']['attributes'] = serialize($form_state['values']['attributes']);

  entity_form_submit_build_entity('revolution_component', $component, $form, $form_state);

  if(aviators_revolution_component_save($component)) {
    drupal_set_message(t('Component saved'));
  }

  $slide = $form_state['values']['slide'];

  $form_state['redirect'] = "admin/revolution/slide/$slide->id/view";
}


function aviators_revolution_component_form_delete($form , &$form_state, RevolutionComponent $component) {
  $form['component'] = array(
    '#type' => 'value',
    '#value' => $component,
  );

  $return_path = 'admin/revolution/slide/' . $component->slide_id . '/view';

  return confirm_form(
    $form,
    t('Are you sure you want to remove this component: "!name" ?', array('!name' => $component->name)),
    $return_path
  );
}

function aviators_revolution_component_form_delete_submit($form , &$form_state) {

  $component = $form_state['values']['component'];
  $form_state['redirect'] = 'admin/revolution/slide/' . $component->slide_id . '/view';

  if (aviators_revolution_component_delete($component)) {
    drupal_set_message(t('component !name was removed', array('!name' => $component->name)));
  }
}
