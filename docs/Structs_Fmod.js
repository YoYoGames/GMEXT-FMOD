/*
    FMOD structs
*/

/**
 * @struct FMOD_VECTOR
 * @desc 
 * @member {double} x
 * @member {double} y
 * @member {double} z
 * @struct_end
 */

/**
 * @struct FMOD_3D_ATTRIBUTES
 * @desc 
 * @member {struct.FMOD_VECTOR} position
 * @member {struct.FMOD_VECTOR} velocity
 * @member {struct.FMOD_VECTOR} forward
 * @member {struct.FMOD_VECTOR} up
 * @struct_end
 */

/**
 * @struct FMOD_REVERB_PROPERTIES
 * @desc 

 * @member {double} DecayTime
 * @member {double} EarlyDelay
 * @member {double} LateDelay
 * @member {double} HFReference
 * @member {double} HFDecayRatio
 * @member {double} Diffusion
 * @member {double} Density
 * @member {double} LowShelfFrequency
 * @member {double} LowShelfGain
 * @member {double} HighCut
 * @member {double} EarlyLateMix
 * @member {double} WetLevel

 * @struct_end
 */

/**
 * @struct FMOD_CPU_USAGE
 * @desc 
 * @member {double} dsp
 * @member {double} stream
 * @member {double} geometry
 * @member {double} update
 * @member {double} convolution1
 * @member {double} convolution2
 * @struct_end
 */

 /**
 * @module FmodStructs
 * @title Fmod Structs
 * @desc The following set of functions are all for checking the availability of certain aspects of the Steam client or server API. This means that these functions should be used before any other Steam API function call to ensure that the client/server setup is correct and communicating with your game:
 * @section_struct

 * @ref FMOD_VECTOR
 * @ref FMOD_3D_ATTRIBUTES
 * @ref FMOD_REVERB_PROPERTIES
 * @ref FMOD_CPU_USAGE

 * @section_end
 * @module_end
 */
