<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function feature_opencontest_competition_user_default_permissions() {
  $permissions = array();

  // Exported permission: create competition content
  $permissions['create competition content'] = array(
    'name' => 'create competition content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete any competition content
  $permissions['delete any competition content'] = array(
    'name' => 'delete any competition content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit any competition content
  $permissions['edit any competition content'] = array(
    'name' => 'edit any competition content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  return $permissions;
}
