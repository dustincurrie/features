<?php

/**
 * Helper to implementation of hook_node_info().
 */
function _l10_pages_node_info() {
  $items = array(
    'l10_page' => array(
      'name' => t('Page'),
      'module' => 'features',
      'description' => '',
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
