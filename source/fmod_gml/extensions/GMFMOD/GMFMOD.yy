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
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_sound_group_set_max_audible",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_sound_group_set_max_audible",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_sound_group_set_max_audible",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_sound_group_get_max_audible",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_sound_group_get_max_audible",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_sound_group_get_max_audible",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_sound_group_set_max_audible_behavior",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_sound_group_set_max_audible_behavior",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_sound_group_set_max_audible_behavior",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_sound_group_get_max_audible_behavior",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_sound_group_get_max_audible_behavior",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_sound_group_get_max_audible_behavior",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_sound_group_set_mute_fade_speed",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_sound_group_set_mute_fade_speed",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_sound_group_set_mute_fade_speed",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_sound_group_get_mute_fade_speed",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_sound_group_get_mute_fade_speed",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_sound_group_get_mute_fade_speed",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_sound_group_set_volume",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_sound_group_set_volume",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_sound_group_set_volume",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_sound_group_get_volume",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_sound_group_get_volume",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_sound_group_get_volume",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_sound_group_get_num_sounds",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_sound_group_get_num_sounds",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_sound_group_get_num_sounds",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_sound_group_get_sound",
          "argCount": 4,
          "args": [
            1,
            2,
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_sound_group_get_sound",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_sound_group_get_sound",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_sound_group_get_num_playing",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_sound_group_get_num_playing",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_sound_group_get_num_playing",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_sound_group_stop",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_sound_group_stop",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_sound_group_stop",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_sound_group_get_name",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {String}",
          "externalName": "__EXT_NATIVE__fmod_sound_group_get_name",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_sound_group_get_name",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 1
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_sound_group_release",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_sound_group_release",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_sound_group_release",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_sound_group_get_system_object",
          "argCount": 4,
          "args": [
            1,
            2,
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_sound_group_get_system_object",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_sound_group_get_system_object",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_reverb_3d_set_active",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_reverb_3d_set_active",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_reverb_3d_set_active",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_reverb_3d_get_active",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_reverb_3d_get_active",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_reverb_3d_get_active",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_reverb_3d_set_properties",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_reverb_3d_set_properties",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_reverb_3d_set_properties",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_reverb_3d_release",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_reverb_3d_release",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_reverb_3d_release",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_channel_control_is_playing",
          "argCount": 1,
          "args": [
            2
          ],
          "documentation": "@param {Real} channel_control_ref\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_channel_control_is_playing",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_channel_control_is_playing",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_channel_control_stop",
          "argCount": 1,
          "args": [
            2
          ],
          "documentation": "@param {Real} channel_control_ref\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_channel_control_stop",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_channel_control_stop",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_channel_control_set_paused",
          "argCount": 2,
          "args": [
            2,
            2
          ],
          "documentation": "@param {Real} channel_control_ref\r\n@param {Real} paused\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_channel_control_set_paused",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_channel_control_set_paused",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_channel_control_get_paused",
          "argCount": 1,
          "args": [
            2
          ],
          "documentation": "@param {Real} channel_control_ref\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_channel_control_get_paused",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_channel_control_get_paused",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_channel_control_set_mode",
          "argCount": 2,
          "args": [
            2,
            2
          ],
          "documentation": "@param {Real} channel_control_ref\r\n@param {Real} mode\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_channel_control_set_mode",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_channel_control_set_mode",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_channel_control_get_mode",
          "argCount": 1,
          "args": [
            2
          ],
          "documentation": "@param {Real} channel_control_ref\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_channel_control_get_mode",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_channel_control_get_mode",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_channel_control_set_pitch",
          "argCount": 2,
          "args": [
            2,
            2
          ],
          "documentation": "@param {Real} channel_control_ref\r\n@param {Real} pitch\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_channel_control_set_pitch",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_channel_control_set_pitch",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_channel_control_get_pitch",
          "argCount": 1,
          "args": [
            2
          ],
          "documentation": "@param {Real} channel_control_ref\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_channel_control_get_pitch",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_channel_control_get_pitch",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_channel_control_get_audibility",
          "argCount": 1,
          "args": [
            2
          ],
          "documentation": "@param {Real} channel_control_ref\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_channel_control_get_audibility",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_channel_control_get_audibility",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_channel_control_set_volume",
          "argCount": 2,
          "args": [
            2,
            2
          ],
          "documentation": "@param {Real} channel_control_ref\r\n@param {Real} volume\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_channel_control_set_volume",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_channel_control_set_volume",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_channel_control_get_volume",
          "argCount": 1,
          "args": [
            2
          ],
          "documentation": "@param {Real} channel_control_ref\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_channel_control_get_volume",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_channel_control_get_volume",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_channel_control_set_volume_ramp",
          "argCount": 2,
          "args": [
            2,
            2
          ],
          "documentation": "@param {Real} channel_control_ref\r\n@param {Real} ramp\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_channel_control_set_volume_ramp",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_channel_control_set_volume_ramp",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_channel_control_get_volume_ramp",
          "argCount": 1,
          "args": [
            2
          ],
          "documentation": "@param {Real} channel_control_ref\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_channel_control_get_volume_ramp",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_channel_control_get_volume_ramp",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_channel_control_set_mute",
          "argCount": 2,
          "args": [
            2,
            2
          ],
          "documentation": "@param {Real} channel_control_ref\r\n@param {Real} mute\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_channel_control_set_mute",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_channel_control_set_mute",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_channel_control_get_mute",
          "argCount": 1,
          "args": [
            2
          ],
          "documentation": "@param {Real} channel_control_ref\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_channel_control_get_mute",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_channel_control_get_mute",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_channel_control_set_3d_doppler_level",
          "argCount": 2,
          "args": [
            2,
            2
          ],
          "documentation": "@param {Real} channel_control_ref\r\n@param {Real} level\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_channel_control_set_3d_doppler_level",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_channel_control_set_3d_doppler_level",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_channel_control_get_3d_doppler_level",
          "argCount": 1,
          "args": [
            2
          ],
          "documentation": "@param {Real} channel_control_ref\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_channel_control_get_3d_doppler_level",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_channel_control_get_3d_doppler_level",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_channel_control_set_3d_level",
          "argCount": 2,
          "args": [
            2,
            2
          ],
          "documentation": "@param {Real} channel_control_ref\r\n@param {Real} level\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_channel_control_set_3d_level",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_channel_control_set_3d_level",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_channel_control_get_3d_level",
          "argCount": 1,
          "args": [
            2
          ],
          "documentation": "@param {Real} channel_control_ref\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_channel_control_get_3d_level",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_channel_control_get_3d_level",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_channel_control_set_3d_min_max_distance",
          "argCount": 3,
          "args": [
            2,
            2,
            2
          ],
          "documentation": "@param {Real} channel_control_ref\r\n@param {Real} min_dist\r\n@param {Real} max_dist\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_channel_control_set_3d_min_max_distance",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_channel_control_set_3d_min_max_distance",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_channel_control_set_3d_cone_settings",
          "argCount": 4,
          "args": [
            2,
            2,
            2,
            2
          ],
          "documentation": "@param {Real} channel_control_ref\r\n@param {Real} inside_cone_angle\r\n@param {Real} outside_cone_angle\r\n@param {Real} outside_volume\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_channel_control_set_3d_cone_settings",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_channel_control_set_3d_cone_settings",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_channel_control_set_3d_occlusion",
          "argCount": 3,
          "args": [
            2,
            2,
            2
          ],
          "documentation": "@param {Real} channel_control_ref\r\n@param {Real} direct_occlusion\r\n@param {Real} reverb_occlusion\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_channel_control_set_3d_occlusion",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_channel_control_set_3d_occlusion",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_channel_control_set_3d_spread",
          "argCount": 2,
          "args": [
            2,
            2
          ],
          "documentation": "@param {Real} channel_control_ref\r\n@param {Real} angle\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_channel_control_set_3d_spread",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_channel_control_set_3d_spread",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_channel_control_get_3d_spread",
          "argCount": 1,
          "args": [
            2
          ],
          "documentation": "@param {Real} channel_control_ref\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_channel_control_get_3d_spread",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_channel_control_get_3d_spread",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_channel_control_set_3d_distance_filter",
          "argCount": 4,
          "args": [
            2,
            2,
            2,
            2
          ],
          "documentation": "@param {Real} channel_control_ref\r\n@param {Real} custom\r\n@param {Real} custom_level\r\n@param {Real} center_freq\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_channel_control_set_3d_distance_filter",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_channel_control_set_3d_distance_filter",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_channel_control_set_pan",
          "argCount": 2,
          "args": [
            2,
            2
          ],
          "documentation": "@param {Real} channel_control_ref\r\n@param {Real} pan\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_channel_control_set_pan",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_channel_control_set_pan",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_channel_control_set_mix_levels_output",
          "argCount": 9,
          "args": [
            2,
            2,
            2,
            2,
            2,
            2,
            2,
            2,
            2
          ],
          "documentation": "@param {Real} channel_control_ref\r\n@param {Real} front_left\r\n@param {Real} front_right\r\n@param {Real} center\r\n@param {Real} lfe\r\n@param {Real} surround_left\r\n@param {Real} surround_right\r\n@param {Real} back_left\r\n@param {Real} back_right\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_channel_control_set_mix_levels_output",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_channel_control_set_mix_levels_output",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_channel_control_set_reverb_properties",
          "argCount": 3,
          "args": [
            2,
            2,
            2
          ],
          "documentation": "@param {Real} channel_control_ref\r\n@param {Real} reverb_instance\r\n@param {Real} wet\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_channel_control_set_reverb_properties",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_channel_control_set_reverb_properties",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_channel_control_get_reverb_properties",
          "argCount": 2,
          "args": [
            2,
            2
          ],
          "documentation": "@param {Real} channel_control_ref\r\n@param {Real} reverb_instance\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_channel_control_get_reverb_properties",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_channel_control_get_reverb_properties",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_channel_control_set_low_pass_gain",
          "argCount": 2,
          "args": [
            2,
            2
          ],
          "documentation": "@param {Real} channel_control_ref\r\n@param {Real} gain\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_channel_control_set_low_pass_gain",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_channel_control_set_low_pass_gain",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_channel_control_get_low_pass_gain",
          "argCount": 1,
          "args": [
            2
          ],
          "documentation": "@param {Real} channel_control_ref\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_channel_control_get_low_pass_gain",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_channel_control_get_low_pass_gain",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_channel_control_add_dsp",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_channel_control_add_dsp",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_channel_control_add_dsp",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_channel_control_remove_dsp",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_channel_control_remove_dsp",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_channel_control_remove_dsp",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "fmod_channel_control_get_num_dsps",
          "argCount": 1,
          "args": [
            2
          ],
          "documentation": "@param {Real} channel_control_ref\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_channel_control_get_num_dsps",
          "help": "",
          "hidden": false,
          "kind": 4,
          "name": "fmod_channel_control_get_num_dsps",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_channel_control_get_dsp",
          "argCount": 4,
          "args": [
            2,
            2,
            1,
            2
          ],
          "documentation": "@param {Real} channel_control_ref\r\n@param {Real} index\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_channel_control_get_dsp",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_channel_control_get_dsp",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_channel_control_set_dsp_index",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_channel_control_set_dsp_index",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_channel_control_set_dsp_index",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_channel_control_get_dsp_index",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_channel_control_get_dsp_index",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_channel_control_get_dsp_index",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_channel_control_get_system_object",
          "argCount": 3,
          "args": [
            2,
            1,
            2
          ],
          "documentation": "@param {Real} channel_control_ref\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_channel_control_get_system_object",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_channel_control_get_system_object",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_dsp_add_input",
          "argCount": 4,
          "args": [
            1,
            2,
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_dsp_add_input",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_dsp_add_input",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_dsp_get_num_inputs",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_dsp_get_num_inputs",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_dsp_get_num_inputs",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_dsp_get_num_outputs",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_dsp_get_num_outputs",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_dsp_get_num_outputs",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_dsp_disconnect_all",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_dsp_disconnect_all",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_dsp_disconnect_all",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_dsp_get_num_parameters",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_dsp_get_num_parameters",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_dsp_get_num_parameters",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_dsp_set_parameter_float",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_dsp_set_parameter_float",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_dsp_set_parameter_float",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_dsp_get_parameter_float",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_dsp_get_parameter_float",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_dsp_get_parameter_float",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_dsp_set_parameter_int",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_dsp_set_parameter_int",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_dsp_set_parameter_int",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_dsp_get_parameter_int",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_dsp_get_parameter_int",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_dsp_get_parameter_int",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_dsp_set_parameter_bool",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_dsp_set_parameter_bool",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_dsp_set_parameter_bool",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_dsp_get_parameter_bool",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_dsp_get_parameter_bool",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_dsp_get_parameter_bool",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_dsp_release",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_dsp_release",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_dsp_release",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_dsp_get_system_object",
          "argCount": 4,
          "args": [
            1,
            2,
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@param {Pointer} _ret_buffer\r\n@param {Real} _ret_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_dsp_get_system_object",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_dsp_get_system_object",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_geometry_set_polygon_attributes",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_geometry_set_polygon_attributes",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_geometry_set_polygon_attributes",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_geometry_get_polygon_num_vertices",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_geometry_get_polygon_num_vertices",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_geometry_get_polygon_num_vertices",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_geometry_set_position",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_geometry_set_position",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_geometry_set_position",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_geometry_set_rotation",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_geometry_set_rotation",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_geometry_set_rotation",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_geometry_set_scale",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_geometry_set_scale",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_geometry_set_scale",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_geometry_save",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_geometry_save",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_geometry_save",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
        {
          "$GMExtensionFunction": "",
          "%Name": "__fmod_geometry_release",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _arg_buffer\r\n@param {Real} _arg_buffer_length\r\n@returns {Real}",
          "externalName": "__EXT_NATIVE__fmod_geometry_release",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__fmod_geometry_release",
          "resourceType": "GMExtensionFunction",
          "resourceVersion": "2.0",
          "returnType": 2
        },
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
          "%Name": "__GMFMOD_invocation_handler",
          "argCount": 2,
          "args": [
            1,
            2
          ],
          "documentation": "@param {Pointer} _buffer_ptr\r\n@param {Real} _buffer_size",
          "externalName": "__EXT_NATIVE__GMFMOD_invocation_handler",
          "help": "",
          "hidden": true,
          "kind": 4,
          "name": "__GMFMOD_invocation_handler",
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