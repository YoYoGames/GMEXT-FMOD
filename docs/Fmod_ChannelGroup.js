
/**
 * @func fmod_channel_group_unlink
 * @desc YYNULL
 * @param {string} channel_group_name  Name of the channel groupName of the channel group Name of the channel group
 * @returns {double}
 * @func_end
*/
function fmod_channel_group_unlink(name) {}


/**
 * @func fmod_channel_group_unlink_all
 * @desc YYNULL
 * @returns {double}
 * @func_end
*/
function fmod_channel_group_unlink_all() {}


/**
 * @func fmod_channel_group_get_num_channels
 * @desc Retrieves the number of Channels that feed into to this
 * @param {string} channel_group_name  Name of the channel group
 * @returns {double}
 * @func_end
*/
function fmod_channel_group_get_num_channels(channel_group_name) {}


/**
 * @func fmod_channel_group_add_group
 * @desc Adds a ChannelGroup as an input to this group.
 * @param {string} channel_group_name  Name of the channel group
 * @param {string} channel_group_name_child Group to add.
 * @returns {double}
 * @func_end
*/
function fmod_channel_group_add_group(channel_group_name,channel_group_name_child) {}


/**
 * @func fmod_channel_group_get_num_groups
 * @desc Retrieves the number of ChannelGroups that feed into to this group.
 * @param {string} channel_group_name  Name of the channel group
 * @func_end
*/
function fmod_channel_group_get_num_groups(channel_group_name) {}


/**
 * @func fmod_channel_group_get_group
 * @desc Retrieves the ChannelGroup at the specified index in the list of group inputs.
 * @param {string} channel_group_name  Name of the channel group
 * @param {double} group_index_ Offset into the list of group inputs.
 * @returns {string}
 * @func_end
*/
function fmod_channel_group_get_group(channel_group_name,group_index_) {}


/**
 * @func fmod_channel_group_get_parent_group
 * @desc Retrieves the ChannelGroup this object outputs to.
 * @param {string} channel_group_name  Name of the channel group
 * @returns {string}
 * @func_end
*/
function fmod_channel_group_get_parent_group(channel_group_name) {}


/**
 * @func fmod_channel_group_release
 * @desc Frees the memory for the group.
 * @param {string} channel_group_name  Name of the channel group
 * @func_end
*/
function fmod_channel_group_release(channel_group_name) {}

// MODULES

/**
 * @module ChannelGroup
 * @title Channel Group
 * @desc The following set of functions are all for checking the availability of certain aspects of the Steam client or server API. This means that these functions should be used before any other Steam API function call to ensure that the client/server setup is correct and communicating with your game:
 * @section_func
 * @ref fmod_channel_group_unlink
 * @ref fmod_channel_group_unlink_all
 * @ref fmod_channel_group_get_num_channels
 * @ref fmod_channel_group_add_group
 * @ref fmod_channel_group_get_num_groups
 * @ref fmod_channel_group_get_group
 * @ref fmod_channel_group_get_parent_group
 * @ref fmod_channel_group_release
 * @section_end
 * @module_end
 */

