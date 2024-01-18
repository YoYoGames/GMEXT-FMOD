
/**
 * @func fmod_sound_group_set_max_audible
 * @desc Sets the maximum number of playbacks to be audible at once in a sound group.
 * @param {string} index Indentifier of the sound index
 * @param {double} max_audible Maximum number of playbacks to be audible at once. -1 denotes unlimited.
 * @func_end
*/
function fmod_sound_group_set_max_audible(index,max_audible) {}


/**
 * @func fmod_sound_group_get_max_audible
 * @desc Retrieves the maximum number of playbacks to be audible at once in a sound group.
 * @param {string} index Indentifier of the sound index 
 * @returns {double}
 * @func_end
*/
function fmod_sound_group_get_max_audible(index) {}


/**
 * @func fmod_sound_group_set_max_audible_behavior
 * @desc This function changes the way the sound playback behaves when too many sounds are playing in a soundgroup.
 * @param {string} index Indentifier of the sound index 
 * @param {constant.FMOD_SOUNDGROUP_BEHAVIOR} behavior SoundGroup max playbacks behavior. 
 * @returns {double}
 * @func_end
*/
function fmod_sound_group_set_max_audible_behavior(index,behavior) {}


/**
 * @func fmod_sound_group_get_max_audible_behavior
 * @desc Retrieves the current max audible behavior.
 * @param {string} index Indentifier of the sound index 
 * @returns {constant.FMOD_SOUNDGROUP_BEHAVIOR}
 * @func_end
*/
function fmod_sound_group_get_max_audible_behavior(index) {}


/**
 * @func fmod_sound_group_set_mute_fade_speed
 * @desc Sets a mute fade time.
 * @param {string} index Indentifier of the sound index 
 * @param {double} speed Fade time. 0 = no fading.
 * @func_end
*/
function fmod_sound_group_set_mute_fade_speed(index,speed) {}


/**
 * @func fmod_sound_group_get_mute_fade_speed
 * @desc Retrieves the current mute fade time.
 * @param {string} index Indentifier of the sound index 
 * @func_end
*/
function fmod_sound_group_get_mute_fade_speed(index) {}


/**
 * @func fmod_sound_group_set_volume
 * @desc Sets the volume of the sound group.
 * @param {string} index Indentifier of the sound index 
 * @param {double} volume Volume level.
 * @func_end
*/
function fmod_sound_group_set_volume(index,volume) {}


/**
 * @func fmod_sound_group_get_volume
 * @desc Retrieves the volume of the sound group.
 * @param {string} index Indentifier of the sound index 
 * @returns {double}
 * @func_end
*/
function fmod_sound_group_get_volume(index) {}


/**
 * @func fmod_sound_group_release
 * @desc Releases a soundgroup object and returns all sounds back to the master sound group.
 * @param {string} index Indentifier of the sound index 
 * @func_end
*/
function fmod_sound_group_release(index) {}



/**
 * @module SoundGroup
 * @title Sound Group
 * @desc The following set of functions are all for checking the availability of certain aspects of the Steam client or server API. This means that these functions should be used before any other Steam API function call to ensure that the client/server setup is correct and communicating with your game:
 * @section_func


 * @ref fmod_sound_group_set_max_audible
 * @ref fmod_sound_group_get_max_audible
 * @ref fmod_sound_group_set_max_audible_behavior
 * @ref fmod_sound_group_get_max_audible_behavior
 * @ref fmod_sound_group_set_mute_fade_speed
 * @ref fmod_sound_group_get_mute_fade_speed
 * @ref fmod_sound_group_set_volume
 * @ref fmod_sound_group_get_volume
 * @ref fmod_sound_group_release

 * @section_end
 * @module_end
 */
 
 