<?php

$databases = array (
  'default' => array (
    'default' => array (
      'database' => 'DATABASE_NAME',
      'username' => 'DATABASE_USERNAME',
      'password' => 'DATABASE_PASSWORD',
      'host'     => 'localhost',
      'port'     => '',
      'driver'   => 'mysql',
      'prefix'   => '',
    ),
  ),
);

$drupal_hash_salt = 'SOME_REALLY_RANDOM_STRING';

/**
 * Path fixation and origins for file proxy
 * 
$conf['file_temporary_path'] = '/tmp';
$conf['file_public_path'] = 'sites/default/files';
$conf['file_private_path'] = 'sites/default/files/private';
$conf['stage_file_proxy_origin'] = 'http://www.website.com';
$conf['stage_file_proxy_origin_dir'] = 'sites/default/files';
*/
