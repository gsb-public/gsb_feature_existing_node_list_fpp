<?php
/**
 * @file
 * gsb_feature_existing_node_list_fpp.fieldable_panels_pane_type.inc
 */

/**
 * Implements hook_default_fieldable_panels_pane_type().
 */
function gsb_feature_existing_node_list_fpp_default_fieldable_panels_pane_type() {
  $export = array();

  $fieldable_panels_pane_type = new stdClass();
  $fieldable_panels_pane_type->disabled = FALSE; /* Edit this to true to make a default fieldable_panels_pane_type disabled initially */
  $fieldable_panels_pane_type->api_version = 1;
  $fieldable_panels_pane_type->name = 'existing_node_list';
  $fieldable_panels_pane_type->title = 'Existing Node List';
  $fieldable_panels_pane_type->description = '';
  $export['existing_node_list'] = $fieldable_panels_pane_type;

  return $export;
}
