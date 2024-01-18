

/**
 * @func fmod_channel_unlink
 * @desc Unlink a Channel from the extension
 * @param {string} name 
 * @func_end
*/
function fmod_channel_unlink(name) {}


/**
 * @func fmod_channel_unlink_all
 * @desc YYNULL
 * @func_end
*/
function fmod_channel_unlink_all() {}


/**
 * @func fmod_channel_create
 * @desc Create a new channel. return the index of the channel. channel should be forget it using fmod_channel_unlink()
 * @returns {string}
 * @func_end
*/
function fmod_channel_create() {}


/**
 * @func fmod_channel_set_frequency
 * @desc Sets the frequency or playback rate.
 * @param {string} channel_index identifier of the channel
 * @param {double} frequency Playback rate.
  * @func_end
*/
function fmod_channel_set_frequency(channel_index,frequency) {}


/**
 * @func fmod_channel_get_frequency
 * @desc Retrieves the playback frequency or playback rate.
 * @param {string} channel_index identifier of the channel 
 * @returns {double} Playback frequency.
  * @func_end
*/
function fmod_channel_get_frequency(channel_index) {}


/**
 * @func fmod_channel_set_priority
 * @desc Sets the priority used for virtual voice ordering.
 * @param {string} channel_index identifier of the channel 
 * @param {double} priority Priority where 0 represents most important and 256 represents least important.
 * @func_end
*/
function fmod_channel_set_priority(channel_index,priority) {}


/**
 * @func fmod_channel_get_priority
 * @desc Retrieves the priority used for virtual voice ordering.
 * @param {string} channel_index identifier of the channel 
 * @returns {double}
 * @func_end
*/
function fmod_channel_get_priority(channel_index) {}


/**
 * @func fmod_channel_set_position
 * @desc Sets the current playback position.
 * @param {string} channel_index identifier of the channel 
 * @param {double} position Playback position.
 * @param {double} time_unit Time units for position.
 * @returns {constant.FMOD_TIMEUNIT}
 * @func_end
*/
function fmod_channel_set_position(channel_index,position_,time_unit_) {}


/**
 * @func fmod_channel_get_position
 * @desc Retrieves the current playback position.
 * @param {string} channel_index identifier of the channel 
 * @param {constant.FMOD_TIMEUNIT} time_unit Time units for position.
 * @func_end
*/
function fmod_channel_get_position(channel_index,time_unit_) {}


/**
 * @func fmod_channel_set_channel_group
 * @desc Sets the ChannelGroup this object outputs to.
 * @param {string} channel_index identifier of the channel 
 * @param {double} channel_group Output group
 * @returns {double}
 * @func_end
*/
function fmod_channel_set_channel_group(channel_index,channel_group_) {}


/**
 * @func fmod_channel_get_channel_group
 * @desc Retrieves the ChannelGroup this object outputs to.
 * @param {string} channel_index identifier of the channel 
 * @returns {double}
 * @func_end
*/
function fmod_channel_get_channel_group(channel_index) {}


/**
 * @func fmod_channel_set_loop_count
 * @desc Sets the number of times to loop before stopping.
 * @param {string} channel_index identifier of the channel 
 * @param {double} loop_count Times to loop before stopping where 0 represents "oneshot", 1 represents "loop once then stop" and -1 represents "loop forever".
 * @returns {double}
 * @func_end
*/
function fmod_channel_set_loop_count(channel_index,loop_count) {}


/**
 * @func fmod_channel_get_loop_count
 * @desc Retrieves the number of times to loop before stopping.
 * @param {string} channel_index identifier of the channel 
 * @returns {double}
 * @func_end
*/
function fmod_channel_get_loop_count(channel_index) {}


/**
 * @func fmod_channel_set_loop_points
 * @desc Sets the loop start and end points.
 * @param {string} channel_index identifier of the channel 
 * @param {double} loopstart Loop start point.
 * @param {constant.FMOD_TIMEUNIT} loopstarttype Time units for loopstart.
 * @param {double} loopend Loop end point.
 * @param {constant.FMOD_TIMEUNIT} Time units for loopend.
 * @returns {double}
 * @func_end
*/
function fmod_channel_set_loop_points(channel_index, loopstart, loopstarttype, loopend, loopendtype) {}


/**
 * @func fmod_channel_get_loop_points
 * @desc Retrieves the loop start and end points.
 * @param {string} channel_index identifier of the channel 
 * @param {constant.FMOD_TIMEUNIT} loopstarttype Time units for loopstart.
 * @param {constant.FMOD_TIMEUNIT} Time units for loopend.
 * @returns {struct} keys: loop_start and loop_end
 * @func_end
*/
function fmod_channel_get_loop_points(channel_index,loopendtype_,loopstarttype_) {}


/**
 * @func fmod_channel_is_virtual
 * @desc Retrieves whether the Channel is being emulated by the virtual voice system.
 * @param {string} channel_index identifier of the channel 
 * @returns {bool}
 * @func_end
*/
function fmod_channel_is_virtual(channel_index) {}


/**
 * @func fmod_channel_get_current_sound
 * @desc Retrieves the currently playing Sound.
 * @param {string} channel_index identifier of the channel 
 * @returns {double}
 * @func_end
*/
function fmod_channel_get_current_sound(channel_index) {}


// MODULES

/**
 * @module Channel
 * @title Channel
 * @desc The following set of functions are all for checking the availability of certain aspects of the Steam client or server API. This means that these functions should be used before any other Steam API function call to ensure that the client/server setup is correct and communicating with your game:
 * @section_func
 * @ref fmod_channel_unlink
 * @ref fmod_channel_unlink_all
 * @ref fmod_channel_create
 * @ref fmod_channel_set_frequency
 * @ref fmod_channel_get_frequency
 * @ref fmod_channel_set_priority
 * @ref fmod_channel_get_priority
 * @ref fmod_channel_set_position
 * @ref fmod_channel_get_position
 * @ref fmod_channel_set_channel_group
 * @ref fmod_channel_get_channel_group
 * @ref fmod_channel_set_loop_count
 * @ref fmod_channel_get_loop_count
 * @ref fmod_channel_set_loop_points
 * @ref fmod_channel_get_loop_points
 * @ref fmod_channel_is_virtual
 * @ref fmod_channel_get_current_sound
 * @ref fmod_channel_get_index
 * @section_end
 * @module_end
 */

