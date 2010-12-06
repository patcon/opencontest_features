<?php

/**
 * Implementation of hook_user_default_roles().
 */
function feature_opencontest_user_default_roles() {
  $roles = array();

  // Exported role: administrator
  $roles['administrator'] = array(
    'name' => 'administrator',
  );

  // Exported role: anonymous user
  $roles['anonymous user'] = array(
    'name' => 'anonymous user',
  );

  // Exported role: authenticated user
  $roles['authenticated user'] = array(
    'name' => 'authenticated user',
  );

  // Exported role: coordinator
  $roles['coordinator'] = array(
    'name' => 'coordinator',
  );

  // Exported role: participant
  $roles['participant'] = array(
    'name' => 'participant',
  );

  return $roles;
}
