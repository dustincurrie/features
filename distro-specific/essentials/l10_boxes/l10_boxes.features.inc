<?php

/**
 * Implementation of hook_default_box().
 */
function l10_boxes_default_box() {
  module_load_include('inc', 'l10_boxes', 'l10_boxes.defaults');
  $args = func_get_args();
  return call_user_func_array('_l10_boxes_default_box', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function l10_boxes_ctools_plugin_api() {
  module_load_include('inc', 'l10_boxes', 'l10_boxes.defaults');
  $args = func_get_args();
  return call_user_func_array('_l10_boxes_ctools_plugin_api', $args);
}
