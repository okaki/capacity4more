<?php
/**
 * @file
 * c4m_content_group.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function c4m_content_group_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|group|c4m_dashboard';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'group';
  $ds_fieldsetting->view_mode = 'c4m_dashboard';
  $ds_fieldsetting->settings = array(
    'node_link' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Continue reading',
        'wrapper' => '',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'c4m_user_picture' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'linked_c4m_user_author_thumb_image',
    ),
    'c4m_user_first_and_last_name' => array(
      'weight' => '2',
      'label' => 'above',
      'format' => 'user',
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Group owner',
        ),
      ),
    ),
    'c4m_ds_creation_date' => array(
      'weight' => '0',
      'label' => 'inline',
      'format' => 'j F Y',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Group created on ',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'post-date',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'c4m_ds_group_access_info' => array(
      'weight' => '38',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'col-md-6',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'c4m_ds_group_administer_link' => array(
      'weight' => '39',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'col-md-6',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'c4m_content_group_statistics' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'c4m_og_status' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'group-status',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
    'c4m_vocab_geo' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Region(s)',
        ),
      ),
    ),
    'c4m_vocab_topic' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Topic(s)',
        ),
      ),
    ),
  );
  $export['node|group|c4m_dashboard'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|group|c4m_related';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'group';
  $ds_fieldsetting->view_mode = 'c4m_related';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => 'purl_og_dashboard',
        'wrapper' => 'h3',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'c4m_user_first_and_last_name' => array(
      'weight' => '2',
      'label' => 'inline',
      'format' => 'linked_user',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Owned by',
          'prefix' => '<div class="owner">',
          'suffix' => '</div>',
        ),
      ),
    ),
    'c4m_ds_group_members_count' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'prefix' => '<span class="group-members-count">',
          'suffix' => '</span>',
        ),
      ),
    ),
    'c4m_media' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'prefix' => '<div class="round-bg">',
          'suffix' => '</div>',
        ),
      ),
    ),
  );
  $export['node|group|c4m_related'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|group|c4m_teaser_list';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'group';
  $ds_fieldsetting->view_mode = 'c4m_teaser_list';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => 'purl_og_dashboard',
        'wrapper' => 'h3',
        'class' => '',
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'span',
        ),
      ),
    ),
    'c4m_user_first_and_last_name' => array(
      'weight' => '6',
      'label' => 'inline',
      'format' => 'linked_user',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Owned by ',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => 'owner field-separator',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'c4m_ds_creation_date' => array(
      'weight' => '7',
      'label' => 'inline',
      'format' => 'j F Y',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Created on ',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'post-date',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'c4m_ds_group_members_count' => array(
      'weight' => '9',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => 'group-members-count',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'c4m_ds_group_posts_count' => array(
      'weight' => '10',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => 'group-posts-count field-separator',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'c4m_ds_group_type' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => 'group-type',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'c4m_ds_group_type_icon' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'c4m_ds_group_membership_type' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'c4m_media' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'round-bg',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'c4m_og_status' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'group-status',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|group|c4m_teaser_list'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|group|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'group';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => 'purl_og_dashboard',
        'wrapper' => 'h3',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'c4m_user_first_and_last_name' => array(
      'weight' => '3',
      'label' => 'inline',
      'format' => 'linked_user',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Owned by',
          'lb-col' => TRUE,
          'prefix' => '<span class="owner">',
          'suffix' => '</span>',
        ),
      ),
    ),
    'c4m_ds_group_members_count' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'prefix' => '<span class="group-members-count">',
          'suffix' => '</span>',
        ),
      ),
    ),
    'c4m_media' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'prefix' => '<div class="round-bg">',
          'suffix' => '</div>',
        ),
      ),
    ),
    'c4m_og_status' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-def-at' => TRUE,
          'lb-col' => TRUE,
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'group-status',
          'fis-at' => '',
          'fis-def-at' => TRUE,
        ),
      ),
    ),
  );
  $export['node|group|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function c4m_content_group_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|group|c4m_dashboard';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'group';
  $ds_layout->view_mode = 'c4m_dashboard';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'c4m_ds_creation_date',
        1 => 'c4m_og_status',
        2 => 'c4m_user_picture',
        3 => 'c4m_user_first_and_last_name',
        4 => 'c4m_body',
        5 => 'c4m_access_info',
        6 => 'c4m_vocab_topic',
        7 => 'node_link',
        8 => 'c4m_vocab_geo',
        9 => 'group_details',
        10 => 'c4m_content_group_statistics',
        11 => 'c4m_extra_info',
        12 => 'c4m_ds_group_access_info',
        13 => 'c4m_ds_group_administer_link',
      ),
    ),
    'fields' => array(
      'c4m_ds_creation_date' => 'ds_content',
      'c4m_og_status' => 'ds_content',
      'c4m_user_picture' => 'ds_content',
      'c4m_user_first_and_last_name' => 'ds_content',
      'c4m_body' => 'ds_content',
      'c4m_access_info' => 'ds_content',
      'c4m_vocab_topic' => 'ds_content',
      'node_link' => 'ds_content',
      'c4m_vocab_geo' => 'ds_content',
      'group_details' => 'ds_content',
      'c4m_content_group_statistics' => 'ds_content',
      'c4m_extra_info' => 'ds_content',
      'c4m_ds_group_access_info' => 'ds_content',
      'c4m_ds_group_administer_link' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|group|c4m_dashboard'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|group|c4m_related';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'group';
  $ds_layout->view_mode = 'c4m_related';
  $ds_layout->layout = 'c4m_ds_3_9_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'c4m_media',
      ),
      'right' => array(
        1 => 'title',
        2 => 'c4m_user_first_and_last_name',
        3 => 'c4m_ds_group_members_count',
      ),
    ),
    'fields' => array(
      'c4m_media' => 'left',
      'title' => 'right',
      'c4m_user_first_and_last_name' => 'right',
      'c4m_ds_group_members_count' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|group|c4m_related'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|group|c4m_teaser_list';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'group';
  $ds_layout->view_mode = 'c4m_teaser_list';
  $ds_layout->layout = 'c4m_ds_3_9_fluid_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'c4m_ds_group_type_icon',
        1 => 'c4m_ds_group_membership_type',
        2 => 'title',
        3 => 'c4m_og_status',
      ),
      'left' => array(
        4 => 'c4m_media',
      ),
      'right' => array(
        5 => 'c4m_ds_group_type',
        6 => 'c4m_user_first_and_last_name',
        7 => 'c4m_ds_creation_date',
        8 => 'c4m_body',
        9 => 'c4m_ds_group_members_count',
        10 => 'c4m_ds_group_posts_count',
      ),
    ),
    'fields' => array(
      'c4m_ds_group_type_icon' => 'header',
      'c4m_ds_group_membership_type' => 'header',
      'title' => 'header',
      'c4m_og_status' => 'header',
      'c4m_media' => 'left',
      'c4m_ds_group_type' => 'right',
      'c4m_user_first_and_last_name' => 'right',
      'c4m_ds_creation_date' => 'right',
      'c4m_body' => 'right',
      'c4m_ds_group_members_count' => 'right',
      'c4m_ds_group_posts_count' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|group|c4m_teaser_list'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|group|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'group';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'c4m_ds_3_9_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'c4m_media',
      ),
      'right' => array(
        1 => 'title',
        2 => 'c4m_og_status',
        3 => 'c4m_user_first_and_last_name',
        4 => 'c4m_ds_group_members_count',
      ),
    ),
    'fields' => array(
      'c4m_media' => 'left',
      'title' => 'right',
      'c4m_og_status' => 'right',
      'c4m_user_first_and_last_name' => 'right',
      'c4m_ds_group_members_count' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|group|teaser'] = $ds_layout;

  return $export;
}