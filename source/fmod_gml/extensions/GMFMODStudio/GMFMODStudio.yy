{
  "$GMExtension": "",
  "%Name": "GMFMODStudio",
  "androidactivityinject": "",
  "androidclassname": "GMFMODStudio",
  "androidcodeinjection": "",
  "androidinject": "",
  "androidmanifestinject": "",
  "androidPermissions": [],
  "androidProps": true,
  "androidsourcedir": "",
  "author": "",
  "classname": "GMFMODStudio",
  "copyToTargets": 3026418953887940814,
  "description": "",
  "exportToGame": true,
  "extensionVersion": "2.0.0",
  "files": [
    {
      "$GMExtensionFile": "v1",
      "%Name": "GMFMODStudio.ext",
      "constants": [],
      "copyToTargets": 3026418953887940814,
      "filename": "GMFMODStudio.ext",
      "final": "fmod_studio_shutdown",
      "functions": [
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_system_create",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_system_create",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_system_create",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_system_init",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_system_init",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_system_init",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_studio_system_release",
          "argCount": 0,
          "args": [],
          "documentation": "@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_system_release",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_studio_system_release",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_studio_system_update",
          "argCount": 0,
          "args": [],
          "documentation": "@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_system_update",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_studio_system_update",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_studio_system_flush_commands",
          "argCount": 0,
          "args": [],
          "documentation": "@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_system_flush_commands",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_studio_system_flush_commands",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_studio_system_flush_sample_loading",
          "argCount": 0,
          "args": [],
          "documentation": "@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_system_flush_sample_loading",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_studio_system_flush_sample_loading",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_system_load_bank_file",
          "argCount": 4,
          "args": [
            1,
            2,
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_system_load_bank_file",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_system_load_bank_file",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_system_load_bank_memory",
          "argCount": 4,
          "args": [
            1,
            2,
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_system_load_bank_memory",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_system_load_bank_memory",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_studio_system_unload_all",
          "argCount": 0,
          "args": [],
          "documentation": "@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_system_unload_all",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_studio_system_unload_all",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_studio_system_get_bank_count",
          "argCount": 0,
          "args": [],
          "documentation": "@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_system_get_bank_count",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_studio_system_get_bank_count",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_system_get_bank_at",
          "argCount": 3,
          "args": [
            2,
            1,
            2
          ],
          "documentation": "@param {Real} index\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_system_get_bank_at",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_system_get_bank_at",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_system_get_bank",
          "argCount": 3,
          "args": [
            1,
            1,
            2
          ],
          "documentation": "@param {String} path\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_system_get_bank",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_system_get_bank",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_system_get_bank_by_id",
          "argCount": 3,
          "args": [
            1,
            1,
            2
          ],
          "documentation": "@param {String} str_guid\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_system_get_bank_by_id",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_system_get_bank_by_id",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_system_get_event",
          "argCount": 3,
          "args": [
            1,
            1,
            2
          ],
          "documentation": "@param {String} path\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_system_get_event",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_system_get_event",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_system_create_event_instance",
          "argCount": 3,
          "args": [
            1,
            1,
            2
          ],
          "documentation": "@param {String} path\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_system_create_event_instance",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_system_create_event_instance",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_system_get_bus",
          "argCount": 3,
          "args": [
            1,
            1,
            2
          ],
          "documentation": "@param {String} path\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_system_get_bus",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_system_get_bus",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_system_get_master_bus",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_system_get_master_bus",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_system_get_master_bus",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_system_get_bus_by_id",
          "argCount": 3,
          "args": [
            1,
            1,
            2
          ],
          "documentation": "@param {String} str_guid\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_system_get_bus_by_id",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_system_get_bus_by_id",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_system_get_vca",
          "argCount": 3,
          "args": [
            1,
            1,
            2
          ],
          "documentation": "@param {String} path\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_system_get_vca",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_system_get_vca",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_system_get_vca_by_id",
          "argCount": 3,
          "args": [
            1,
            1,
            2
          ],
          "documentation": "@param {String} str_guid\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_system_get_vca_by_id",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_system_get_vca_by_id",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_system_set_listener_attributes",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_system_set_listener_attributes",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_system_set_listener_attributes",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_studio_system_set_listener_weight",
          "argCount": 2,
          "args": [
            2,
            2
          ],
          "documentation": "@param {Real} listener_index\r\n@param {Real} weight\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_system_set_listener_weight",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_studio_system_set_listener_weight",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_studio_system_get_num_listeners",
          "argCount": 0,
          "args": [],
          "documentation": "@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_system_get_num_listeners",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_studio_system_get_num_listeners",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_system_get_listener_attributes",
          "argCount": 3,
          "args": [
            2,
            1,
            2
          ],
          "documentation": "@param {Real} listener_index\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_system_get_listener_attributes",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_system_get_listener_attributes",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_studio_system_get_listener_weight",
          "argCount": 1,
          "args": [
            2
          ],
          "documentation": "@param {Real} listener_index\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_system_get_listener_weight",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_studio_system_get_listener_weight",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_studio_system_set_parameter_by_name",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {String} name\r\n@param {Real} value\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_system_set_parameter_by_name",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_studio_system_set_parameter_by_name",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_studio_system_get_parameter_by_name",
          "argCount": 1,
          "args": [
            1
          ],
          "documentation": "@param {String} name\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_system_get_parameter_by_name",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_studio_system_get_parameter_by_name",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_system_get_core_system_ptr",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_system_get_core_system_ptr",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_system_get_core_system_ptr",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_last_result",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_last_result",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_last_result",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_studio_shutdown",
          "argCount": 0,
          "args": [],
          "documentation": "@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_shutdown",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_studio_shutdown",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_studio_system_set_num_listeners",
          "argCount": 1,
          "args": [
            2
          ],
          "documentation": "@param {Real} count\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_system_set_num_listeners",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_studio_system_set_num_listeners",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_studio_system_lookup_id",
          "argCount": 1,
          "args": [
            1
          ],
          "documentation": "@param {String} path\r\n@returns {String}",
          "externalName": "__EXT_NATIVE__fmod_studio_system_lookup_id",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_studio_system_lookup_id",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 1
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_studio_system_lookup_path",
          "argCount": 1,
          "args": [
            1
          ],
          "documentation": "@param {String} str_guid\r\n@returns {String}",
          "externalName": "__EXT_NATIVE__fmod_studio_system_lookup_path",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_studio_system_lookup_path",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 1
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_system_get_event_by_id",
          "argCount": 3,
          "args": [
            1,
            1,
            2
          ],
          "documentation": "@param {String} id\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_system_get_event_by_id",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_system_get_event_by_id",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_studio_system_is_valid",
          "argCount": 0,
          "args": [],
          "documentation": "@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_system_is_valid",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_studio_system_is_valid",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_system_start_command_capture",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_system_start_command_capture",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_system_start_command_capture",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_studio_system_stop_command_capture",
          "argCount": 0,
          "args": [],
          "documentation": "@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_system_stop_command_capture",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_studio_system_stop_command_capture",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_system_load_command_replay",
          "argCount": 4,
          "args": [
            1,
            2,
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_system_load_command_replay",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_system_load_command_replay",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_system_get_sound_info",
          "argCount": 3,
          "args": [
            1,
            1,
            2
          ],
          "documentation": "@param {String} key\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_system_get_sound_info",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_system_get_sound_info",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_system_get_parameter_by_id",
          "argCount": 4,
          "args": [
            2,
            2,
            1,
            2
          ],
          "documentation": "@param {Real} id_data1\r\n@param {Real} id_data2\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_system_get_parameter_by_id",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_system_get_parameter_by_id",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_studio_system_set_parameter_by_id",
          "argCount": 4,
          "args": [
            2,
            2,
            2,
            2
          ],
          "documentation": "@param {Real} id_data1\r\n@param {Real} id_data2\r\n@param {Real} value\r\n@param {Real} ignore_seek_speed\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_system_set_parameter_by_id",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_studio_system_set_parameter_by_id",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_system_get_parameter_description_by_id",
          "argCount": 4,
          "args": [
            2,
            2,
            1,
            2
          ],
          "documentation": "@param {Real} id_data1\r\n@param {Real} id_data2\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_system_get_parameter_description_by_id",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_system_get_parameter_description_by_id",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_system_get_parameter_description_by_name",
          "argCount": 3,
          "args": [
            1,
            1,
            2
          ],
          "documentation": "@param {String} name\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_system_get_parameter_description_by_name",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_system_get_parameter_description_by_name",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_studio_system_get_parameter_description_count",
          "argCount": 0,
          "args": [],
          "documentation": "@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_system_get_parameter_description_count",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_studio_system_get_parameter_description_count",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_system_get_parameter_description_at",
          "argCount": 3,
          "args": [
            2,
            1,
            2
          ],
          "documentation": "@param {Real} index\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_system_get_parameter_description_at",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_system_get_parameter_description_at",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_studio_system_get_parameter_label_by_id",
          "argCount": 3,
          "args": [
            2,
            2,
            2
          ],
          "documentation": "@param {Real} id_data1\r\n@param {Real} id_data2\r\n@param {Real} label_index\r\n@returns {String}",
          "externalName": "__EXT_NATIVE__fmod_studio_system_get_parameter_label_by_id",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_studio_system_get_parameter_label_by_id",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 1
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_studio_system_get_parameter_label_by_name",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {String} name\r\n@param {Real} label_index\r\n@returns {String}",
          "externalName": "__EXT_NATIVE__fmod_studio_system_get_parameter_label_by_name",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_studio_system_get_parameter_label_by_name",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 1
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_studio_system_set_parameter_by_id_with_label",
          "argCount": 4,
          "args": [
            2,
            2,
            1,
            2
          ],
          "documentation": "@param {Real} id_data1\r\n@param {Real} id_data2\r\n@param {String} label\r\n@param {Real} ignore_seek_speed\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_system_set_parameter_by_id_with_label",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_studio_system_set_parameter_by_id_with_label",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_studio_system_set_parameter_by_name_with_label",
          "argCount": 3,
          "args": [
            1,
            1,
            2
          ],
          "documentation": "@param {String} name\r\n@param {String} label\r\n@param {Real} ignore_seek_speed\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_system_set_parameter_by_name_with_label",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_studio_system_set_parameter_by_name_with_label",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_system_get_cpu_usage",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_system_get_cpu_usage",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_system_get_cpu_usage",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_system_get_buffer_usage",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_system_get_buffer_usage",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_system_get_buffer_usage",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_studio_system_reset_buffer_usage",
          "argCount": 0,
          "args": [],
          "documentation": "@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_system_reset_buffer_usage",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_studio_system_reset_buffer_usage",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_system_get_memory_usage",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_system_get_memory_usage",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_system_get_memory_usage",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_system_get_advanced_settings",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_system_get_advanced_settings",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_system_get_advanced_settings",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_system_set_advanced_settings",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_system_set_advanced_settings",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_system_set_advanced_settings",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_system_set_callback",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_system_set_callback",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_system_set_callback",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_system_get_user_data",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_system_get_user_data",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_system_get_user_data",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_system_set_user_data",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_system_set_user_data",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_system_set_user_data",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_bank_unload",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_bank_unload",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_bank_unload",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_bank_get_loading_state",
          "argCount": 4,
          "args": [
            1,
            2,
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_bank_get_loading_state",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_bank_get_loading_state",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_bank_get_sample_loading_state",
          "argCount": 4,
          "args": [
            1,
            2,
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_bank_get_sample_loading_state",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_bank_get_sample_loading_state",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_bank_get_path",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {String}",
          "externalName": "__EXT_NATIVE__fmod_studio_bank_get_path",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_bank_get_path",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 1
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_bank_get_parent_studio_system",
          "argCount": 4,
          "args": [
            1,
            2,
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_bank_get_parent_studio_system",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_bank_get_parent_studio_system",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_bank_get_event_count",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_bank_get_event_count",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_bank_get_event_count",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_bank_get_event_at",
          "argCount": 4,
          "args": [
            1,
            2,
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_bank_get_event_at",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_bank_get_event_at",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_bank_get_bus_count",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_bank_get_bus_count",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_bank_get_bus_count",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_bank_get_bus_at",
          "argCount": 4,
          "args": [
            1,
            2,
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_bank_get_bus_at",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_bank_get_bus_at",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_bank_get_vca_count",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_bank_get_vca_count",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_bank_get_vca_count",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_bank_get_vca_at",
          "argCount": 4,
          "args": [
            1,
            2,
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_bank_get_vca_at",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_bank_get_vca_at",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_bank_get_string_count",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_bank_get_string_count",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_bank_get_string_count",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_bank_get_id",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {String}",
          "externalName": "__EXT_NATIVE__fmod_studio_bank_get_id",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_bank_get_id",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 1
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_bank_is_valid",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_bank_is_valid",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_bank_is_valid",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_bank_get_string_info",
          "argCount": 4,
          "args": [
            1,
            2,
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_bank_get_string_info",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_bank_get_string_info",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_bank_load_sample_data",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_bank_load_sample_data",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_bank_load_sample_data",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_bank_unload_sample_data",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_bank_unload_sample_data",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_bank_unload_sample_data",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_bank_get_user_data",
          "argCount": 4,
          "args": [
            1,
            2,
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_bank_get_user_data",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_bank_get_user_data",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_bank_set_user_data",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_bank_set_user_data",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_bank_set_user_data",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_description_get_path",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {String}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_description_get_path",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_description_get_path",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 1
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_description_create_instance",
          "argCount": 4,
          "args": [
            1,
            2,
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_description_create_instance",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_description_create_instance",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_description_get_instance_count",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_description_get_instance_count",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_description_get_instance_count",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_description_get_instance_at",
          "argCount": 4,
          "args": [
            1,
            2,
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_description_get_instance_at",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_description_get_instance_at",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_description_is_snapshot",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_description_is_snapshot",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_description_is_snapshot",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_description_is_one_shot",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_description_is_one_shot",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_description_is_one_shot",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_description_has_sustain_point",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_description_has_sustain_point",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_description_has_sustain_point",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_description_get_length",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_description_get_length",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_description_get_length",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_description_get_parameter_count",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_description_get_parameter_count",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_description_get_parameter_count",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_description_release_all_instances",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_description_release_all_instances",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_description_release_all_instances",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_description_get_parameter_description_by_name",
          "argCount": 4,
          "args": [
            1,
            2,
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_description_get_parameter_description_by_name",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_description_get_parameter_description_by_name",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_description_load_sample_data",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_description_load_sample_data",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_description_load_sample_data",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_description_is_valid",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_description_is_valid",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_description_is_valid",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_description_is_3d",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_description_is_3d",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_description_is_3d",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_description_is_stream",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_description_is_stream",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_description_is_stream",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_description_is_doppler_enabled",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_description_is_doppler_enabled",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_description_is_doppler_enabled",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_description_get_id",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {String}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_description_get_id",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_description_get_id",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 1
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_description_get_min_max_distance",
          "argCount": 4,
          "args": [
            1,
            2,
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_description_get_min_max_distance",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_description_get_min_max_distance",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_description_get_sound_size",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_description_get_sound_size",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_description_get_sound_size",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_description_get_sample_loading_state",
          "argCount": 4,
          "args": [
            1,
            2,
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_description_get_sample_loading_state",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_description_get_sample_loading_state",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_description_unload_sample_data",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_description_unload_sample_data",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_description_unload_sample_data",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_description_set_callback",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_description_set_callback",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_description_set_callback",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_description_get_user_data",
          "argCount": 4,
          "args": [
            1,
            2,
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_description_get_user_data",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_description_get_user_data",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_description_set_user_data",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_description_set_user_data",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_description_set_user_data",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_description_get_user_property",
          "argCount": 4,
          "args": [
            1,
            2,
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_description_get_user_property",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_description_get_user_property",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_description_get_user_property_at",
          "argCount": 4,
          "args": [
            1,
            2,
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_description_get_user_property_at",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_description_get_user_property_at",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_description_get_user_property_count",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_description_get_user_property_count",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_description_get_user_property_count",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_description_get_parameter_description_by_id",
          "argCount": 4,
          "args": [
            1,
            2,
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_description_get_parameter_description_by_id",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_description_get_parameter_description_by_id",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_description_get_parameter_description_at",
          "argCount": 4,
          "args": [
            1,
            2,
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_description_get_parameter_description_at",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_description_get_parameter_description_at",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_description_get_parameter_label_by_id",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {String}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_description_get_parameter_label_by_id",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_description_get_parameter_label_by_id",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 1
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_description_get_parameter_label_at",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {String}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_description_get_parameter_label_at",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_description_get_parameter_label_at",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 1
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_description_get_parameter_label_by_name",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {String}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_description_get_parameter_label_by_name",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_description_get_parameter_label_by_name",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 1
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_instance_start",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_instance_start",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_instance_start",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_instance_stop",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_instance_stop",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_instance_stop",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_instance_get_playback_state",
          "argCount": 4,
          "args": [
            1,
            2,
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_instance_get_playback_state",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_instance_get_playback_state",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_instance_get_paused",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_instance_get_paused",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_instance_get_paused",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_instance_set_paused",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_instance_set_paused",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_instance_set_paused",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_instance_get_timeline_position",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_instance_get_timeline_position",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_instance_get_timeline_position",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_instance_set_timeline_position",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_instance_set_timeline_position",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_instance_set_timeline_position",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_instance_keyoff",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_instance_keyoff",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_instance_keyoff",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_instance_get_volume",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_instance_get_volume",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_instance_get_volume",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_instance_set_volume",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_instance_set_volume",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_instance_set_volume",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_instance_get_pitch",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_instance_get_pitch",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_instance_get_pitch",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_instance_set_pitch",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_instance_set_pitch",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_instance_set_pitch",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_instance_set_parameter_by_name",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_instance_set_parameter_by_name",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_instance_set_parameter_by_name",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_instance_get_parameter_by_name",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_instance_get_parameter_by_name",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_instance_get_parameter_by_name",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_instance_get_parameter_count",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_instance_get_parameter_count",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_instance_get_parameter_count",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_instance_get_parameter_by_id",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_instance_get_parameter_by_id",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_instance_get_parameter_by_id",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_instance_set_parameter_by_id",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_instance_set_parameter_by_id",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_instance_set_parameter_by_id",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_instance_set_callback",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_instance_set_callback",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_instance_set_callback",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_instance_set_programmer_sound",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_instance_set_programmer_sound",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_instance_set_programmer_sound",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_instance_set_parameter_by_id_with_label",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_instance_set_parameter_by_id_with_label",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_instance_set_parameter_by_id_with_label",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_instance_set_parameter_by_name_with_label",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_instance_set_parameter_by_name_with_label",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_instance_set_parameter_by_name_with_label",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_instance_set_3d_attributes",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_instance_set_3d_attributes",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_instance_set_3d_attributes",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_instance_get_3d_attributes",
          "argCount": 4,
          "args": [
            1,
            2,
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_instance_get_3d_attributes",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_instance_get_3d_attributes",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_instance_get_min_max_distance",
          "argCount": 4,
          "args": [
            1,
            2,
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_instance_get_min_max_distance",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_instance_get_min_max_distance",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_instance_get_listener_mask",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_instance_get_listener_mask",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_instance_get_listener_mask",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_instance_set_listener_mask",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_instance_set_listener_mask",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_instance_set_listener_mask",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_instance_get_reverb_level",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_instance_get_reverb_level",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_instance_get_reverb_level",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_instance_set_reverb_level",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_instance_set_reverb_level",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_instance_set_reverb_level",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_instance_get_property",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_instance_get_property",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_instance_get_property",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_instance_set_property",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_instance_set_property",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_instance_set_property",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_instance_get_user_data",
          "argCount": 4,
          "args": [
            1,
            2,
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_instance_get_user_data",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_instance_get_user_data",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_instance_set_user_data",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_instance_set_user_data",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_instance_set_user_data",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_instance_is_valid",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_instance_is_valid",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_instance_is_valid",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_instance_is_virtual",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_instance_is_virtual",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_instance_is_virtual",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_instance_get_channel_group_ptr",
          "argCount": 4,
          "args": [
            1,
            2,
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_instance_get_channel_group_ptr",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_instance_get_channel_group_ptr",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_instance_get_cpu_usage",
          "argCount": 4,
          "args": [
            1,
            2,
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_instance_get_cpu_usage",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_instance_get_cpu_usage",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_instance_get_memory_usage",
          "argCount": 4,
          "args": [
            1,
            2,
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_instance_get_memory_usage",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_instance_get_memory_usage",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_instance_get_description",
          "argCount": 4,
          "args": [
            1,
            2,
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_instance_get_description",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_instance_get_description",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_event_instance_release",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_instance_release",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_instance_release",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_bus_get_path",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {String}",
          "externalName": "__EXT_NATIVE__fmod_studio_bus_get_path",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_bus_get_path",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 1
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_bus_get_volume",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_bus_get_volume",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_bus_get_volume",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_bus_set_volume",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_bus_set_volume",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_bus_set_volume",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_bus_get_paused",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_bus_get_paused",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_bus_get_paused",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_bus_set_paused",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_bus_set_paused",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_bus_set_paused",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_bus_stop_all_events",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_bus_stop_all_events",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_bus_stop_all_events",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_bus_get_master_bus",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_bus_get_master_bus",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_bus_get_master_bus",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_bus_get_id",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {String}",
          "externalName": "__EXT_NATIVE__fmod_studio_bus_get_id",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_bus_get_id",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 1
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_bus_is_valid",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_bus_is_valid",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_bus_is_valid",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_bus_get_channel_group_ptr",
          "argCount": 4,
          "args": [
            1,
            2,
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_bus_get_channel_group_ptr",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_bus_get_channel_group_ptr",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_bus_lock_channel_group",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_bus_lock_channel_group",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_bus_lock_channel_group",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_bus_unlock_channel_group",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_bus_unlock_channel_group",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_bus_unlock_channel_group",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_bus_get_cpu_usage",
          "argCount": 4,
          "args": [
            1,
            2,
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_bus_get_cpu_usage",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_bus_get_cpu_usage",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_bus_get_memory_usage",
          "argCount": 4,
          "args": [
            1,
            2,
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_bus_get_memory_usage",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_bus_get_memory_usage",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_bus_get_mute",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_bus_get_mute",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_bus_get_mute",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_bus_set_mute",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_bus_set_mute",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_bus_set_mute",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_bus_get_port_index",
          "argCount": 4,
          "args": [
            1,
            2,
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_bus_get_port_index",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_bus_get_port_index",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_bus_set_port_index",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_bus_set_port_index",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_bus_set_port_index",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_vca_get_path",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {String}",
          "externalName": "__EXT_NATIVE__fmod_studio_vca_get_path",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_vca_get_path",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 1
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_vca_get_volume",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_vca_get_volume",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_vca_get_volume",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_vca_set_volume",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_vca_set_volume",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_vca_set_volume",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_command_replay_get_playback_state",
          "argCount": 4,
          "args": [
            1,
            2,
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_command_replay_get_playback_state",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_command_replay_get_playback_state",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_command_replay_get_current_command",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_command_replay_get_current_command",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_command_replay_get_current_command",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_command_replay_release",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_command_replay_release",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_command_replay_release",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_command_replay_get_command_count",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_command_replay_get_command_count",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_command_replay_get_command_count",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_command_replay_get_length",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_command_replay_get_length",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_command_replay_get_length",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_command_replay_get_system_object",
          "argCount": 4,
          "args": [
            1,
            2,
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_command_replay_get_system_object",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_command_replay_get_system_object",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_command_replay_is_valid",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_command_replay_is_valid",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_command_replay_is_valid",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_command_replay_get_command_info",
          "argCount": 4,
          "args": [
            1,
            2,
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_command_replay_get_command_info",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_command_replay_get_command_info",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_command_replay_get_command_string",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {String}",
          "externalName": "__EXT_NATIVE__fmod_studio_command_replay_get_command_string",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_command_replay_get_command_string",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 1
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_command_replay_get_command_at_time",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_command_replay_get_command_at_time",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_command_replay_get_command_at_time",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_command_replay_seek_to_command",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_command_replay_seek_to_command",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_command_replay_seek_to_command",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_command_replay_seek_to_time",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_command_replay_seek_to_time",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_command_replay_seek_to_time",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_command_replay_set_bank_path",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_command_replay_set_bank_path",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_command_replay_set_bank_path",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_command_replay_get_paused",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_command_replay_get_paused",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_command_replay_get_paused",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_command_replay_set_paused",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_command_replay_set_paused",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_command_replay_set_paused",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_command_replay_start",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_command_replay_start",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_command_replay_start",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_command_replay_stop",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_command_replay_stop",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_command_replay_stop",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_command_replay_get_user_data",
          "argCount": 4,
          "args": [
            1,
            2,
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_command_replay_get_user_data",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_command_replay_get_user_data",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_command_replay_set_user_data",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_command_replay_set_user_data",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_command_replay_set_user_data",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_command_replay_set_frame_callback",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_command_replay_set_frame_callback",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_command_replay_set_frame_callback",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_command_replay_set_create_instance_callback",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_command_replay_set_create_instance_callback",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_command_replay_set_create_instance_callback",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_studio_command_replay_set_load_bank_callback",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_command_replay_set_load_bank_callback",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_command_replay_set_load_bank_callback",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__GMFMODStudio_invocation_handler",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _buffer_ptr\r\n@param {Real} _buffer_size",
          "externalName": "__EXT_NATIVE__GMFMODStudio_invocation_handler",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__GMFMODStudio_invocation_handler",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__GMFMODStudio_queue_buffer",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _buffer_ptr\r\n@param {Real} _buffer_size",
          "externalName": "__EXT_NATIVE__GMFMODStudio_queue_buffer",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__GMFMODStudio_queue_buffer",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        }
      ],
      "init": "",
      "kind": 1,
      "name": "GMFMODStudio.ext",
      "origname": "",
      "ProxyFiles": [
        {
          "$GMProxyFile": "",
          "%Name": "libGMFMODStudio.dylib",
          "name": "libGMFMODStudio.dylib",
          "resourceType": "GMProxyFile",
          "resourceVersion": "2.0",
          "TargetMask": 1
        },
        {
          "$GMProxyFile": "",
          "%Name": "GMFMODStudio.dll",
          "name": "GMFMODStudio.dll",
          "resourceType": "GMProxyFile",
          "resourceVersion": "2.0",
          "TargetMask": 6
        },
        {
          "$GMProxyFile": "",
          "%Name": "libGMFMODStudio.so",
          "name": "libGMFMODStudio.so",
          "resourceType": "GMProxyFile",
          "resourceVersion": "2.0",
          "TargetMask": 7
        },
        {
          "$GMProxyFile": "",
          "%Name": "GMFMODStudio_ps4.prx",
          "name": "GMFMODStudio_ps4.prx",
          "resourceType": "GMProxyFile",
          "resourceVersion": "2.0",
          "TargetMask": 32
        },
        {
          "$GMProxyFile": "",
          "%Name": "GMFMODStudio_ps5.prx",
          "name": "GMFMODStudio_ps5.prx",
          "resourceType": "GMProxyFile",
          "resourceVersion": "2.0",
          "TargetMask": 59
        },
        {
          "$GMProxyFile": "",
          "%Name": "GMFMODStudio_xboxone.dll",
          "name": "GMFMODStudio_xboxone.dll",
          "resourceType": "GMProxyFile",
          "resourceVersion": "2.0",
          "TargetMask": 61
        },
        {
          "$GMProxyFile": "",
          "%Name": "GMFMODStudio_xboxseriesxs.dll",
          "name": "GMFMODStudio_xboxseriesxs.dll",
          "resourceType": "GMProxyFile",
          "resourceVersion": "2.0",
          "TargetMask": 61
        },
        {
          "$GMProxyFile": "",
          "%Name": "GMFMODStudio.nro",
          "name": "GMFMODStudio.nro",
          "resourceType": "GMProxyFile",
          "resourceVersion": "2.0",
          "TargetMask": 57
        },
        {
          "$GMProxyFile": "",
          "%Name": "GMFMODStudio.nrr",
          "name": "GMFMODStudio.nrr",
          "resourceType": "GMProxyFile",
          "resourceVersion": "2.0",
          "TargetMask": 57
        },
        {
          "$GMProxyFile": "",
          "%Name": "GMFMODStudio.nrs",
          "name": "GMFMODStudio.nrs",
          "resourceType": "GMProxyFile",
          "resourceVersion": "2.0",
          "TargetMask": 57
        }
      ],
      "resourceType": "GMExtensionFile",
      "resourceVersion": "2.0",
      "uncompress": false,
      "usesRunnerInterface": true
    },
    {
      "$GMExtensionFile": "v1",
      "%Name": "libfmodstudio.dylib",
      "constants": [],
      "copyToTargets": 2882303765812084738,
      "filename": "libfmodstudio.dylib",
      "final": "",
      "functions": [
        {
          "$GMExtensionFunction": "",
          "%Name": "__libfmodstudio_load__",
          "argCount": 0,
          "args": [],
          "documentation": "",
          "externalName": "__libfmodstudio_load__",
          "help": "",
          "hidden": true,
          "kind": 1,
          "name": "__libfmodstudio_load__",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 1
        }
      ],
      "init": "__libfmodstudio_load__",
      "kind": 1,
      "name": "libfmodstudio.dylib",
      "origname": "",
      "ProxyFiles": [
        {
          "$GMProxyFile": "",
          "%Name": "libfmodstudio.prx",
          "name": "libfmodstudio.prx",
          "resourceType": "GMProxyFile",
          "resourceVersion": "2.0",
          "TargetMask": 32
        },
        {
          "$GMProxyFile": "",
          "%Name": "libfmodstudio.prx",
          "name": "libfmodstudio.prx",
          "resourceType": "GMProxyFile",
          "resourceVersion": "2.0",
          "TargetMask": 59
        },
        {
          "$GMProxyFile": "",
          "%Name": "fmodstudio.dll",
          "name": "fmodstudio.dll",
          "resourceType": "GMProxyFile",
          "resourceVersion": "2.0",
          "TargetMask": 61
        }
      ],
      "resourceType": "GMExtensionFile",
      "resourceVersion": "2.0",
      "uncompress": false,
      "usesRunnerInterface": false
    }
  ],
  "gradleinject": "",
  "hasConvertedCodeInjection": true,
  "helpfile": "",
  "HTML5CodeInjection": "",
  "html5Props": false,
  "IncludedResources": [],
  "installdir": "",
  "iosCocoaPodDependencies": "",
  "iosCocoaPods": "",
  "ioscodeinjection": "",
  "iosdelegatename": "",
  "iosplistinject": "\r\n\r\n\r\n\r\n",
  "iosProps": true,
  "iosSystemFrameworkEntries": [],
  "iosThirdPartyFrameworkEntries": [
    {
      "$GMExtensionFrameworkEntry": "",
      "%Name": "GMFMODStudio.xcframework",
      "embed": 0,
      "name": "GMFMODStudio.xcframework",
      "resourceType": "GMExtensionFrameworkEntry",
      "resourceVersion": "2.0",
      "weakReference": false
    }
  ],
  "license": "",
  "maccompilerflags": "",
  "maclinkerflags": "-ObjC",
  "macsourcedir": "",
  "name": "GMFMODStudio",
  "options": [
    {
      "$GMExtensionOption": "",
      "%Name": "__extOptLabel1",
      "defaultValue": "DESKTOP:",
      "description": "",
      "displayName": "",
      "exportToINI": false,
      "extensionId": null,
      "guid": "c0776b59-69ea-4d8b-866f-a9d8696e9c6e",
      "hidden": false,
      "listItems": [],
      "name": "__extOptLabel1",
      "optType": 5,
      "resourceType": "GMExtensionOption",
      "resourceVersion": "2.0"
    },
    {
      "$GMExtensionOption": "",
      "%Name": "winSdkPath",
      "defaultValue": "../fmod_sdk/FMOD Studio API Windows",
      "description": "This is the path to the folder containing the \u0022api\u0022 subfolder.",
      "displayName": "Windows SDK",
      "exportToINI": true,
      "extensionId": null,
      "guid": "c240eb44-eaa5-4d21-a2be-80f35a322a2e",
      "hidden": false,
      "listItems": [],
      "name": "winSdkPath",
      "optType": 4,
      "resourceType": "GMExtensionOption",
      "resourceVersion": "2.0"
    },
    {
      "$GMExtensionOption": "",
      "%Name": "macosSdkPath",
      "defaultValue": "../fmod_sdk/FMOD Studio API macOS",
      "description": "This is the path to the folder containing the \u0022api\u0022 subfolder.",
      "displayName": "macOS SDK",
      "exportToINI": false,
      "extensionId": null,
      "guid": "ec47c83e-b052-466f-8aa1-edd949bbf330",
      "hidden": false,
      "listItems": [],
      "name": "macosSdkPath",
      "optType": 4,
      "resourceType": "GMExtensionOption",
      "resourceVersion": "2.0"
    },
    {
      "$GMExtensionOption": "",
      "%Name": "linuxSdkPath",
      "defaultValue": "../fmod_sdk/FMOD Studio API Linux",
      "description": "This is the path to the folder containing the \u0022api\u0022 subfolder.",
      "displayName": "Linux SDK",
      "exportToINI": true,
      "extensionId": null,
      "guid": "e9bd6bb0-0737-4b51-ba36-9b095dc6a450",
      "hidden": false,
      "listItems": [],
      "name": "linuxSdkPath",
      "optType": 4,
      "resourceType": "GMExtensionOption",
      "resourceVersion": "2.0"
    },
    {
      "$GMExtensionOption": "",
      "%Name": "__extOptLabel2",
      "defaultValue": "MOBILE:",
      "description": "",
      "displayName": "",
      "exportToINI": false,
      "extensionId": null,
      "guid": "25e96bf8-ac90-4216-84b5-e7d22e6f4b7b",
      "hidden": false,
      "listItems": [],
      "name": "__extOptLabel2",
      "optType": 5,
      "resourceType": "GMExtensionOption",
      "resourceVersion": "2.0"
    },
    {
      "$GMExtensionOption": "",
      "%Name": "androidSdkPath",
      "defaultValue": "../fmod_sdk/FMOD Studio API Android",
      "description": "This is the path to the folder containing the \u0022api\u0022 subfolder.",
      "displayName": "Android SDK",
      "exportToINI": false,
      "extensionId": null,
      "guid": "624e9199-32c2-40ff-b9f7-9898d5f94f24",
      "hidden": false,
      "listItems": [],
      "name": "androidSdkPath",
      "optType": 4,
      "resourceType": "GMExtensionOption",
      "resourceVersion": "2.0"
    },
    {
      "$GMExtensionOption": "",
      "%Name": "iosSdkPath",
      "defaultValue": "../fmod_sdk/FMOD Studio API iOS",
      "description": "This is the path to the folder containing the \u0022api\u0022 subfolder.",
      "displayName": "iOS SDK",
      "exportToINI": false,
      "extensionId": null,
      "guid": "7d3e9765-55ea-4305-be8e-72557084425d",
      "hidden": false,
      "listItems": [],
      "name": "iosSdkPath",
      "optType": 4,
      "resourceType": "GMExtensionOption",
      "resourceVersion": "2.0"
    },
    {
      "$GMExtensionOption": "",
      "%Name": "__extOptLabel3",
      "defaultValue": "CONSOLES:",
      "description": "",
      "displayName": "",
      "exportToINI": false,
      "extensionId": null,
      "guid": "109e65c2-3b6f-455a-8887-3f27a7afbd32",
      "hidden": false,
      "listItems": [],
      "name": "__extOptLabel3",
      "optType": 5,
      "resourceType": "GMExtensionOption",
      "resourceVersion": "2.0"
    },
    {
      "$GMExtensionOption": "",
      "%Name": "ps4SdkPath",
      "defaultValue": "../fmod_sdk/FMOD Studio API PS4",
      "description": "This is the path to the folder containing the \u0022api\u0022 subfolder.",
      "displayName": "Playstation 4 SDK",
      "exportToINI": false,
      "extensionId": null,
      "guid": "2a71bb1a-634b-4301-80a4-09782093ae95",
      "hidden": false,
      "listItems": [],
      "name": "ps4SdkPath",
      "optType": 4,
      "resourceType": "GMExtensionOption",
      "resourceVersion": "2.0"
    },
    {
      "$GMExtensionOption": "",
      "%Name": "ps5SdkPath",
      "defaultValue": "../fmod_sdk/FMOD Studio API PS5",
      "description": "This is the path to the folder containing the \u0022api\u0022 subfolder.",
      "displayName": "Playstation 5 SDK",
      "exportToINI": false,
      "extensionId": null,
      "guid": "f238e41b-4347-46e0-96a1-3f93f560bcb1",
      "hidden": false,
      "listItems": [],
      "name": "ps5SdkPath",
      "optType": 4,
      "resourceType": "GMExtensionOption",
      "resourceVersion": "2.0"
    },
    {
      "$GMExtensionOption": "",
      "%Name": "gdkSdkPath",
      "defaultValue": "../fmod_sdk/FMOD Studio API Game Core",
      "description": "This is the path to the folder containing the \u0022api\u0022 subfolder.",
      "displayName": "GDK SDK",
      "exportToINI": false,
      "extensionId": null,
      "guid": "ac57d9f7-612a-491b-9bab-bf1b6f2bb0b3",
      "hidden": false,
      "listItems": [],
      "name": "gdkSdkPath",
      "optType": 4,
      "resourceType": "GMExtensionOption",
      "resourceVersion": "2.0"
    },
    {
      "$GMExtensionOption": "",
      "%Name": "switchSdkPath",
      "defaultValue": "../fmod_sdk/FMOD Studio API Switch",
      "description": "This is the path to the folder containing the \u0022api\u0022 subfolder.",
      "displayName": "Switch SDK",
      "exportToINI": false,
      "extensionId": null,
      "guid": "5b13422c-a1af-449c-969d-600fa429f5b0",
      "hidden": false,
      "listItems": [],
      "name": "switchSdkPath",
      "optType": 4,
      "resourceType": "GMExtensionOption",
      "resourceVersion": "2.0"
    },
    {
      "$GMExtensionOption": "",
      "%Name": "__extOptLabel",
      "defaultValue": "EXTRA OPTIONS",
      "description": "",
      "displayName": "",
      "exportToINI": false,
      "extensionId": null,
      "guid": "53060546-eb61-4aa7-9469-3c390938931b",
      "hidden": false,
      "listItems": [],
      "name": "__extOptLabel",
      "optType": 5,
      "resourceType": "GMExtensionOption",
      "resourceVersion": "2.0"
    },
    {
      "$GMExtensionOption": "",
      "%Name": "logLevel",
      "defaultValue": "1",
      "description": "The log level to be used by the script file.\r\n0: Show only errors\r\n1: Show errors and warnings (recommended)\r\n2: Show everything (use before submitting a bug)",
      "displayName": "Log Level",
      "exportToINI": false,
      "extensionId": null,
      "guid": "17944670-aa13-4480-81a6-c33f6f47ee06",
      "hidden": false,
      "listItems": [
        "0",
        "1",
        "2"
      ],
      "name": "logLevel",
      "optType": 6,
      "resourceType": "GMExtensionOption",
      "resourceVersion": "2.0"
    },
    {
      "$GMExtensionOption": "",
      "%Name": "winSdkHash",
      "defaultValue": "85364E241FC04BD4C4EEA93B9365BA56F37AF2F1721E9413F9A36A6CFFA6D44B",
      "description": "",
      "displayName": "",
      "exportToINI": false,
      "extensionId": null,
      "guid": "229af92f-2638-448b-b067-8d4165ee78b6",
      "hidden": true,
      "listItems": [],
      "name": "winSdkHash",
      "optType": 2,
      "resourceType": "GMExtensionOption",
      "resourceVersion": "2.0"
    },
    {
      "$GMExtensionOption": "",
      "%Name": "macosSdkHash",
      "defaultValue": "DEBFD45D958833F9747A722C8F997E2C07DBD9FD79F2DE35B1D21D5C15EAEA4B",
      "description": "",
      "displayName": "",
      "exportToINI": false,
      "extensionId": null,
      "guid": "27075239-315e-4762-b83c-1cd4e416ce24",
      "hidden": true,
      "listItems": [],
      "name": "macosSdkHash",
      "optType": 2,
      "resourceType": "GMExtensionOption",
      "resourceVersion": "2.0"
    },
    {
      "$GMExtensionOption": "",
      "%Name": "linuxSdkHash",
      "defaultValue": "CC7A86FD2B53028BE8974B9F968040DCF32528BAC9EB52C448EA0F66C842712E",
      "description": "",
      "displayName": "",
      "exportToINI": false,
      "extensionId": null,
      "guid": "2c8fa159-353c-4b9a-b617-95a2f1831d30",
      "hidden": true,
      "listItems": [],
      "name": "linuxSdkHash",
      "optType": 2,
      "resourceType": "GMExtensionOption",
      "resourceVersion": "2.0"
    },
    {
      "$GMExtensionOption": "",
      "%Name": "androidSdkHash",
      "defaultValue": "3B832388B360F29F543652CFA786CD9DDE00D1E1960678C999253F7FDDFED9F8",
      "description": "",
      "displayName": "",
      "exportToINI": false,
      "extensionId": null,
      "guid": "6a233004-87e1-4a09-96bf-2f47815eabd0",
      "hidden": true,
      "listItems": [],
      "name": "androidSdkHash",
      "optType": 2,
      "resourceType": "GMExtensionOption",
      "resourceVersion": "2.0"
    },
    {
      "$GMExtensionOption": "",
      "%Name": "iosSdkHash",
      "defaultValue": "93C60A9EC7AF616A438E657B178FBED11905A5940E1B397E5E2B5CD728744861",
      "description": "",
      "displayName": "",
      "exportToINI": false,
      "extensionId": null,
      "guid": "1bcb8e47-ef48-424f-bd9e-5cff4818f830",
      "hidden": true,
      "listItems": [],
      "name": "iosSdkHash",
      "optType": 2,
      "resourceType": "GMExtensionOption",
      "resourceVersion": "2.0"
    },
    {
      "$GMExtensionOption": "",
      "%Name": "ps4SdkHash",
      "defaultValue": "984C6ADC754D5B2A2DAD31F26912C6036DABD904E8E830125A341D0810CA5D02",
      "description": "",
      "displayName": "",
      "exportToINI": false,
      "extensionId": null,
      "guid": "1580159c-ae96-418a-abf1-a0656aa06522",
      "hidden": true,
      "listItems": [],
      "name": "ps4SdkHash",
      "optType": 2,
      "resourceType": "GMExtensionOption",
      "resourceVersion": "2.0"
    },
    {
      "$GMExtensionOption": "",
      "%Name": "ps5SdkHash",
      "defaultValue": "5BF0465CA34535FD1D432A06F15A08F815B69299FB0128D81FC8249FCB1536E9",
      "description": "",
      "displayName": "",
      "exportToINI": false,
      "extensionId": null,
      "guid": "ad15e6bc-6fd6-4eaf-9a58-408c9f249f9e",
      "hidden": true,
      "listItems": [],
      "name": "ps5SdkHash",
      "optType": 2,
      "resourceType": "GMExtensionOption",
      "resourceVersion": "2.0"
    },
    {
      "$GMExtensionOption": "",
      "%Name": "xboxOneSdkHash",
      "defaultValue": "99383CB9F2CD3178B1AF1346477862345294A03E6EADB39001E46E360F78A52B",
      "description": "",
      "displayName": "",
      "exportToINI": false,
      "extensionId": null,
      "guid": "25db4c75-7ca6-49b6-9de3-42254423f431",
      "hidden": true,
      "listItems": [],
      "name": "xboxOneSdkHash",
      "optType": 2,
      "resourceType": "GMExtensionOption",
      "resourceVersion": "2.0"
    },
    {
      "$GMExtensionOption": "",
      "%Name": "xboxSeriesSdkHash",
      "defaultValue": "22138D594E04455CF07D751CFC8E856F5FF22C46AF2256BB71CD24D60A30688B",
      "description": "",
      "displayName": "",
      "exportToINI": false,
      "extensionId": null,
      "guid": "b8e6604a-9fd2-445b-8527-c8d9dc616956",
      "hidden": true,
      "listItems": [],
      "name": "xboxSeriesSdkHash",
      "optType": 2,
      "resourceType": "GMExtensionOption",
      "resourceVersion": "2.0"
    },
    {
      "$GMExtensionOption": "",
      "%Name": "switchSdkHash",
      "defaultValue": "3BA9A2DAA8E3606F8840D99D79F99D5381B03DB08601F762623B3B8E4DC86249",
      "description": "",
      "displayName": "",
      "exportToINI": false,
      "extensionId": null,
      "guid": "c0537170-0edf-4213-8d3f-0846ca6dfaff",
      "hidden": true,
      "listItems": [],
      "name": "switchSdkHash",
      "optType": 2,
      "resourceType": "GMExtensionOption",
      "resourceVersion": "2.0"
    },
    {
      "$GMExtensionOption": "",
      "%Name": "sdkVersion",
      "defaultValue": "2.03",
      "description": "",
      "displayName": "",
      "exportToINI": false,
      "extensionId": null,
      "guid": "e45afe5a-8dbe-4997-9777-96ce22800878",
      "hidden": true,
      "listItems": [],
      "name": "sdkVersion",
      "optType": 2,
      "resourceType": "GMExtensionOption",
      "resourceVersion": "2.0"
    },
    {
      "$GMExtensionOption": "",
      "%Name": "versionStable",
      "defaultValue": "2023.11.0.0",
      "description": "",
      "displayName": "",
      "exportToINI": false,
      "extensionId": null,
      "guid": "d0cffc73-7409-4199-b306-51d08cf08ec0",
      "hidden": true,
      "listItems": [],
      "name": "versionStable",
      "optType": 2,
      "resourceType": "GMExtensionOption",
      "resourceVersion": "2.0"
    },
    {
      "$GMExtensionOption": "",
      "%Name": "versionBeta",
      "defaultValue": "2023.1100.0.0",
      "description": "",
      "displayName": "",
      "exportToINI": false,
      "extensionId": null,
      "guid": "9bdf8da2-caa6-45fa-ba72-254d14bb46b0",
      "hidden": true,
      "listItems": [],
      "name": "versionBeta",
      "optType": 2,
      "resourceType": "GMExtensionOption",
      "resourceVersion": "2.0"
    },
    {
      "$GMExtensionOption": "",
      "%Name": "versionDev",
      "defaultValue": "9.9.1.611",
      "description": "",
      "displayName": "",
      "exportToINI": false,
      "extensionId": null,
      "guid": "8905ce00-143d-421f-ba72-ecdbd8cc11c1",
      "hidden": true,
      "listItems": [],
      "name": "versionDev",
      "optType": 2,
      "resourceType": "GMExtensionOption",
      "resourceVersion": "2.0"
    },
    {
      "$GMExtensionOption": "",
      "%Name": "versionLTS",
      "defaultValue": "2022.0.2.0",
      "description": "",
      "displayName": "",
      "exportToINI": false,
      "extensionId": null,
      "guid": "59fa5660-d82a-4495-9264-f081a1c969d5",
      "hidden": true,
      "listItems": [],
      "name": "versionLTS",
      "optType": 2,
      "resourceType": "GMExtensionOption",
      "resourceVersion": "2.0"
    },
    {
      "$GMExtensionOption": "",
      "%Name": "gmrtReady",
      "defaultValue": "True",
      "description": "",
      "displayName": "",
      "exportToINI": false,
      "extensionId": null,
      "guid": "a4199f52-f5e2-42bd-a398-b7cd8674b2c4",
      "hidden": true,
      "listItems": [],
      "name": "gmrtReady",
      "optType": 2,
      "resourceType": "GMExtensionOption",
      "resourceVersion": "2.0"
    }
  ],
  "optionsFile": "options.json",
  "packageId": "",
  "parent": {
    "name": "GMFMODStudio",
    "path": "folders/GMFMODStudio.yy"
  },
  "productId": "",
  "resourceType": "GMExtension",
  "resourceVersion": "2.0",
  "sourcedir": "",
  "supportedTargets": -1,
  "tvosclassname": "",
  "tvosCocoaPodDependencies": "",
  "tvosCocoaPods": "",
  "tvoscodeinjection": "",
  "tvosdelegatename": null,
  "tvosmaccompilerflags": "",
  "tvosmaclinkerflags": "",
  "tvosplistinject": "",
  "tvosProps": false,
  "tvosSystemFrameworkEntries": [],
  "tvosThirdPartyFrameworkEntries": []
}