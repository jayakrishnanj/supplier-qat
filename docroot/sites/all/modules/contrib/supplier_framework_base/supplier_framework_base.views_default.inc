<?php

/**
 * @file
 * supplier_framework_base.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function supplier_framework_base_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'resource_listing';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Resource Listing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Resource Listing';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_supplier_resource_company_target_id']['id'] = 'field_supplier_resource_company_target_id';
  $handler->display->display_options['relationships']['field_supplier_resource_company_target_id']['table'] = 'field_data_field_supplier_resource_company';
  $handler->display->display_options['relationships']['field_supplier_resource_company_target_id']['field'] = 'field_supplier_resource_company_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Supplier Resource Company */
  $handler->display->display_options['fields']['field_supplier_resource_company']['id'] = 'field_supplier_resource_company';
  $handler->display->display_options['fields']['field_supplier_resource_company']['table'] = 'field_data_field_supplier_resource_company';
  $handler->display->display_options['fields']['field_supplier_resource_company']['field'] = 'field_supplier_resource_company';
  $handler->display->display_options['fields']['field_supplier_resource_company']['label'] = 'Supplier';
  $handler->display->display_options['fields']['field_supplier_resource_company']['settings'] = array(
    'bypass_access' => 0,
    'link' => 1,
  );
  /* Field: Content: Supplier Resource Role */
  $handler->display->display_options['fields']['field_supplier_resource_role']['id'] = 'field_supplier_resource_role';
  $handler->display->display_options['fields']['field_supplier_resource_role']['table'] = 'field_data_field_supplier_resource_role';
  $handler->display->display_options['fields']['field_supplier_resource_role']['field'] = 'field_supplier_resource_role';
  $handler->display->display_options['fields']['field_supplier_resource_role']['label'] = 'Role';
  $handler->display->display_options['fields']['field_supplier_resource_role']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_supplier_resource_role']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'supplier_resource' => 'supplier_resource',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Resource';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'resource';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['title']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_1']['id'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['table'] = 'node';
  $handler->display->display_options['filters']['title_1']['field'] = 'title';
  $handler->display->display_options['filters']['title_1']['relationship'] = 'field_supplier_resource_company_target_id';
  $handler->display->display_options['filters']['title_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_1']['expose']['operator_id'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['label'] = 'Supplier';
  $handler->display->display_options['filters']['title_1']['expose']['operator'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['identifier'] = 'supplier';
  $handler->display->display_options['filters']['title_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['title_1']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title_1']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title_1']['expose']['autocomplete_field'] = 'title';
  $handler->display->display_options['filters']['title_1']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title_1']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title_1']['expose']['autocomplete_dependent'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'resource-listing';
  $export['resource_listing'] = $view;

  $view = new view();
  $view->name = 'supplier_feedback_aggregator';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Supplier feedback aggregator';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Notes from Previous Feedback';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: AVG(Content: Turn around time during staffing) */
  $handler->display->display_options['fields']['field_turn_around_time_during_st']['id'] = 'field_turn_around_time_during_st';
  $handler->display->display_options['fields']['field_turn_around_time_during_st']['table'] = 'field_data_field_turn_around_time_during_st';
  $handler->display->display_options['fields']['field_turn_around_time_during_st']['field'] = 'field_turn_around_time_during_st';
  $handler->display->display_options['fields']['field_turn_around_time_during_st']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_turn_around_time_during_st']['empty'] = '0';
  $handler->display->display_options['fields']['field_turn_around_time_during_st']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_turn_around_time_during_st']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_turn_around_time_during_st']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 1,
    'style' => 'average',
    'text' => 'none',
  );
  $handler->display->display_options['fields']['field_turn_around_time_during_st']['group_column'] = 'rating';
  /* Field: AVG(Content: Resource Availability) */
  $handler->display->display_options['fields']['field_resource_availability']['id'] = 'field_resource_availability';
  $handler->display->display_options['fields']['field_resource_availability']['table'] = 'field_data_field_resource_availability';
  $handler->display->display_options['fields']['field_resource_availability']['field'] = 'field_resource_availability';
  $handler->display->display_options['fields']['field_resource_availability']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_resource_availability']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_resource_availability']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 1,
    'style' => 'average',
    'text' => 'none',
  );
  $handler->display->display_options['fields']['field_resource_availability']['group_column'] = 'rating';
  /* Field: AVG(Content: Proactiveness and Deligence in staffing) */
  $handler->display->display_options['fields']['field_proactiveness_and_deligenc']['id'] = 'field_proactiveness_and_deligenc';
  $handler->display->display_options['fields']['field_proactiveness_and_deligenc']['table'] = 'field_data_field_proactiveness_and_deligenc';
  $handler->display->display_options['fields']['field_proactiveness_and_deligenc']['field'] = 'field_proactiveness_and_deligenc';
  $handler->display->display_options['fields']['field_proactiveness_and_deligenc']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_proactiveness_and_deligenc']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_proactiveness_and_deligenc']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 1,
    'style' => 'average',
    'text' => 'none',
  );
  $handler->display->display_options['fields']['field_proactiveness_and_deligenc']['group_column'] = 'rating';
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
    'supplier_feedback' => 'supplier_feedback',
  );

  /* Display: T & M */
  $handler = $view->new_display('block', 'T & M', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'T & M';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Supplier (field_supplier_feedback_supplier) */
  $handler->display->display_options['arguments']['field_supplier_feedback_supplier_target_id']['id'] = 'field_supplier_feedback_supplier_target_id';
  $handler->display->display_options['arguments']['field_supplier_feedback_supplier_target_id']['table'] = 'field_data_field_supplier_feedback_supplier';
  $handler->display->display_options['arguments']['field_supplier_feedback_supplier_target_id']['field'] = 'field_supplier_feedback_supplier_target_id';
  $handler->display->display_options['arguments']['field_supplier_feedback_supplier_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_supplier_feedback_supplier_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_supplier_feedback_supplier_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_supplier_feedback_supplier_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_supplier_feedback_supplier_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['block_description'] = 'T & M';

  /* Display: Supplier-led project */
  $handler = $view->new_display('attachment', 'Supplier-led project', 'attachment_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Supplier-led project';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: AVG(Content: Estimation) */
  $handler->display->display_options['fields']['field_estimation']['id'] = 'field_estimation';
  $handler->display->display_options['fields']['field_estimation']['table'] = 'field_data_field_estimation';
  $handler->display->display_options['fields']['field_estimation']['field'] = 'field_estimation';
  $handler->display->display_options['fields']['field_estimation']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_estimation']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_estimation']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 1,
    'style' => 'average',
    'text' => 'none',
  );
  $handler->display->display_options['fields']['field_estimation']['group_column'] = 'rating';
  /* Field: AVG(Content: Handling Scope) */
  $handler->display->display_options['fields']['field_handling_scope']['id'] = 'field_handling_scope';
  $handler->display->display_options['fields']['field_handling_scope']['table'] = 'field_data_field_handling_scope';
  $handler->display->display_options['fields']['field_handling_scope']['field'] = 'field_handling_scope';
  $handler->display->display_options['fields']['field_handling_scope']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_handling_scope']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_handling_scope']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 1,
    'style' => 'average',
    'text' => 'none',
  );
  $handler->display->display_options['fields']['field_handling_scope']['group_column'] = 'rating';
  /* Field: AVG(Content: In Budget) */
  $handler->display->display_options['fields']['field_in_budget']['id'] = 'field_in_budget';
  $handler->display->display_options['fields']['field_in_budget']['table'] = 'field_data_field_in_budget';
  $handler->display->display_options['fields']['field_in_budget']['field'] = 'field_in_budget';
  $handler->display->display_options['fields']['field_in_budget']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_in_budget']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_in_budget']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 1,
    'style' => 'average',
    'text' => 'none',
  );
  $handler->display->display_options['fields']['field_in_budget']['group_column'] = 'rating';
  /* Field: AVG(Content: In Time) */
  $handler->display->display_options['fields']['field_in_time']['id'] = 'field_in_time';
  $handler->display->display_options['fields']['field_in_time']['table'] = 'field_data_field_in_time';
  $handler->display->display_options['fields']['field_in_time']['field'] = 'field_in_time';
  $handler->display->display_options['fields']['field_in_time']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_in_time']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_in_time']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 1,
    'style' => 'average',
    'text' => 'none',
  );
  $handler->display->display_options['fields']['field_in_time']['group_column'] = 'rating';
  $handler->display->display_options['displays'] = array(
    'block' => 'block',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Overall */
  $handler = $view->new_display('attachment', 'Overall', 'attachment_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Overall';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: AVG(Content: Overall Rating for supplier on this project) */
  $handler->display->display_options['fields']['field_overall_rating_for_supplie']['id'] = 'field_overall_rating_for_supplie';
  $handler->display->display_options['fields']['field_overall_rating_for_supplie']['table'] = 'field_data_field_overall_rating_for_supplie';
  $handler->display->display_options['fields']['field_overall_rating_for_supplie']['field'] = 'field_overall_rating_for_supplie';
  $handler->display->display_options['fields']['field_overall_rating_for_supplie']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_overall_rating_for_supplie']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_overall_rating_for_supplie']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 1,
    'style' => 'average',
    'text' => 'none',
  );
  $handler->display->display_options['fields']['field_overall_rating_for_supplie']['group_column'] = 'rating';
  $handler->display->display_options['displays'] = array(
    'block' => 'block',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Attachment 3 */
  $handler = $view->new_display('attachment', 'Attachment 3', 'attachment_3');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Project */
  $handler->display->display_options['fields']['field_supplier_feedback_project']['id'] = 'field_supplier_feedback_project';
  $handler->display->display_options['fields']['field_supplier_feedback_project']['table'] = 'field_data_field_supplier_feedback_project';
  $handler->display->display_options['fields']['field_supplier_feedback_project']['field'] = 'field_supplier_feedback_project';
  $handler->display->display_options['fields']['field_supplier_feedback_project']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Additional Notes */
  $handler->display->display_options['fields']['field_additional_notes']['id'] = 'field_additional_notes';
  $handler->display->display_options['fields']['field_additional_notes']['table'] = 'field_data_field_additional_notes';
  $handler->display->display_options['fields']['field_additional_notes']['field'] = 'field_additional_notes';
  $handler->display->display_options['fields']['field_additional_notes']['label'] = '';
  $handler->display->display_options['fields']['field_additional_notes']['element_label_colon'] = FALSE;
  $handler->display->display_options['displays'] = array(
    'default' => 0,
    'block' => 0,
    'block_1' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_arguments'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Project */
  $handler->display->display_options['fields']['field_supplier_feedback_project']['id'] = 'field_supplier_feedback_project';
  $handler->display->display_options['fields']['field_supplier_feedback_project']['table'] = 'field_data_field_supplier_feedback_project';
  $handler->display->display_options['fields']['field_supplier_feedback_project']['field'] = 'field_supplier_feedback_project';
  $handler->display->display_options['fields']['field_supplier_feedback_project']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Additional Notes */
  $handler->display->display_options['fields']['field_additional_notes']['id'] = 'field_additional_notes';
  $handler->display->display_options['fields']['field_additional_notes']['table'] = 'field_data_field_additional_notes';
  $handler->display->display_options['fields']['field_additional_notes']['field'] = 'field_additional_notes';
  $handler->display->display_options['fields']['field_additional_notes']['label'] = '';
  $handler->display->display_options['fields']['field_additional_notes']['element_label_colon'] = FALSE;

  /* Display: Block 2 */
  $handler = $view->new_display('block', 'Block 2', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Escalation / Incident logs involving the suppliers resources';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Project(s) Involved */
  $handler->display->display_options['fields']['field_project_s_involved']['id'] = 'field_project_s_involved';
  $handler->display->display_options['fields']['field_project_s_involved']['table'] = 'field_data_field_project_s_involved';
  $handler->display->display_options['fields']['field_project_s_involved']['field'] = 'field_project_s_involved';
  $handler->display->display_options['fields']['field_project_s_involved']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_project_s_involved']['delta_offset'] = '0';
  /* Field: Content: Supplier Resource(s) Involved */
  $handler->display->display_options['fields']['field_supplier_resource_s_involv']['id'] = 'field_supplier_resource_s_involv';
  $handler->display->display_options['fields']['field_supplier_resource_s_involv']['table'] = 'field_data_field_supplier_resource_s_involv';
  $handler->display->display_options['fields']['field_supplier_resource_s_involv']['field'] = 'field_supplier_resource_s_involv';
  $handler->display->display_options['fields']['field_supplier_resource_s_involv']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_supplier_resource_s_involv']['delta_offset'] = '0';
  /* Field: Content: Incident Severity */
  $handler->display->display_options['fields']['field_incident_severity']['id'] = 'field_incident_severity';
  $handler->display->display_options['fields']['field_incident_severity']['table'] = 'field_data_field_incident_severity';
  $handler->display->display_options['fields']['field_incident_severity']['field'] = 'field_incident_severity';
  $handler->display->display_options['fields']['field_incident_severity']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_incident_severity']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 1,
    'style' => 'average',
    'text' => 'none',
  );
  $handler->display->display_options['fields']['field_incident_severity']['group_column'] = 'entity_id';
  /* Field: Content: Additional Notes */
  $handler->display->display_options['fields']['field_additional_notes']['id'] = 'field_additional_notes';
  $handler->display->display_options['fields']['field_additional_notes']['table'] = 'field_data_field_additional_notes';
  $handler->display->display_options['fields']['field_additional_notes']['field'] = 'field_additional_notes';
  $handler->display->display_options['fields']['field_additional_notes']['label'] = '';
  $handler->display->display_options['fields']['field_additional_notes']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_additional_notes']['settings'] = array(
    'trim_length' => '1000',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Supplier(s) Involved (field_supplier_s_involved) */
  $handler->display->display_options['arguments']['field_supplier_s_involved_target_id']['id'] = 'field_supplier_s_involved_target_id';
  $handler->display->display_options['arguments']['field_supplier_s_involved_target_id']['table'] = 'field_data_field_supplier_s_involved';
  $handler->display->display_options['arguments']['field_supplier_s_involved_target_id']['field'] = 'field_supplier_s_involved_target_id';
  $handler->display->display_options['arguments']['field_supplier_s_involved_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_supplier_s_involved_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_supplier_s_involved_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_supplier_s_involved_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_supplier_s_involved_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'incident_log' => 'incident_log',
  );
  $export['supplier_feedback_aggregator'] = $view;

  $view = new view();
  $view->name = 'supplier_listing';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Supplier Listing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Supplier Listing';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_staffing_sheet_link' => 'field_staffing_sheet_link',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_staffing_sheet_link' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Supplier';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Staffing Sheet Link */
  $handler->display->display_options['fields']['field_staffing_sheet_link']['id'] = 'field_staffing_sheet_link';
  $handler->display->display_options['fields']['field_staffing_sheet_link']['table'] = 'field_data_field_staffing_sheet_link';
  $handler->display->display_options['fields']['field_staffing_sheet_link']['field'] = 'field_staffing_sheet_link';
  $handler->display->display_options['fields']['field_staffing_sheet_link']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_staffing_sheet_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_staffing_sheet_link']['type'] = 'link_url';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'View';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit ';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Feedback';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Feedback';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '/node/add/supplier-feedback';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Resources';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'View Resources';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = '/resource-listing?supplier=[title]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Global: Dropdown links */
  $handler->display->display_options['fields']['ctools_dropdown']['id'] = 'ctools_dropdown';
  $handler->display->display_options['fields']['ctools_dropdown']['table'] = 'views';
  $handler->display->display_options['fields']['ctools_dropdown']['field'] = 'ctools_dropdown';
  $handler->display->display_options['fields']['ctools_dropdown']['label'] = 'Useful links';
  $handler->display->display_options['fields']['ctools_dropdown']['fields'] = array(
    'view_node' => 'view_node',
    'edit_node' => 'edit_node',
    'nothing' => 'nothing',
    'nothing_1' => 'nothing_1',
  );
  $handler->display->display_options['fields']['ctools_dropdown']['check_access'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'supplier' => 'supplier',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Supplier';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['title']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'supplier-listing';
  $export['supplier_listing'] = $view;

  $view = new view();
  $view->name = 'supplier_resource_feedback';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Supplier Resource Feedback';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Supplier Resource Feedback';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: AVG(Content: Drupal Coding Skills) */
  $handler->display->display_options['fields']['field_technical_skills']['id'] = 'field_technical_skills';
  $handler->display->display_options['fields']['field_technical_skills']['table'] = 'field_data_field_technical_skills';
  $handler->display->display_options['fields']['field_technical_skills']['field'] = 'field_technical_skills';
  $handler->display->display_options['fields']['field_technical_skills']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_technical_skills']['label'] = 'Technical Skills';
  $handler->display->display_options['fields']['field_technical_skills']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_technical_skills']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 1,
    'style' => 'average',
    'text' => 'none',
  );
  $handler->display->display_options['fields']['field_technical_skills']['group_column'] = 'rating';
  /* Field: AVG(Content: Velocity) */
  $handler->display->display_options['fields']['field_velocity']['id'] = 'field_velocity';
  $handler->display->display_options['fields']['field_velocity']['table'] = 'field_data_field_velocity';
  $handler->display->display_options['fields']['field_velocity']['field'] = 'field_velocity';
  $handler->display->display_options['fields']['field_velocity']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_velocity']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_velocity']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 1,
    'style' => 'average',
    'text' => 'none',
  );
  $handler->display->display_options['fields']['field_velocity']['group_column'] = 'rating';
  /* Contextual filter: Content: Supplier Resource (field_supplier_res_fb_resource) */
  $handler->display->display_options['arguments']['field_supplier_res_fb_resource_target_id']['id'] = 'field_supplier_res_fb_resource_target_id';
  $handler->display->display_options['arguments']['field_supplier_res_fb_resource_target_id']['table'] = 'field_data_field_supplier_res_fb_resource';
  $handler->display->display_options['arguments']['field_supplier_res_fb_resource_target_id']['field'] = 'field_supplier_res_fb_resource_target_id';
  $handler->display->display_options['arguments']['field_supplier_res_fb_resource_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_supplier_res_fb_resource_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_supplier_res_fb_resource_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_supplier_res_fb_resource_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_supplier_res_fb_resource_target_id']['summary_options']['items_per_page'] = '25';
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
    'supplier_resource_feedback' => 'supplier_resource_feedback',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Technical';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'inline-label';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Non Technical */
  $handler = $view->new_display('attachment', 'Non Technical', 'attachment_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Non Technical';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'inline-label';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: AVG(Content: Attention to detail) */
  $handler->display->display_options['fields']['field_attention_to_detail']['id'] = 'field_attention_to_detail';
  $handler->display->display_options['fields']['field_attention_to_detail']['table'] = 'field_data_field_attention_to_detail';
  $handler->display->display_options['fields']['field_attention_to_detail']['field'] = 'field_attention_to_detail';
  $handler->display->display_options['fields']['field_attention_to_detail']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_attention_to_detail']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_attention_to_detail']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 1,
    'style' => 'average',
    'text' => 'none',
  );
  $handler->display->display_options['fields']['field_attention_to_detail']['group_column'] = 'rating';
  /* Field: AVG(Content: Integrity) */
  $handler->display->display_options['fields']['field_integrity']['id'] = 'field_integrity';
  $handler->display->display_options['fields']['field_integrity']['table'] = 'field_data_field_integrity';
  $handler->display->display_options['fields']['field_integrity']['field'] = 'field_integrity';
  $handler->display->display_options['fields']['field_integrity']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_integrity']['label'] = '#DoTheRightThing';
  $handler->display->display_options['fields']['field_integrity']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_integrity']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 1,
    'style' => 'average',
    'text' => 'none',
  );
  $handler->display->display_options['fields']['field_integrity']['group_column'] = 'rating';
  /* Field: AVG(Content: Communication) */
  $handler->display->display_options['fields']['field_communication']['id'] = 'field_communication';
  $handler->display->display_options['fields']['field_communication']['table'] = 'field_data_field_communication';
  $handler->display->display_options['fields']['field_communication']['field'] = 'field_communication';
  $handler->display->display_options['fields']['field_communication']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_communication']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_communication']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 1,
    'style' => 'average',
    'text' => 'none',
  );
  $handler->display->display_options['fields']['field_communication']['group_column'] = 'rating';
  /* Field: AVG(Content: Availability) */
  $handler->display->display_options['fields']['field_availability_1']['id'] = 'field_availability_1';
  $handler->display->display_options['fields']['field_availability_1']['table'] = 'field_data_field_availability';
  $handler->display->display_options['fields']['field_availability_1']['field'] = 'field_availability';
  $handler->display->display_options['fields']['field_availability_1']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_availability_1']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_availability_1']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 1,
    'style' => 'average',
    'text' => 'none',
  );
  $handler->display->display_options['fields']['field_availability_1']['group_column'] = 'rating';
  $handler->display->display_options['displays'] = array(
    'block' => 'block',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Overall */
  $handler = $view->new_display('attachment', 'Overall', 'attachment_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Overall';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'inline-label';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: AVG(Content: Overall Rating for resource on this project) */
  $handler->display->display_options['fields']['field_overall_rating_for_resourc']['id'] = 'field_overall_rating_for_resourc';
  $handler->display->display_options['fields']['field_overall_rating_for_resourc']['table'] = 'field_data_field_overall_rating_for_resourc';
  $handler->display->display_options['fields']['field_overall_rating_for_resourc']['field'] = 'field_overall_rating_for_resourc';
  $handler->display->display_options['fields']['field_overall_rating_for_resourc']['group_type'] = 'avg';
  $handler->display->display_options['fields']['field_overall_rating_for_resourc']['label'] = 'Overall ';
  $handler->display->display_options['fields']['field_overall_rating_for_resourc']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_overall_rating_for_resourc']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 1,
    'style' => 'average',
    'text' => 'none',
  );
  $handler->display->display_options['fields']['field_overall_rating_for_resourc']['group_column'] = 'rating';
  $handler->display->display_options['displays'] = array(
    'block' => 'block',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Notes from Previous Feedback';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Additional Notes */
  $handler->display->display_options['fields']['field_additional_notes']['id'] = 'field_additional_notes';
  $handler->display->display_options['fields']['field_additional_notes']['table'] = 'field_data_field_additional_notes';
  $handler->display->display_options['fields']['field_additional_notes']['field'] = 'field_additional_notes';

  /* Display: Block 2 */
  $handler = $view->new_display('block', 'Block 2', 'block_2');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Project(s) Involved */
  $handler->display->display_options['fields']['field_project_s_involved']['id'] = 'field_project_s_involved';
  $handler->display->display_options['fields']['field_project_s_involved']['table'] = 'field_data_field_project_s_involved';
  $handler->display->display_options['fields']['field_project_s_involved']['field'] = 'field_project_s_involved';
  $handler->display->display_options['fields']['field_project_s_involved']['label'] = 'Project';
  $handler->display->display_options['fields']['field_project_s_involved']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_project_s_involved']['delta_offset'] = '0';
  /* Field: Content: Supplier Resource(s) Involved */
  $handler->display->display_options['fields']['field_supplier_resource_s_involv']['id'] = 'field_supplier_resource_s_involv';
  $handler->display->display_options['fields']['field_supplier_resource_s_involv']['table'] = 'field_data_field_supplier_resource_s_involv';
  $handler->display->display_options['fields']['field_supplier_resource_s_involv']['field'] = 'field_supplier_resource_s_involv';
  $handler->display->display_options['fields']['field_supplier_resource_s_involv']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_supplier_resource_s_involv']['delta_offset'] = '0';
  /* Field: Content: Incident Severity */
  $handler->display->display_options['fields']['field_incident_severity']['id'] = 'field_incident_severity';
  $handler->display->display_options['fields']['field_incident_severity']['table'] = 'field_data_field_incident_severity';
  $handler->display->display_options['fields']['field_incident_severity']['field'] = 'field_incident_severity';
  $handler->display->display_options['fields']['field_incident_severity']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_incident_severity']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 0,
    'style' => 'average',
    'text' => 'none',
  );
  /* Field: Content: Additional Notes */
  $handler->display->display_options['fields']['field_additional_notes']['id'] = 'field_additional_notes';
  $handler->display->display_options['fields']['field_additional_notes']['table'] = 'field_data_field_additional_notes';
  $handler->display->display_options['fields']['field_additional_notes']['field'] = 'field_additional_notes';
  $handler->display->display_options['fields']['field_additional_notes']['label'] = '';
  $handler->display->display_options['fields']['field_additional_notes']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Supplier Resource(s) Involved (field_supplier_resource_s_involv) */
  $handler->display->display_options['arguments']['field_supplier_resource_s_involv_target_id']['id'] = 'field_supplier_resource_s_involv_target_id';
  $handler->display->display_options['arguments']['field_supplier_resource_s_involv_target_id']['table'] = 'field_data_field_supplier_resource_s_involv';
  $handler->display->display_options['arguments']['field_supplier_resource_s_involv_target_id']['field'] = 'field_supplier_resource_s_involv_target_id';
  $handler->display->display_options['arguments']['field_supplier_resource_s_involv_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_supplier_resource_s_involv_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_supplier_resource_s_involv_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_supplier_resource_s_involv_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_supplier_resource_s_involv_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'incident_log' => 'incident_log',
  );
  $export['supplier_resource_feedback'] = $view;

  return $export;
}
