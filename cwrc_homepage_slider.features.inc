<?php
/**
 * @file
 * cwrc_homepage_slider.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cwrc_homepage_slider_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function cwrc_homepage_slider_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function cwrc_homepage_slider_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: homepage_slider
  $nodequeues['homepage_slider'] = array(
    'name' => 'homepage_slider',
    'title' => 'Homepage Slider',
    'subqueue_title' => '',
    'size' => 10,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'insert_at_front' => 1,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'slider_content',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}

/**
 * Implements hook_node_info().
 */
function cwrc_homepage_slider_node_info() {
  $items = array(
    'slider_content' => array(
      'name' => t('Slider Content'),
      'base' => 'node_content',
      'description' => t('Content entry for the homepage slider'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
