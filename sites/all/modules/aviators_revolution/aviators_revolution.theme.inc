<?php

/**
 * @param $variables
 */
function template_preprocess_revolution_theme_bar(&$variables) {
  $themes = system_rebuild_theme_data();
  $items = array();

  $url = request_path();
  foreach($themes as $id => $theme) {
    $items[] =  l($theme->info['name'], $url, array('query' => array('theme' => $id), 'attributes' => array('class' => array('button'))));
  }

  $variables['list'] = theme_item_list(array('items' => $items, 'attributes' => array('class' => array('revolution-switch-theme')), 'title' => t('Switch theme'), 'type' => 'ul'));
}

/**
 * @param $variables
 */
function template_preprocess_revolution_slider(&$variables) {
  $slider = $variables['slider'];
  $slider_wrapper = 'revolution-' . $slider->id;
  $variables['wrapper'] = $slider_wrapper;

  /** @var RevolutionSlider $slider */
  $slides = $slider->loadSlides();

  foreach ($slides as &$slide) {
    if(!is_array($slide->attributes)) {
      $slide->attributes = unserialize($slide->attributes);
    }

    $variables['slides'][] = array(
      'slide' => theme('revolution_slide', array('slide' => $slide)),
      'attributes' => $slide->attributes,
    );
  }

  $settings[$slider->id] = array(
    'wrapper' => '#' . $slider_wrapper,
    'attributes' => $slider->attributes,
  );

  aviators_revolution_load_library($settings);
}

/**
 * @param $variables
 */
function template_preprocess_revolution_slide(&$variables) {
  $slide = $variables['slide'];

  $components = $slide->loadComponents();

  if($slide->fid) {
    $image = file_load($slide->fid);
    $variables['image'] = theme_image(array('path' => file_create_url($image->uri), 'alt' => 'revolution', 'attributes' => array()));
  }

  if($components) {
    foreach ($components as $component) {
      $variables['components'][] = theme('revolution_comp', array('component' => $component));
    }
  }
}

/**
 * @param $variables
 */
function template_preprocess_revolution_comp(&$variables) {
  $component = $variables['component'];

  $variables['component_attributes'] = unserialize($component->attributes);

  if (!$variables['component_attributes']) {
    $variables['component_attributes'] = array();
  }

  $variables['component_attributes']['class'][] = 'caption';
  $variables['component_attributes']['id'][] = 'component-' . $component->id;

  $variables['component'] = entity_view('revolution_component', array($component->id => $component));
}


/**
 * @param $variables
 */
function template_preprocess_revolution_admin(&$variables) {
  $slide = $variables['slide'];

  // setup slide
  if($slide->fid) {
    $image = file_load($slide->fid);
    $variables['image'] = theme_image(array('path' => file_create_url($image->uri), 'attributes' => array(
        'data-fullwidthcentering' => "off")));
  }

  // setup components
  $components = $slide->loadComponents();

  if($components) {
    foreach ($components as $component) {
      $attributes = unserialize($component->attributes);


      $attributes['class'][] = 'caption';
      $attributes['class'][] = 'tp-caption';
      $attributes['class'][] = 'component-draggable';
      $attributes['id'][] = 'component-' . $component->id;

      $variables['components'][$component->id]['attributes'] = $attributes;
      $variables['components'][$component->id]['component'] = entity_view('revolution_component', array($component->id => $component), 'full', NULL, FALSE);
    }
  }
  $slider = aviators_revolution_slider_load($slide->slider_id);

  $attributes = $slider->attributes;

  $attributes['touchenabled'] = FALSE;
  // setup slider
  $slider_wrapper = 'revolution-' . $slide->slider_id;
  $settings[$slide->slider_id] = array(
    'wrapper' => '#' . $slider_wrapper,
    'attributes' => $attributes,
  );

  $variables['wrapper'] = $slider_wrapper;

  aviators_revolution_load_library($settings, TRUE, $slider->id);
}

function aviators_revolution_load_library($settings, $demo = FALSE, $slider_id = NULL) {

  drupal_add_css(drupal_get_path('module', 'aviators_revolution') . '/aviators_revolution.css');
  drupal_add_js(drupal_get_path('module', 'aviators_revolution') . '/rs-plugin/js/jquery.themepunch.plugins.min.js');
  drupal_add_js(drupal_get_path('module', 'aviators_revolution') . '/rs-plugin/js/jquery.themepunch.revolution.js');
  drupal_add_css(drupal_get_path('module', 'aviators_revolution') . '/rs-plugin/css/fullwidth.css');
  drupal_add_css(drupal_get_path('module', 'aviators_revolution') . '/rs-plugin/css/settings.css');


  if($demo) {
    $settings['draggable'] = TRUE;
    if($slider_id) {
      $settings[$slider_id]['attributes']['startwidth'] = 1160;
      $settings[$slider_id]['attributes']['startheight'] = 690;
    }
  }

  drupal_add_js(array('aviators_revolution' => $settings), 'setting');
  drupal_add_js(drupal_get_path('module', 'aviators_revolution') . '/aviators_revolution.js');

  if($demo) {
    drupal_add_library('system', 'ui.draggable');
  }
}