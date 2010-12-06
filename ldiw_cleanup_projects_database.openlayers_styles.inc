<?php

/**
 * Implementation of hook_openlayers_styles().
 */
function ldiw_cleanup_projects_database_openlayers_styles() {
  $export = array();
  $openlayers_styles = new stdClass;
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'cleanup_project_style';
  $openlayers_styles->title = 'Cleanup project style';
  $openlayers_styles->description = 'Cleanup project style';
  $openlayers_styles->data = array(
    'pointRadius' => '${phpcode_rendered}',
    'fillColor' => '#40c040',
    'strokeColor' => '#606060',
    'strokeWidth' => 1,
    'fillOpacity' => '${phpcode_2_rendered}',
    'strokeOpacity' => 1,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'graphicOpacity' => 1,
    'label' => '${title}',
    'labelAlign' => 'lt',
    'labelXOffset' => '10',
    'labelYOffset' => '-10',
  );

  $export['cleanup_project_style'] = $openlayers_styles;
  return $export;
}
