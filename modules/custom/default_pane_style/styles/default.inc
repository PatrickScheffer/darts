<?php

/**
 * @file
 * Definition of the 'default' panel style.
 */

// Plugin definition
$plugin = array(
  'title' => t('Default'),
  'description' => t('Display the pane or region with no markup, not even a title.'),
  'render region' => 'panels_clean_default_render_region',
  'render pane' => 'panels_clean_default_render_pane',
  'weight' => -10, // let it be the first.
);

/**
 * Render callback.
 *
 * @ingroup themeable
 */
function theme_panels_clean_default_render_region($vars) {
  return implode($vars['panes']);
}

/**
 * Render callback.
 *
 * @ingroup themeable
 */
function theme_panels_clean_default_render_pane($vars) {
  return render($vars['content']->content);
}

