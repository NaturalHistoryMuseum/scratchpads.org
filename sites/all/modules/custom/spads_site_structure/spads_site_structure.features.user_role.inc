<?php
/**
 * @file
 * spads_site_structure.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function spads_site_structure_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => '2',
  );

  // Exported role: ambassador.
  $roles['ambassador'] = array(
    'name' => 'ambassador',
    'weight' => '3',
  );

  // Exported role: team member.
  $roles['team member'] = array(
    'name' => 'team member',
    'weight' => '4',
  );

  return $roles;
}
