/**
 * @func fmod_dsp_unlink
 * @desc YYNULL
 * @param {string} name 
 * @func_end
*/
function fmod_dsp_unlink(name) {}


/**
 * @func fmod_dsp_add_input
 * @desc Adds a DSP unit as an input to this object.
 * @param {double} index Identifier of the DSP 
 * @param {double} dsp_input DSP unit to be added.
 * @param {constant.FMOD_DSPCONNECTION_TYPE} dsp_connection_type_ Type of connection between the two units.
 * @returns {DSPConnection}
 * @func_end
*/
function fmod_dsp_add_input(index_,dsp_input,dsp_connection_type_) {}


/**
 * @func fmod_dsp_get_input
 * @desc Retrieves the DSP unit at the specified index in the input list.
 * @param {double} index Identifier of the DSP 
 * @param {double} dsp_chain_index 
 * @returns {struct} {dsp:int,dsp_connection:int}
 * @func_end
*/
function fmod_dsp_get_input(index_,dsp_chain_index,buff_return_) {}

/**
 * @func fmod_dsp_get_output_multiplatform
 * @desc Retrieves the DSP unit at the specified index in the output list.
 * @param {double} index Identifier of the DSP 
 * @param {double} dsp_chain_index Offset into this DSP's input list.
 * @returns {struct} {dsp:int,dsp_connection:int}
 * @func_end
*/
function fmod_dsp_get_output(index,dsp_chain_index) {}


/**
 * @func fmod_dsp_get_num_inputs
 * @desc Retrieves the number of DSP units in the input list.
 * @param {double} index Identifier of the DSP 
 * @returns {double}
 * @func_end
*/
function fmod_dsp_get_num_inputs(index) {}


/**
 * @func fmod_dsp_get_num_outputs
 * @desc Retrieves the number of DSP units in the output list.
 * @param {double} index Identifier of the DSP 
 * @returns {double}
 * @func_end
*/
function fmod_dsp_get_num_outputs(index) {}


/**
 * @func fmod_dsp_disconnect_all
 * @desc Disconnects all inputs and/or outputs.
 * @param {double} index Identifier of the DSP 
 * @param {bool} inputs Whether all inputs should be disconnected.
 * @param {bool} outputs Whether all outputs should be disconnected.
 * @func_end
*/
function fmod_dsp_disconnect_all(index_,inputs_,outputs_) {}


/**
 * @func fmod_dsp_disconnect_from
 * @desc Disconnect the specified input DSP.
 * @param {double} index Identifier of the DSP 
 * @param {double} other_index Input unit to disconnect, if not specified all inputs and outputs are disconnected from this unit. (DSP)
 * @func_end
*/
function fmod_dsp_disconnect_from(index,other_index) {}


/**
 * @func fmod_dsp_get_data_parameter_index
 * @desc Retrieve the index of the first data parameter of a particular data type.
 * @param {double} index Identifier of the DSP 
 * @param {constant.FMOD_DSP_PARAMETER_DATA_TYPE} data_type The type of data to find. Typically of type.
 * @returns {double}
 * @func_end
*/
function fmod_dsp_get_data_parameter_index(index_,data_type) {}


/**
 * @func fmod_dsp_get_num_parameters
 * @desc Retrieves the number of parameters exposed by this unit.
 * @param {double} index Identifier of the DSP 
 * @returns {double}
 * @func_end
*/
function fmod_dsp_get_num_parameters(index_) {}


/**
 * @func fmod_dsp_set_parameter_bool
 * @desc Sets a boolean parameter by index.
 * @param {double} index Identifier of the DSP 
 * @param {double} parameter_index_ 
 * @param {double} value_ Parameter value.
 * @func_end
*/
function fmod_dsp_set_parameter_bool(index_,parameter_index_,value_) {}


/**
 * @func fmod_dsp_get_parameter_bool
 * @desc Retrieves a boolean parameter by index.
 * @param {double} index Identifier of the DSP 
 * @param {double} parameter_index_ Parameter index.
 * @returns {double}
 * @func_end
*/
function fmod_dsp_get_parameter_bool(index_,parameter_index_) {}


