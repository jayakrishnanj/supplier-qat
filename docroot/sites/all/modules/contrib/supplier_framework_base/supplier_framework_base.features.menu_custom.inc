<?php

/**
 * @file
 * supplier_framework_base.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function supplier_framework_base_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: management.
  $menus['management'] = array(
    'menu_name' => 'management',
    'title' => 'Management',
    'description' => 'The <em>Management</em> menu contains links for administrative tasks.',
  );
  // Exported menu: menu-pm-menu.
  $menus['menu-pm-menu'] = array(
    'menu_name' => 'menu-pm-menu',
    'title' => 'PM Menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Management');
  t('PM Menu');
  t('The <em>Management</em> menu contains links for administrative tasks.');

  return $menus;
}
