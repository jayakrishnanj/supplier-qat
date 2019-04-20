<?php

/**
 * @file
 * supplier_framework_base.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function supplier_framework_base_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function supplier_framework_base_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function supplier_framework_base_node_info() {
  $items = array(
    'incident_log' => array(
      'name' => t('Incident / Escalation Log'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'project' => array(
      'name' => t('Project'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name of Project (As on Mavenlink)'),
      'help' => '',
    ),
    'supplier' => array(
      'name' => t('Supplier'),
      'base' => 'node_content',
      'description' => t('A partner company'),
      'has_title' => '1',
      'title_label' => t('Supplier Company Name'),
      'help' => '',
    ),
    'supplier_feedback' => array(
      'name' => t('Supplier Feedback'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'supplier_resource' => array(
      'name' => t('Supplier Resource'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Supplier Resource Name'),
      'help' => '',
    ),
    'supplier_resource_evaluation_int' => array(
      'name' => t('Supplier Resource Evaluation Interview Feedback'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'supplier_resource_feedback' => array(
      'name' => t('Supplier Resource Feedback'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
