
/**
 * @func fmod_studio_system_create
 * @desc FMOD Studio System creation function.
 * @func_end
*/
function fmod_studio_system_create() {}


/**
 * @func fmod_studio_system_init
 * @desc Initializes the Studio System.
 * @param {double} max_channels The maximum number of Channels, including both virtual and real, to be used in FMOD.
 * @param {constant.FMOD_STUDIO_INITFLAGS} studio_flags Studio system initialization flags.
 * @param {FMOD_INITFLAGS} Core system initialization flags.
 * @func_end
*/
function fmod_studio_system_init(max_channels,studio_flags,core_flags) {}


/**
 * @func fmod_studio_system_release
 * @desc Shut down and free the Studio System object.
 * @func_end
*/
function fmod_studio_system_release() {}


/**
 * @func fmod_studio_system_update
 * @desc Update the FMOD Studio System.
 * @func_end
*/
function fmod_studio_system_update() {}


/**
 * @func fmod_studio_system_flush_commands
 * @desc Block until all pending commands have been executed.
 * @func_end
*/
function fmod_studio_system_flush_commands() {}


/**
 * @func fmod_studio_system_flush_sample_loading
 * @desc Block until all sample loading and unloading has completed.
 * @func_end
*/
function fmod_studio_system_flush_sample_loading() {}


/**
 * @func fmod_studio_system_load_bank_custom
 * @desc Loads the metadata of a Studio bank using custom read callbacks.
 * @param {double} flags 
 * @func_end
*/
function fmod_studio_system_load_bank_custom(flags) {}


/**
 * @func fmod_studio_system_load_bank_file
 * @desc Loads the metadata of a Studio bank from file.
 * @param {string} filename Name of the file on disk. (UTF-8 string)
 * @param {constant.FMOD_STUDIO_LOAD_BANK_FLAGS} flags Flags to control bank loading.
 * @returns {string}
 * @func_end
*/
function fmod_studio_system_load_bank_file(filename,flags) {}


/**
 * @func fmod_studio_system_load_bank_memory_multiplatform
 * @desc Loads the metadata of a Studio bank from memory.
 * @param {buffer} buff_data Memory buffer.
 * @param {double} length Length of the memory buffer.
 * @param {constant.FMOD_STUDIO_LOAD_MEMORY_MODE} mode Loading mode to use.
 * @param {constant.FMOD_STUDIO_LOAD_BANK_FLAGS} flags Flags to control bank loading.
 * @returns {string}
 * @func_end
*/
function fmod_studio_system_load_bank_memory_multiplatform(buff_data,length,mode,flags) {}


/**
 * @func fmod_studio_system_unload_all
 * @desc Unloads all currently loaded banks.
 * @func_end
*/
function fmod_studio_system_unload_all() {}


/**
 * @func fmod_studio_system_get_bank
 * @desc Retrieves a loaded bank.
 * @param {string} path The bank path or the ID string that identifies the bank.
 * @returns {string}
 * @func_end
*/
function fmod_studio_system_get_bank(path) {}


/**
 * @func fmod_studio_system_get_bank_by_id
 * @desc Retrieves a loaded bank.
 * @param {string} _str_guid 
 * @returns {string}
 * @func_end
*/
function fmod_studio_system_get_bank_by_id(_str_guid) {}


/**
 * @func fmod_studio_system_get_bank_count
 * @desc Retrieves the number of loaded banks.
 * @returns {double} 
 * @func_end
*/
function fmod_studio_system_get_bank_count() {}


/**
 * @func fmod_studio_system_get_bank_list
 * @desc Retrieves the loaded Banks.
 * @returns {double}
 * @func_end
*/
function fmod_studio_system_get_bank_list(buff_return_) {}


/**
 * @func fmod_studio_system_set_listener_attributes_multiplatform
 * @desc Sets the 3D attributes of the listener.
 * @param {double} listener 
 * @param {constant.FMOD_3D_ATTRIBUTES} attributes 3D attributes.
 * @param {constant.FMOD_VECTOR} attenuation Position used for calculating attenuation.
 * @returns {double}
 * @func_end
*/
function fmod_studio_system_set_listener_attributes_multiplatform(listener,buff_args_) {}


