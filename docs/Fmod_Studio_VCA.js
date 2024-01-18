

/**
 * @func fmod_studio_vca_set_volume
 * @desc Sets the volume level.
 * @param {string} str_guid Identifier of the VCA instance Identifier of the VCA
 * @param {double} volume Volume level. Negative level inverts the signal.
 * @func_end
*/
function fmod_studio_vca_set_volume(str_guid,volume) {}


/**
 * @func fmod_studio_vca_get_volume
 * @desc Retrieves the volume level.
 * @param {string} str_guid Identifier of the VCA instance 
 * @returns {double}
 * @func_end
*/
function fmod_studio_vca_get_volume(str_guid) {}


/**
 * @func fmod_studio_vca_get_id
 * @desc Retrieves the GUID.
 * @param {string} str_guid Identifier of the VCA instance 
 * @returns {string}
 * @func_end
*/
function fmod_studio_vca_get_id(str_guid) {}


/**
 * @func fmod_studio_vca_get_path
 * @desc Retrieves the path.
 * @param {string} str_guid Identifier of the VCA instance 
 * @returns {string}
 * @func_end
*/
function fmod_studio_vca_get_path(str_guid) {}


/**
 * @func fmod_studio_vca_is_valid
 * @desc Checks that the VCA reference is valid.
 * @param {string} str_guid Identifier of the VCA instance 
 * @returns {bool}
 * @func_end
*/
function fmod_studio_vca_is_valid(str_guid) {}


/**
 * @module StudioVCA
 * @title Studio VCA
 * @desc The following set of functions are all for checking the availability of certain aspects of the Steam client or server API. This means that these functions should be used before any other Steam API function call to ensure that the client/server setup is correct and communicating with your game:
 * @section_func
 
 * @ref fmod_studio_vca_set_volume
 * @ref fmod_studio_vca_get_volume
 * @ref fmod_studio_vca_get_id
 * @ref fmod_studio_vca_get_path
 * @ref fmod_studio_vca_is_valid

 * @section_end
 * @module_end
 */
 
 