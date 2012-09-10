<?php
/**
 * @file
 * spads_event_manager.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function spads_event_manager_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer own training registration.
  $permissions['administer own training registration'] = array(
    'name' => 'administer own training registration',
    'roles' => array(
      0 => 'administrator',
      1 => 'team member',
    ),
    'module' => 'registration',
  );

  // Exported permission: administer registration.
  $permissions['administer registration'] = array(
    'name' => 'administer registration',
    'roles' => array(
      0 => 'administrator',
      1 => 'team member',
    ),
    'module' => 'registration',
  );

  // Exported permission: administer registration states.
  $permissions['administer registration states'] = array(
    'name' => 'administer registration states',
    'roles' => array(
      0 => 'administrator',
      1 => 'team member',
    ),
    'module' => 'registration',
  );

  // Exported permission: administer registration types.
  $permissions['administer registration types'] = array(
    'name' => 'administer registration types',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: administer training registration.
  $permissions['administer training registration'] = array(
    'name' => 'administer training registration',
    'roles' => array(
      0 => 'administrator',
      1 => 'team member',
    ),
    'module' => 'registration',
  );

  // Exported permission: create training registration.
  $permissions['create training registration'] = array(
    'name' => 'create training registration',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
      2 => 'team member',
    ),
    'module' => 'registration',
  );

  // Exported permission: delete any training registration.
  $permissions['delete any training registration'] = array(
    'name' => 'delete any training registration',
    'roles' => array(
      0 => 'administrator',
      1 => 'team member',
    ),
    'module' => 'registration',
  );

  // Exported permission: delete own training registration.
  $permissions['delete own training registration'] = array(
    'name' => 'delete own training registration',
    'roles' => array(
      0 => 'administrator',
      1 => 'team member',
    ),
    'module' => 'registration',
  );

  // Exported permission: update any training registration.
  $permissions['update any training registration'] = array(
    'name' => 'update any training registration',
    'roles' => array(
      0 => 'administrator',
      1 => 'team member',
    ),
    'module' => 'registration',
  );

  // Exported permission: update own training registration.
  $permissions['update own training registration'] = array(
    'name' => 'update own training registration',
    'roles' => array(
      0 => 'authenticated user',
      1 => 'team member',
    ),
    'module' => 'registration',
  );

  // Exported permission: view own training registration.
  $permissions['view own training registration'] = array(
    'name' => 'view own training registration',
    'roles' => array(
      0 => 'authenticated user',
      1 => 'team member',
    ),
    'module' => 'registration',
  );

  // Exported permission: view training registration.
  $permissions['view training registration'] = array(
    'name' => 'view training registration',
    'roles' => array(
      0 => 'administrator',
      1 => 'team member',
    ),
    'module' => 'registration',
  );

  return $permissions;
}
