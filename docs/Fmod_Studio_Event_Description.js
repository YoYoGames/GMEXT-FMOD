/**
 * @func fmod_studio_event_description_unlink
 * @desc YYNULL
 * @param {string} str_guid Identifier of the Event Description instance 
 * @func_end
*/
function fmod_studio_event_description_unlink(str_guid) {}


/**
 * @func fmod_studio_event_description_unlink_all
 * @desc YYNULL
 * @func_end
*/
function fmod_studio_event_description_unlink_all() {}


/**
 * @func fmod_studio_event_description_create_instance
 * @desc Creates a playable instance.
 * @param {string} str_guid Identifier of the Event Description instance 
 * @func_end
*/
function fmod_studio_event_description_create_instance(str_guid) {}


/**
 * @func fmod_studio_event_description_get_instance_count
 * @desc Retrieves the number of instances.
 * @param {string} str_guid Identifier of the Event Description instance 
 * @func_end
*/
function fmod_studio_event_description_get_instance_count(str_guid) {}


/**
 * @func fmod_studio_event_description_release_all_instances
 * @desc Releases all instances.
 * @param {string} str_guid Identifier of the Event Description instance 
 * @returns {double}
 * @func_end
*/
function fmod_studio_event_description_release_all_instances(str_guid) {}


/**
 * @func fmod_studio_event_description_load_sample_data
 * @desc Loads non-streaming sample data used by the event.
 * @param {string} str_guid Identifier of the Event Description instance 
 * @func_end
*/
function fmod_studio_event_description_load_sample_data(str_guid) {}


/**
 * @func fmod_studio_event_description_unload_sample_data
 * @desc Unloads all non-streaming sample data.
 * @param {string} str_guid Identifier of the Event Description instance 
 * @func_end
*/
function fmod_studio_event_description_unload_sample_data(str_guid) {}


/**
 * @func fmod_studio_event_description_get_sample_loading_state
 * @desc Retrieves the sample data loading state.
 * @param {string} str_guid Identifier of the Event Description instance 
 * @returns {double}
 * @func_end
*/
function fmod_studio_event_description_get_sample_loading_state(str_guid) {}


/**
 * @func fmod_studio_event_description_is_3d
 * @desc Retrieves the event's 3D status.
 * @param {string} str_guid Identifier of the Event Description instance 
 * @returns {bool}
 * @func_end
*/
function fmod_studio_event_description_is_3d(str_guid) {}


/**
 * @func fmod_studio_event_description_is_doppler_enabled
 * @desc Retrieves the event's doppler status.
 * @param {string} str_guid Identifier of the Event Description instance 
 * @returns {bool}
 * @func_end
*/
function fmod_studio_event_description_is_doppler_enabled(str_guid) {}


/**
 * @func fmod_studio_event_description_is_oneshot
 * @desc Retrieves the event's oneshot status.
 * @param {string} str_guid Identifier of the Event Description instance 
 * @returns {bool}
 * @func_end
*/
function fmod_studio_event_description_is_oneshot(str_guid) {}


/**
 * @func fmod_studio_event_description_is_snapshot
 * @desc Retrieves the event's snapshot status.
 * @param {string} str_guid Identifier of the Event Description instance 
 * @returns {bool}
 * @func_end
*/
function fmod_studio_event_description_is_snapshot(str_guid) {}


/**
 * @func fmod_studio_event_description_is_stream
 * @desc Retrieves the event's stream status.
 * @param {string} str_guid Identifier of the Event Description instance 
 * @returns {bool}
 * @func_end
*/
function fmod_studio_event_description_is_stream(str_guid) {}


/**
 * @func fmod_studio_event_description_has_sustain_point
 * @desc Retrieves whether the event has any sustain points.
 * @param {string} str_guid Identifier of the Event Description instance 
 * @returns {bool}
 * @func_end
*/
function fmod_studio_event_description_has_sustain_point(str_guid) {}


/**
 * @func fmod_studio_event_description_get_min_max_distance
 * @desc Retrieves the minimum and maximum distances for 3D attenuation.
 * @param {string} str_guid Identifier of the Event Description instance 
 * @returns {double} {min:double,max:double}
 * @func_end
*/
function fmod_studio_event_description_get_min_max_distance(str_guid,buff_return_) {}


