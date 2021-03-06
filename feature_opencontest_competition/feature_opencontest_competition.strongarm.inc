<?php

/**
 * Implementation of hook_strongarm().
 */
function feature_opencontest_competition_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_competition';
  $strongarm->value = '1';

  $export['ant_competition'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_competition';
  $strongarm->value = 'Competition [field_comp_date_exam-yyyy]';

  $export['ant_pattern_competition'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_competition';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '20',
    'author' => '20',
    'options' => '25',
    'menu' => '-2',
    'path' => '30',
    'path_redirect' => '30',
  );

  $export['content_extra_weights_competition'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_competition';
  $strongarm->value = array(
    0 => 'status',
  );

  $export['node_options_competition'] = $strongarm;
  return $export;
}
