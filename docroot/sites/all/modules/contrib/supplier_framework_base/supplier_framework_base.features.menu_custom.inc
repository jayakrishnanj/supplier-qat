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

  // Exported menu: menu-pm-menu.
  $menus['menu-pm-menu'] = array(
    'menu_name' => 'menu-pm-menu',
    'title' => 'PM Menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('PM Menu');

  return $menus;
}
