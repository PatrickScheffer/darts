<?php
/**
 * implementation of hook_panels_layouts()
 */
// Plugin definition
$plugin = array(
  'title' => t('Default'),
  'category' => t('Darts'),
  'icon' => 'default.png',
  'theme' => 'default',
  'css' => 'default.css',
  'regions' => array(
    'content_top' => t('Content Top'),
    'content' => t('Main Content'),
    'sidebar_right' => t('Sidebar Right'),
    'content_bottom' => t('Content Bottom'),
  )
);