/**
 * @func fmod_studio_system_get_listener_attributes_multiplatform
 * @desc Retrieves listener 3D attributes.
 * @param {double} listener Index of listener to get 3D attributes for. Listeners are indexed from 0, to FMOD_MAX_LISTENERS - 1, in a multi-listener environment.
 * @func_end
*/
function fmod_studio_system_get_listener_attributes_multiplatform(listener,buff_return_) {}


/**
 * @func fmod_studio_system_set_listener_weight
 * @desc Sets the listener weighting.
 * @param {double} listener Listener index.
 * @param {double} weight Weighting value.
 * @func_end
*/
function fmod_studio_system_set_listener_weight(listener,weight) {}


/**
 * @func fmod_studio_system_get_listener_weight
 * @desc Retrieves listener weighting.
 * @param {double} listener Listener index.
 * @func_end
*/
function fmod_studio_system_get_listener_weight(listener) {}


/**
 * @func fmod_studio_system_set_num_listeners
 * @desc Sets the number of listeners in the 3D sound scene.
 * @param {double} num Number of listeners.
 * @func_end
*/
function fmod_studio_system_set_num_listeners(num) {}


/**
 * @func fmod_studio_system_get_num_listeners
 * @desc Retrieves the number of listeners.
 * @returns {double}
 * @func_end
*/
function fmod_studio_system_get_num_listeners() {}


/**
 * @func fmod_studio_system_get_bus
 * @desc Retrieves a loaded bus.
 * @param {string} path The bus path or the ID string that identifies the bus. (UTF-8 string)
 * @returns {string}
 * @func_end
*/
function fmod_studio_system_get_bus(path) {}


/**
 * @func fmod_studio_system_get_event
 * @desc Retrieves an EventDescription.
 * @param {string} path The path or the ID string that identifies the event or snapshot. (UTF-8 string)
 * @returns {string}
 * @func_end
*/
function fmod_studio_system_get_event(path) {}


/**
 * @func fmod_studio_system_get_event_by_id
 * @desc Retrieves an EventDescription.
 * @param {string} guid Event GUID. (FMOD_GUID)
 * @returns {string}
 * @func_end
*/
function fmod_studio_system_get_event_by_id(guid) {}


/**
 * @func fmod_studio_system_get_parameter_by_id
 * @desc Retrieves a global parameter value by unique identifier.
 * @param {constant.FMOD_STUDIO_PARAMETER_ID} paramaters Parameter identifier. 
 * @returns {struct} {value:double,final_value:double}
 * @func_end
*/
function fmod_studio_system_get_parameter_by_id() {}


/**
 * @func fmod_studio_system_set_parameter_by_id_multiplatform
 * @desc Sets a global parameter value by unique identifier.
 * @param {constant.FMOD_STUDIO_PARAMETER_ID} paramaters Parameter identifier. 
 * @param {double} value Value for given identifier.
 * @param {double} ignore_seek_speed Specifies whether to ignore the parameter's seek speed and set the value immediately.
 * @func_end
*/
function fmod_studio_system_set_parameter_by_id_multiplatform(buff_args_,value,ignore_seek_speed) {}


/**
 * @func fmod_studio_system_set_parameter_by_id_with_label
 * @desc Sets a global parameter value by unique identifier, looking up the value label.
 * @param {constant.FMOD_STUDIO_PARAMETER_ID} paramaters Parameter identifier. 
 * @param {string} label Labeled value for given identifier.
 * @param {bool} ignore_seek_speed Specifies whether to ignore the parameter's seek speed and set the value immediately.
 * @func_end
*/
function fmod_studio_system_set_parameter_by_id_with_label(buff_args_,label,ignore_seek_speed) {}


