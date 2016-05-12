<?php
/**
 * @file
 * cwrc_homepage_slider.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function cwrc_homepage_slider_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-homepage_slider-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'homepage_slider-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'de_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'de_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
