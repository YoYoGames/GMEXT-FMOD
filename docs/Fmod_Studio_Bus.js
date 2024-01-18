/**
 * @func fmod_studio_bus_connection_unlink
 * @desc YYNULL
 * @param {string} str_guid Identifier of the Bus 
 * @returns {double}
 * @func_end
*/
function fmod_studio_bus_connection_unlink(str_guid) {}


/**
 * @func fmod_studio_bus_connection_unlink_all
 * @desc YYNULL
 * @returns {double}
 * @func_end
*/
function fmod_studio_bus_connection_unlink_all() {}


/**
 * @func fmod_studio_bus_set_paused
 * @desc Sets the pause state.
 * @param {string} str_guid Identifier of the Bus 
 * @param {double} pause Pause state. True to pause the bus.
 * @func_end
*/
function fmod_studio_bus_set_paused(str_guid,pause) {}


/**
 * @func fmod_studio_bus_get_paused
 * @desc Retrieves the pause state.
 * @param {string} str_guid Identifier of the Bus 
 * @returns {bool}
 * @func_end
*/
function fmod_studio_bus_get_paused(str_guid) {}


/**
 * @func fmod_studio_bus_stop_all_events
 * @desc Stops all event instances that are routed into the bus.
 * @param {string} str_guid Identifier of the Bus 
 * @param {constant.STOP_MODE} stop_mode Stop mode.
 * @returns {double}
 * @func_end
*/
function fmod_studio_bus_stop_all_events(str_guid,stop_mode) {}


/**
 * @func fmod_studio_bus_set_volume
 * @desc Sets the volume level.
 * @param {string} str_guid Identifier of the Bus 
 * @param {double} volumen Volume level. Negative level inverts the signal.
 * @func_end
*/
function fmod_studio_bus_set_volume(str_guid,volumen) {}


/**
 * @func fmod_studio_bus_get_volume
 * @desc Retrieves the volume level.
 * @param {string} str_guid Identifier of the Bus 
 * @returns {double}
 * @func_end
*/
function fmod_studio_bus_get_volume(str_guid) {}


/**
 * @func fmod_studio_bus_set_mute
 * @desc Sets the mute state.
 * @param {string} str_guid Identifier of the Bus 
 * @param {double} mute Mute state. True to mute the bus.
 * @func_end
*/
function fmod_studio_bus_set_mute(str_guid,mute) {}


/**
 * @func fmod_studio_bus_get_mute
 * @desc Retrieves the mute state.
 * @param {string} str_guid Identifier of the Bus 
 * @returns {double}
 * @func_end
*/
function fmod_studio_bus_get_mute(str_guid) {}


/**
 * @func fmod_studio_bus_set_port_index
 * @desc Sets the port index to use when attaching to an output port.
 * @param {string} str_guid Identifier of the Bus 
 * @param {int64} port_index Port index to use when attaching to an output port
 * @func_end
*/
function fmod_studio_bus_set_port_index(str_guid,port_index) {}


/**
 * @func fmod_studio_bus_get_port_index
 * @desc Retrieves the port index assigned to the bus.
 * @param {string} str_guid Identifier of the Bus 
 * @returns {int64}
 * @func_end
*/
function fmod_studio_bus_get_port_index(str_guid) {}


/**
 * @func fmod_studio_bus_get_channel_group
 * @desc Retrieves the core ChannelGroup.
 * @param {string} str_guid Identifier of the Bus 
 * @returns {string}
 * @func_end
*/
function fmod_studio_bus_get_channel_group(str_guid) {}


/**
 * @func fmod_studio_bus_lock_channel_group
 * @desc Locks the core ChannelGroup.
 * @param {string} str_guid Identifier of the Bus 
 * @func_end
*/
function fmod_studio_bus_lock_channel_group(str_guid) {}


/**
 * @func fmod_studio_bus_unlock_channel_group
 * @desc Unlocks the core ChannelGroup.
 * @param {string} str_guid Identifier of the Bus 
 * @func_end
*/
function fmod_studio_bus_unlock_channel_group(str_guid) {}


/**
 * @func fmod_studio_bus_get_cpu_usage
 * @desc Retrieves the bus CPU usage data.
 * @param {string} str_guid Identifier of the Bus 
 * @returns {struct} {exclusive:int	,inclusive:int}
 * @func_end
*/
function fmod_studio_bus_get_cpu_usage(str_guid,buff_return_) {}


/**
 * @func fmod_studio_bus_get_memory_usage
 * @desc Retrieves memory usage statistics.
 * @param {string} str_guid Identifier of the Bus 
 * @returns {constant.FMOD_STUDIO_MEMORY_USAGE}
 * @func_end
*/
function fmod_studio_bus_get_memory_usage(str_guid,buff_return_) {}


/**
 * @func fmod_studio_bus_get_id
 * @desc Retrieves the GUID.
 * @param {string} str_guid Identifier of the Bus 
 * @returns {string}
 * @func_end
*/
function fmod_studio_bus_get_id(str_guid) {}


/**
 * @func fmod_studio_bus_get_path
 * @desc Retrieves the path.
 * @param {string} str_guid Identifier of the Bus 
 * @returns {string}
 * @func_end
*/
function fmod_studio_bus_get_path(str_guid) {}


/**
 * @func fmod_studio_bus_is_valid
 * @desc Checks that the Bus reference is valid.
 * @param {string} str_guid Identifier of the Bus 
 * @returns {bool}
 * @func_end
*/
function fmod_studio_bus_is_valid(str_guid) {}



/**
 * @module StudioBus
 * @title Studio Bus
 * @desc The following set of functions are all for checking the availability of certain aspects of the Steam client or server API. This means that these functions should be used before any other Steam API function call to ensure that the client/server setup is correct and communicating with your game:
 * @section_func


 * @ref fmod_studio_bus_connection_unlink
 * @ref fmod_studio_bus_connection_unlink_all
 * @ref fmod_studio_bus_set_paused
 * @ref fmod_studio_bus_get_paused
 * @ref fmod_studio_bus_stop_all_events
 * @ref fmod_studio_bus_set_volume
 * @ref fmod_studio_bus_get_volume
 * @ref fmod_studio_bus_set_mute
 * @ref fmod_studio_bus_get_mute
 * @ref fmod_studio_bus_set_port_index
 * @ref fmod_studio_bus_get_port_index
 * @ref fmod_studio_bus_get_channel_group
 * @ref fmod_studio_bus_lock_channel_group
 * @ref fmod_studio_bus_unlock_channel_group
 * @ref fmod_studio_bus_get_cpu_usage
 * @ref fmod_studio_bus_get_memory_usage
 * @ref fmod_studio_bus_get_id
 * @ref fmod_studio_bus_get_path
 * @ref fmod_studio_bus_is_valid


 * @section_end
 * @module_end
 */
 