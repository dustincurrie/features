<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function l10_input_filters_ctools_plugin_api() {
  module_load_include('inc', 'l10_input_filters', 'l10_input_filters.defaults');
  $args = func_get_args();
  return call_user_func_array('_l10_input_filters_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function l10_input_filters_strongarm() {
  module_load_include('inc', 'l10_input_filters', 'l10_input_filters.defaults');
  $args = func_get_args();
  return call_user_func_array('_l10_input_filters_strongarm', $args);
}
