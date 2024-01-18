
/**
 * @func fmod_dsp_connection_unlink
 * @desc YYNULL
 * @param {double} index Identifier of the DSP Connection 
 * @func_end
*/
function fmod_dsp_connection_unlink(index_) {}


/**
 * @func fmod_dsp_connection_unlink_all
 * @desc YYNULL
 * @func_end
*/
function fmod_dsp_connection_unlink_all() {}


/**
 * @func fmod_dsp_connection_set_mix
 * @desc Sets the connection's volume scale.
 * @param {double} index Identifier of the DSP Connection
 * @param {double} volume Volume scale applied to the input before being passed to the output. 0 = silent, 1 = full. Negative level inverts the signal. Values larger than 1 amplify the signal.
 * @func_end
*/
function fmod_dsp_connection_set_mix(index,volume) {}


/**
 * @func fmod_dsp_connection_get_mix
 * @desc Retrieves the connection's volume scale.
 * @param {double} index Identifier of the DSP Connection 
 * @returns {double}
 * @func_end
*/
function fmod_dsp_connection_get_mix(index) {}


/**
 * @func fmod_dsp_connection_set_mix_matrix
 * @desc  Sets a 2 dimensional pan matrix that maps the signal from input channels (columns) to output speakers (rows).
 * @param {double} index Identifier of the DSP Connection 
 * @param {array} matrix Two dimensional array of volume levels in row-major order. Each row represents an output speaker, each column represents an input channel. Null or equivalent sets a 'default' matrix.
 * @param {int} outchannels Number of output channels (rows) in matrix.
 * @param {int} inchannels Number of input channels (columns) in matrix.
 * @param {int} inchannel_hop Width (total number of columns) in source matrix. Can be larger than inchannels to represent a smaller valid region inside a larger matrix
 * @func_end
*/
function fmod_dsp_connection_set_mix_matrix(index_,buff_args_) {}


/**
 * @func fmod_dsp_connection_get_mix_matrix
 * @desc Retrieves a 2 dimensional pan matrix that maps the signal from input channels (columns) to output speakers (rows).
 * @param {double} index Identifier of the DSP Connection
 * @param {double} inchannel_hop Width (total number of columns) in destination matrix. Can be larger than inchannels to represent a smaller valid region inside a larger matrix.
 * @returns {array}
 * @func_end
*/
function fmod_dsp_connection_get_mix_matrix(index_,inchannel_hop_,buff_return_) {}


/**
 * @func fmod_dsp_connection_get_input
 * @desc Retrieves the connection's input DSP unit.
 * @param {double} index Identifier of the DSP Connection 
 * @returns {double}
 * @func_end
*/
function fmod_dsp_connection_get_input(index_) {}


/**
 * @func fmod_dsp_connection_get_output
 * @desc Retrieves the connection's output DSP unit.
 * @param {double} index Identifier of the DSP Connection 
 * @returns {double}
 * @func_end
*/
function fmod_dsp_connection_get_output(index_) {}


/**
 * @func fmod_dsp_connection_get_type
 * @desc Retrieves the type of the connection between 2 DSP units.
 * @param {double} index Identifier of the DSP Connection 
 * @returns {constant.DSPCONNECTION_TYPE}
 * @func_end
*/
function fmod_dsp_connection_get_type(index) {}


/**
 * @module DSPConnection
 * @title DSP Connection
 * @desc The following set of functions are all for checking the availability of certain aspects of the Steam client or server API. This means that these functions should be used before any other Steam API function call to ensure that the client/server setup is correct and communicating with your game:
 * @section_func

 * @ref fmod_dsp_connection_unlink
 * @ref fmod_dsp_connection_unlink_all
 * @ref fmod_dsp_connection_set_mix
 * @ref fmod_dsp_connection_get_mix
 * @ref fmod_dsp_connection_set_mix_matrix
 * @ref fmod_dsp_connection_get_mix_matrix
 * @ref fmod_dsp_connection_get_input
 * @ref fmod_dsp_connection_get_output
 * @ref fmod_dsp_connection_get_type

 * @section_end
 * @module_end
 */
 
 