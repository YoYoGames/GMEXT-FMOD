
/**
 * @func fmod_studio_event_instance_unlink
 * @desc YYNULL
 * @param {double} index Identifier of the Event Instance
 * @func_end
*/
function fmod_studio_event_instance_unlink(index_) {}


/**
 * @func fmod_studio_event_instance_unlink_all
 * @desc YYNULL
 * @func_end
*/
function fmod_studio_event_instance_unlink_all() {}


/**
 * @func fmod_studio_event_instance_start
 * @desc Starts playback.
 * @param {double} index Identifier of the Event Instance
 * @func_end
*/
function fmod_studio_event_instance_start(index_) {}


/**
 * @func fmod_studio_event_instance_stop
 * @desc Stops playback.
 * @param {double} index Identifier of the Event Instance
 * @param {constant.FMOD_STUDIO_STOP_MODE} mode Stop mode.
 * @func_end
*/
function fmod_studio_event_instance_stop(index_,mode) {}


/**
 * @func fmod_studio_event_instance_get_playback_state
 * @desc Retrieves the playback state.
 * @param {double} index Identifier of the Event Instance
 * @returns {constant.FMOD_STUDIO_PLAYBACK_STATE}
 * @func_end
*/
function fmod_studio_event_instance_get_playback_state(index_) {}


/**
 * @func fmod_studio_event_instance_set_paused
 * @desc Sets the pause state.
 * @param {double} index Identifier of the Event Instance
 * @param {double} pause The desired pause state. True = paused, False = unpaused.
 * @func_end
*/
function fmod_studio_event_instance_set_paused(index_,pause) {}


/**
 * @func fmod_studio_event_instance_get_paused
 * @desc Retrieves the pause state.
 * @param {double} index Identifier of the Event Instance
 * @returns {bool}
 * @func_end
*/
function fmod_studio_event_instance_get_paused(index_) {}


/**
 * @func fmod_studio_event_instance_keyoff
 * @desc Allow an event to continue past a sustain point.
 * @param {double} index Identifier of the Event Instance
 * @func_end
*/
function fmod_studio_event_instance_keyoff(index_) {}


/**
 * @func fmod_studio_event_instance_set_pitch
 * @desc Sets the pitch multiplier.
 * @param {double} index Identifier of the Event Instance
 * @param {double} pitch Pitch multiplier.
 * @func_end
*/
function fmod_studio_event_instance_set_pitch(index_,pitch) {}


/**
 * @func fmod_studio_event_instance_get_pitch
 * @desc Retrieves the pitch multiplier.
 * @param {double} index Identifier of the Event Instance
 * @returns {double} 
 * @func_end
*/
function fmod_studio_event_instance_get_pitch(index_) {}


/**
 * @func fmod_studio_event_instance_set_property
 * @desc Sets the value of a built-in property.
 * @param {double} index Identifier of the Event Instance
 * @param {constant.FMOD_STUDIO_EVENT_PROPERTY} _property Property index.
 * @param {double} value Property value.
 * @returns {double}
 * @func_end
*/
function fmod_studio_event_instance_set_property(index_,_property,value) {}


/**
 * @func fmod_studio_event_get_property
 * @desc Retrieves the value of a built-in property.
 * @param {double} index Identifier of the Event Instance
 * @param {constant.FMOD_STUDIO_EVENT_PROPERTY} property Property index.
 * @func_end
*/
function fmod_studio_event_get_property(index_,property) {}


/**
 * @func fmod_studio_event_instance_set_timeline_position
 * @desc Sets the timeline cursor position.
 * @param {double} index Identifier of the Event Instance
 * @param {double} position Timeline position.(miliseconds)
 * @func_end
*/
function fmod_studio_event_instance_set_timeline_position(index_,position) {}


/**
 * @func fmod_studio_event_instance_get_timeline_position
 * @desc Retrieves the timeline cursor position.
 * @param {double} index Identifier of the Event Instance
 * @returns {double}
 * @func_end
*/
function fmod_studio_event_instance_get_timeline_position(index_) {}


/**
 * @func fmod_studio_event_instance_set_volume
 * @desc Sets the volume level.
 * @param {double} index Identifier of the Event Instance
 * @param {double} volume Volume.
 * @func_end
*/
function fmod_studio_event_instance_set_volume(index_,volume) {}


/**
 * @func fmod_studio_event_instance_get_volume
 * @desc Retrieves the volume level.
 * @param {double} index Identifier of the Event Instance
 * @returns {struct} {volume:double,final_volume:double}
 * @func_end
*/
function fmod_studio_event_instance_get_volume(index_,buff_return_) {}


/**
 * @func fmod_studio_event_instance_is_virtual
 * @desc Retrieves the virtualization state.
 * @param {double} index Identifier of the Event Instance
 * @returns {bool}
 * @func_end
*/
function fmod_studio_event_instance_is_virtual(index_) {}


