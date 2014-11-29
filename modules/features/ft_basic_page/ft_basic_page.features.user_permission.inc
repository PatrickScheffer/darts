<?php
/**
 * @file
 * ft_basic_page.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ft_basic_page_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node basic_page content'.
  $permissions['administer panelizer node basic_page content'] = array(
    'name' => 'administer panelizer node basic_page content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node basic_page context'.
  $permissions['administer panelizer node basic_page context'] = array(
    'name' => 'administer panelizer node basic_page context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node basic_page defaults'.
  $permissions['administer panelizer node basic_page defaults'] = array(
    'name' => 'administer panelizer node basic_page defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node basic_page layout'.
  $permissions['administer panelizer node basic_page layout'] = array(
    'name' => 'administer panelizer node basic_page layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node basic_page overview'.
  $permissions['administer panelizer node basic_page overview'] = array(
    'name' => 'administer panelizer node basic_page overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node basic_page settings'.
  $permissions['administer panelizer node basic_page settings'] = array(
    'name' => 'administer panelizer node basic_page settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'create basic_page content'.
  $permissions['create basic_page content'] = array(
    'name' => 'create basic_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any basic_page content'.
  $permissions['delete any basic_page content'] = array(
    'name' => 'delete any basic_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own basic_page content'.
  $permissions['delete own basic_page content'] = array(
    'name' => 'delete own basic_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any basic_page content'.
  $permissions['edit any basic_page content'] = array(
    'name' => 'edit any basic_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own basic_page content'.
  $permissions['edit own basic_page content'] = array(
    'name' => 'edit own basic_page content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
