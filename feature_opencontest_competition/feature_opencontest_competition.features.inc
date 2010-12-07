<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function feature_opencontest_competition_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function feature_opencontest_competition_node_info() {
  $items = array(
    'competition' => array(
      'name' => t('Competition'),
      'module' => 'features',
      'description' => t('A <em>competition event</em> is used to store all data and files specific to a given competition event. This may include participation numbers, average scores, important dates, uploaded results, etc.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