/**
 * @func fmod_studio_event_description_get_sound_size
 * @desc Retrieves the sound size for 3D panning.
 * @param {string} str_guid Identifier of the Event Description instance 
 * @returns {double}
 * @func_end
*/
function fmod_studio_event_description_get_sound_size(str_guid) {}


/**
 * @func fmod_studio_event_description_get_parameter_description_by_name
 * @desc Retrieves an event parameter description by name.
 * @param {string} str_guid Identifier of the Event Description instance 
 * @param {string} name Parameter name (case-insensitive).
 * @returns {struct} FMOD_STUDIO_PARAMETER_DESCRIPTION{name:string,_id:FMOD_STUDIO_PARAMETER_ID,name:string,minimum:double,maximum:double,defaultvalue:double,type:FMOD_STUDIO_PARAMETER_TYPE,flags:FMOD_STUDIO_PARAMETER_FLAGS,guid:string}
 * @func_end
*/
function fmod_studio_event_description_get_parameter_description_by_name(str_guid,name) {}


/**
 * @func fmod_studio_event_description_get_parameter_description_by_id_multiplatform
 * @desc Retrieves an event parameter description by id.
 * @param {string} str_guid Identifier of the Event Description instance 
 * @param {buffer} buff_args_ 
 * @param {buffer} buff_return_ 
 * @returns {struct} FMOD_STUDIO_PARAMETER_DESCRIPTION{name:string,_id:FMOD_STUDIO_PARAMETER_ID,name:string,minimum:double,maximum:double,defaultvalue:double,type:FMOD_STUDIO_PARAMETER_TYPE,flags:FMOD_STUDIO_PARAMETER_FLAGS,guid:string}
 * @func_end
*/
function fmod_studio_event_description_get_parameter_description_by_id_multiplatform(str_guid,buff_args_,buff_return_) {}


/**
 * @func fmod_studio_event_description_get_parameter_description_by_index_multiplatform
 * @desc Retrieves an event parameter description by index.
 * @param {string} str_guid Identifier of the Event Description instance 
 * @param {double} index Parameter index.
 * @param {buffer} buff_return_ 
 * @returns {double}
 * @func_end
*/
function fmod_studio_event_description_get_parameter_description_by_index_multiplatform(str_guid,index,buff_return_) {}


/**
 * @func fmod_studio_event_description_get_parameter_description_count
 * @desc Retrieves the number of parameters in the event.
 * @param {string} str_guid Identifier of the Event Description instance 
 * @returns {double}
 * @func_end
*/
function fmod_studio_event_description_get_parameter_description_count(str_guid) {}


/**
 * @func fmod_studio_event_description_get_parameter_label_by_name
 * @desc Retrieves an event parameter label by name or path.
 * @param {string} str_guid Identifier of the Event Description instance 
 * @param {string} name Parameter name (case-insensitive).
 * @param {double} label_index Label index to retrieve.
 * @returns {string}
 * @func_end
*/
function fmod_studio_event_description_get_parameter_label_by_name(str_guid,name,label_index) {}


/**
 * @func fmod_studio_event_description_get_parameter_label_by_id_multiplatform
 * @desc Retrieves an event parameter label by ID.
 * @param {string} str_guid Identifier of the Event Description instance 
 * @param {constant.PARAMETER_ID} index  Parameter ID.
 * @param {double} label_index Parameter ID.
 * @returns {string}
 * @func_end
*/
function fmod_studio_event_description_get_parameter_label_by_id_multiplatform(str_guid,index,label_index) {}


/**
 * @func fmod_studio_event_description_get_parameter_label_by_index
 * @desc Retrieves an event parameter label by index.
 * @param {string} str_guid Identifier of the Event Description instance 
 * @param {double} index  Parameter index.
 * @param {double} label_index Label index to retrieve.
 * @returns {string}
 * @func_end
*/
function fmod_studio_event_description_get_parameter_label_by_index(str_guid,index,label_index) {}


/**
 * @func fmod_studio_event_description_get_user_property
 * @desc Retrieves a user property by name.
 * @param {string} str_guid Identifier of the Event Description instance 
 * @param {string} name Parameter name (case-insensitive).
 * @returns {constant.FMOD_STUDIO_USER_PROPERTY}
 * @func_end
*/
function fmod_studio_event_description_get_user_property(str_guid,name) {}


