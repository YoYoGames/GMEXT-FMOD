{
  "$GMExtension": "",
  "%Name": "GMFMODStudio",
  "androidactivityinject": "",
  "androidclassname": "",
  "androidcodeinjection": "",
  "androidinject": "",
  "androidmanifestinject": "",
  "androidPermissions": [],
  "androidProps": false,
  "androidsourcedir": "",
  "author": "",
  "classname": "",
  "copyToTargets": 194,
  "description": "",
  "exportToGame": true,
  "extensionVersion": "2.0.0",
  "files": [
    {
      "$GMExtensionFile": "v1",
      "%Name": "GMFMODStudio.ext",
      "constants": [],
      "copyToTargets": 194,
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
          "%Name": "fmod_studio_system_init",
          "argCount": 3,
          "args": [
            2,
            2,
            2
          ],
          "documentation": "@param {Real} max_channels\r\n@param {Real} studio_flags\r\n@param {Real} core_flags\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_system_init",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_studio_system_init",
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
          "documentation": "@param {String} filename\r\n@param {Real} flags\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
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
          "documentation": "@param {String} data\r\n@param {Real} flags\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
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
          "%Name": "fmod_studio_system_set_listener_attributes",
          "argCount": 4,
          "args": [
            2,
            2,
            2,
            2
          ],
          "documentation": "@param {Real} listener_index\r\n@param {Real} x\r\n@param {Real} y\r\n@param {Real} z\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_system_set_listener_attributes",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_studio_system_set_listener_attributes",
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
          "%Name": "__fmod_studio_system_get_core_system",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_system_get_core_system",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_system_get_core_system",
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
          "%Name": "fmod_studio_system_set_callback",
          "argCount": 1,
          "args": [
            2
          ],
          "documentation": "@param {Real} callback_mask\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_system_set_callback",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_studio_system_set_callback",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_studio_system_get_user_data",
          "argCount": 0,
          "args": [],
          "documentation": "@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_system_get_user_data",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_studio_system_get_user_data",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_studio_system_set_user_data",
          "argCount": 1,
          "args": [
            2
          ],
          "documentation": "@param {Real} user_data\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_system_set_user_data",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_studio_system_set_user_data",
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
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
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
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
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
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
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
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
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
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
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
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
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
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
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
          "%Name": "__fmod_studio_event_instance_get_channel_group",
          "argCount": 4,
          "args": [
            1,
            2,
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_event_instance_get_channel_group",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_event_instance_get_channel_group",
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
          "%Name": "__fmod_studio_bus_get_channel_group",
          "argCount": 4,
          "args": [
            1,
            2,
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_studio_bus_get_channel_group",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_studio_bus_get_channel_group",
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
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
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
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
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
          "%Name": "GMFMODStudio.so",
          "name": "GMFMODStudio.so",
          "resourceType": "GMProxyFile",
          "resourceVersion": "2.0",
          "TargetMask": 7
        }
      ],
      "resourceType": "GMExtensionFile",
      "resourceVersion": "2.0",
      "uncompress": false,
      "usesRunnerInterface": true
    },
    {
      "$GMExtensionFile": "v1",
      "%Name": "libfmodstudioL.dylib",
      "constants": [],
      "copyToTargets": 2,
      "filename": "libfmodstudioL.dylib",
      "final": "",
      "functions": [
        {
          "$GMExtensionFunction": "",
          "%Name": "__libfmodstudioL_load__",
          "argCount": 0,
          "args": [],
          "documentation": "",
          "externalName": "__libfmodstudioL_load__",
          "help": "",
          "hidden": true,
          "kind": 1,
          "name": "__libfmodstudioL_load__",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 1
        }
      ],
      "init": "__libfmodstudioL_load__",
      "kind": 1,
      "name": "libfmodstudioL.dylib",
      "origname": "",
      "ProxyFiles": [],
      "resourceType": "GMExtensionFile",
      "resourceVersion": "2.0",
      "uncompress": false,
      "usesRunnerInterface": false
    },
    {
      "$GMExtensionFile": "v1",
      "%Name": "",
      "constants": [],
      "copyToTargets": -1,
      "filename": "fmodstudioL.dll",
      "final": "",
      "functions": [],
      "init": "",
      "kind": 1,
      "name": "",
      "origname": "",
      "ProxyFiles": [],
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
  "iosProps": false,
  "iosSystemFrameworkEntries": [],
  "iosThirdPartyFrameworkEntries": [],
  "license": "",
  "maccompilerflags": "",
  "maclinkerflags": "",
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
      "defaultValue": "B8950C7EAF808ACA1F8408379BA302AAAE0C8EA5F5F36CEE7820BF4EE57EADC9",
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
      "defaultValue": "1DDE5FB8E34281DC50A34F8596826773FC15367FBD3A8DCC79D5EF37D3547D18",
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
      "defaultValue": "F52A49374178C146398493F6BEDB037089358189C7C03AE4E372D3989F5CCDA5",
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