/**
 * @func fmod_dsp_set_parameter_data_multiplatform
 * @desc Sets a binary data parameter by index.
 * @param {double} index Identifier of the DSP 
 * @param {double} parameter_index_ Parameter index.
 * @param {buffer} buff Parameter binary data.
 * @param {double} lenght Length of data. 
 * @func_end
*/
function fmod_dsp_set_parameter_data_multiplatform(index,parameter_index,buff,lenght) {}


/**
 * @func fmod_dsp_get_parameter_data
 * @desc Retrieves a binary data parameter by index.
 * @param {double} index Identifier of the DSP 
 * @param {double} parameter_index_ Parameter index.
 * @returns {double}
 * @func_end
*/
function fmod_dsp_get_parameter_data(index,parameter_index) {}


/**
 * @func fmod_dsp_set_parameter_float
 * @desc Sets a floating point parameter by index.
 * @param {double} index Identifier of the DSP 
 * @param {double} parameter_index_ Parameter index.
 * @param {double} value_ Parameter value.
 * @func_end
*/
function fmod_dsp_set_parameter_float(index,parameter_index,value) {}


/**
 * @func fmod_dsp_get_parameter_float
 * @desc Retrieves a floating point parameter by index.
 * @param {double} index Identifier of the DSP 
 * @param {double} parameter_index_ Parameter index.
 * @returns {double}
 * @func_end
*/
function fmod_dsp_get_parameter_float(index,parameter_index) {}


/**
 * @func fmod_dsp_set_parameter_int
 * @desc Sets an integer parameter by index.
 * @param {double} index Identifier of the DSP 
 * @param {double} parameter_index_ 
 * @param {double} value Parameter value.
 * @func_end
*/
function fmod_dsp_set_parameter_int(index,parameter_index,value) {}


/**
 * @func fmod_dsp_get_parameter_int
 * @desc Retrieves an integer parameter by index.
 * @param {double} index Identifier of the DSP 
 * @param {double} parameter_index_ Parameter index.
 * @returns {double}
 * @func_end
*/
function fmod_dsp_get_parameter_int(index,parameter_index) {}


/**
 * @func fmod_dsp_get_parameter_info_multiplatform
 * @desc Retrieve information about a specified parameter.
 * @param {double} index Identifier of the DSP 
 * @param {double} parameter_index_ Parameter index.
 * @returns {struct} {type:FMOD_DSP_PARAMETER_TYPE,name:string,label:stirng,description:string,int:{default:int,max:int,min:int},float:{default:double,max:double,min:double},bool:{default:bool}}
 * @func_end
*/
function fmod_dsp_get_parameter_info(index,parameter_index) {}


/**
 * @func fmod_dsp_set_channel_format
 * @desc Sets the PCM input format this DSP will receive when processing.
 * @param {double} index Identifier of the DSP 
 * @param {constant.FMOD_CHANNELMASK} channel_mask_ Deprecated. (FMOD_CHANNELMASK)
 * @param {double} num_channels_ Number of channels to be processed.
 * @param {constant.FMOD_SPEAKERMODE} speaker_mode_ Speaker mode to describe the channel mapping. 
 * @func_end
*/
function fmod_dsp_set_channel_format(index,channel_mask,num_channels,speaker_mode) {}


/**
 * @func fmod_dsp_get_channel_format
 * @desc Retrieves the PCM input format this DSP will receive when processing.
 * @param {double} index Identifier of the DSP 
 * @returns {double} {channel_mask:FMOD_CHANNELMASK,num_channels:int,speaker_mode:FMOD_SPEAKERMODE}
 * @func_end
*/
function fmod_dsp_get_channel_format(index) {}


