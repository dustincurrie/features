<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function l10_pages_ctools_plugin_api() {
  module_load_include('inc', 'l10_pages', 'l10_pages.defaults');
  $args = func_get_args();
  return call_user_func_array('_l10_pages_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_node_info().
 */
function l10_pages_node_info() {
  module_load_include('inc', 'l10_pages', 'l10_pages.features.node');
  $args = func_get_args();
  return call_user_func_array('_l10_pages_node_info', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function l10_pages_strongarm() {
  module_load_include('inc', 'l10_pages', 'l10_pages.defaults');
  $args = func_get_args();
  return call_user_func_array('_l10_pages_strongarm', $args);
}
