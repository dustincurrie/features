<?php

/**
 * Implementation of hook_node_info().
 */
function l10_faqs_node_info() {
  module_load_include('inc', 'l10_faqs', 'l10_faqs.features.node');
  $args = func_get_args();
  return call_user_func_array('_l10_faqs_node_info', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function l10_faqs_views_default_views() {
  module_load_include('inc', 'l10_faqs', 'l10_faqs.features.views');
  $args = func_get_args();
  return call_user_func_array('_l10_faqs_views_default_views', $args);
}
