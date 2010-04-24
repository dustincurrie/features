<?php

/**
 * Implementation of hook_content_default_fields().
 */
function l10_profile_content_default_fields() {
  module_load_include('inc', 'l10_profile', 'l10_profile.defaults');
  $args = func_get_args();
  return call_user_func_array('_l10_profile_content_default_fields', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function l10_profile_ctools_plugin_api() {
  module_load_include('inc', 'l10_profile', 'l10_profile.defaults');
  $args = func_get_args();
  return call_user_func_array('_l10_profile_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function l10_profile_imagecache_default_presets() {
  module_load_include('inc', 'l10_profile', 'l10_profile.defaults');
  $args = func_get_args();
  return call_user_func_array('_l10_profile_imagecache_default_presets', $args);
}

/**
 * Implementation of hook_node_info().
 */
function l10_profile_node_info() {
  module_load_include('inc', 'l10_profile', 'l10_profile.features.node');
  $args = func_get_args();
  return call_user_func_array('_l10_profile_node_info', $args);
}
