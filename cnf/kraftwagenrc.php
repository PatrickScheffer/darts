<?php

$options['update-commands'] = array(
  // Make sure all required modules are enabled.
  'kw-apply-module-dependencies' => array('*environment*'),
  // Run all hook_update_N implementation of enabled modules.
  'updatedb' => array('--yes'),

  // Clear cache
  'cc' => array('drush'),

  // Make sure all feature definitions are applied.
  'features-revert-all' => array('--yes'),
  // Run all manifests of all enabled modules.
  'kw-manifests' => array('*environment*', '--yes'),
);

return $options;