/**
 * @func fmod_studio_event_instance_set_3d_attributes
 * @desc Sets the 3D attributes.
 * @param {double} index Identifier of the Event Instance
 * @param {FMOD_3D_ATTRIBUTES} attributes 3D attributes.
 * @func_end
*/
function fmod_studio_event_instance_set_3d_attributes(index_) {}


/**
 * @func fmod_studio_event_instance_get_3d_attributes
 * @desc Retrieves the 3D attributes.
 * @param {double} index Identifier of the Event Instance
 * @returns {constant.FMOD_3D_ATTRIBUTES}
 * @func_end
*/
function fmod_studio_event_instance_get_3d_attributes(index_) {}


/**
 * @func fmod_studio_event_instance_set_listener_mask
 * @desc Sets the listener mask.
 * @param {double} index Identifier of the Event Instance
 * @param {double} mask Listener mask.
 * @returns {double}
 * @func_end
*/
function fmod_studio_event_instance_set_listener_mask(index_,mask) {}


/**
 * @func fmod_studio_event_instance_get_listener_mask
 * @desc Retrieves the listener mask.
 * @param {double} index Identifier of the Event Instance
 * @func_end
*/
function fmod_studio_event_instance_get_listener_mask(index_) {}


/**
 * @func fmod_studio_event_instance_get_min_max_distance
 * @desc Retrieves the minimum and maximum distances for 3D attenuation.
 * @param {double} index Identifier of the Event Instance
 * @returns {double} {min:double, max:double}
 * @func_end
*/
function fmod_studio_event_instance_get_min_max_distance(index_,buff_return_) {}


/**
 * @func fmod_studio_event_instance_set_parameter_by_name
 * @desc Sets a parameter value by name.
 * @param {double} index Identifier of the Event Instance
 * @param {string} name Parameter name (case-insensitive).
 * @param {double} value Value for given identifier.
 * @param {double} ignoreseekspeed Specifies whether to ignore the parameter's seek speed and set the value immediately.
 * @returns {double}
 * @func_end
*/
function fmod_studio_event_instance_set_parameter_by_name(index_,name,value,ignoreseekspeed) {}


/**
 * @func fmod_studio_event_instance_set_parameter_by_name_with_label
 * @desc Sets a parameter value by name, looking up the value label.
 * @param {double} index Identifier of the Event Instance
 * @param {string} name Parameter name (case-insensitive).
 * @param {string} label Labeled value for given name.
 * @param {double} ignoreseekspeed Specifies whether to ignore the parameter's seek speed and set the value immediately.
 * @func_end
*/
function fmod_studio_event_instance_set_parameter_by_name_with_label(index_,name,label,ignoreseekspeed) {}


/**
 * @func fmod_studio_event_instance_get_parameter_by_name
 * @desc Retrieves a parameter value by name.
 * @param {double} index Identifier of the Event Instance
 * @param {string} name Parameter name (case-insensitive). (UTF-8 string)
 * @returns {struct} {value:double,final_value:double}
 * @func_end
*/
function fmod_studio_event_instance_get_parameter_by_name(index_,name,buff_return_) {}


/**
 * @func fmod_studio_event_instance_set_parameter_by_id
 * @desc Sets a parameter value by unique identifier.
 * @param {double} index Identifier of the Event Instance
 * @param {constant.FMOD_STUDIO_PARAMETER_ID} parameter_id Parameter identifier.
 * @param {double} value Value for given identifier.
 * @param {double} ignoreseekspeed Specifies whether to ignore the parameter's seek speed and set the value immediately.
 * @returns {struct} {value:double,final_value:double}
 * @func_end
*/
function fmod_studio_event_instance_set_parameter_by_id(index_,buff_args_,value,ignoreseekspeed) {}


/**
 * @func fmod_studio_event_instance_set_parameter_by_id_with_label
 * @desc Sets a parameter value by unique identifier, looking up the value label.
 * @param {double} index Identifier of the Event Instance
 * @param {constant.FMOD_STUDIO_PARAMETER_ID} parameter_id Parameter identifier.
 * @param {string} label Labeled value for given name.
 * @param {double} ignoreseekspeed Specifies whether to ignore the parameter's seek speed and set the value immediately.
 * @func_end
*/
function fmod_studio_event_instance_set_parameter_by_id_with_label_multiplatform(index_,buff_args_,label,ignoreseekspeed) {}


/**
 * @func fmod_studio_event_instance_get_parameter_by_id_multiplatform
 * @desc Retrieves a parameter value by unique identifier.
 * @param {double} index Identifier of the Event Instance
 * @param {constant.FMOD_STUDIO_PARAMETER_ID} parameter_id Parameter identifier.
 * @returns {struct} {value:double,final_value:double}
 * @func_end
*/
function fmod_studio_event_instance_get_parameter_by_id_multiplatform(index_,buff_args_,buff_return_) {}


