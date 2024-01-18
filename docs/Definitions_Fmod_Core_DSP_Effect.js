
 
/**
 * @const FMOD_DSP_TYPE
 * @member UNKNOWN
 * @member MIXER
 * @member OSCILLATOR
 * @member LOWPASS
 * @member ITLOWPASS
 * @member HIGHPASS
 * @member ECHO
 * @member FADER
 * @member FLANGE
 * @member DISTORTION
 * @member NORMALIZE
 * @member LIMITER
 * @member PARAMEQ
 * @member PITCHSHIFT
 * @member CHORUS
 * @member VSTPLUGIN
 * @member WINAMPPLUGIN
 * @member ITECHO
 * @member COMPRESSOR
 * @member SFXREVERB
 * @member LOWPASS_SIMPLE
 * @member DELAY
 * @member TREMOLO
 * @member LADSPAPLUGIN
 * @member SEND
 * @member RETURN
 * @member HIGHPASS_SIMPLE
 * @member PAN
 * @member THREE_EQ
 * @member FFT
 * @member LOUDNESS_METER
 * @member ENVELOPEFOLLOWER
 * @member CONVOLUTIONREVERB
 * @member CHANNELMIX
 * @member TRANSCEIVER
 * @member OBJECTPAN
 * @member MULTIBAND_EQ

 * @member MAX
 * @member FORCEINT
 * @const_end
 */

/**
 * @const FMOD_DSP_OSCILLATOR

 * @member TYPE
 * @member RATE
 * @const_end
 */


/**
 * @const FMOD_DSP_LOWPASS

 * @member CUTOFF
 * @member RESONANCE
 * @const_end
 */


/**
 * @const FMOD_DSP_ITLOWPASS

 * @member CUTOFF
 * @member RESONANCE
  * @const_end
 */


/**
 * @const FMOD_DSP_HIGHPASS

 * @member CUTOFF
 * @member RESONANCE
 * @const_end
 */


/**
 * @const FMOD_DSP_ECHO

 * @member DELAY
 * @member FEEDBACK
 * @member DRYLEVEL
 * @member WETLEVEL
 * @const_end
 */


/**
 * @const FMOD_DSP_FADER

 * @member GAIN
 * @member OVERALL_GAIN
 * @const_end
 */


/**
 * @const FMOD_DSP_FLANGE

 * @member MIX
 * @member DEPTH
 * @member RATE
 * @const_end
 */ 


/**
 * @const FMOD_DSP_DISTORTION

 * @member LEVEL
 * @const_end
 */


/**
 * @const FMOD_DSP_NORMALIZE

 * @member FADETIME
 * @member THRESHOLD
 * @member MAXAMP
  * @const_end
 */


/**
 * @const FMOD_DSP_LIMITER

 * @member RELEASETIME
 * @member CEILING
 * @member MAXIMIZERGAIN
 * @member MODE
 * @const_end
 */


/**
 * @const FMOD_DSP_PARAMEQ

 * @member CENTER
 * @member BANDWIDTH
 * @member GAIN
  * @const_end
 */


/**
 * @const FMOD_DSP_MULTIBAND_EQ

 * @member A_FILTER
 * @member A_FREQUENCY
 * @member A_Q
 * @member A_GAIN
 * @member B_FILTER
 * @member B_FREQUENCY
 * @member B_Q
 * @member B_GAIN
 * @member C_FILTER
 * @member C_FREQUENCY
 * @member C_Q
 * @member C_GAIN
 * @member D_FILTER
 * @member D_FREQUENCY
 * @member D_Q
 * @member D_GAIN
 * @member E_FILTER
 * @member E_FREQUENCY
 * @member E_Q
 * @member E_GAIN
  * @const_end
 */


/**
 * @const FMOD_DSP_MULTIBAND_EQ_FILTER_TYPE

 * @member DISABLED
 * @member LOWPASS_12DB
 * @member LOWPASS_24DB
 * @member LOWPASS_48DB
 * @member HIGHPASS_12DB
 * @member HIGHPASS_24DB
 * @member HIGHPASS_48DB
 * @member LOWSHELF
 * @member HIGHSHELF
 * @member PEAKING
 * @member BANDPASS
 * @member NOTCH
 * @member ALLPASS
 * @const_end
 */