/**
 * @func fmod_dsp_get_output_channel_format
 * @desc Retrieves the output format this DSP will produce when processing based on the input specified.
 * @param {double} index Identifier of the DSP 
 * @param {constant.FMOD_CHANNELMASK} channel_mask_in Deprecated.
 * @param {int} num_channels_in Number of channels for the input signal.
 * @param {constant.FMOD_SPEAKERMODE} speaker_mode_in Speaker mode for the input signal. 
 * @returns {struct} {channel_mask_out,num_channels_out,speaker_mode_out}
 * @func_end
*/
function (index,buff_args) {}


/**
 * @func fmod_dsp_get_metering_info_multiplatform
 * @desc Retrieve the signal metering information.
 * @param {double} index Identifier of the DSP 
 * @returns {struct} {in:{num_channels:int,num_samples:int},out:{num_channels:int,num_samples:int}}
 * @func_end
*/
function fmod_dsp_get_metering_info_multiplatform(index_,buff_return_) {}


/**
 * @func fmod_dsp_set_metering_enabled
 * @desc Sets the input and output signal metering enabled states
 * @param {double} index Identifier of the DSP 
 * @param {double} enabled_in Metering enabled state for the input signal.
 * @param {double} enabled_out Metering enabled state for the output signal.
 * @func_end
*/
function fmod_dsp_set_metering_enabled(index,enabled_in,enabled_out) {}


/**
 * @func fmod_dsp_get_metering_enabled
 * @desc Retrieves the input and output signal metering enabled states.
 * @param {double} index Identifier of the DSP  
 * @returns {struct} {in:bool,out:bool}
 * @func_end
*/
function fmod_dsp_get_metering_enabled(index) {}


/**
 * @func fmod_dsp_set_active
 * @desc Sets the processing active state.
 * @param {double} index Identifier of the DSP 
 * @param {double} active If active is false, processing of this unit and its inputs are stopped.
 * @func_end
*/
function fmod_dsp_set_active(index,active) {}


/**
 * @func fmod_dsp_get_active
 * @desc Retrieves the processing active state.
 * @param {double} index Identifier of the DSP 
 * @returns {bool}
 * @func_end
*/
function fmod_dsp_get_active(index) {}


/**
 * @func fmod_dsp_set_bypass
 * @desc Sets the processing bypass state.
 * @param {double} index Identifier of the DSP 
 * @param {double} bypass If bypass is true, processing of this unit is skipped but it continues to process its inputs.
 * @func_end
*/
function fmod_dsp_set_bypass(index,bypass) {}


/**
 * @func fmod_dsp_get_bypass
 * @desc Retrieves the processing bypass state.
 * @param {double} index Identifier of the DSP 
 * @returns {bool}
 * @func_end
*/
function fmod_dsp_get_bypass(index) {}


/**
 * @func fmod_dsp_set_wet_dry_mix
 * @desc Sets the scale of the wet and dry signal components.
 * @param {double} index Identifier of the DSP 
 * @param {double} prewet Level of the 'Dry' (pre-processed signal) mix that is processed by the DSP. 0 = silent, 1 = full. Negative level inverts the signal. Values larger than 1 amplify the signal.
 * @param {double} postwet Level of the 'Wet' (post-processed signal) mix that is output. 0 = silent, 1 = full. Negative level inverts the signal. Values larger than 1 amplify the signal.
 * @param {double} dry Level of the 'Dry' (pre-processed signal) mix that is output. 0 = silent, 1 = full. Negative level inverts the signal. Values larger than 1 amplify the signal.
 * @func_end
*/
function fmod_dsp_set_wet_dry_mix(index_,prewet_,postwet_,dry_) {}


/**
 * @func fmod_dsp_get_wet_dry_mix
 * @desc Retrieves the scale of the wet and dry signal components.
 * @param {double} index Identifier of the DSP 
 * @returns {struct} {pre_wet:double,pos_twet:double,dry:double}
 * @func_end
*/
function fmod_dsp_get_wet_dry_mix(index) {}


