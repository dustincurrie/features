<?php

/**
 * Helper to implementation of hook_default_box().
 */
function _l10_boxes_default_box() {
  $export = array();
  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'l10_contentheader';
  $box->title = '<none>';
  $box->description = '[box] Office Bobbles Content Header';
  $box->body = '<img src="<?php print base_path() . path_to_theme() . \'/images/background-bobbles.jpg\'; ?>" alt="Office Bobbles"/>';
  $box->format = 3;

  $export['l10_contentheader'] = $box;
  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'l10_copyright';
  $box->title = '<none>';
  $box->description = '[box] Copyright Line';
  $box->body = 'Office Bubbles created by <a href="http://www.leveltendesign.com">LevelTen Interactive</a>. Your site might want a &copy; line here.';
  $box->format = 1;

  $export['l10_copyright'] = $box;
  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'l10_logo';
  $box->title = '<none>';
  $box->description = '[box] Office Bobbles Logo';
  $box->body = '    <div id="logo-holder">
        <a href="<?php print base_path(); ?>"><img id="logo" src="<?php print base_path() . path_to_theme() . \'/images/logo.png\'; ?>" alt="Office Bobbles"/></a>
        </div>';
  $box->format = 3;

  $export['l10_logo'] = $box;
  return $export;
}

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _l10_boxes_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "boxes" && $api == "box") {
    return array("version" => 1);
  }
}