/**
 * @func fmod_studio_system_get_parameter_by_name
 * @desc Retrieves a global parameter value by name.
 * @param {string} name Parameter name (case-insensitive). (UTF-8 string)
 * @returns {struct} {value:double,final_value:double}
 * @func_end
*/
function fmod_studio_system_get_parameter_by_name(name,buff_return_) {}


/**
 * @func fmod_studio_system_set_parameter_by_name
 * @desc Sets a global parameter value by name.
 * @param {string} name Parameter name (case-insensitive). (UTF-8 string)
 * @param {double} value Value for given name.
 * @param {double} ignoreseekspeed Specifies whether to ignore the parameter's seek speed and set the value immediately.
 * @func_end
*/
function fmod_studio_system_set_parameter_by_name(name,value,ignoreseekspeed) {}


/**
 * @func fmod_studio_system_set_parameter_by_name_with_label
 * @desc Sets a global parameter value by name, looking up the value label.
 * @param {string} name Parameter name (case-insensitive). (UTF-8 string)
 * @param {string} label Labeled value for given name.
 * @param {double} ignoreseekspeed Specifies whether to ignore the parameter's seek speed and set the value immediately.
 * @func_end
*/
function fmod_studio_system_set_parameter_by_name_with_label(name,label,ignoreseekspeed) {}


/**
 * @func fmod_studio_system_get_parameter_description_by_name
 * @desc Retrieves a global parameter by name or path.
 * @param {string} name Parameter name. (UTF-8 string)
 * @returns {FMOD_STUDIO_PARAMETER_DESCRIPTION}
 * @func_end
*/
function fmod_studio_system_get_parameter_description_by_name(name,buff_return_) {}


/**
 * @func fmod_studio_system_get_parameter_description_by_id
 * @desc Retrieves a global parameter by ID.
 * @param {constant.FMOD_STUDIO_PARAMETER_ID} parameter_id Parameter ID.
 * @returns {constant.FMOD_STUDIO_PARAMETER_DESCRIPTION} 
 * @func_end
*/
function fmod_studio_system_get_parameter_description_by_id(buff_args_,buff_return_) {}


/**
 * @func fmod_studio_system_get_parameter_description_count
 * @desc Retrieves the number of global parameters.
 * @returns {double}
 * @func_end
*/
function fmod_studio_system_get_parameter_description_count() {}


/**
 * @func fmod_studio_system_get_parameter_description_list
 * @desc Retrieves a list of global parameters.
 * @returns {array}
 * @func_end
*/
function fmod_studio_system_get_parameter_description_list() {}


/**
 * @func fmod_studio_system_get_parameter_label_by_name
 * @desc Retrieves a global parameter label by name or path.
 * @param {string} name Parameter name. (UTF-8 string)
 * @param {double} labelindex Label index to retrieve.
 * @returns {string}
 * @func_end
*/
function fmod_studio_system_get_parameter_label_by_name(name,labelindex) {}


/**
 * @func fmod_studio_system_get_parameter_label_by_id
 * @desc Retrieves a global parameter label by ID.
 * @param {constant.FMOD_STUDIO_PARAMETER_ID} parameter_id Parameter ID.
 * @param {double} label_index Label index to retrieve.
 * @returns {string}
 * @func_end
*/
function fmod_studio_system_get_parameter_label_by_id(buff_args_,label_index) {}


/**
 * @func fmod_studio_system_get_vca
 * @desc Retrieves a loaded VCA.
 * @param {string} path The path or the ID string that identifies the VCA. (UTF-8 string)
 * @returns {string}
 * @func_end
*/
function fmod_studio_system_get_vca(path) {}


/**
 * @func fmod_studio_system_get_vca_by_id
 * @desc Retrieves a loaded VCA.
 * @param {string} _str_guid VCA GUID. (FMOD_GUID)
 * @returns {double}
 * @func_end
*/
function fmod_studio_system_get_vca_by_id(_str_guid) {}


