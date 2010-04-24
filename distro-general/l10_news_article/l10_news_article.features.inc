<?php

/**
 * Implementation of hook_content_default_fields().
 */
function l10_news_article_content_default_fields() {
  module_load_include('inc', 'l10_news_article', 'l10_news_article.defaults');
  $args = func_get_args();
  return call_user_func_array('_l10_news_article_content_default_fields', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function l10_news_article_ctools_plugin_api() {
  module_load_include('inc', 'l10_news_article', 'l10_news_article.defaults');
  $args = func_get_args();
  return call_user_func_array('_l10_news_article_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_node_info().
 */
function l10_news_article_node_info() {
  module_load_include('inc', 'l10_news_article', 'l10_news_article.features.node');
  $args = func_get_args();
  return call_user_func_array('_l10_news_article_node_info', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function l10_news_article_strongarm() {
  module_load_include('inc', 'l10_news_article', 'l10_news_article.defaults');
  $args = func_get_args();
  return call_user_func_array('_l10_news_article_strongarm', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function l10_news_article_views_default_views() {
  module_load_include('inc', 'l10_news_article', 'l10_news_article.features.views');
  $args = func_get_args();
  return call_user_func_array('_l10_news_article_views_default_views', $args);
}
