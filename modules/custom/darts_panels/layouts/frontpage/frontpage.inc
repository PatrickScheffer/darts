<?php
/**
 * implementation of hook_panels_layouts()
 */
// Plugin definition
$plugin = array(
  'title' => t('Frontpage'),
  'category' => t('Darts'),
  'icon' => 'frontpage.png',
  'theme' => 'frontpage',
  'css' => 'frontpage.css',
  'regions' => array(
    'content_top' => t('Content Top'),
    'content' => t('Main Content'),
    'sidebar_right' => t('Sidebar Right'),
    'content_bottom' => t('Content Bottom'),
  )
);
