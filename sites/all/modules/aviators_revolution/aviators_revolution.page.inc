<?php


/**
 * admin/revolution/slider
 * @return string
 */
function aviators_revolution_slider_list() {
  $sliders = aviators_revolution_slider_load_multiple();
  $header = array(t('ID'), t('NAME'), t('ACTIONS'));
  $rows = array();



  foreach ($sliders as $slider) {
    $links = array(
      l(t('View'), 'admin/revolution/slider/' . $slider->id . '/view'),
      l(t('Edit'), 'admin/revolution/slider/' . $slider->id . '/edit'),
      l(t('Delete'), 'admin/revolution/slider/' . $slider->id . '/delete')
    );
    $row = array(
      array(
        'data' => $slider->id,
      ),
      array(
        'data' => $slider->name,
      ),
      array(
        'data' => implode(' | ', $links)
      )
    );

    $rows[] = $row;
  }

  return theme_table(
    array(
      'header' => $header,
      'rows' => $rows,
      'attributes' => array(),
      'caption' => '',
      'colgroups' => array(),
      'sticky' => FALSE,
      'empty' => t('There are no sliders'),
    )
  );
}


function aviators_revolution_slider(RevolutionSlider $slider) {
  $output = '';
  $form = drupal_get_form('aviators_slide_weight_order', $slider);

  if($slider->loadSlides()) {
    $output = theme('revolution_slider', array('slider' => $slider));
  }

  $output .= drupal_render($form);
  return $output;
}

function aviators_slide_weight_order($form, &$form_state, RevolutionSlider $slider) {
  $slides = $slider->loadSlides();

  $form['slides'] = array(
    '#type' => 'container',
    '#tree' => TRUE,
  );
  foreach ($slides as $slide) {
    $form['slides'][$slide->id]['slide'] = array(
      '#type' => 'value',
      '#value' => $slide,
    );

    $form['slides'][$slide->id]['weight'] = array(
      '#title' => t('Weight'),
      '#type' => 'textfield',
      '#attributes' => array(
        'class' => array('slide-weight'),
      ),
      '#default_value' => !empty($slide->weight) ? $slide->weight : 0,
    );
  }

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
    '#submit' => array('aviators_slide_weight_order_submit'),
  );

  return $form;
}

function aviators_slide_weight_order_submit($form, &$form_state) {
  $values = $form_state['values']['slides'];

  foreach ($values as $item) {
    $item['slide']->weight = $item['weight'];
    aviators_revolution_slide_save($item['slide']);
  }
}

function theme_aviators_slide_weight_order(&$variables) {
  $form = $variables['form'];
  $rows = array();
  $header = array(t('ID'), t('NAME'), t('Actions'), t('Weight'));

  foreach (element_children($form['slides']) as $key) {
    $slide = $form['slides'][$key]['slide']['#value'];
    $links = array(
      l('View', 'admin/revolution/slide/' . $slide->id . '/view'),
      l('Edit', 'admin/revolution/slide/' . $slide->id . '/edit'),
      l('Delete', 'admin/revolution/slide/' . $slide->id . '/delete'),
    );

    $row = array(
      array(
        'data' => $slide->id,
      ),
      array(
        'data' => $slide->name,
      ),
      array(
        'data' => implode(' | ', $links),
      ),
      array(
        'data' => drupal_render($form['slides'][$key]['weight']),
      ),
    );

    $rows[] = array(
      'data' => $row,
      'class' => array('draggable'),
    );
  }

  drupal_add_tabledrag('slide-sort', 'order', 'sibling', 'slide-weight');

  return theme_table(
    array(
      'header' => $header,
      'rows' => $rows,
      'attributes' => array('id' => 'slide-sort'),
      'caption' => '',
      'colgroups' => array(),
      'sticky' => FALSE,
      'empty' => t('There are no slides'),
    )
  ) . drupal_render_children($form);
}

function aviators_revolution_slide(RevolutionSlide $slide) {
  $list = drupal_get_form('aviators_revolution_form_component_list', $slide);

  $types = db_select('aviators_revolution_component_type', 'et')
    ->fields('et')
    ->execute()
    ->fetchAllAssoc('type');

  $items = array();
  foreach ($types as $type) {
    $items[] = array(
      'data' => l(
        t('Add !type', array('!type' => $type->label)),
        'admin/revolution/slide/' . $slide->id. '/component/add/' . $type->type,
        array('attributes' => array('class' => array('button')))
      )
    );
  }

  $output = '';
  // add various type of components
//  $output = theme('revolution_theme_bar');
  $output .= theme_item_list(array('items' => $items, 'attributes' => array('class' => 'revolution-switch-theme'), 'title' => t('Add component'), 'type' => 'ul'));
  $output .= theme('revolution_admin', array('slide' => $slide)) . drupal_render($list);

  return $output;
}


/**
 * @param $form
 * @param $form_state
 * @param RevolutionSlide $slide
 * @return mixed
 */
function aviators_revolution_form_component_list($form, &$form_state, RevolutionSlide $slide) {
  $form['slide'] = array(
    '#type' => 'value',
    '#value' => $slide,
  );

  $form['components'] = array(
    '#type' => 'container',
    '#tree' => TRUE,
  );

  $components = $slide->loadComponents();
  foreach ($components as $component) {
    $form['components'][$component->id]['component'] = array(
      '#type' => 'value',
      '#value' => $component,
    );

    $form['components'][$component->id]['weight'] = array(
      '#title' => t('Weight'),
      '#type' => 'textfield',
      '#attributes' => array(
        'class' => array('slide-weight'),
      ),
      '#default_value' => !empty($slide->weight) ? $slide->weight : 0,
    );
  }

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
    '#submit' => array('aviators_revolution_form_component_list_submit'),
  );

  return $form;
}

function aviators_revolution_form_component_list_submit($form, &$form_state) {
  $values = $form_state['values']['components'];

  foreach ($values as $item) {
    $item['component']->weight = $item['weight'];
    aviators_revolution_component_save($item['component']);
  }
}

function theme_aviators_revolution_form_component_list(&$variables) {
  $form = $variables['form'];
  $slide = $form['slide']['#value'];

  $rows = array();
  $header = array(t('ID'), t('NAME'), t('Actions'), t('Weight'));

  foreach (element_children($form['components']) as $key) {
    $component = $form['components'][$key]['component']['#value'];

    $row = array(
      array(
        'data' => $component->id,
      ),
      array(
        'data' => $component->name,
      ),
      array(
        'data' => l(
          'Edit',
          'admin/revolution/component/' . $component->id . '/edit'
        ) . ' | ' . l(
          'Delete',
          'admin/revolution/component/' . $component->id . '/delete'
        ),
      ),
      array(
        'data' => drupal_render($form['components'][$key]['weight']),
      ),
    );

    $rows[] = array(
      'data' => $row,
      'class' => array('draggable'),
    );
  }

  drupal_add_tabledrag('slide-sort', 'order', 'sibling', 'slide-weight');

  return theme_table(
    array(
      'header' => $header,
      'rows' => $rows,
      'attributes' => array('id' => 'slide-sort'),
      'caption' => '',
      'colgroups' => array(),
      'sticky' => FALSE,
      'empty' => t('There are no components'),
    )
  ) . drupal_render_children($form);
}