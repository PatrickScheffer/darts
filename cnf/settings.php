<?php

$update_free_access = FALSE;

ini_set('session.gc_probability', 1);
ini_set('session.gc_divisor', 100);
ini_set('session.gc_maxlifetime', 200000);
ini_set('session.cookie_lifetime', 2000000);

// Local settings are loaded last, so that we can override.
include dirname(__FILE__) . '/settings.local.php';
