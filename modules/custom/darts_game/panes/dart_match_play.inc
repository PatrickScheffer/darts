<?php

/**
 * @file
 * Plugin to handle the 'node' content type which allows individual nodes
 * to be embedded into a panel.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'single' => TRUE,
  'title' => t('Match Play'),
  'description' => t('Renders the form for playing a match.'),
  'category' => t('Darts'),
  'edit form' => 'darts_match_play_edit_form',
  'render callback' => 'darts_match_play_render',
);

/**
 * Output function for the 'node' content type.
 *
 * Outputs a node based on the module and delta supplied in the configuration.
 */
function darts_match_play_render($subtype, $conf, $panel_args) {
  $block = new stdClass();
  $block->title = '';
  $block->content = '';

  if (!isset($panel_args[0]) || !is_numeric($panel_args[0]) || $panel_args[0] < 1) {
    $block->content .= t('No match found!');
    return $block;
  }

  $match_id = $panel_args[0];
  $match = entity_load('match', array($match_id));

  if (empty($match)) {
    $block->content .= t('No match found!');
    return $block;
  }

  $configuration = array(
    'start_score' => 0,
    'sets' => 0,
    'legs' => 0,
    'legs_type' => '',
    'team_1' => array(),
    'team_2' => array(),
  );

  if (isset($match[ $match_id ]->field_game_type[LANGUAGE_NONE][0]['target_id'])) {
    $game_type = taxonomy_term_load($match[ $match_id ]->field_game_type[LANGUAGE_NONE][0]['target_id']);
    if(empty($game_type)) {
      $block->content .= t('Failed to load game type.');
      return $block;
    }
    $configuration['start_score'] = $game_type->name;
  } else {
    $block->content .= t('No game type defined.');
    return $block;
  }

  if (isset($match[ $match_id ]->field_sets[LANGUAGE_NONE][0]['value']) &&
     $match[ $match_id ]->field_sets[LANGUAGE_NONE][0]['value'] > 0) {

    $configuration['sets'] = $match[ $match_id ]->field_sets[LANGUAGE_NONE][0]['value'];
  }

  if ($configuration['sets'] == 0) {
    if (isset($match[ $match_id ]->field_legs[LANGUAGE_NONE][0]['value']) &&
       $match[ $match_id ]->field_legs[LANGUAGE_NONE][0]['value'] > 0) {

      $configuration['legs'] = $match[ $match_id ]->field_legs[LANGUAGE_NONE][0]['value'];
    } else {
      $block->content .= t('No legs or sets configured.');
      return $block;
    }

    if (!isset($match[ $match_id ]->field_legs_type[LANGUAGE_NONE][0]['value'])) {
      $block->content .= t('No legs type (Best of/First to) defined.');
      return $block;
    }  
    $configuration['legs_type'] = $match[ $match_id ]->field_legs_type[LANGUAGE_NONE][0]['value'];
  }

  if (isset($match[ $match_id ]->field_team_1[LANGUAGE_NONE][0]['target_id'])) {
    foreach ($match[ $match_id ]->field_team_1[LANGUAGE_NONE] as $teammember) {
      if (isset($teammember['target_id']) && $teammember['target_id'] > 0) {
        $user = user_load($teammember['target_id']);
        if (!empty($user)) {
          $configuration['team_1'][] = $user;
        } else {
          $block->content .= t('Failed to load player ' . $teammember['target_id'] . ' from team 1.');
          return $block;
        }
      } else {
        $block->content .= t('No player ID found in team 1.');
        return $block;
      }
    }
  }  else {
    $block->content .= t('No players found in team 1.');
    return $block;
  }

  if (isset($match[ $match_id ]->field_team_2[LANGUAGE_NONE][0]['target_id'])) {
    foreach ($match[ $match_id ]->field_team_2[LANGUAGE_NONE] as $teammember) {
      if (isset($teammember['target_id']) && $teammember['target_id'] > 0) {
        $user = user_load($teammember['target_id']);
        if (!empty($user)) {
          $configuration['team_2'][] = $user;
        } else {
          $block->content .= t('Failed to load player ' . $teammember['target_id'] . ' from team 2.');
          return $block;
        }
      } else {
        $block->content .= t('No player ID found in team 2.');
        return $block;
      }
    }
  }  else {
    $block->content .= t('No players found in team 2.');
    return $block;
  }

  $block->content = drupal_get_form('dart_game_play_match_form', $match[ $match_id ], $configuration);

  return $block;
}

/**
 * The form to add or edit a node as content.
 */
function darts_match_play_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];

  return $form;
}

/**
 * Validate the node selection.
 */
function  darts_match_play_edit_form_validate(&$form, &$form_state) {

}

/**
 * Validate the node selection.
 */
function darts_match_play_edit_form_submit($form, &$form_state) {

}
