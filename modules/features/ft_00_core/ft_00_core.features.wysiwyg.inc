<?php
/**
 * @file
 * ft_00_core.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function ft_00_core_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: full_html
  $profiles['full_html'] = array(
    'format' => 'full_html',
    'editor' => 'ckeditor',
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 1,
      'theme' => '',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'Bold' => 1,
          'Italic' => 1,
          'Underline' => 1,
          'Strike' => 1,
          'BulletedList' => 1,
          'NumberedList' => 1,
          'Undo' => 1,
          'Redo' => 1,
          'Link' => 1,
          'Unlink' => 1,
        ),
      ),
      'toolbarLocation' => 'top',
      'resize_enabled' => 1,
      'default_toolbar_grouping' => 0,
      'simple_source_formatting' => 0,
      'css_setting' => 'theme',
      'css_path' => '',
      'stylesSet' => '',
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'advanced__active_tab' => 'edit-css',
      'forcePasteAsPlainText' => 0,
    ),
  );

  return $profiles;
}
