<?php

/**
 * Implementation of hook_content_default_fields().
 */
function ldiw_cleanup_projects_database_content_default_fields() {
  $fields = array();

  // Exported field: field_country_code
  $fields['cleanup_project-field_country_code'] = array(
    'field_name' => 'field_country_code',
    'type_name' => 'cleanup_project',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '2',
    'allowed_values' => '',
    'allowed_values_php' => '$ret=array(NULL=>NULL);
foreach (geonames_countries() as $e) {
  $ret[$e[\'iso_alpha2\']]=$e[\'name\'];
  }
return $ret;',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Country',
      'weight' => '31',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_nr_of_volunteers
  $fields['cleanup_project-field_nr_of_volunteers'] = array(
    'field_name' => 'field_nr_of_volunteers',
    'type_name' => 'cleanup_project',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '',
    'max' => '100000000',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_nr_of_volunteers][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Actual number of volunteers',
      'weight' => '32',
      'description' => 'Only for projects that have done a cleanup already',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_region
  $fields['cleanup_project-field_region'] = array(
    'field_name' => 'field_region',
    'type_name' => 'cleanup_project',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '50',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_region][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Region within the country',
      'weight' => '33',
      'description' => 'Only for projects that are smaller than a country. Specify the city, state or other area where the project operates within the country.',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_url
  $fields['cleanup_project-field_url'] = array(
    'field_name' => 'field_url',
    'type_name' => 'cleanup_project',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_url][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Website',
      'weight' => '34',
      'description' => 'Project website URL',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Actual number of volunteers');
  t('Country');
  t('Region within the country');
  t('Website');

  return $fields;
}
