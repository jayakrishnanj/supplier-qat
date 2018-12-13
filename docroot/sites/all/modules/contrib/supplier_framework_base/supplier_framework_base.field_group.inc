<?php

/**
 * @file
 * supplier_framework_base.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function supplier_framework_base_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_supplier_feedback_sled|node|supplier_feedback|form';
  $field_group->group_name = 'group_supplier_feedback_sled';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'supplier_feedback';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Supplier-led project',
    'weight' => '3',
    'children' => array(
      0 => 'field_estimation',
      1 => 'field_handling_scope',
      2 => 'field_in_budget',
      3 => 'field_in_time',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-supplier-feedback-sled field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_supplier_feedback_sled|node|supplier_feedback|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_supplier_feedback_tm_group|node|supplier_feedback|form';
  $field_group->group_name = 'group_supplier_feedback_tm_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'supplier_feedback';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'T&M',
    'weight' => '0',
    'children' => array(
      0 => 'field_turn_around_time_during_st',
      1 => 'field_resource_availability',
      2 => 'field_proactiveness_and_deligenc',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_supplier_feedback_tm_group|node|supplier_feedback|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_supplier_red_fb_non_tech|node|supplier_resource_feedback|form';
  $field_group->group_name = 'group_supplier_red_fb_non_tech';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'supplier_resource_feedback';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Non Technial',
    'weight' => '2',
    'children' => array(
      0 => 'field_attention_to_detail',
      1 => 'field_communication',
      2 => 'field_integrity',
      3 => 'field_availability',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-supplier-red-fb-non-tech field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_supplier_red_fb_non_tech|node|supplier_resource_feedback|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_supplier_red_feedback_tech|node|supplier_resource_feedback|form';
  $field_group->group_name = 'group_supplier_red_feedback_tech';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'supplier_resource_feedback';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Technical',
    'weight' => '0',
    'children' => array(
      0 => 'field_technical_skills',
      1 => 'field_velocity',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-supplier-red-feedback-tech field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_supplier_red_feedback_tech|node|supplier_resource_feedback|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Non Technial');
  t('Supplier-led project');
  t('T&M');
  t('Technical');

  return $field_groups;
}
