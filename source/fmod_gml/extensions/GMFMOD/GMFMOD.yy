{
  "$GMExtension": "",
  "%Name": "GMFMOD",
  "androidactivityinject": null,
  "androidclassname": "GMFMOD",
  "androidcodeinjection": "\u003CYYIosPlist\u003E\r\n\r\n\u003Ckey\u003ENSMicrophoneUsageDescription\u003C/key\u003E\r\n\u003Cstring\u003E${YYEXTOPT_FMOD_iosMicAccessDesc}\u003C/string\u003E\r\n\r\n\u003C/YYIosPlist\u003E",
  "androidinject": null,
  "androidmanifestinject": null,
  "androidPermissions": [
    "android.permission.RECORD_AUDIO"
  ],
  "androidProps": true,
  "androidsourcedir": "",
  "author": "",
  "classname": "GMFMOD",
  "copyToTargets": -1,
  "description": "",
  "exportToGame": true,
  "extensionVersion": "0.0.1",
  "files": [
    {
      "$GMExtensionFile": "v1",
      "%Name": "",
      "constants": [],
      "copyToTargets": -1,
      "filename": "GMFMOD.ext",
      "final": "",
      "functions": [
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_channel_set_frequency",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_channel_set_frequency",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_channel_set_frequency",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_channel_get_frequency",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_channel_get_frequency",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_channel_get_frequency",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_channel_set_priority",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_channel_set_priority",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_channel_set_priority",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_channel_get_priority",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_channel_get_priority",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_channel_get_priority",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_channel_set_position",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_channel_set_position",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_channel_set_position",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_channel_get_position",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_channel_get_position",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_channel_get_position",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_channel_set_channel_group",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_channel_set_channel_group",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_channel_set_channel_group",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_channel_get_channel_group",
          "argCount": 4,
          "args": [
            1,
            2,
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_channel_get_channel_group",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_channel_get_channel_group",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_channel_set_loop_count",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_channel_set_loop_count",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_channel_set_loop_count",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_channel_get_loop_count",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_channel_get_loop_count",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_channel_get_loop_count",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_channel_set_loop_points",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_channel_set_loop_points",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_channel_set_loop_points",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_channel_is_virtual",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_channel_is_virtual",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_channel_is_virtual",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_channel_get_index",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_channel_get_index",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_channel_get_index",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_channel_get_current_sound",
          "argCount": 4,
          "args": [
            1,
            2,
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_channel_get_current_sound",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_channel_get_current_sound",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_channel_get_system_object",
          "argCount": 4,
          "args": [
            1,
            2,
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_channel_get_system_object",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_channel_get_system_object",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_system_create",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_system_create",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_system_create",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_system_init",
          "argCount": 2,
          "args": [
            2,
            2
          ],
          "documentation": "@param {Real} max_channels\r\n@param {Real} flags\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_system_init",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_system_init",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_system_release",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_system_release",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_system_release",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_system_close",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_system_close",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_system_close",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_system_update",
          "argCount": 0,
          "args": [],
          "documentation": "@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_system_update",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_system_update",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_system_get_channel",
          "argCount": 3,
          "args": [
            2,
            1,
            2
          ],
          "documentation": "@param {Real} index\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_system_get_channel",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_system_get_channel",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_system_get_master_channel_group",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_system_get_master_channel_group",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_system_get_master_channel_group",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_system_set_output",
          "argCount": 1,
          "args": [
            2
          ],
          "documentation": "@param {Real} output\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_system_set_output",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_system_set_output",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_system_get_output",
          "argCount": 0,
          "args": [],
          "documentation": "@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_system_get_output",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_system_get_output",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_system_get_num_drivers",
          "argCount": 0,
          "args": [],
          "documentation": "@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_system_get_num_drivers",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_system_get_num_drivers",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_system_set_driver",
          "argCount": 1,
          "args": [
            2
          ],
          "documentation": "@param {Real} driver\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_system_set_driver",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_system_set_driver",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_system_get_driver",
          "argCount": 0,
          "args": [],
          "documentation": "@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_system_get_driver",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_system_get_driver",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_system_set_software_channels",
          "argCount": 1,
          "args": [
            2
          ],
          "documentation": "@param {Real} software_channels\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_system_set_software_channels",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_system_set_software_channels",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_system_get_software_channels",
          "argCount": 0,
          "args": [],
          "documentation": "@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_system_get_software_channels",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_system_get_software_channels",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_system_create_sound",
          "argCount": 4,
          "args": [
            1,
            2,
            1,
            2
          ],
          "documentation": "@param {String} name_or_data\r\n@param {Real} mode\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_system_create_sound",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_system_create_sound",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_system_create_stream",
          "argCount": 4,
          "args": [
            1,
            2,
            1,
            2
          ],
          "documentation": "@param {String} name_or_data\r\n@param {Real} mode\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_system_create_stream",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_system_create_stream",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_system_play_sound",
          "argCount": 4,
          "args": [
            1,
            2,
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_system_play_sound",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_system_play_sound",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_sound_get_length",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_sound_get_length",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_sound_get_length",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_sound_set_defaults",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_sound_set_defaults",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_sound_set_defaults",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_sound_set_mode",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_sound_set_mode",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_sound_set_mode",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_sound_get_mode",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_sound_get_mode",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_sound_get_mode",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_sound_set_loop_count",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_sound_set_loop_count",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_sound_set_loop_count",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_sound_get_loop_count",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_sound_get_loop_count",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_sound_get_loop_count",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_sound_set_loop_points",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_sound_set_loop_points",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_sound_set_loop_points",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_sound_set_3d_min_max_distance",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_sound_set_3d_min_max_distance",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_sound_set_3d_min_max_distance",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_sound_set_3d_cone_settings",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_sound_set_3d_cone_settings",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_sound_set_3d_cone_settings",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_sound_release",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_sound_release",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_sound_release",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_sound_get_system_object",
          "argCount": 4,
          "args": [
            1,
            2,
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_sound_get_system_object",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_sound_get_system_object",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_channel_group_get_num_channels",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_channel_group_get_num_channels",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_channel_group_get_num_channels",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_channel_group_get_channel",
          "argCount": 4,
          "args": [
            1,
            2,
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_channel_group_get_channel",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_channel_group_get_channel",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_channel_group_add_group",
          "argCount": 4,
          "args": [
            1,
            2,
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_channel_group_add_group",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_channel_group_add_group",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_channel_group_get_num_groups",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_channel_group_get_num_groups",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_channel_group_get_num_groups",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_channel_group_get_group",
          "argCount": 4,
          "args": [
            1,
            2,
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_channel_group_get_group",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_channel_group_get_group",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_channel_group_get_parent_group",
          "argCount": 4,
          "args": [
            1,
            2,
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_channel_group_get_parent_group",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_channel_group_get_parent_group",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_channel_group_get_name",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {String}",
          "externalName": "__EXT_NATIVE__fmod_channel_group_get_name",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_channel_group_get_name",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 1
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_channel_group_release",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_channel_group_release",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_channel_group_release",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_channel_group_get_system_object",
          "argCount": 4,
          "args": [
            1,
            2,
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_channel_group_get_system_object",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_channel_group_get_system_object",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        }
      ],
      "init": "",
      "kind": 4,
      "name": "",
      "origname": "",
      "ProxyFiles": [],
      "resourceType": "GMExtensionFile",
      "resourceVersion": "2.0",
      "uncompress": false,
      "usesRunnerInterface": false
    }
  ],
  "gradleinject": null,
  "hasConvertedCodeInjection": true,
  "helpfile": "",
  "HTML5CodeInjection": "",
  "html5Props": false,
  "IncludedResources": [],
  "installdir": "",
  "iosCocoaPodDependencies": "",
  "iosCocoaPods": "",
  "ioscodeinjection": "\u003CYYIosPlist\u003E\r\n\r\n\u003Ckey\u003ENSMicrophoneUsageDescription\u003C/key\u003E\r\n\u003Cstring\u003E${YYEXTOPT_FMOD_iosMicAccessDesc}\u003C/string\u003E\r\n\r\n\u003C/YYIosPlist\u003E",
  "iosdelegatename": "",
  "iosplistinject": null,
  "iosProps": true,
  "iosSystemFrameworkEntries": [],
  "iosThirdPartyFrameworkEntries": [],
  "license": "",
  "maccompilerflags": "",
  "maclinkerflags": "-ObjC",
  "macsourcedir": "",
  "name": "GMFMOD",
  "options": [],
  "optionsFile": "options.json",
  "packageId": "",
  "parent": {
    "name": "Extensions",
    "path": "folders/Fmod/Extensions.yy"
  },
  "productId": "",
  "resourceType": "GMExtension",
  "resourceVersion": "2.0",
  "sourcedir": "",
  "supportedTargets": -1,
  "tvosclassname": null,
  "tvosCocoaPodDependencies": "",
  "tvosCocoaPods": "",
  "tvoscodeinjection": "",
  "tvosdelegatename": null,
  "tvosmaccompilerflags": "",
  "tvosmaclinkerflags": "",
  "tvosplistinject": null,
  "tvosProps": false,
  "tvosSystemFrameworkEntries": [],
  "tvosThirdPartyFrameworkEntries": []
}