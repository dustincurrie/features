<?php

/**
 * Helper to implementation of hook_node_info().
 */
function _l10_faqs_node_info() {
  $items = array(
    'l10_faq' => array(
      'name' => t('FAQ'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Question'),
      'has_body' => '1',
      'body_label' => t('Answer'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
