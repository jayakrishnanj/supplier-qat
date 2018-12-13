<?php

/**
 * @file
 * supplier_framework_base.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function supplier_framework_base_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-incident_log-field_additional_notes'.
  $field_instances['node-incident_log-field_additional_notes'] = array(
    'bundle' => 'incident_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_additional_notes',
    'label' => 'Incident Details',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-incident_log-field_incident_severity'.
  $field_instances['node-incident_log-field_incident_severity'] = array(
    'bundle' => 'incident_log',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Incident Severity - 
1 - Minor incident - No impact on sprint
2 - Minor incident impacting sprint (Eg: Unplanned leave of 3 days)
3- Moderate incident impacting multiple sprints (Eg: Unplanned leave of 5 days or more)
4 - Critical Incident (Eg: Any security incident, any escalation from customer, anything affecting project delivery or timelines or launch)
5 - Disastrous - Causing (or potentially causing) loss of customer, someone getting fired, bad PR',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'fivestar',
        'settings' => array(
          'expose' => TRUE,
          'style' => 'average',
          'text' => 'average',
          'widget' => array(
            'fivestar_widget' => NULL,
          ),
        ),
        'type' => 'fivestar_formatter_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_incident_severity',
    'label' => 'Incident Severity',
    'required' => 1,
    'settings' => array(
      'allow_clear' => 0,
      'allow_halfstar' => 1,
      'allow_ownvote' => 0,
      'allow_revote' => 0,
      'stars' => 5,
      'target' => 'none',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'fivestar',
      'settings' => array(
        'widget' => array(
          'fivestar_widget' => 'sites/all/modules/fivestar/widgets/flames/flames.css',
        ),
      ),
      'type' => 'stars',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-incident_log-field_project_s_involved'.
  $field_instances['node-incident_log-field_project_s_involved'] = array(
    'bundle' => 'incident_log',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_project_s_involved',
    'label' => 'Project(s) Involved',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'inline_entity_form',
      'settings' => array(
        'fields' => array(),
        'type_settings' => array(
          'allow_clone' => 0,
          'allow_existing' => 1,
          'allow_new' => 1,
          'delete_references' => 0,
          'label_plural' => 'nodes',
          'label_singular' => 'node',
          'match_operator' => 'CONTAINS',
          'override_labels' => 0,
        ),
      ),
      'type' => 'inline_entity_form',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'node-incident_log-field_supplier_resource_s_involv'.
  $field_instances['node-incident_log-field_supplier_resource_s_involv'] = array(
    'bundle' => 'incident_log',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_supplier_resource_s_involv',
    'label' => 'Supplier Resource(s) Involved',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'inline_entity_form',
      'settings' => array(
        'fields' => array(),
        'type_settings' => array(
          'allow_clone' => 0,
          'allow_existing' => 1,
          'allow_new' => 1,
          'delete_references' => 0,
          'label_plural' => 'nodes',
          'label_singular' => 'node',
          'match_operator' => 'CONTAINS',
          'override_labels' => 0,
        ),
      ),
      'type' => 'inline_entity_form',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-incident_log-field_supplier_s_involved'.
  $field_instances['node-incident_log-field_supplier_s_involved'] = array(
    'bundle' => 'incident_log',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_supplier_s_involved',
    'label' => 'Supplier(s) Involved',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'inline_entity_form',
      'settings' => array(
        'fields' => array(),
        'type_settings' => array(
          'allow_clone' => 0,
          'allow_existing' => 1,
          'allow_new' => 1,
          'delete_references' => 0,
          'label_plural' => 'nodes',
          'label_singular' => 'node',
          'match_operator' => 'CONTAINS',
          'override_labels' => 0,
        ),
      ),
      'type' => 'inline_entity_form',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'node-incident_log-field_the_above_feedback_does_no'.
  $field_instances['node-incident_log-field_the_above_feedback_does_no'] = array(
    'bundle' => 'incident_log',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_the_above_feedback_does_no',
    'label' => 'The above feedback does not contain any Acquia confidential informationand can be shared with the supplier leadership.',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-project-field_end_date'.
  $field_instances['node-project-field_end_date'] = array(
    'bundle' => 'project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_end_date',
    'label' => 'End Date',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'taxonomy-index' => array(
          'status' => TRUE,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => -2,
    ),
  );

  // Exported field_instance: 'node-project-field_mavenlink_workspace_id'.
  $field_instances['node-project-field_mavenlink_workspace_id'] = array(
    'bundle' => 'project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_mavenlink_workspace_id',
    'label' => 'Mavenlink Workspace ID',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -1,
    ),
  );

  // Exported field_instance: 'node-project-field_project_manager'.
  $field_instances['node-project-field_project_manager'] = array(
    'bundle' => 'project',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_project_manager',
    'label' => 'Project Manager',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'inline_entity_form',
      'settings' => array(
        'fields' => array(),
        'type_settings' => array(),
      ),
      'type' => 'inline_entity_form',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-project-field_start_date'.
  $field_instances['node-project-field_start_date'] = array(
    'bundle' => 'project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_start_date',
    'label' => 'Start Date',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'taxonomy-index' => array(
          'status' => TRUE,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => -3,
    ),
  );

  // Exported field_instance: 'node-supplier-field_staffing_sheet_link'.
  $field_instances['node-supplier-field_staffing_sheet_link'] = array(
    'bundle' => 'supplier',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_staffing_sheet_link',
    'label' => 'Staffing Sheet Link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => '_blank',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'none',
      'title_allowed_values' => '',
      'title_label_use_field_label' => 1,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'node-supplier_feedback-field_additional_notes'.
  $field_instances['node-supplier_feedback-field_additional_notes'] = array(
    'bundle' => 'supplier_feedback',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Describe your overall experience with the supplier as a PM on this project.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_additional_notes',
    'label' => 'Additional Notes',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-supplier_feedback-field_estimation'.
  $field_instances['node-supplier_feedback-field_estimation'] = array(
    'bundle' => 'supplier_feedback',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Did the supplier do their due deligence and come up with the right estimates? Were the estimates close to our estimates? Did they follow our estimation process? Did they do the right POCs to increase confidence? Did they call out the right assumptions? Did they ask the right questions?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'fivestar',
        'settings' => array(
          'expose' => TRUE,
          'style' => 'average',
          'text' => 'average',
          'widget' => array(
            'fivestar_widget' => NULL,
          ),
        ),
        'type' => 'fivestar_formatter_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_estimation',
    'label' => 'Estimation',
    'required' => 0,
    'settings' => array(
      'allow_clear' => 0,
      'allow_halfstar' => 1,
      'allow_ownvote' => 0,
      'allow_revote' => 0,
      'stars' => 5,
      'target' => 'none',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'fivestar',
      'settings' => array(
        'widget' => array(
          'fivestar_widget' => 'sites/all/modules/fivestar/widgets/oxygen/oxygen.css',
        ),
      ),
      'type' => 'stars',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-supplier_feedback-field_handling_scope'.
  $field_instances['node-supplier_feedback-field_handling_scope'] = array(
    'bundle' => 'supplier_feedback',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Did the supplier do a good job in defining scope, preventing scope creep, handling Change Requests, etc',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'fivestar',
        'settings' => array(
          'expose' => TRUE,
          'style' => 'average',
          'text' => 'average',
          'widget' => array(
            'fivestar_widget' => NULL,
          ),
        ),
        'type' => 'fivestar_formatter_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_handling_scope',
    'label' => 'Handling Scope',
    'required' => 0,
    'settings' => array(
      'allow_clear' => 0,
      'allow_halfstar' => 1,
      'allow_ownvote' => 0,
      'allow_revote' => 0,
      'stars' => 5,
      'target' => 'none',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'fivestar',
      'settings' => array(
        'widget' => array(
          'fivestar_widget' => 'sites/all/modules/fivestar/widgets/oxygen/oxygen.css',
        ),
      ),
      'type' => 'stars',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-supplier_feedback-field_in_budget'.
  $field_instances['node-supplier_feedback-field_in_budget'] = array(
    'bundle' => 'supplier_feedback',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'fivestar',
        'settings' => array(
          'expose' => TRUE,
          'style' => 'average',
          'text' => 'average',
          'widget' => array(
            'fivestar_widget' => NULL,
          ),
        ),
        'type' => 'fivestar_formatter_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_in_budget',
    'label' => 'In Budget',
    'required' => 0,
    'settings' => array(
      'allow_clear' => 0,
      'allow_halfstar' => 1,
      'allow_ownvote' => 0,
      'allow_revote' => 0,
      'stars' => 5,
      'target' => 'none',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'fivestar',
      'settings' => array(
        'widget' => array(
          'fivestar_widget' => 'sites/all/modules/fivestar/widgets/oxygen/oxygen.css',
        ),
      ),
      'type' => 'stars',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-supplier_feedback-field_in_time'.
  $field_instances['node-supplier_feedback-field_in_time'] = array(
    'bundle' => 'supplier_feedback',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'fivestar',
        'settings' => array(
          'expose' => TRUE,
          'style' => 'average',
          'text' => 'average',
          'widget' => array(
            'fivestar_widget' => NULL,
          ),
        ),
        'type' => 'fivestar_formatter_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_in_time',
    'label' => 'In Time',
    'required' => 0,
    'settings' => array(
      'allow_clear' => 0,
      'allow_halfstar' => 1,
      'allow_ownvote' => 0,
      'allow_revote' => 0,
      'stars' => 5,
      'target' => 'none',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'fivestar',
      'settings' => array(
        'widget' => array(
          'fivestar_widget' => 'sites/all/modules/fivestar/widgets/oxygen/oxygen.css',
        ),
      ),
      'type' => 'stars',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'node-supplier_feedback-field_overall_rating_for_supplie'.
  $field_instances['node-supplier_feedback-field_overall_rating_for_supplie'] = array(
    'bundle' => 'supplier_feedback',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'fivestar',
        'settings' => array(
          'expose' => TRUE,
          'style' => 'average',
          'text' => 'average',
          'widget' => array(
            'fivestar_widget' => NULL,
          ),
        ),
        'type' => 'fivestar_formatter_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_overall_rating_for_supplie',
    'label' => 'Overall Rating for supplier on this project',
    'required' => 1,
    'settings' => array(
      'allow_clear' => 0,
      'allow_halfstar' => 1,
      'allow_ownvote' => 0,
      'allow_revote' => 0,
      'stars' => 5,
      'target' => 'none',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'fivestar',
      'settings' => array(
        'widget' => array(
          'fivestar_widget' => 'sites/all/modules/fivestar/widgets/oxygen/oxygen.css',
        ),
      ),
      'type' => 'stars',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'node-supplier_feedback-field_proactiveness_and_deligenc'.
  $field_instances['node-supplier_feedback-field_proactiveness_and_deligenc'] = array(
    'bundle' => 'supplier_feedback',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Did the supplier do their job without multiple followups? Was the supplier management (not individual resources) proactive in flagging their company holidays or change in staff (employees leaving etc)',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'fivestar',
        'settings' => array(
          'expose' => TRUE,
          'style' => 'average',
          'text' => 'average',
          'widget' => array(
            'fivestar_widget' => NULL,
          ),
        ),
        'type' => 'fivestar_formatter_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_proactiveness_and_deligenc',
    'label' => 'Proactiveness and Deligence in staffing',
    'required' => 0,
    'settings' => array(
      'allow_clear' => 0,
      'allow_halfstar' => 1,
      'allow_ownvote' => 0,
      'allow_revote' => 0,
      'stars' => 5,
      'target' => 'none',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'fivestar',
      'settings' => array(
        'widget' => array(
          'fivestar_widget' => 'sites/all/modules/fivestar/widgets/oxygen/oxygen.css',
        ),
      ),
      'type' => 'stars',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'node-supplier_feedback-field_resource_availability'.
  $field_instances['node-supplier_feedback-field_resource_availability'] = array(
    'bundle' => 'supplier_feedback',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Did the supplier have the right resources in a way that you did not have to compromise?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'fivestar',
        'settings' => array(
          'expose' => TRUE,
          'style' => 'average',
          'text' => 'average',
          'widget' => array(
            'fivestar_widget' => NULL,
          ),
        ),
        'type' => 'fivestar_formatter_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_resource_availability',
    'label' => 'Resource Availability',
    'required' => 0,
    'settings' => array(
      'allow_clear' => 0,
      'allow_halfstar' => 1,
      'allow_ownvote' => 0,
      'allow_revote' => 0,
      'stars' => 5,
      'target' => 'none',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'fivestar',
      'settings' => array(
        'widget' => array(
          'fivestar_widget' => 'sites/all/modules/fivestar/widgets/oxygen/oxygen.css',
        ),
      ),
      'type' => 'stars',
      'weight' => -1,
    ),
  );

  // Exported field_instance:
  // 'node-supplier_feedback-field_supplier_feedback_project'.
  $field_instances['node-supplier_feedback-field_supplier_feedback_project'] = array(
    'bundle' => 'supplier_feedback',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_supplier_feedback_project',
    'label' => 'Project',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => -3,
    ),
  );

  // Exported field_instance:
  // 'node-supplier_feedback-field_supplier_feedback_supplier'.
  $field_instances['node-supplier_feedback-field_supplier_feedback_supplier'] = array(
    'bundle' => 'supplier_feedback',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_supplier_feedback_supplier',
    'label' => 'Supplier',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => -4,
    ),
  );

  // Exported field_instance:
  // 'node-supplier_feedback-field_the_above_feedback_does_no'.
  $field_instances['node-supplier_feedback-field_the_above_feedback_does_no'] = array(
    'bundle' => 'supplier_feedback',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_the_above_feedback_does_no',
    'label' => 'The above feedback does not contain any Acquia confidential informationand can be shared with the supplier leadership.',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'node-supplier_feedback-field_turn_around_time_during_st'.
  $field_instances['node-supplier_feedback-field_turn_around_time_during_st'] = array(
    'bundle' => 'supplier_feedback',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'How quick was the supplier in responding to the staffing requests? Did the supplier prioritize and expedit our request?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'fivestar',
        'settings' => array(
          'expose' => TRUE,
          'style' => 'average',
          'text' => 'average',
          'widget' => array(
            'fivestar_widget' => NULL,
          ),
        ),
        'type' => 'fivestar_formatter_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_turn_around_time_during_st',
    'label' => 'Turn around time during staffing',
    'required' => 0,
    'settings' => array(
      'allow_clear' => 0,
      'allow_halfstar' => 1,
      'allow_ownvote' => 0,
      'allow_revote' => 0,
      'stars' => 5,
      'target' => 'none',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'fivestar',
      'settings' => array(
        'widget' => array(
          'fivestar_widget' => 'sites/all/modules/fivestar/widgets/oxygen/oxygen.css',
        ),
      ),
      'type' => 'stars',
      'weight' => -2,
    ),
  );

  // Exported field_instance: 'node-supplier_resource-field_email_address'.
  $field_instances['node-supplier_resource-field_email_address'] = array(
    'bundle' => 'supplier_resource',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_email_address',
    'label' => 'Email Address',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => -4,
    ),
  );

  // Exported field_instance:
  // 'node-supplier_resource-field_supplier_resource_company'.
  $field_instances['node-supplier_resource-field_supplier_resource_company'] = array(
    'bundle' => 'supplier_resource',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_supplier_resource_company',
    'label' => 'Supplier Resource Company',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => -3,
    ),
  );

  // Exported field_instance:
  // 'node-supplier_resource-field_supplier_resource_rate'.
  $field_instances['node-supplier_resource-field_supplier_resource_rate'] = array(
    'bundle' => 'supplier_resource',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_supplier_resource_rate',
    'label' => 'Supplier Resource Rate',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => 1,
      'prefix' => '(USD) $',
      'suffix' => '/hr',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => -1,
    ),
  );

  // Exported field_instance:
  // 'node-supplier_resource-field_supplier_resource_role'.
  $field_instances['node-supplier_resource-field_supplier_resource_role'] = array(
    'bundle' => 'supplier_resource',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_supplier_resource_role',
    'label' => 'Supplier Resource Role',
    'required' => 1,
    'settings' => array(
      'behaviors' => array(
        'taxonomy-index' => array(
          'status' => TRUE,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => -2,
    ),
  );

  // Exported field_instance:
  // 'node-supplier_resource_evaluation_int-field_accepted_for_current_proje'.
  $field_instances['node-supplier_resource_evaluation_int-field_accepted_for_current_proje'] = array(
    'bundle' => 'supplier_resource_evaluation_int',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_accepted_for_current_proje',
    'label' => 'Accepted for Current Project',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'node-supplier_resource_evaluation_int-field_additional_notes'.
  $field_instances['node-supplier_resource_evaluation_int-field_additional_notes'] = array(
    'bundle' => 'supplier_resource_evaluation_int',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Summary of your evaluation. 
What was good with the candidate?
What was bad?
Why did you approve of or reject the candidate?
Any feedback to the candidate?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_additional_notes',
    'label' => 'Additional Notes',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'node-supplier_resource_evaluation_int-field_evaluation_overall_rating'.
  $field_instances['node-supplier_resource_evaluation_int-field_evaluation_overall_rating'] = array(
    'bundle' => 'supplier_resource_evaluation_int',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'fivestar',
        'settings' => array(
          'expose' => TRUE,
          'style' => 'average',
          'text' => 'average',
          'widget' => array(
            'fivestar_widget' => NULL,
          ),
        ),
        'type' => 'fivestar_formatter_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_evaluation_overall_rating',
    'label' => 'Overall Rating',
    'required' => 1,
    'settings' => array(
      'allow_clear' => 0,
      'allow_halfstar' => 1,
      'allow_ownvote' => 0,
      'allow_revote' => 0,
      'stars' => 5,
      'target' => 'none',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'fivestar',
      'settings' => array(
        'widget' => array(
          'fivestar_widget' => 'sites/all/modules/fivestar/widgets/oxygen/oxygen.css',
        ),
      ),
      'type' => 'stars',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'node-supplier_resource_evaluation_int-field_evaluation_resource'.
  $field_instances['node-supplier_resource_evaluation_int-field_evaluation_resource'] = array(
    'bundle' => 'supplier_resource_evaluation_int',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_evaluation_resource',
    'label' => 'Resource Name',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'inline_entity_form',
      'settings' => array(
        'fields' => array(),
        'type_settings' => array(
          'allow_clone' => 0,
          'allow_existing' => 1,
          'allow_new' => 1,
          'delete_references' => 0,
          'label_plural' => 'nodes',
          'label_singular' => 'node',
          'match_operator' => 'CONTAINS',
          'override_labels' => 0,
        ),
      ),
      'type' => 'inline_entity_form',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'node-supplier_resource_evaluation_int-field_interviewed_for_project'.
  $field_instances['node-supplier_resource_evaluation_int-field_interviewed_for_project'] = array(
    'bundle' => 'supplier_resource_evaluation_int',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_interviewed_for_project',
    'label' => 'Interviewed for Project',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'inline_entity_form',
      'settings' => array(
        'fields' => array(),
        'type_settings' => array(
          'allow_clone' => 0,
          'allow_existing' => 1,
          'allow_new' => 1,
          'delete_references' => 0,
          'label_plural' => 'nodes',
          'label_singular' => 'node',
          'match_operator' => 'CONTAINS',
          'override_labels' => 0,
        ),
      ),
      'type' => 'inline_entity_form',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'node-supplier_resource_feedback-field_additional_notes'.
  $field_instances['node-supplier_resource_feedback-field_additional_notes'] = array(
    'bundle' => 'supplier_resource_feedback',
    'default_value' => array(
      0 => array(
        'value' => 'Describe your overall experience with the resource as a PM on this project.',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_additional_notes',
    'label' => 'Additional Notes',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'node-supplier_resource_feedback-field_attention_to_detail'.
  $field_instances['node-supplier_resource_feedback-field_attention_to_detail'] = array(
    'bundle' => 'supplier_resource_feedback',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Does the resource have good attention to detail? Does he ask the right questions and get this clarified? Does he ensure small things in tickets are not missed out?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'fivestar',
        'settings' => array(
          'expose' => TRUE,
          'style' => 'average',
          'text' => 'average',
          'widget' => array(
            'fivestar_widget' => NULL,
          ),
        ),
        'type' => 'fivestar_formatter_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_attention_to_detail',
    'label' => 'Attention to detail',
    'required' => 1,
    'settings' => array(
      'allow_clear' => 0,
      'allow_halfstar' => 1,
      'allow_ownvote' => 0,
      'allow_revote' => 0,
      'stars' => 5,
      'target' => 'none',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'fivestar',
      'settings' => array(
        'widget' => array(
          'fivestar_widget' => 'sites/all/modules/fivestar/widgets/oxygen/oxygen.css',
        ),
      ),
      'type' => 'stars',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'node-supplier_resource_feedback-field_availability'.
  $field_instances['node-supplier_resource_feedback-field_availability'] = array(
    'bundle' => 'supplier_resource_feedback',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Does the doesn\'t take PTOs too often, or for too long especially for unreasonable reasons. Also implies the resource doesn\'t disappear from desk unannounced during project hours. The resounce is flexible to join calls late evening. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'fivestar',
        'settings' => array(
          'expose' => TRUE,
          'style' => 'average',
          'text' => 'average',
          'widget' => array(
            'fivestar_widget' => NULL,
          ),
        ),
        'type' => 'fivestar_formatter_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_availability',
    'label' => 'Availability',
    'required' => 1,
    'settings' => array(
      'allow_clear' => 0,
      'allow_halfstar' => 1,
      'allow_ownvote' => 0,
      'allow_revote' => 0,
      'stars' => 5,
      'target' => 'none',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'fivestar',
      'settings' => array(
        'widget' => array(
          'fivestar_widget' => 'sites/all/modules/fivestar/widgets/oxygen/oxygen.css',
        ),
      ),
      'type' => 'stars',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'node-supplier_resource_feedback-field_communication'.
  $field_instances['node-supplier_resource_feedback-field_communication'] = array(
    'bundle' => 'supplier_resource_feedback',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Does the resource do a good job in explaining his thoughts, on calls, on tickets? Can he/she articulate their questions clearly?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'fivestar',
        'settings' => array(
          'expose' => TRUE,
          'style' => 'average',
          'text' => 'average',
          'widget' => array(
            'fivestar_widget' => NULL,
          ),
        ),
        'type' => 'fivestar_formatter_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_communication',
    'label' => 'Communication',
    'required' => 1,
    'settings' => array(
      'allow_clear' => 0,
      'allow_halfstar' => 1,
      'allow_ownvote' => 0,
      'allow_revote' => 0,
      'stars' => 5,
      'target' => 'none',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'fivestar',
      'settings' => array(
        'widget' => array(
          'fivestar_widget' => 'sites/all/modules/fivestar/widgets/oxygen/oxygen.css',
        ),
      ),
      'type' => 'stars',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-supplier_resource_feedback-field_integrity'.
  $field_instances['node-supplier_resource_feedback-field_integrity'] = array(
    'bundle' => 'supplier_resource_feedback',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Does the resource do the amount of work that justify the hours logged? Is the resource honest about his availability? Do the timesheets match the actual hours spent? Do the expense reports indicate the actual amounts spent?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'fivestar',
        'settings' => array(
          'expose' => TRUE,
          'style' => 'average',
          'text' => 'average',
          'widget' => array(
            'fivestar_widget' => NULL,
          ),
        ),
        'type' => 'fivestar_formatter_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_integrity',
    'label' => 'Integrity',
    'required' => 1,
    'settings' => array(
      'allow_clear' => 0,
      'allow_halfstar' => 1,
      'allow_ownvote' => 0,
      'allow_revote' => 0,
      'stars' => 5,
      'target' => 'none',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'fivestar',
      'settings' => array(
        'widget' => array(
          'fivestar_widget' => 'sites/all/modules/fivestar/widgets/oxygen/oxygen.css',
        ),
      ),
      'type' => 'stars',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'node-supplier_resource_feedback-field_overall_rating_for_resourc'.
  $field_instances['node-supplier_resource_feedback-field_overall_rating_for_resourc'] = array(
    'bundle' => 'supplier_resource_feedback',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'fivestar',
        'settings' => array(
          'expose' => TRUE,
          'style' => 'average',
          'text' => 'average',
          'widget' => array(
            'fivestar_widget' => NULL,
          ),
        ),
        'type' => 'fivestar_formatter_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_overall_rating_for_resourc',
    'label' => 'Overall Rating for resource on this project',
    'required' => 1,
    'settings' => array(
      'allow_clear' => 0,
      'allow_halfstar' => 1,
      'allow_ownvote' => 0,
      'allow_revote' => 0,
      'stars' => 5,
      'target' => 'none',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'fivestar',
      'settings' => array(
        'widget' => array(
          'fivestar_widget' => 'sites/all/modules/fivestar/widgets/oxygen/oxygen.css',
        ),
      ),
      'type' => 'stars',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'node-supplier_resource_feedback-field_supplier_res_fb_project'.
  $field_instances['node-supplier_resource_feedback-field_supplier_res_fb_project'] = array(
    'bundle' => 'supplier_resource_feedback',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_supplier_res_fb_project',
    'label' => 'Project',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'inline_entity_form',
      'settings' => array(
        'fields' => array(),
        'type_settings' => array(
          'allow_clone' => 0,
          'allow_existing' => 1,
          'allow_new' => 1,
          'delete_references' => 0,
          'label_plural' => 'nodes',
          'label_singular' => 'node',
          'match_operator' => 'CONTAINS',
          'override_labels' => 0,
        ),
      ),
      'type' => 'inline_entity_form',
      'weight' => -3,
    ),
  );

  // Exported field_instance:
  // 'node-supplier_resource_feedback-field_supplier_res_fb_resource'.
  $field_instances['node-supplier_resource_feedback-field_supplier_res_fb_resource'] = array(
    'bundle' => 'supplier_resource_feedback',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_supplier_res_fb_resource',
    'label' => 'Supplier Resource',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'inline_entity_form',
      'settings' => array(
        'fields' => array(),
        'type_settings' => array(
          'allow_clone' => 0,
          'allow_existing' => 1,
          'allow_new' => 1,
          'delete_references' => 0,
          'label_plural' => 'nodes',
          'label_singular' => 'node',
          'match_operator' => 'CONTAINS',
          'override_labels' => 0,
        ),
      ),
      'type' => 'inline_entity_form',
      'weight' => -4,
    ),
  );

  // Exported field_instance:
  // 'node-supplier_resource_feedback-field_technical_skills'.
  $field_instances['node-supplier_resource_feedback-field_technical_skills'] = array(
    'bundle' => 'supplier_resource_feedback',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'How good was the resource with his technical knowledge and know-how? If TA, does the resource do good job at grooming and ticket triaging?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'fivestar',
        'settings' => array(
          'expose' => TRUE,
          'style' => 'average',
          'text' => 'average',
          'widget' => array(
            'fivestar_widget' => NULL,
          ),
        ),
        'type' => 'fivestar_formatter_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_technical_skills',
    'label' => 'Technical Skills',
    'required' => 1,
    'settings' => array(
      'allow_clear' => 0,
      'allow_halfstar' => 1,
      'allow_ownvote' => 0,
      'allow_revote' => 0,
      'stars' => 5,
      'target' => 'none',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'fivestar',
      'settings' => array(
        'widget' => array(
          'fivestar_widget' => 'sites/all/modules/fivestar/widgets/oxygen/oxygen.css',
        ),
      ),
      'type' => 'stars',
      'weight' => -2,
    ),
  );

  // Exported field_instance:
  // 'node-supplier_resource_feedback-field_the_above_feedback_does_no'.
  $field_instances['node-supplier_resource_feedback-field_the_above_feedback_does_no'] = array(
    'bundle' => 'supplier_resource_feedback',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_the_above_feedback_does_no',
    'label' => 'The above feedback does not contain any Acquia confidential informationand can be shared with the supplier leadership.',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-supplier_resource_feedback-field_velocity'.
  $field_instances['node-supplier_resource_feedback-field_velocity'] = array(
    'bundle' => 'supplier_resource_feedback',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'How fast does the resource get stuff done?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'fivestar',
        'settings' => array(
          'expose' => TRUE,
          'style' => 'average',
          'text' => 'average',
          'widget' => array(
            'fivestar_widget' => NULL,
          ),
        ),
        'type' => 'fivestar_formatter_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_velocity',
    'label' => 'Velocity',
    'required' => 1,
    'settings' => array(
      'allow_clear' => 0,
      'allow_halfstar' => 1,
      'allow_ownvote' => 0,
      'allow_revote' => 0,
      'stars' => 5,
      'target' => 'none',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'fivestar',
      'settings' => array(
        'widget' => array(
          'fivestar_widget' => 'sites/all/modules/fivestar/widgets/oxygen/oxygen.css',
        ),
      ),
      'type' => 'stars',
      'weight' => -1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Accepted for Current Project');
  t('Additional Notes');
  t('Attention to detail');
  t('Availability');
  t('Communication');
  t('Describe your overall experience with the supplier as a PM on this project.');
  t('Did the supplier do a good job in defining scope, preventing scope creep, handling Change Requests, etc');
  t('Did the supplier do their due deligence and come up with the right estimates? Were the estimates close to our estimates? Did they follow our estimation process? Did they do the right POCs to increase confidence? Did they call out the right assumptions? Did they ask the right questions?');
  t('Did the supplier do their job without multiple followups? Was the supplier management (not individual resources) proactive in flagging their company holidays or change in staff (employees leaving etc)');
  t('Did the supplier have the right resources in a way that you did not have to compromise?');
  t('Does the doesn\'t take PTOs too often, or for too long especially for unreasonable reasons. Also implies the resource doesn\'t disappear from desk unannounced during project hours. The resounce is flexible to join calls late evening. ');
  t('Does the resource do a good job in explaining his thoughts, on calls, on tickets? Can he/she articulate their questions clearly?');
  t('Does the resource do the amount of work that justify the hours logged? Is the resource honest about his availability? Do the timesheets match the actual hours spent? Do the expense reports indicate the actual amounts spent?');
  t('Does the resource have good attention to detail? Does he ask the right questions and get this clarified? Does he ensure small things in tickets are not missed out?');
  t('Email Address');
  t('End Date');
  t('Estimation');
  t('Handling Scope');
  t('How fast does the resource get stuff done?');
  t('How good was the resource with his technical knowledge and know-how? If TA, does the resource do good job at grooming and ticket triaging?');
  t('How quick was the supplier in responding to the staffing requests? Did the supplier prioritize and expedit our request?');
  t('In Budget');
  t('In Time');
  t('Incident Details');
  t('Incident Severity');
  t('Incident Severity - 
1 - Minor incident - No impact on sprint
2 - Minor incident impacting sprint (Eg: Unplanned leave of 3 days)
3- Moderate incident impacting multiple sprints (Eg: Unplanned leave of 5 days or more)
4 - Critical Incident (Eg: Any security incident, any escalation from customer, anything affecting project delivery or timelines or launch)
5 - Disastrous - Causing (or potentially causing) loss of customer, someone getting fired, bad PR');
  t('Integrity');
  t('Interviewed for Project');
  t('Mavenlink Workspace ID');
  t('Overall Rating');
  t('Overall Rating for resource on this project');
  t('Overall Rating for supplier on this project');
  t('Proactiveness and Deligence in staffing');
  t('Project');
  t('Project Manager');
  t('Project(s) Involved');
  t('Resource Availability');
  t('Resource Name');
  t('Staffing Sheet Link');
  t('Start Date');
  t('Summary of your evaluation. 
What was good with the candidate?
What was bad?
Why did you approve of or reject the candidate?
Any feedback to the candidate?');
  t('Supplier');
  t('Supplier Resource');
  t('Supplier Resource Company');
  t('Supplier Resource Rate');
  t('Supplier Resource Role');
  t('Supplier Resource(s) Involved');
  t('Supplier(s) Involved');
  t('Technical Skills');
  t('The above feedback does not contain any Acquia confidential informationand can be shared with the supplier leadership.');
  t('Turn around time during staffing');
  t('Velocity');

  return $field_instances;
}
