<?php
/**
 * @file
 * spads_event_manager.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function spads_event_manager_default_rules_configuration() {
  $items = array();
  $items['rules_change_registration_status'] = entity_import('rules_config', '{ "rules_change_registration_status" : {
      "LABEL" : "Change Registration Status",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "registration" ],
      "ON" : [ "registration_insert" ],
      "IF" : [ { "data_is" : { "data" : [ "registration:count" ], "value" : "0" } } ],
      "DO" : [
        { "entity_fetch" : {
            "USING" : { "type" : "node", "id" : [ "registration:entity-id" ] },
            "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
          }
        }
      ]
    }
  }');
  return $items;
}
