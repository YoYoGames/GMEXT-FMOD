/**
 * @func fmod_studio_command_replay_set_bank_path
 * @desc Sets a path substition that will be used when loading banks with this replay.
 * @param {double} index Identifier of the Bank instance 
 * @param {string} path The path to use when loading banks.
 * @func_end
*/
function fmod_studio_command_replay_set_bank_path(index_,path) {}


/**
 * @func fmod_studio_command_replay_set_create_instance_callback
 * @desc Sets the create event instance callback.
 * @param {double} index Identifier of the Bank instance 
 * @param {string} path 
 * @func_end
*/
function fmod_studio_command_replay_set_create_instance_callback(index_) {}


/**
 * @func fmod_studio_command_replay_set_frame_callback
 * @desc Sets a callback that is issued each time the replay reaches a new frame.
 * @param {double} index Identifier of the Bank instance 
 * @func_end
*/
function fmod_studio_command_replay_set_frame_callback(index_) {}


/**
 * @func fmod_studio_command_replay_set_load_bank_callback
 * @desc Sets the bank loading callback.
 * @param {double} index Identifier of the Bank instance 
 * @func_end
*/
function fmod_studio_command_replay_set_load_bank_callback(index_) {}


/**
 * @func fmod_studio_command_replay_start
 * @desc Begins playback.
 * @param {double} index Identifier of the Bank instance 
 * @func_end
*/
function fmod_studio_command_replay_start(index_) {}


/**
 * @func fmod_studio_command_replay_stop
 * @desc Stops playback.
 * @param {double} index Identifier of the Bank instance 
 * @func_end
*/
function fmod_studio_command_replay_stop(index_) {}


/**
 * @func fmod_studio_command_replay_get_current_command_multiplatform
 * @desc Retrieves the progress through the command replay.
 * @param {double} index Identifier of the Bank instance
 * @returns {struct} {command_index:int,currenttime:int}
 * @func_end
*/
function fmod_studio_command_replay_get_current_command_multiplatform(index_) {}


/**
 * @func fmod_studio_command_get_playback_state
 * @desc Retrieves the playback state.
 * @param {double} index Identifier of the Bank instance 
 * @returns {constant.FMOD_STUDIO_PLAYBACK_STATE}
 * @func_end
*/
function fmod_studio_command_get_playback_state(index_) {}


/**
 * @func fmod_studio_command_set_paused
 * @desc Sets the paused state.
 * @param {double} index Identifier of the Bank instance 
 * @param {double} pause Paused state.
 * @func_end
*/
function fmod_studio_command_set_paused(index_,pause) {}


/**
 * @func fmod_studio_command_get_paused
 * @desc Retrieves the paused state.
 * @param {double} index Identifier of the Bank instance 
 * @returns {bool}
 * @func_end
*/
function fmod_studio_command_get_paused(index_) {}


/**
 * @func fmod_studio_command_seek_to_command
 * @desc Seeks the playback position to a command.
 * @param {double} index Identifier of the Bank instance 
 * @param {double} command_index Command index to seek to.
 * @func_end
*/
function fmod_studio_command_seek_to_command(index_,command_index) {}


/**
 * @func fmod_studio_command_seek_to_time
 * @desc Seeks the playback position to a time.
 * @param {double} index Identifier of the Bank instance 
 * @param {double} time Time to seek to.
 * @func_end
*/
function fmod_studio_command_seek_to_time(index_,time) {}


/**
 * @func fmod_studio_command_get_command_at_time
 * @desc Retrieves the command index corresponding to the given playback time.
 * @param {double} index Identifier of the Bank instance 
 * @param {double} time The time used to find a command index.
 * @returns {double}
 * @func_end
*/
function fmod_studio_command_get_command_at_time(index_,time) {}


/**
 * @func fmod_studio_command_get_command_count
 * @desc Retrieves the number of commands in the replay.
 * @param {double} index Identifier of the Bank instance 
 * @returns {double}
 * @func_end
*/
function fmod_studio_command_get_command_count(index_) {}


/**
 * @func fmod_studio_command_get_command_info_multiplatform
 * @desc Retrieves command information.
 * @param {double} index Identifier of the Bank instance 
 * @param {double} command_index  
 * @returns {struct}  {commandname:string,parentcommandindex:int,frametime:int,instancetype:FMOD_STUDIO_INSTANCETYPE,outputtype:FMOD_STUDIO_INSTANCETYPE,instancehandle:int,outputhandle:int}
 * @func_end
*/
function fmod_studio_command_get_command_info_multiplatform(index_,command_index,buff_return_) {}


/**
 * @func fmod_studio_command_get_command_string
 * @desc Retrieves the string representation of a command.
 * @param {double} index Identifier of the Bank instance 
 * @param {double} command_index The index of the command.
 * @returns {string}
 * @func_end
*/
function fmod_studio_command_get_command_string(index_,command_index) {}


/**
 * @func fmod_studio_command_get_length
 * @desc Retrieves the total playback time.
 * @param {double} index Identifier of the Bank instance 
 * @param {double} command_index The index of the command.
 * @returns {double}
 * @func_end
*/
function fmod_studio_command_get_length(index_,command_index) {}


/**
 * @func fmod_studio_command_is_valid
 * @desc Checks that the CommandReplay reference is valid.
 * @param {double} index Identifier of the Bank instance 
 * @returns {bool}
 * @func_end
*/
function fmod_studio_command_is_valid(index_) {}


/**
 * @func fmod_studio_command_release
 * @desc Releases the command replay.
 * @param {double} index Identifier of the Bank instance 
 * @func_end
*/
function fmod_studio_command_release(index_) {}



/**
 * @module StudioCommandReplay
 * @title Studio Command Replay
 * @desc The following set of functions are all for checking the availability of certain aspects of the Steam client or server API. This means that these functions should be used before any other Steam API function call to ensure that the client/server setup is correct and communicating with your game:
 * @section_func

 * @ref fmod_studio_command_replay_set_bank_path
 * @ref fmod_studio_command_replay_set_create_instance_callback
 * @ref fmod_studio_command_replay_set_frame_callback
 * @ref fmod_studio_command_replay_set_load_bank_callback
 * @ref fmod_studio_command_replay_start
 * @ref fmod_studio_command_replay_stop
 * @ref fmod_studio_command_replay_get_current_command
 * @ref fmod_studio_command_get_playback_state
 * @ref fmod_studio_command_set_paused
 * @ref fmod_studio_command_get_paused
 * @ref fmod_studio_command_seek_to_command
 * @ref fmod_studio_command_seek_to_time
 * @ref fmod_studio_command_get_command_at_time
 * @ref fmod_studio_command_get_command_count
 * @ref fmod_studio_command_get_command_info
 * @ref fmod_studio_command_get_command_string
 * @ref fmod_studio_command_get_length
 * @ref fmod_studio_command_is_valid
 * @ref fmod_studio_command_release

 * @section_end
 * @module_end
 */
 