/**
 * @const FMOD_DSP_PITCHSHIFT

 * @member PITCH
 * @member FFTSIZE
 * @member OVERLAP
 * @member MAXCHANNELS
 * @const_end
 */


/**
 * @const FMOD_DSP_CHORUS

 * @member MIX
 * @member RATE
 * @member DEPTH
 * @const_end
 */


/**
 * @const FMOD_DSP_ITECHO

 * @member WETDRYMIX
 * @member FEEDBACK
 * @member LEFTDELAY
 * @member RIGHTDELAY
 * @member PANDELAY
 * @const_end
 */

/**
 * @const FMOD_DSP_COMPRESSOR

 * @member THRESHOLD 
 * @member RATIO 
 * @member ATTACK
 * @member RELEASE
 * @member GAINMAKEUP
 * @member USESIDECHAIN
 * @member LINKED
 * @const_end
 */

/**
 * @const FMOD_DSP_SFXREVERB

 * @member DECAYTIME
 * @member EARLYDELAY
 * @member LATEDELAY
 * @member HFREFERENCE
 * @member HFDECAYRATIO
 * @member DIFFUSION
 * @member DENSITY
 * @member LOWSHELFFREQUENCY
 * @member LOWSHELFGAIN
 * @member HIGHCUT
 * @member EARLYLATEMIX
 * @member WETLEVEL
 * @member DRYLEVEL
 * @const_end
 */

/**
 * @const FMOD_DSP_LOWPASS_SIMPLE
 * @member CUTOFF
 * @const_end
 */


/**
 * @const FMOD_DSP_DELAY
 * @member CH0
 * @member CH1
 * @member CH2
 * @member CH3
 * @member CH4
 * @member CH5
 * @member CH6
 * @member CH7
 * @member CH8
 * @member CH9
 * @member CH10
 * @member CH11
 * @member CH12
 * @member CH13
 * @member CH14
 * @member CH15
 * @member MAXDELAY
 * @const_end
 */


/**
 * @const FMOD_DSP_TREMOLO
 * @member FREQUENCY
 * @member DEPTH
 * @member SHAPE
 * @member SKEW
 * @member DUTY
 * @member SQUARE
 * @member PHASE
 * @member SPREAD
 * @const_end
 */


/**
 * @const FMOD_DSP_SEND
 * @member RETURNID
 * @member LEVEL
 * @const_end
 */


/**
 * @const FMOD_DSP_RETURN
 * @member ID
 * @member INPUT_SPEAKER_MODE
 * @const_end
 */


/**
 * @const FMOD_DSP_HIGHPASS_SIMPLE
 * @member CUTOFF
 * @const_end
 */


/**
 * @const _2D_STEREO_MODE_TYPE
 * @member DISTRIBUTED
 * @member DISCRETE
 * @const_end
 */


/**
 * @const MODE_TYPE
 * @member MONO
 * @member STEREO
 * @member SURROUND
 * @const_end
 */


/**
 * @const _3D_ROLLOFF_TYPE

 * @member LINEARSQUARED
 * @member LINEAR
 * @member INVERSE
 * @member INVERSETAPERED
 * @member CUSTOM
 * @const_end
 */ 


/**
 * @const _3D_EXTENT_MODE_TYPE
 * @member AUTO
 * @member USER
 * @member OFF
 * @const_end
 */


/**
 * @const FMOD_DSP_PAN
 * @member MODE
 * @member _2D_STEREO_POSITION
 * @member _2D_DIRECTION
 * @member _2D_EXTENT
 * @member _2D_ROTATION
 * @member _2D_LFE_LEVEL
 * @member _2D_STEREO_MODE
 * @member _2D_STEREO_SEPARATION
 * @member _2D_STEREO_AXIS
 * @member ENABLED_SPEAKERS
 * @member _3D_POSITION
 * @member _3D_ROLLOFF
 * @member _3D_MIN_DISTANCE
 * @member _3D_MAX_DISTANCE
 * @member _3D_EXTENT_MODE
 * @member _3D_SOUND_SIZE
 * @member _3D_MIN_EXTENT
 * @member _3D_PAN_BLEND
 * @member LFE_UPMIX_ENABLED
 * @member OVERALL_GAIN
 * @member SURROUND_SPEAKER_MODE
 * @member _2D_HEIGHT_BLEND
 * @member ATTENUATION_RANGE
 * @member OVERRIDE_RANGE
 * @const_end
 */


