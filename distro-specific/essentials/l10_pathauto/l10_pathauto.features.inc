<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function l10_pathauto_ctools_plugin_api() {
  module_load_include('inc', 'l10_pathauto', 'l10_pathauto.defaults');
  $args = func_get_args();
  return call_user_func_array('_l10_pathauto_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function l10_pathauto_strongarm() {
  module_load_include('inc', 'l10_pathauto', 'l10_pathauto.defaults');
  $args = func_get_args();
  return call_user_func_array('_l10_pathauto_strongarm', $args);
}
