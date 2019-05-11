<?php

/**
 * @file
 * supplier_framework_base.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function supplier_framework_base_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_resource-listing:resource-listing.
  $menu_links['management_resource-listing:resource-listing'] = array(
    'menu_name' => 'management',
    'link_path' => 'resource-listing',
    'router_path' => 'resource-listing',
    'link_title' => 'Resource Listing',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_resource-listing:resource-listing',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: management_supplier-listing:supplier-listing.
  $menu_links['management_supplier-listing:supplier-listing'] = array(
    'menu_name' => 'management',
    'link_path' => 'supplier-listing',
    'router_path' => 'supplier-listing',
    'link_title' => 'Supplier Listing',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_supplier-listing:supplier-listing',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-pm-menu_add-evaluation-interview-feedback:node/add/supplier-resource-evaluation-int.
  $menu_links['menu-pm-menu_add-evaluation-interview-feedback:node/add/supplier-resource-evaluation-int'] = array(
    'menu_name' => 'menu-pm-menu',
    'link_path' => 'node/add/supplier-resource-evaluation-int',
    'router_path' => 'node/add/supplier-resource-evaluation-int',
    'link_title' => 'Add Evaluation Interview Feedback',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-pm-menu_add-evaluation-interview-feedback:node/add/supplier-resource-evaluation-int',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-pm-menu_add-incident--escalation-log:node/add/incident-log.
  $menu_links['menu-pm-menu_add-incident--escalation-log:node/add/incident-log'] = array(
    'menu_name' => 'menu-pm-menu',
    'link_path' => 'node/add/incident-log',
    'router_path' => 'node/add/incident-log',
    'link_title' => 'Add Incident / Escalation Log',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-pm-menu_add-incident--escalation-log:node/add/incident-log',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-pm-menu_add-resource-feedback:node/add/supplier-resource-feedback.
  $menu_links['menu-pm-menu_add-resource-feedback:node/add/supplier-resource-feedback'] = array(
    'menu_name' => 'menu-pm-menu',
    'link_path' => 'node/add/supplier-resource-feedback',
    'router_path' => 'node/add/supplier-resource-feedback',
    'link_title' => 'Add Resource Feedback',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-pm-menu_add-resource-feedback:node/add/supplier-resource-feedback',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-pm-menu_add-supplier-feedback:node/add/supplier-feedback.
  $menu_links['menu-pm-menu_add-supplier-feedback:node/add/supplier-feedback'] = array(
    'menu_name' => 'menu-pm-menu',
    'link_path' => 'node/add/supplier-feedback',
    'router_path' => 'node/add/supplier-feedback',
    'link_title' => 'Add Supplier Feedback',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-pm-menu_add-supplier-feedback:node/add/supplier-feedback',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-pm-menu_resource-listing:resource-listing.
  $menu_links['menu-pm-menu_resource-listing:resource-listing'] = array(
    'menu_name' => 'menu-pm-menu',
    'link_path' => 'resource-listing',
    'router_path' => 'resource-listing',
    'link_title' => 'Resource Listing',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-pm-menu_resource-listing:resource-listing',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-pm-menu_supplier-listing:supplier-listing.
  $menu_links['menu-pm-menu_supplier-listing:supplier-listing'] = array(
    'menu_name' => 'menu-pm-menu',
    'link_path' => 'supplier-listing',
    'router_path' => 'supplier-listing',
    'link_title' => 'Supplier Listing',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-pm-menu_supplier-listing:supplier-listing',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add Evaluation Interview Feedback');
  t('Add Incident / Escalation Log');
  t('Add Resource Feedback');
  t('Add Supplier Feedback');
  t('Resource Listing');
  t('Supplier Listing');

  return $menu_links;
}