/**
 * @const CROSSOVERSLOPE_TYPE
 * @member _12DB
 * @member _24DB
 * @member _48DB
 * @const_end
 */


/**
 * @const FMOD_DSP_THREE_EQ
 * @member LOWGAIN
 * @member MIDGAIN
 * @member HIGHGAIN
 * @member LOWCROSSOVER
 * @member HIGHCROSSOVER
 * @member CROSSOVERSLOPE
 * @const_end
 */


/**
 * @const WINDOW
 * @member RECT
 * @member TRIANGLE
 * @member HAMMING
 * @member HANNING
 * @member BLACKMAN
 * @member BLACKMANHARRIS
 * @const_end
 */


/**
 * @const FMOD_DSP_FFT
 * @member WINDOWSIZE
 * @member WINDOWTYPE
 * @member SPECTRUMDATA
 * @member DOMINANT_FREQ
 * @const_end
 */

/**
 * @const FMOD_DSP_LOUDNESS_METER_HISTOGRAM_SAMPLES
 * @member WINDOWSIZE
 * @member WINDOWTYPE
 * @member SPECTRUMDATA
 * @member DOMINANT_FREQ
 * @const_end
 */
 
/**
 * @const FMOD_DSP_LOUDNESS_METER
 * @member STATE
 * @member WEIGHTING
 * @member INFO
 * @const_end
 */


/**
 * @const FMOD_DSP_LOUDNESS_METER_STATE_TYPE
 * @member RESET_INTEGRATED
 * @member RESET_MAXPEAK
 * @member RESET_ALL
 * @member PAUSED
 * @member ANALYZING
 * @const_end
 */

/**
 * @const FMOD_DSP_ENVELOPEFOLLOWER
 * @member ATTACK
 * @member RELEASE
 * @member ENVELOPE
 * @member USESIDECHAIN
 * @const_end
 */

/**
 * @const FMOD_DSP_CONVOLUTION_REVERB_PARAM
 * @member IR
 * @member WET
 * @member DRY
 * @member LINKED
 * @const_end
 */

/**
 * @const FMOD_OUTPUT
 * @member DEFAULT
 * @member ALLMONO
 * @member ALLSTEREO
 * @member ALLQUAD
 * @member ALL5POINT1
 * @member ALL7POINT1
 * @member ALLLFE
 * @member ALL7POINT1POINT4
 * @const_end
 */

/**
 * @const FMOD_DSP_CHANNELMIX
 * @member OUTPUTGROUPING
 * @member GAIN_CH0
 * @member GAIN_CH1
 * @member GAIN_CH2
 * @member GAIN_CH3
 * @member GAIN_CH4
 * @member GAIN_CH5
 * @member GAIN_CH6
 * @member GAIN_CH7
 * @member GAIN_CH8
 * @member GAIN_CH9
 * @member GAIN_CH10
 * @member GAIN_CH11
 * @member GAIN_CH12
 * @member GAIN_CH13
 * @member GAIN_CH14
 * @member GAIN_CH15
 * @member GAIN_CH16
 * @member GAIN_CH17
 * @member GAIN_CH18
 * @member GAIN_CH19
 * @member GAIN_CH20
 * @member GAIN_CH21
 * @member GAIN_CH22
 * @member GAIN_CH23
 * @member GAIN_CH24
 * @member GAIN_CH25
 * @member GAIN_CH26
 * @member GAIN_CH27
 * @member GAIN_CH28
 * @member GAIN_CH29
 * @member GAIN_CH30
 * @member GAIN_CH31
 * @member OUTPUT_CH0
 * @member OUTPUT_CH1
 * @member OUTPUT_CH2
 * @member OUTPUT_CH3
 * @member OUTPUT_CH4
 * @member OUTPUT_CH5
 * @member OUTPUT_CH6
 * @member OUTPUT_CH7
 * @member OUTPUT_CH8
 * @member OUTPUT_CH9
 * @member OUTPUT_CH10
 * @member OUTPUT_CH11
 * @member OUTPUT_CH12
 * @member OUTPUT_CH13
 * @member OUTPUT_CH14
 * @member OUTPUT_CH15
 * @member OUTPUT_CH16
 * @member OUTPUT_CH17
 * @member OUTPUT_CH18
 * @member OUTPUT_CH19
 * @member OUTPUT_CH20
 * @member OUTPUT_CH21
 * @member OUTPUT_CH22
 * @member OUTPUT_CH23
 * @member OUTPUT_CH24
 * @member OUTPUT_CH25
 * @member OUTPUT_CH26
 * @member OUTPUT_CH27
 * @member OUTPUT_CH28
 * @member OUTPUT_CH29
 * @member OUTPUT_CH30
 * @member OUTPUT_CH31
 * @const_end
 */

