/**
 * @func fmod_reverb_3d_set_3d_attributes
 * @desc Sets the 3D attributes of a reverb sphere.
 * @param {double} index Identifier of the Reverb3D instance 
 * @param {constant.FMOD_VECTOR} position Position in 3D space represnting the center of the reverb.
 * @param {double} mindistance Distance from the centerpoint within which the reverb will have full effect.
 * @param {double} maxdistance Distance from the centerpoint beyond which the reverb will have no effect.
 * @func_end
*/
function fmod_reverb_3d_set_3d_attributes(index,position,mindistance,maxdistance) {}


/**
 * @func fmod_reverb_3d_get_3d_attributes_multiplatform
 * @desc Retrieves the 3D attributes of a reverb sphere.
 * @param {double} index Identifier of the Reverb3D instance 
 * @returns {double} {min_distance:double,max_distance:double,position:FMOD_VECTOR}
 * @func_end
*/
function fmod_reverb_3d_get_3d_attributes_multiplatform(index_,buff_return_) {}


/**
 * @func fmod_reverb_3d_set_properties
 * @desc Sets the environmental properties of a reverb sphere.
 * @param {double} index Identifier of the Reverb3D instance 
 * @param {double} DecayTime Reverberation decay time.
 * @param {double} EarlyDelay Initial reflection delay time.
 * @param {double} LateDelay Late reverberation delay time relative to initial reflection.
 * @param {double} HFReference Reference high frequency.
 * @param {double} HFDecayRatio High-frequency to mid-frequency decay time ratio.
 * @param {double} Diffusion Value that controls the echo density in the late reverberation decay.
 * @param {double} Density Value that controls the modal density in the late reverberation decay.
 * @param {double} LowShelfFrequency Reference low frequency
 * @param {double} LowShelfGain Relative room effect level at low frequencies.
 * @param {double} HighCut Relative room effect level at high frequencies.
 * @param {double} EarlyLateMix Early reflections level relative to room effect.
 * @param {double} WetLevel Room effect level at mid frequencies.
 * @func_end
*/
function fmod_reverb_3d_set_properties(index_,DecayTime,EarlyDelay,LateDelay,HFReference,HFDecayRatio,Diffusion,Density,LowShelfFrequency,LowShelfGain,HighCut,EarlyLateMix,WetLevel) {}


/**
 * @func fmod_reverb_3d_get_properties
 * @desc Retrieves the environmental properties of a reverb sphere.
 * @param {double} index Identifier of the Reverb3D instance 
 * @returns {struct} {decay_time:double,early_delay:double,late_delay:double,hf_reference:double,hf_decay_ratio:double,diffusion:double,density:double,low_shelf_frequency:double,low_shelf_gain:double,high_cut:double,early_late_mix:double,wet_level:double}
 * @func_end
*/
function fmod_reverb_3d_get_properties(index_,buff_return_) {}


/**
 * @func fmod_reverb_3d_set_active
 * @desc Sets the active state.
 * @param {double} index Identifier of the Reverb3D instance 
 * @param {bool} active Active state of the reverb sphere. 
 * @func_end
*/
function fmod_reverb_3d_set_active(index_,active_) {}


/**
 * @func fmod_reverb_3d_get_active
 * @desc Retrieves the active state.
 * @param {double} index Identifier of the Reverb3D instance 
 * @returns {bool}
 * @func_end
*/
function fmod_reverb_3d_get_active(index_) {}


/**
 * @func fmod_reverb_3d_release
 * @desc Releases the memory for a reverb object and makes it inactive.
 * @param {double} index Identifier of the Reverb3D instance 
 * @func_end
*/
function fmod_reverb_3d_release(index) {}



/**
 * @module Reverb3D
 * @title Reverb3D
 * @desc The following set of functions are all for checking the availability of certain aspects of the Steam client or server API. This means that these functions should be used before any other Steam API function call to ensure that the client/server setup is correct and communicating with your game:
 * @section_func

 * @ref fmod_reverb_3d_set_3d_attributes
 * @ref fmod_reverb_3d_get_3d_attributes
 * @ref fmod_reverb_3d_set_properties
 * @ref fmod_reverb_3d_get_properties
 * @ref fmod_reverb_3d_set_active
 * @ref fmod_reverb_3d_get_active
 * @ref fmod_reverb_3d_release

 * @section_end
 * @module_end
 */
 