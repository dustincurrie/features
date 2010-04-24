<?php

/**
 * Implementation of hook_views_default_views().
 */
function l10_blog_views_default_views() {
  module_load_include('inc', 'l10_blog', 'l10_blog.features.views');
  $args = func_get_args();
  return call_user_func_array('_l10_blog_views_default_views', $args);
}