/**
 * @const SPEAKERMODE
 * @member AUTO
 * @member MONO
 * @member STEREO
 * @member SURROUND
 * @const_end
 */


/**
 * @const FMOD_DSP_TRANSCEIVER
 * @member TRANSMIT
 * @member GAIN
 * @member CHANNEL
 * @member TRANSMITSPEAKERMODE
 * @const_end
 */


/**
 * @const FMOD_DSP_OBJECTPAN
 * @member _3D_POSITION
 * @member _3D_ROLLOFF
 * @member _3D_MIN_DISTANCE
 * @member _3D_MAX_DISTANCE
 * @member _3D_EXTENT_MODE
 * @member _3D_SOUND_SIZE
 * @member _3D_MIN_EXTENT
 * @member OVERALL_GAIN
 * @member OUTPUTGAIN
 * @member ATTENUATION_RANGE
 * @member OVERRIDE_RANGE
 * @const_end
 */


////////////////////////////////
/**
 * @module DSPEfectsDefinitons
 * @title DSP Efects Definitons
 * @desc The following set of functions are all for checking the availability of certain aspects of the Steam client or server API. This means that these functions should be used before any other Steam API function call to ensure that the client/server setup is correct and communicating with your game:
 * @section_const
 
 * @ref FMOD_DSP_TYPE
 * @ref FMOD_DSP_OSCILLATOR
 * @ref FMOD_DSP_LOWPASS
 * @ref FMOD_DSP_ITLOWPASS
 * @ref FMOD_DSP_HIGHPASS
 * @ref FMOD_DSP_ECHO
 * @ref FMOD_DSP_FADER
 * @ref FMOD_DSP_FLANGE
 * @ref FMOD_DSP_DISTORTION
 * @ref FMOD_DSP_NORMALIZE
 * @ref FMOD_DSP_LIMITER
 * @ref FMOD_DSP_PARAMEQ
 * @ref FMOD_DSP_MULTIBAND_EQ
 * @ref FMOD_DSP_MULTIBAND_EQ_FILTER_TYPE
 * @ref FMOD_DSP_PITCHSHIFT
 * @ref FMOD_DSP_CHORUS
 * @ref FMOD_DSP_ITECHO
 * @ref FMOD_DSP_COMPRESSOR
 * @ref FMOD_DSP_SFXREVERB
 * @ref FMOD_DSP_LOWPASS_SIMPLE
 * @ref FMOD_DSP_DELAY
 * @ref FMOD_DSP_TREMOLO
 * @ref FMOD_DSP_SEND
 * @ref FMOD_DSP_RETURN
 * @ref FMOD_DSP_HIGHPASS_SIMPLE
 * @ref _2D_STEREO_MODE_TYPE
 * @ref MODE_TYPE
 * @ref _3D_ROLLOFF_TYPE
 * @ref _3D_EXTENT_MODE_TYPE
 * @ref FMOD_DSP_PAN
 * @ref CROSSOVERSLOPE_TYPE
 * @ref FMOD_DSP_THREE_EQ
 * @ref WINDOW
 * @ref FMOD_DSP_FFT
 * @ref FMOD_DSP_LOUDNESS_METER_HISTOGRAM_SAMPLES
 * @ref FMOD_DSP_LOUDNESS_METER
 * @ref FMOD_DSP_LOUDNESS_METER_STATE_TYPE
 * @ref FMOD_DSP_ENVELOPEFOLLOWER
 * @ref FMOD_DSP_CONVOLUTION_REVERB_PARAM
 * @ref FMOD_OUTPUT
 * @ref FMOD_DSP_CHANNELMIX
 * @ref SPEAKERMODE
 * @ref FMOD_DSP_TRANSCEIVER
 * @ref FMOD_DSP_OBJECTPAN


 * @section_end
 * @module_end
 */
 
 
