<?php

/**
 * Helper to implementation of hook_node_info().
 */
function _l10_bios_node_info() {
  $items = array(
    'l10_bio' => array(
      'name' => t('Bio'),
      'module' => 'features',
      'description' => t('Bio content type. Contains fields for name, position, bio and image. Bios are not user profiles.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
