<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function feature_opencontest_competition_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_comp_data
  $groups['competition-group_comp_data'] = array(
    'group_type' => 'standard',
    'type_name' => 'competition',
    'group_name' => 'group_comp_data',
    'label' => 'Data',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '-3',
    'fields' => array(
      '0' => 'field_comp_schools_participating',
      '1' => 'field_comp_schools_teams',
      '2' => 'field_comp_contestants_total',
      '3' => 'field_comp_contestants_eligible',
      '4' => 'field_comp_contestants_score_avg',
      '5' => 'field_comp_contestants_score_lim',
    ),
  );

  // Exported group: group_comp_date
  $groups['competition-group_comp_date'] = array(
    'group_type' => 'standard',
    'type_name' => 'competition',
    'group_name' => 'group_comp_date',
    'label' => 'Dates',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'label' => 'above',
      ),
    ),
    'weight' => '-4',
    'fields' => array(
      '0' => 'field_comp_date_exam',
      '1' => 'field_comp_date_deadline_std',
      '2' => 'field_comp_date_deadline_early',
    ),
  );

  // Exported group: group_comp_file
  $groups['competition-group_comp_file'] = array(
    'group_type' => 'standard',
    'type_name' => 'competition',
    'group_name' => 'group_comp_file',
    'label' => 'Files',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '-2',
    'fields' => array(
      '0' => 'field_comp_file_exam',
      '1' => 'field_comp_file_key',
      '2' => 'field_comp_file_honroll',
      '3' => 'field_comp_file_stats',
      '4' => 'field_comp_file_image_topteam',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Data');
  t('Dates');
  t('Files');

  return $groups;
}
