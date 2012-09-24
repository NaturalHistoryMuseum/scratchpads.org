<?php
/**
 * @file
 * spads_event_manager.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function spads_event_manager_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Events';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Registration Settings: Node to Registration Settings */
  $handler->display->display_options['relationships']['registration_settings_rel']['id'] = 'registration_settings_rel';
  $handler->display->display_options['relationships']['registration_settings_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['registration_settings_rel']['field'] = 'registration_settings_rel';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Training date */
  $handler->display->display_options['fields']['field_training_date']['id'] = 'field_training_date';
  $handler->display->display_options['fields']['field_training_date']['table'] = 'field_data_field_training_date';
  $handler->display->display_options['fields']['field_training_date']['field'] = 'field_training_date';
  $handler->display->display_options['fields']['field_training_date']['label'] = '';
  $handler->display->display_options['fields']['field_training_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_training_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['text'] = 'READ MORE';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'READ MORE';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'REGISTER FOR THIS TRAINING';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'node/[nid]/register';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Training date -  start date (field_training_date) */
  $handler->display->display_options['sorts']['field_training_date_value']['id'] = 'field_training_date_value';
  $handler->display->display_options['sorts']['field_training_date_value']['table'] = 'field_data_field_training_date';
  $handler->display->display_options['sorts']['field_training_date_value']['field'] = 'field_training_date_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Content: Training date -  start date (field_training_date) */
  $handler->display->display_options['filters']['field_training_date_value']['id'] = 'field_training_date_value';
  $handler->display->display_options['filters']['field_training_date_value']['table'] = 'field_data_field_training_date';
  $handler->display->display_options['filters']['field_training_date_value']['field'] = 'field_training_date_value';
  $handler->display->display_options['filters']['field_training_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_training_date_value']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_training_date_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_training_date_value']['default_date'] = 'now';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'support/training/events';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Events';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['events'] = $view;

  $view = new view();
  $view->name = 'manage_registrations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'registration';
  $view->human_name = 'Manage Registrations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Manage Registrations';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'registration_id' => 'registration_id',
    'field_name' => 'field_name',
    'anon_mail' => 'anon_mail',
    'created' => 'created',
    'label' => 'label',
    'view_registration' => 'delete_registration',
    'edit_registration' => 'delete_registration',
    'delete_registration' => 'delete_registration',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'registration_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'anon_mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'label' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_registration' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_registration' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_registration' => array(
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['empty'] = TRUE;
  $handler->display->display_options['header']['result']['content'] = 'There are @total registrations selected.';
  /* Relationship: Registration: State entity */
  $handler->display->display_options['relationships']['state']['id'] = 'state';
  $handler->display->display_options['relationships']['state']['table'] = 'registration';
  $handler->display->display_options['relationships']['state']['field'] = 'state';
  $handler->display->display_options['relationships']['state']['required'] = TRUE;
  /* Field: Global: Send E-mail */
  $handler->display->display_options['fields']['views_send']['id'] = 'views_send';
  $handler->display->display_options['fields']['views_send']['table'] = 'views';
  $handler->display->display_options['fields']['views_send']['field'] = 'views_send';
  $handler->display->display_options['fields']['views_send']['label'] = '';
  $handler->display->display_options['fields']['views_send']['element_label_colon'] = FALSE;
  /* Field: Registration: Registration ID */
  $handler->display->display_options['fields']['registration_id']['id'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['table'] = 'registration';
  $handler->display->display_options['fields']['registration_id']['field'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['label'] = 'Id';
  $handler->display->display_options['fields']['registration_id']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['registration_id']['alter']['path'] = 'registration/[registration_id]';
  $handler->display->display_options['fields']['registration_id']['alter']['link_class'] = 'ctools-use-modal';
  /* Field: Registration: Name */
  $handler->display->display_options['fields']['field_name']['id'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['table'] = 'field_data_field_name';
  $handler->display->display_options['fields']['field_name']['field'] = 'field_name';
  /* Field: Registration: Anonymous e-mail */
  $handler->display->display_options['fields']['anon_mail']['id'] = 'anon_mail';
  $handler->display->display_options['fields']['anon_mail']['table'] = 'registration';
  $handler->display->display_options['fields']['anon_mail']['field'] = 'anon_mail';
  $handler->display->display_options['fields']['anon_mail']['label'] = 'Email';
  $handler->display->display_options['fields']['anon_mail']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['anon_mail']['alter']['path'] = 'mailto:[anon_mail]';
  /* Field: Registration: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'registration';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Created';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Field: Registration State: Label */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'registration_state';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['relationship'] = 'state';
  $handler->display->display_options['fields']['label']['label'] = 'State';
  /* Field: Registration: View link */
  $handler->display->display_options['fields']['view_registration']['id'] = 'view_registration';
  $handler->display->display_options['fields']['view_registration']['table'] = 'registration';
  $handler->display->display_options['fields']['view_registration']['field'] = 'view_registration';
  $handler->display->display_options['fields']['view_registration']['label'] = 'View';
  /* Field: Registration: Edit link */
  $handler->display->display_options['fields']['edit_registration']['id'] = 'edit_registration';
  $handler->display->display_options['fields']['edit_registration']['table'] = 'registration';
  $handler->display->display_options['fields']['edit_registration']['field'] = 'edit_registration';
  /* Field: Registration: Delete link */
  $handler->display->display_options['fields']['delete_registration']['id'] = 'delete_registration';
  $handler->display->display_options['fields']['delete_registration']['table'] = 'registration';
  $handler->display->display_options['fields']['delete_registration']['field'] = 'delete_registration';
  $handler->display->display_options['fields']['delete_registration']['label'] = 'Edit';
  /* Contextual filter: Registration: Host entity ID */
  $handler->display->display_options['arguments']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['arguments']['entity_id']['table'] = 'registration';
  $handler->display->display_options['arguments']['entity_id']['field'] = 'entity_id';
  $handler->display->display_options['arguments']['entity_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['entity_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['entity_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['entity_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['entity_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['entity_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Registration State: Label */
  $handler->display->display_options['filters']['label']['id'] = 'label';
  $handler->display->display_options['filters']['label']['table'] = 'registration_state';
  $handler->display->display_options['filters']['label']['field'] = 'label';
  $handler->display->display_options['filters']['label']['relationship'] = 'state';
  $handler->display->display_options['filters']['label']['operator'] = 'contains';
  $handler->display->display_options['filters']['label']['exposed'] = TRUE;
  $handler->display->display_options['filters']['label']['expose']['operator_id'] = 'label_op';
  $handler->display->display_options['filters']['label']['expose']['label'] = 'State';
  $handler->display->display_options['filters']['label']['expose']['operator'] = 'label_op';
  $handler->display->display_options['filters']['label']['expose']['identifier'] = 'label';
  $handler->display->display_options['filters']['label']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'node/%/manage_registrations';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Manage Registrations';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'registrations.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Registration: Registration ID */
  $handler->display->display_options['fields']['registration_id']['id'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['table'] = 'registration';
  $handler->display->display_options['fields']['registration_id']['field'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['label'] = 'Id';
  $handler->display->display_options['fields']['registration_id']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['registration_id']['alter']['path'] = 'registration/[registration_id]';
  $handler->display->display_options['fields']['registration_id']['alter']['link_class'] = 'ctools-use-modal';
  /* Field: Registration: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'registration';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Created';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Field: Registration State: Label */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'registration_state';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['relationship'] = 'state';
  $handler->display->display_options['fields']['label']['label'] = 'State';
  /* Field: Registration: Name */
  $handler->display->display_options['fields']['field_name']['id'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['table'] = 'field_data_field_name';
  $handler->display->display_options['fields']['field_name']['field'] = 'field_name';
  /* Field: Registration: Anonymous e-mail */
  $handler->display->display_options['fields']['anon_mail']['id'] = 'anon_mail';
  $handler->display->display_options['fields']['anon_mail']['table'] = 'registration';
  $handler->display->display_options['fields']['anon_mail']['field'] = 'anon_mail';
  $handler->display->display_options['fields']['anon_mail']['label'] = 'Email';
  $handler->display->display_options['fields']['anon_mail']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['anon_mail']['alter']['path'] = 'mailto:[anon_mail]';
  /* Field: Registration: Institution */
  $handler->display->display_options['fields']['field_institution']['id'] = 'field_institution';
  $handler->display->display_options['fields']['field_institution']['table'] = 'field_data_field_institution';
  $handler->display->display_options['fields']['field_institution']['field'] = 'field_institution';
  /* Field: Registration: I will attend the associated conference */
  $handler->display->display_options['fields']['field_i_will_attend_the_associat']['id'] = 'field_i_will_attend_the_associat';
  $handler->display->display_options['fields']['field_i_will_attend_the_associat']['table'] = 'field_data_field_i_will_attend_the_associat';
  $handler->display->display_options['fields']['field_i_will_attend_the_associat']['field'] = 'field_i_will_attend_the_associat';
  /* Field: Registration: Reason for attending */
  $handler->display->display_options['fields']['field_reason_for_attending']['id'] = 'field_reason_for_attending';
  $handler->display->display_options['fields']['field_reason_for_attending']['table'] = 'field_data_field_reason_for_attending';
  $handler->display->display_options['fields']['field_reason_for_attending']['field'] = 'field_reason_for_attending';
  /* Field: Registration: Level of IT/Scratchpads experience  */
  $handler->display->display_options['fields']['field_level_of_it_scratchpads_ex']['id'] = 'field_level_of_it_scratchpads_ex';
  $handler->display->display_options['fields']['field_level_of_it_scratchpads_ex']['table'] = 'field_data_field_level_of_it_scratchpads_ex';
  $handler->display->display_options['fields']['field_level_of_it_scratchpads_ex']['field'] = 'field_level_of_it_scratchpads_ex';
  /* Field: Registration: Accessibility/Dietary requirements */
  $handler->display->display_options['fields']['field_accessibility_needs']['id'] = 'field_accessibility_needs';
  $handler->display->display_options['fields']['field_accessibility_needs']['table'] = 'field_data_field_accessibility_needs';
  $handler->display->display_options['fields']['field_accessibility_needs']['field'] = 'field_accessibility_needs';
  $handler->display->display_options['fields']['field_accessibility_needs']['label'] = 'Accessibility requirements';
  $handler->display->display_options['path'] = 'manage_registrations/%/export';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $export['manage_registrations'] = $view;

  return $export;
}
