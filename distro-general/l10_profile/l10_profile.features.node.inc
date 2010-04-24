<?php

/**
 * Helper to implementation of hook_node_info().
 */
function _l10_profile_node_info() {
  $items = array(
    'l10_profile' => array(
      'name' => t('Profile'),
      'module' => 'features',
      'description' => t('A user profile built as content.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('About'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
