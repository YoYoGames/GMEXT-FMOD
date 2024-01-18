/**
 * @func fmod_studio_bank_get_loading_state
 * @desc Retrieves the loading state.
 * @param {string} str_guid Idenitifer of the bank instance
 * @returns {double}
 * @func_end
*/
function fmod_studio_bank_get_loading_state(str_guid) {}


/**
 * @func fmod_studio_bank_load_sample_data
 * @desc Loads non-streaming sample data for all events in the bank.
 * @param {string} str_guid Idenitifer of the bank instance 
 * @func_end
*/
function fmod_studio_bank_load_sample_data(str_guid) {}


/**
 * @func fmod_studio_bank_unload_sample_data
 * @desc Unloads non-streaming sample data for all events in the bank.
 * @param {string} str_guid Idenitifer of the bank instance 
 * @func_end
*/
function fmod_studio_bank_unload_sample_data(str_guid) {}


/**
 * @func fmod_studio_bank_get_sample_loading_state
 * @desc Retrieves the loading state of the samples in the bank.
 * @param {string} str_guid Idenitifer of the bank instance 
 * @returns {double}
 * @func_end
*/
function fmod_studio_bank_get_sample_loading_state(str_guid) {}


/**
 * @func fmod_studio_bank_unload
 * @desc Unloads the bank.
 * @param {string} str_guid Idenitifer of the bank instance 
 * @func_end
*/
function fmod_studio_bank_unload(str_guid) {}


/**
 * @func fmod_studio_bank_get_bus_count
 * @desc Retrieves the number of buses in the bank.
 * @param {string} str_guid Idenitifer of the bank instance 
 * @returns {double}
 * @func_end
*/
function fmod_studio_bank_get_bus_count(str_guid) {}


/**
 * @func fmod_studio_bank_get_bus_list_multiplatform
 * @desc Retrieves a list of the buses in the bank.
 * @param {string} str_guid Idenitifer of the bank instance 
 * @returns {direct:double,reverb:double,listener:double,source:double}
 * @func_end
*/
function fmod_studio_bank_get_bus_list_multiplatform(str_guid,buff_return_) {}


/**
 * @func fmod_studio_bank_get_event_count
 * @desc Retrieves the number of event descriptions in the bank.
 * @param {string} str_guid Idenitifer of the bank instance 
 * @returns {double}
 * @func_end
*/
function fmod_studio_bank_get_event_count(str_guid) {}


/**
 * @func fmod_studio_bank_get_event_description_list_multiplatform
 * @desc Retrieves a list of the event descriptions in the bank.
 * @param {string} str_guid Idenitifer of the bank instance 
 * @returns {array}
 * @func_end
*/
function fmod_studio_bank_get_event_description_list_multiplatform(str_guid,buff_return_) {}


/**
 * @func fmod_studio_bank_get_string_count
 * @desc Retrieves the number of string table entries in the bank.
 * @param {string} str_guid Idenitifer of the bank instance 
 * @returns {double}
 * @func_end
*/
function fmod_studio_bank_get_string_count(str_guid) {}


/**
 * @func fmod_studio_bank_get_string_info_multiplatform
 * @desc Retrieves a string table entry.
 * @param {string} str_guid Idenitifer of the bank instance 
 * @param {double} index String table entry index.
 * @returns {double} {guid:string, path:string}
 * @func_end
*/
function fmod_studio_bank_get_string_info_multiplatform(str_guid,index,buff_return_) {}


/**
 * @func fmod_studio_bank_get_vca_count
 * @desc Retrieves the number of VCAs in the bank.
 * @param {string} str_guid Idenitifer of the bank instance 
 * @returns {double}
 * @func_end
*/
function fmod_studio_bank_get_vca_count(str_guid) {}


/**
 * @func fmod_studio_system_get_vca_list_multiplatform
 * @desc Retrieves a list of the VCAs in the bank.
 * @param {string} str_guid Idenitifer of the bank instance 
 * @returns {array}
 * @func_end
*/
function fmod_studio_system_get_vca_list_multiplatform(str_guid,buff_return_) {}


/**
 * @func fmod_studio_bank_get_id
 * @desc Retrieves the GUID.
 * @param {string} str_guid Idenitifer of the bank instance 
 * @returns {string}
 * @func_end
*/
function fmod_studio_bank_get_id(str_guid) {}


/**
 * @func fmod_studio_bank_get_path
 * @desc Retrieves the path.
 * @param {string} str_guid Idenitifer of the bank instance 
 * @returns {string}
 * @func_end
*/
function fmod_studio_bank_get_path(str_guid) {}


/**
 * @func fmod_studio_bank_is_valid
 * @desc Checks that the Bank reference is valid.
 * @param {string} str_guid Idenitifer of the bank instance 
 * @returns {bool}
 * @func_end
*/
function fmod_studio_bank_is_valid(str_guid) {}


/**
 * @module StudioBank
 * @title Studio Bank
 * @desc The following set of functions are all for checking the availability of certain aspects of the Steam client or server API. This means that these functions should be used before any other Steam API function call to ensure that the client/server setup is correct and communicating with your game:
 * @section_func

 * @ref fmod_studio_bank_get_loading_state
 * @ref fmod_studio_bank_load_sample_data
 * @ref fmod_studio_bank_unload_sample_data
 * @ref fmod_studio_bank_get_sample_loading_state
 * @ref fmod_studio_bank_unload
 * @ref fmod_studio_bank_get_bus_count
 * @ref fmod_studio_bank_get_bus_list
 * @ref fmod_studio_bank_get_event_count
 * @ref fmod_studio_bank_get_event_description_list
 * @ref fmod_studio_bank_get_string_count
 * @ref fmod_studio_bank_get_string_info
 * @ref fmod_studio_bank_get_vca_count
 * @ref fmod_studio_system_get_vca_list
 * @ref fmod_studio_bank_get_id
 * @ref fmod_studio_bank_get_path
 * @ref fmod_studio_bank_is_valid

 * @section_end
 * @module_end
 */
 