/**
 * @func fmod_studio_system_set_advanced_settings
 * @desc Sets advanced settings.
 * @param {int} commandqueuesize Command queue size for studio async processing.
 * @param {int} handleinitialsize Initial size to allocate for handles. Memory for handles will grow as needed in pages.
 * @param {int} studioupdateperiod Update period of Studio when in async mode, in milliseconds. Will be quantized to the nearest multiple of mixer duration.
 * @param {int} idlesampledatapoolsize Size in bytes of sample data to retain in memory when no longer used, to avoid repeated disk I/O. Use -1 to disable.
 * @param {int} streamingscheduledelay Specify the schedule delay for streams, in samples. Lower values can reduce latency when scheduling events containing streams but may cause scheduling issues if too small.
 * @param {string} encryptionkey Specify the key for loading sounds from encrypted banks. (UTF-8 string)
 * @func_end
*/
function fmod_studio_system_set_advanced_settings(buff_args_) {}


/**
 * @func fmod_studio_system_get_advanced_settings_multiplatform
 * @desc Retrieves advanced settings.
 * @returns {struct} {commandqueuesize:int,handleinitialsize:int,studioupdateperiod:int,idlesampledatapoolsize:int,streamingscheduledelay:int,encryptionkey:string}
 * @func_end
*/
function fmod_studio_system_get_advanced_settings_multiplatform(buff_return_) {}


/**
 * @func fmod_studio_system_start_command_capture
 * @desc Recording Studio commands to a file.
 * @param {string} filename The name of the file to which the recorded commands are written. (UTF-8 string)
 * @param {constant.FMOD_STUDIO_COMMANDCAPTURE_FLAGS} flags Flags that control command capturing. 
 * @func_end
*/
function fmod_studio_system_start_command_capture(filename,flags) {}


/**
 * @func fmod_studio_system_stop_command_capture
 * @desc Stop recording Studio commands.
 * @func_end
*/
function fmod_studio_system_stop_command_capture() {}


/**
 * @func fmod_studio_system_load_command_replay
 * @desc Load a command replay.
 * @param {string} filename The name of the file from which to load the command replay. (UTF-8 string)
 * @param {constant.FMOD_STUDIO_COMMANDREPLAY_FLAGS} flags Flags that control the command replay.
 * @returns {double}
 * @func_end
*/
function fmod_studio_system_load_command_replay(filename,flags) {}


//TODO
/**
 * @func fmod_studio_system_get_buffer_usage
 * @desc Retrieves buffer usage information.
 * @returns {struct} {command_queue:,handle:}
 * @func_end
*/
function fmod_studio_system_get_buffer_usage(buff_return_) {}


/**
 * @func fmod_studio_system_reset_buffer_usage
 * @desc Resets memory buffer usage statistics.
 * @func_end
*/
function fmod_studio_system_reset_buffer_usage() {}


/**
 * @func fmod_studio_system_get_cpu_usage_multiplatform
 * @desc Retrieves the amount of CPU used for different parts of the Studio engine.
 * @returns {struct} {core:{convolution1:float,convolution2:float,dsp:float,geometry:float,stream:float,update;float},studio:{update:float}}
 * @func_end
*/
function fmod_studio_system_get_cpu_usage(buff_return_) {}


/**
 * @func fmod_studio_system_get_memory_usage
 * @desc  Retrieves memory usage statistics.
 * @returns {constant.FMOD_STUDIO_MEMORY_USAGE}
 * @func_end
*/
function fmod_studio_system_get_memory_usage(buff_return_) {}


/**
 * @func fmod_studio_system_set_callback
 * @desc Sets a callback for the FMOD Studio System.
 * @param {constant.FMOD_STUDIO_SYSTEM_CALLBACK} type System callback function.
 * @func_end
*/
function fmod_studio_system_set_callback(type) {}


//TODO
/**
 * @func fmod_studio_system_get_sound_info
 * @desc Retrieves information for loading a sound from the audio table.
 * @param {string} key 
 * @returns {double}
 * @func_end
*/
function fmod_studio_system_get_sound_info(key,buff_return_) {}