/**
 * @func fmod_dsp_get_idle
 * @desc Retrieves the idle state.
 * @param {double} index Identifier of the DSP 
 * @returns {bool}
 * @func_end
*/
function fmod_dsp_get_idle(index) {}


/**
 * @func fmod_dsp_reset
 * @desc Reset a DSPs internal state ready for new input signal.
 * @param {double} index Identifier of the DSP 
 * @func_end
*/
function fmod_dsp_reset(index) {}


/**
 * @func fmod_dsp_release
 * @desc Frees a DSP object.
 * @param {double} index Identifier of the DSP 
 * @func_end
*/
function fmod_dsp_release(index) {}


/**
 * @func fmod_dsp_get_type
 * @desc Retrieves the pre-defined type of a FMOD registered DSP unit.
 * @param {double} index Identifier of the DSP 
 * @returns {constant.FMOD_DSP_TYPE}
 * @func_end
*/
function fmod_dsp_get_type(index_) {}


/**
 * @func fmod_dsp_get_info
 * @desc Retrieves information about this DSP unit.
 * @param {double} index Identifier of the DSP 
 * @returns {struct} {name:string,version:int,channels:int,config_width:int,config_height:int}
 * @func_end
*/
function fmod_dsp_get_info(index_,buff_return_) {}


/**
 * @func fmod_dsp_get_cpu_usage
 * @desc Retrieves statistics on the mixer thread CPU usage for this unit.
 * @param {double} index Identifier of the DSP 
 * @returns {struct} {exclusive:int,inclusive:int}
 * @func_end
*/
function fmod_dsp_get_cpu_usage(index,buff_return) {}


/**
 * @func fmod_dsp_set_callback
 * @desc Sets the callback for DSP notifications.
 * @param {double} index Identifier of the DSP 
 * @func_end
*/
function fmod_dsp_set_callback(index) {}



/**
 * @module DSP
 * @title DSP
 * @desc The following set of functions are all for checking the availability of certain aspects of the Steam client or server API. This means that these functions should be used before any other Steam API function call to ensure that the client/server setup is correct and communicating with your game:
 * @section_func
 * @ref fmod_dsp_unlink
 * @ref fmod_dsp_add_input
 * @ref fmod_dsp_get_input
 * @ref fmod_dsp_get_output
 * @ref fmod_dsp_get_num_inputs
 * @ref fmod_dsp_get_num_outputs
 * @ref fmod_dsp_disconnect_all
 * @ref fmod_dsp_disconnect_from
 * @ref fmod_dsp_get_data_parameter_index
 * @ref fmod_dsp_get_num_parameters
 * @ref fmod_dsp_set_parameter_bool
 * @ref fmod_dsp_get_parameter_bool
 * @ref fmod_dsp_set_parameter_data
 * @ref fmod_dsp_get_parameter_data
 * @ref fmod_dsp_set_parameter_float
 * @ref fmod_dsp_get_parameter_float
 * @ref fmod_dsp_set_parameter_int
 * @ref fmod_dsp_get_parameter_int
 * @ref fmod_dsp_get_parameter_info
 * @ref fmod_dsp_set_channel_format
 * @ref fmod_dsp_get_channel_format
 * @ref fmod_dsp_get_output_channel_format
 * @ref fmod_dsp_get_metering_info
 * @ref fmod_dsp_set_metering_enabled
 * @ref fmod_dsp_get_metering_enabled
 * @ref fmod_dsp_set_active
 * @ref fmod_dsp_get_active
 * @ref fmod_dsp_set_bypass
 * @ref fmod_dsp_get_bypass
 * @ref fmod_dsp_set_wet_dry_mix
 * @ref fmod_dsp_get_wet_dry_mix
 * @ref fmod_dsp_get_idle
 * @ref fmod_dsp_reset
 * @ref fmod_dsp_release
 * @ref fmod_dsp_get_type
 * @ref fmod_dsp_get_info
 * @ref fmod_dsp_get_cpu_usage
 * @ref fmod_dsp_set_callback
 * @section_end
 * @module_end
 */
 
 