/**
 * @func fmod_studio_event_instance_set_reverb_level
 * @desc Sets the core reverb send level.
 * @param {double} index Identifier of the Event Instance
 * @param {double} _index Core reverb instance index.
 * @param {double} level Reverb send level.
 * @returns {double}
 * @func_end
*/
function fmod_studio_event_instance_set_reverb_level(index_,_index,level) {}


/**
 * @func fmod_studio_event_instance_get_reverb_level
 * @desc Retrieves the core reverb send level.
 * @param {double} index Identifier of the Event Instance
 * @param {double} _index Core reverb instance index.
 * @func_end
*/
function fmod_studio_event_instance_get_reverb_level(index_,_index) {}


/**
 * @func fmod_studio_event_instance_get_cpu_usage
 * @desc Retrieves the event CPU usage data.
 * @param {double} index Identifier of the Event Instance
 * @param {buffer} buff_return_ 
 * @returns {struct} {exclusive:uint,inclusive:uint}
 * @func_end
*/
function fmod_studio_event_instance_get_cpu_usage(index_,buff_return_) {}


/**
 * @func fmod_studio_event_instance_get_memory_usage
 * @desc Retrieves memory usage statistics.
 * @param {double} index Identifier of the Event Instance
 * @returns {constant.FMOD_STUDIO_MEMORY_USAGE}
 * @func_end
*/
function fmod_studio_event_instance_get_memory_usage(index_,exclusive,inclusive) {}


/**
 * @func fmod_studio_event_instance_set_callback
 * @desc Sets the user callback.
 * @param {double} index Identifier of the Event Instance
 * @param {constant.FMOD_STUDIO_EVENT_CALLBACK} type User callback.
 * @func_end
*/
function fmod_studio_event_instance_set_callback(index_,type) {}


/**
 * @func fmod_studio_event_instance_release
 * @desc Marks the event instance for release.
 * @param {double} index Identifier of the Event Instance
 * @func_end
*/
function fmod_studio_event_instance_release(index_) {}


/**
 * @func fmod_studio_event_instance_is_valid
 * @desc Checks that the EventInstance reference is valid.
 * @param {double} index Identifier of the Event Instance
 * @returns {bool}
 * @func_end
*/
function fmod_studio_event_instance_is_valid(index_) {}



/**
 * @module StudioEventInstance
 * @title Studio Event Instance
 * @desc The following set of functions are all for checking the availability of certain aspects of the Steam client or server API. This means that these functions should be used before any other Steam API function call to ensure that the client/server setup is correct and communicating with your game:
 * @section_func

 * @ref fmod_studio_event_instance_unlink
 * @ref fmod_studio_event_instance_unlink_all
 * @ref fmod_studio_event_instance_start
 * @ref fmod_studio_event_instance_stop
 * @ref fmod_studio_event_instance_get_playback_state
 * @ref fmod_studio_event_instance_set_paused
 * @ref fmod_studio_event_instance_get_paused
 * @ref fmod_studio_event_instance_keyoff
 * @ref fmod_studio_event_instance_set_pitch
 * @ref fmod_studio_event_instance_get_pitch
 * @ref fmod_studio_event_instance_set_property
 * @ref fmod_studio_event_get_property
 * @ref fmod_studio_event_instance_set_timeline_position
 * @ref fmod_studio_event_instance_get_timeline_position
 * @ref fmod_studio_event_instance_set_volume
 * @ref fmod_studio_event_instance_get_volume
 * @ref fmod_studio_event_instance_is_virtual
 * @ref fmod_studio_event_instance_set_3d_attributes
 * @ref fmod_studio_event_instance_get_3d_attributes
 * @ref fmod_studio_event_instance_set_listener_mask
 * @ref fmod_studio_event_instance_get_listener_mask
 * @ref fmod_studio_event_instance_get_min_max_distance
 * @ref fmod_studio_event_instance_set_parameter_by_name
 * @ref fmod_studio_event_instance_set_parameter_by_name_with_label
 * @ref fmod_studio_event_instance_get_parameter_by_name
 * @ref fmod_studio_event_instance_set_parameter_by_id
 * @ref fmod_studio_event_instance_set_parameter_by_id_with_label
 * @ref fmod_studio_event_instance_get_parameter_by_id
 * @ref fmod_studio_event_instance_set_reverb_level
 * @ref fmod_studio_event_instance_get_reverb_level
 * @ref fmod_studio_event_instance_get_cpu_usage
 * @ref fmod_studio_event_instance_get_memory_usage
 * @ref fmod_studio_event_instance_set_callback
 * @ref fmod_studio_event_instance_release
 * @ref fmod_studio_event_instance_is_valid

 * @section_end
 * @module_end
 */
 
 