/**
 * @func fmod_studio_system_lookup_id
 * @desc Retrieves the ID for a bank, event, snapshot, bus or VCA.
 * @param {string} path path
 * @returns {string}
 * @func_end
*/
function fmod_studio_system_lookup_id(path) {}


/**
 * @func fmod_studio_system_lookup_path
 * @desc Retrieves the path for a bank, event, snapshot, bus or VCA.
 * @param {string} str_guid bank, event, snapshot, bus or VCA GUID
 * @returns {string}
 * @func_end
*/
function fmod_studio_system_lookup_path(str_guid) {}


/**
 * @func fmod_studio_system_is_valid
 * @desc Checks that the System reference is valid and has been initialized.
 * @returns {double}
 * @func_end
*/
function fmod_studio_system_is_valid() {}

/**
 * @module StudioSystem
 * @title Studio System
 * @desc The following set of functions are all for checking the availability of certain aspects of the Steam client or server API. This means that these functions should be used before any other Steam API function call to ensure that the client/server setup is correct and communicating with your game:
 * @section_func
 
 * @ref fmod_studio_system_create
 * @ref fmod_studio_system_init
 * @ref fmod_studio_system_release
 * @ref fmod_studio_system_update
 * @ref fmod_studio_system_flush_commands
 * @ref fmod_studio_system_flush_sample_loading
 * @ref fmod_studio_system_load_bank_custom
 * @ref fmod_studio_system_load_bank_file
 * @ref fmod_studio_system_load_bank_memory
 * @ref fmod_studio_system_unload_all
 * @ref fmod_studio_system_get_bank
 * @ref fmod_studio_system_get_bank_by_id
 * @ref fmod_studio_system_get_bank_count
 * @ref fmod_studio_system_get_bank_list
 * @ref fmod_studio_system_set_listener_attributes
 * @ref fmod_studio_system_get_listener_attributes
 * @ref fmod_studio_system_set_listener_weight
 * @ref fmod_studio_system_get_listener_weight
 * @ref fmod_studio_system_set_num_listeners
 * @ref fmod_studio_system_get_num_listeners
 * @ref fmod_studio_system_get_bus
 * @ref fmod_studio_system_get_event
 * @ref fmod_studio_system_get_event_by_id
 * @ref fmod_studio_system_get_parameter_by_id
 * @ref fmod_studio_system_set_parameter_by_id
 * @ref fmod_studio_system_set_parameter_by_id_with_label
 * @ref fmod_studio_system_get_parameter_by_name
 * @ref fmod_studio_system_set_parameter_by_name
 * @ref fmod_studio_system_set_parameter_by_name_with_label
 * @ref fmod_studio_system_get_parameter_description_by_name
 * @ref fmod_studio_system_get_parameter_description_by_id
 * @ref fmod_studio_system_get_parameter_description_count
 * @ref fmod_studio_system_get_parameter_description_list
 * @ref fmod_studio_system_get_parameter_label_by_name
 * @ref fmod_studio_system_get_parameter_label_by_id
 * @ref fmod_studio_system_get_vca
 * @ref fmod_studio_system_get_vca_by_id
 * @ref fmod_studio_system_set_advanced_settings
 * @ref fmod_studio_system_get_advanced_settings
 * @ref fmod_studio_system_start_command_capture
 * @ref fmod_studio_system_stop_command_capture
 * @ref fmod_studio_system_load_command_replay
 * @ref fmod_studio_system_get_buffer_usage
 * @ref fmod_studio_system_reset_buffer_usage
 * @ref fmod_studio_system_get_cpu_usage
 * @ref fmod_studio_system_get_memory_usage
 * @ref fmod_studio_system_set_callback
 * @ref fmod_studio_system_get_sound_info
 * @ref fmod_studio_system_lookup_id
 * @ref fmod_studio_system_lookup_path
 * @ref fmod_studio_system_is_valid

 * @section_end
 * @module_end
 */
 
 