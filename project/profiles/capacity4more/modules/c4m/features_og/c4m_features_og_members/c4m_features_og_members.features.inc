<?php

/**
 * @file
 * c4m_features_og_members.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function c4m_features_og_members_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function c4m_features_og_members_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
