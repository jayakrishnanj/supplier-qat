<?php

/**
 * @file
 * supplier_framework_base.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function supplier_framework_base_user_default_roles() {
  $roles = array();

  // Exported role: Project Manager.
  $roles['Project Manager'] = array(
    'name' => 'Project Manager',
    'weight' => 3,
  );

  return $roles;
}