/**
 * @func fmod_studio_event_description_get_user_property_by_index
 * @desc Retrieves a user property by index.
 * @param {string} str_guid Identifier of the Event Description instance 
 * @param {double} index 
 * @returns {constant.FMOD_STUDIO_USER_PROPERTY}
 * @func_end
*/
function fmod_studio_event_description_get_user_property_by_index(str_guid,index,buff_return_) {}


/**
 * @func fmod_studio_event_description_get_user_property_count
 * @desc Retrieves the number of user properties attached to the event.
 * @param {string} str_guid Identifier of the Event Description instance 
 * @param {string} name Parameter name (case-insensitive).
 * @returns {double}
 * @func_end
*/
function fmod_studio_event_description_get_user_property_count(str_guid,name) {}


/**
 * @func fmod_studio_event_description_get_id
 * @desc Retrieves the GUID.
 * @param {string} str_guid Identifier of the Event Description instance 
 * @returns {string}
 * @func_end
*/
function fmod_studio_event_description_get_id(str_guid) {}


/**
 * @func fmod_studio_event_description_get_length
 * @desc Retrieves the length of the timeline.
 * @param {string} str_guid Identifier of the Event Description instance 
 * @returns {double}
 * @func_end
*/
function fmod_studio_event_description_get_length(str_guid) {}


/**
 * @func fmod_studio_event_description_get_path
 * @desc Retrieves the path.
 * @param {string} str_guid Identifier of the Event Description instance 
 * @returns {string}
 * @func_end
*/
function fmod_studio_event_description_get_path(str_guid) {}


/**
 * @func fmod_studio_event_description_set_callback
 * @desc Sets the user callback.
 * @param {string} str_guid Identifier of the Event Description instance 
 * @param {constant.FMOD_STUDIO_EVENT_CALLBACK} type 
 * @func_end
*/
function fmod_studio_event_description_set_callback(str_guid,type) {}


/**
 * @func fmod_studio_event_description_is_valid
 * @desc Checks that the EventDescription reference is valid.
 * @param {string} str_guid Identifier of the Event Description instance 
 * @returns {bool}
 * @func_end
*/
function fmod_studio_event_description_is_valid(str_guid) {}



/**
 * @module StudioEventDescription
 * @title Studio Event Description
 * @desc The following set of functions are all for checking the availability of certain aspects of the Steam client or server API. This means that these functions should be used before any other Steam API function call to ensure that the client/server setup is correct and communicating with your game:
 * @section_func


 * @ref fmod_studio_event_description_unlink
 * @ref fmod_studio_event_description_unlink_all
 * @ref fmod_studio_event_description_create_instance
 * @ref fmod_studio_event_description_get_instance_count
 * @ref fmod_studio_event_description_release_all_instances
 * @ref fmod_studio_event_description_load_sample_data
 * @ref fmod_studio_event_description_unload_sample_data
 * @ref fmod_studio_event_description_get_sample_loading_state
 * @ref fmod_studio_event_description_is_3d
 * @ref fmod_studio_event_description_is_doppler_enabled
 * @ref fmod_studio_event_description_is_oneshot
 * @ref fmod_studio_event_description_is_snapshot
 * @ref fmod_studio_event_description_is_stream
 * @ref fmod_studio_event_description_has_sustain_point
 * @ref fmod_studio_event_description_get_min_max_distance
 * @ref fmod_studio_event_description_get_sound_size
 * @ref fmod_studio_event_description_get_parameter_description_by_name
 * @ref fmod_studio_event_description_get_parameter_description_by_id
 * @ref fmod_studio_event_description_get_parameter_description_by_index
 * @ref fmod_studio_event_description_get_parameter_description_count
 * @ref fmod_studio_event_description_get_parameter_label_by_name
 * @ref fmod_studio_event_description_get_parameter_label_by_id
 * @ref fmod_studio_event_description_get_parameter_label_by_index
 * @ref fmod_studio_event_description_get_user_property
 * @ref fmod_studio_event_description_get_user_property_by_index
 * @ref fmod_studio_event_description_get_user_property_count
 * @ref fmod_studio_event_description_get_id
 * @ref fmod_studio_event_description_get_length
 * @ref fmod_studio_event_description_get_path
 * @ref fmod_studio_event_description_set_callback
 * @ref fmod_studio_event_description_is_valid


 * @section_end
 * @module_end
 */
 