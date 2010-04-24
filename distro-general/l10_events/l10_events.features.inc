<?php

/**
 * Implementation of hook_content_default_fields().
 */
function l10_events_content_default_fields() {
  module_load_include('inc', 'l10_events', 'l10_events.defaults');
  $args = func_get_args();
  return call_user_func_array('_l10_events_content_default_fields', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function l10_events_ctools_plugin_api() {
  module_load_include('inc', 'l10_events', 'l10_events.defaults');
  $args = func_get_args();
  return call_user_func_array('_l10_events_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_node_info().
 */
function l10_events_node_info() {
  module_load_include('inc', 'l10_events', 'l10_events.features.node');
  $args = func_get_args();
  return call_user_func_array('_l10_events_node_info', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function l10_events_strongarm() {
  module_load_include('inc', 'l10_events', 'l10_events.defaults');
  $args = func_get_args();
  return call_user_func_array('_l10_events_strongarm', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function l10_events_views_default_views() {
  module_load_include('inc', 'l10_events', 'l10_events.features.views');
  $args = func_get_args();
  return call_user_func_array('_l10_events_views_default_views', $args);
}
