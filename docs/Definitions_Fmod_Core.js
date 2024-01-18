
 
/**
 * @const FMOD_VERSION
 * @const_end
 */
 
/**
 * @const FMOD_DEBUG_FLAGS
 * @member FMOD_DEBUG_LEVEL_NONE
 * @member FMOD_DEBUG_LEVEL_ERROR
 * @member FMOD_DEBUG_LEVEL_WARNING
 * @member FMOD_DEBUG_LEVEL_LOG
 * @member FMOD_DEBUG_TYPE_MEMORY
 * @member FMOD_DEBUG_TYPE_FILE
 * @member FMOD_DEBUG_TYPE_CODEC
 * @member FMOD_DEBUG_TYPE_TRACE
 * @member FMOD_DEBUG_DISPLAY_TIMESTAMPS
 * @member FMOD_DEBUG_DISPLAY_LINENUMBERS
 * @member FMOD_DEBUG_DISPLAY_THREAD
 * @const_end
 */


/**
 * @const FMOD_MEMORY_TYPE
 * @member FMOD_MEMORY_NORMAL
 * @member FMOD_MEMORY_STREAM_FILE
 * @member FMOD_MEMORY_STREAM_DECODE
 * @member FMOD_MEMORY_SAMPLEDATA
 * @member FMOD_MEMORY_DSP_BUFFER
 * @member FMOD_MEMORY_PLUGIN
 * @member FMOD_MEMORY_PERSISTENT
 * @member FMOD_MEMORY_ALL
 * @const_end
 */

/**
 * @const FMOD_INITFLAGS
 * @member FMOD_INIT_NORMAL
 * @member FMOD_INIT_STREAM_FROM_UPDATE
 * @member FMOD_INIT_MIX_FROM_UPDATE
 * @member FMOD_INIT_3D_RIGHTHANDED
 * @member FMOD_INIT_CLIP_OUTPUT
 * @member FMOD_INIT_CHANNEL_LOWPASS
 * @member FMOD_INIT_CHANNEL_DISTANCEFILTER
 * @member FMOD_INIT_PROFILE_ENABLE
 * @member FMOD_INIT_VOL0_BECOMES_VIRTUAL
 * @member FMOD_INIT_GEOMETRY_USECLOSEST
 * @member FMOD_INIT_PREFER_DOLBY_DOWNMIX
 * @member FMOD_INIT_THREAD_UNSAFE
 * @member FMOD_INIT_PROFILE_METER_ALL
 * @member FMOD_INIT_MEMORY_TRACKING
 * @const_end
 */


/**
 * @const FMOD_DRIVER_STATE
 * @member FMOD_DRIVER_STATE_CONNECTED
 * @member FMOD_DRIVER_STATE_DEFAULT
 * @const_end
 */

/**
 * @const FMOD_TIMEUNIT
 * @member FMOD_TIMEUNIT_MS
 * @member FMOD_TIMEUNIT_PCM
 * @member FMOD_TIMEUNIT_PCMBYTES
 * @member FMOD_TIMEUNIT_RAWBYTES
 * @member FMOD_TIMEUNIT_PCMFRACTION
 * @member FMOD_TIMEUNIT_MODORDER
 * @member FMOD_TIMEUNIT_MODROW
 * @member FMOD_TIMEUNIT_MODPATTERN
 * @const_end
*/

/**
 * @const FMOD_SYSTEM_CALLBACK_TYPE
 * @member FMOD_SYSTEM_CALLBACK_DEVICELISTCHANGED
 * @member FMOD_SYSTEM_CALLBACK_DEVICELOST
 * @member FMOD_SYSTEM_CALLBACK_MEMORYALLOCATIONFAILED
 * @member FMOD_SYSTEM_CALLBACK_THREADCREATED
 * @member FMOD_SYSTEM_CALLBACK_BADDSPCONNECTION
 * @member FMOD_SYSTEM_CALLBACK_PREMIX
 * @member FMOD_SYSTEM_CALLBACK_POSTMIX
 * @member FMOD_SYSTEM_CALLBACK_ERROR
 * @member FMOD_SYSTEM_CALLBACK_MIDMIX
 * @member FMOD_SYSTEM_CALLBACK_THREADDESTROYED
 * @member FMOD_SYSTEM_CALLBACK_PREUPDATE
 * @member FMOD_SYSTEM_CALLBACK_POSTUPDATE
 * @member FMOD_SYSTEM_CALLBACK_RECORDLISTCHANGED
 * @member FMOD_SYSTEM_CALLBACK_BUFFEREDNOMIX
 * @member FMOD_SYSTEM_CALLBACK_DEVICEREINITIALIZE
 * @member FMOD_SYSTEM_CALLBACK_OUTPUTUNDERRUN
 * @member FMOD_SYSTEM_CALLBACK_RECORDPOSITIONCHANGED
 * @member FMOD_SYSTEM_CALLBACK_ALL
 * @const_end
 */

/**
 * @const FMOD_MODE
 * @member FMOD_DEFAULT
 * @member FMOD_LOOP_OFF
 * @member FMOD_LOOP_NORMAL
 * @member FMOD_LOOP_BIDI
 * @member FMOD_2D
 * @member FMOD_3D
 * @member FMOD_CREATESTREAM
 * @member FMOD_CREATESAMPLE
 * @member FMOD_CREATECOMPRESSEDSAMPLE
 * @member FMOD_OPENUSER
 * @member FMOD_OPENMEMORY
 * @member FMOD_OPENMEMORY_POINT
 * @member FMOD_OPENRAW
 * @member FMOD_OPENONLY
 * @member FMOD_ACCURATETIME
 * @member FMOD_MPEGSEARCH
 * @member FMOD_NONBLOCKING
 * @member FMOD_UNIQUE
 * @member FMOD_3D_HEADRELATIVE
 * @member FMOD_3D_WORLDRELATIVE
 * @member FMOD_3D_INVERSEROLLOFF
 * @member FMOD_3D_LINEARROLLOFF
 * @member FMOD_3D_LINEARSQUAREROLLOFF
 * @member FMOD_3D_INVERSETAPEREDROLLOFF
 * @member FMOD_3D_CUSTOMROLLOFF
 * @member FMOD_3D_IGNOREGEOMETRY
 * @member FMOD_IGNORETAGS
 * @member FMOD_LOWMEM
 * @member FMOD_VIRTUAL_PLAYFROMSTART
 * @const_end
 */

/**
 * @const FMOD_CHANNELMASK
 * @member FMOD_CHANNELMASK_FRONT_LEFT
 * @member FMOD_CHANNELMASK_FRONT_RIGHT
 * @member FMOD_CHANNELMASK_FRONT_CENTER
 * @member FMOD_CHANNELMASK_LOW_FREQUENCY
 * @member FMOD_CHANNELMASK_SURROUND_LEFT
 * @member FMOD_CHANNELMASK_SURROUND_RIGHT
 * @member FMOD_CHANNELMASK_BACK_LEFT
 * @member FMOD_CHANNELMASK_BACK_RIGHT
 * @member FMOD_CHANNELMASK_BACK_CENTER
 * @member FMOD_CHANNELMASK_MONO
 * @member FMOD_CHANNELMASK_STEREO
 * @member FMOD_CHANNELMASK_LRC
 * @member FMOD_CHANNELMASK_QUAD
 * @member FMOD_CHANNELMASK_SURROUND
 * @member FMOD_CHANNELMASK_5POINT1
 * @member FMOD_CHANNELMASK_5POINT1_REARS
 * @member FMOD_CHANNELMASK_7POINT0
 * @member FMOD_CHANNELMASK_7POINT1
 * @const_end
 */
 
 
/**
 * @const FMOD_PORT_INDEX
 * @member FMOD_PORT_INDEX_NONE
 * @member FMOD_PORT_INDEX_FLAG_VR_CONTROLLER
 * @const_end
 */

/**
 * @const FMOD_THREAD_PRIORITY
 * @member FMOD_THREAD_PRIORITY_PLATFORM_MIN
 * @member FMOD_THREAD_PRIORITY_PLATFORM_MAX
 * @member FMOD_THREAD_PRIORITY_DEFAULT
 * @member FMOD_THREAD_PRIORITY_LOW
 * @member FMOD_THREAD_PRIORITY_MEDIUM
 * @member FMOD_THREAD_PRIORITY_HIGH
 * @member FMOD_THREAD_PRIORITY_VERY_HIGH
 * @member FMOD_THREAD_PRIORITY_EXTREME
 * @member FMOD_THREAD_PRIORITY_CRITICAL
 * @member FMOD_THREAD_PRIORITY_MIXER
 * @member FMOD_THREAD_PRIORITY_FEEDER
 * @member FMOD_THREAD_PRIORITY_STREAM
 * @member FMOD_THREAD_PRIORITY_FILE
 * @member FMOD_THREAD_PRIORITY_NONBLOCKING
 * @member FMOD_THREAD_PRIORITY_RECORD
 * @member FMOD_THREAD_PRIORITY_GEOMETRY
 * @member FMOD_THREAD_PRIORITY_PROFILER
 * @member FMOD_THREAD_PRIORITY_STUDIO_UPDATE
 * @member FMOD_THREAD_PRIORITY_STUDIO_LOAD_BANK
 * @member FMOD_THREAD_PRIORITY_STUDIO_LOAD_SAMPLE
 * @member FMOD_THREAD_PRIORITY_CONVOLUTION1
 * @member FMOD_THREAD_PRIORITY_CONVOLUTION2
 * @const_end
 */

/**
 * @const FMOD_THREAD_STACK_SIZE
 * @member FMOD_THREAD_STACK_SIZE_DEFAULT
 * @member FMOD_THREAD_STACK_SIZE_MIXER
 * @member FMOD_THREAD_STACK_SIZE_FEEDER
 * @member FMOD_THREAD_STACK_SIZE_STREAM
 * @member FMOD_THREAD_STACK_SIZE_FILE
 * @member FMOD_THREAD_STACK_SIZE_NONBLOCKING
 * @member FMOD_THREAD_STACK_SIZE_RECORD
 * @member FMOD_THREAD_STACK_SIZE_GEOMETRY
 * @member FMOD_THREAD_STACK_SIZE_PROFILER
 * @member FMOD_THREAD_STACK_SIZE_STUDIO_UPDATE
 * @member FMOD_THREAD_STACK_SIZE_STUDIO_LOAD_BANK
 * @member FMOD_THREAD_STACK_SIZE_STUDIO_LOAD_SAMPLE
 * @member FMOD_THREAD_STACK_SIZE_CONVOLUTION1
 * @member FMOD_THREAD_STACK_SIZE_CONVOLUTION2
 * @const_end
 */
 
/**
 * @const FMOD_THREAD_AFFINITY
 * @member FMOD_THREAD_AFFINITY_GROUP_DEFAULT
 * @member FMOD_THREAD_AFFINITY_GROUP_A
 * @member FMOD_THREAD_AFFINITY_GROUP_B
 * @member FMOD_THREAD_AFFINITY_GROUP_C
 * @member FMOD_THREAD_AFFINITY_MIXER
 * @member FMOD_THREAD_AFFINITY_FEEDER
 * @member FMOD_THREAD_AFFINITY_STREAM
 * @member FMOD_THREAD_AFFINITY_FILE
 * @member FMOD_THREAD_AFFINITY_NONBLOCKING
 * @member FMOD_THREAD_AFFINITY_RECORD
 * @member FMOD_THREAD_AFFINITY_GEOMETRY
 * @member FMOD_THREAD_AFFINITY_PROFILER
 * @member FMOD_THREAD_AFFINITY_STUDIO_UPDATE
 * @member FMOD_THREAD_AFFINITY_STUDIO_LOAD_BANK
 * @member FMOD_THREAD_AFFINITY_STUDIO_LOAD_SAMPLE
 * @member FMOD_THREAD_AFFINITY_CONVOLUTION1
 * @member FMOD_THREAD_AFFINITY_CONVOLUTION2
 * @member FMOD_THREAD_AFFINITY_CORE_ALL
 * @member FMOD_THREAD_AFFINITY_CORE_0
 * @member FMOD_THREAD_AFFINITY_CORE_1
 * @member FMOD_THREAD_AFFINITY_CORE_2
 * @member FMOD_THREAD_AFFINITY_CORE_3
 * @member FMOD_THREAD_AFFINITY_CORE_4
 * @member FMOD_THREAD_AFFINITY_CORE_5
 * @member FMOD_THREAD_AFFINITY_CORE_6
 * @member FMOD_THREAD_AFFINITY_CORE_7
 * @member FMOD_THREAD_AFFINITY_CORE_8
 * @member FMOD_THREAD_AFFINITY_CORE_9
 * @member FMOD_THREAD_AFFINITY_CORE_10
 * @member FMOD_THREAD_AFFINITY_CORE_11
 * @member FMOD_THREAD_AFFINITY_CORE_12
 * @member FMOD_THREAD_AFFINITY_CORE_13
 * @member FMOD_THREAD_AFFINITY_CORE_14
 * @member FMOD_THREAD_AFFINITY_CORE_15
 * @const_end
 */

/**
 * @const FMOD_PRESET 
 * @member FMOD_PRESET_OFF
 * @member FMOD_PRESET_GENERIC
 * @member FMOD_PRESET_PADDEDCELL
 * @member FMOD_PRESET_ROOM
 * @member FMOD_PRESET_BATHROOM
 * @member FMOD_PRESET_LIVINGROOM
 * @member FMOD_PRESET_STONEROOM
 * @member FMOD_PRESET_AUDITORIUM
 * @member FMOD_PRESET_CONCERTHALL
 * @member FMOD_PRESET_CAVE
 * @member FMOD_PRESET_ARENA
 * @member FMOD_PRESET_HANGAR
 * @member FMOD_PRESET_CARPETTEDHALLWAY
 * @member FMOD_PRESET_HALLWAY
 * @member FMOD_PRESET_STONECORRIDOR
 * @member FMOD_PRESET_ALLEY
 * @member FMOD_PRESET_FOREST
 * @member FMOD_PRESET_CITY
 * @member FMOD_PRESET_MOUNTAINS
 * @member FMOD_PRESET_QUARRY
 * @member FMOD_PRESET_PLAIN
 * @member FMOD_PRESET_PARKINGLOT
 * @member FMOD_PRESET_SEWERPIPE
 * @member FMOD_PRESET_UNDERWATER
 * @const_end
 */


/**
 * @const FMOD_MAX_CHANNEL_WIDTH
 * @const_end
 */
 
 /**
 * @const FMOD_MAX_SYSTEMS
 * @const_end
 */
 
 /**
 * @const FMOD_MAX_LISTENERS
 * @const_end
 */
 
 /**
 * @const FMOD_REVERB_MAXINSTANCES
 * @const_end
 */
 
/**
* @const FMOD_THREAD_TYPE
* @member MIXER
* @member FEEDER
* @member STREAM
* @member FILE
* @member NONBLOCKING
* @member RECORD
* @member GEOMETRY
* @member PROFILER
* @member STUDIO_UPDATE
* @member STUDIO_LOAD_BANK
* @member STUDIO_LOAD_SAMPLE
* @member CONVOLUTION1
* @member CONVOLUTION2

* @member MAX
* @member FORCEINT
* @const_end
 */



 

/**
 * @const FMOD_RESULT
 * @member OK
 * @member ERR_BADCOMMAND
 * @member ERR_CHANNEL_ALLOC
 * @member ERR_CHANNEL_STOLEN
 * @member ERR_DMA
 * @member ERR_DSP_CONNECTION
 * @member ERR_DSP_DONTPROCESS
 * @member ERR_DSP_FORMAT
 * @member ERR_DSP_INUSE
 * @member ERR_DSP_NOTFOUND
 * @member ERR_DSP_RESERVED
 * @member ERR_DSP_SILENCE
 * @member ERR_DSP_TYPE
 * @member ERR_FILE_BAD
 * @member ERR_FILE_COULDNOTSEEK
 * @member ERR_FILE_DISKEJECTED
 * @member ERR_FILE_EOF
 * @member ERR_FILE_ENDOFDATA
 * @member ERR_FILE_NOTFOUND
 * @member ERR_FORMAT
 * @member ERR_HEADER_MISMATCH
 * @member ERR_HTTP
 * @member ERR_HTTP_ACCESS
 * @member ERR_HTTP_PROXY_AUTH
 * @member ERR_HTTP_SERVER_ERROR
 * @member ERR_HTTP_TIMEOUT
 * @member ERR_INITIALIZATION
 * @member ERR_INITIALIZED
 * @member ERR_INTERNAL
 * @member ERR_INVALID_FLOAT
 * @member ERR_INVALID_HANDLE
 * @member ERR_INVALID_PARAM
 * @member ERR_INVALID_POSITION
 * @member ERR_INVALID_SPEAKER
 * @member ERR_INVALID_SYNCPOINT
 * @member ERR_INVALID_THREAD
 * @member ERR_INVALID_VECTOR
 * @member ERR_MAXAUDIBLE
 * @member ERR_MEMORY
 * @member ERR_MEMORY_CANTPOINT
 * @member ERR_NEEDS3D
 * @member ERR_NEEDSHARDWARE
 * @member ERR_NET_CONNECT
 * @member ERR_NET_SOCKET_ERROR
 * @member ERR_NET_URL
 * @member ERR_NET_WOULD_BLOCK
 * @member ERR_NOTREADY
 * @member ERR_OUTPUT_ALLOCATED
 * @member ERR_OUTPUT_CREATEBUFFER
 * @member ERR_OUTPUT_DRIVERCALL
 * @member ERR_OUTPUT_FORMAT
 * @member ERR_OUTPUT_INIT
 * @member ERR_OUTPUT_NODRIVERS
 * @member ERR_PLUGIN
 * @member ERR_PLUGIN_MISSING
 * @member ERR_PLUGIN_RESOURCE
 * @member ERR_PLUGIN_VERSION
 * @member ERR_RECORD
 * @member ERR_REVERB_CHANNELGROUP
 * @member ERR_REVERB_INSTANCE
 * @member ERR_SUBSOUNDS
 * @member ERR_SUBSOUND_ALLOCATED
 * @member ERR_SUBSOUND_CANTMOVE
 * @member ERR_TAGNOTFOUND
 * @member ERR_TOOMANYCHANNELS
 * @member ERR_TRUNCATED
 * @member ERR_UNIMPLEMENTED
 * @member ERR_UNINITIALIZED
 * @member ERR_UNSUPPORTED
 * @member ERR_VERSION
 * @member ERR_EVENT_ALREADY_LOADED
 * @member ERR_EVENT_LIVEUPDATE_BUSY
 * @member ERR_EVENT_LIVEUPDATE_MISMATCH
 * @member ERR_EVENT_LIVEUPDATE_TIMEOUT
 * @member ERR_EVENT_NOTFOUND
 * @member ERR_STUDIO_UNINITIALIZED
 * @member ERR_STUDIO_NOT_LOADED
 * @member ERR_INVALID_STRING
 * @member ERR_ALREADY_LOCKED
 * @member ERR_NOT_LOCKED
 * @member ERR_RECORD_DISCONNECTED
 * @member ERR_TOOMANYSAMPLES

 * @member RESULT_FORCEINT = 65536
 * @const_end
 */
 
/**
 * @const FMOD_CHANNELCONTROL_TYPE
 * @member CHANNEL
 * @member CHANNELGROUP

 * @member MAX
 * @member FORCEINT = 65536
 * @const_end
 */

/**
 * @const FMOD_OUTPUTTYPE
 * @member AUTODETECT
 * @member UNKNOWN
 * @member NOSOUND
 * @member WAVWRITER
 * @member NOSOUND_NRT
 * @member WAVWRITER_NRT
 * @member WASAPI
 * @member ASIO
 * @member PULSEAUDIO
 * @member ALSA
 * @member COREAUDIO
 * @member AUDIOTRACK
 * @member OPENSL
 * @member AUDIOOUT
 * @member AUDIO3D
 * @member WEBAUDIO
 * @member NNAUDIO
 * @member WINSONIC
 * @member AAUDIO
 * @member AUDIOWORKLET
 * @member PHASE

 * @member MAX
 * @member FORCEINT
 * @const_end
 */
 
/**
 * @const FMOD_DEBUG_MODE
 * @member TTY
 * @member FILE
 * @member CALLBACK
 * @member FORCEINT
 * @const_end
 */

/**
 * @const FMOD_SPEAKERMODE
 * @member DEFAULT
 * @member RAW
 * @member MONO
 * @member STEREO
 * @member QUAD
 * @member SURROUND
 * @member _5POINT1
 * @member _7POINT1
 * @member _7POINT1POINT4

 * @member MAX
 * @member FORCEINT
 * @const_end
 */

/**
 * @const FMOD_SPEAKER
 * @member NONE
 * @member FRONT_LEFT
 * @member FRONT_RIGHT
 * @member FRONT_CENTER
 * @member LOW_FREQUENCY
 * @member SURROUND_LEFT
 * @member SURROUND_RIGHT
 * @member BACK_LEFT
 * @member BACK_RIGHT
 * @member TOP_FRONT_LEFT
 * @member TOP_FRONT_RIGHT
 * @member TOP_BACK_LEFT
 * @member TOP_BACK_RIGHT
 * @member MAX
 * @member FORCEINT
 * @const_end
 */
 
/**
 * @const FMOD_CHANNELORDER
 * @member DEFAULT
 * @member WAVEFORMAT
 * @member PROTOOLS
 * @member ALLMONO
 * @member ALLSTEREO
 * @member ALSA
 * @member MAX
 * @member FORCEINT
 * @const_end
 */

/**
 * @const FMOD_PLUGINTYPE
 * @member OUTPUT
 * @member CODEC
 * @member DSP

 * @member MAX
 * @member FORCEINT
 * @const_end
 */

/**
 * @const FMOD_SOUND_TYPE
 * @member UNKNOWN
 * @member AIFF
 * @member ASF
 * @member DLS
 * @member FLAC
 * @member FSB
 * @member IT
 * @member MIDI
 * @member MOD
 * @member MPEG
 * @member OGGVORBIS
 * @member PLAYLIST
 * @member RAW
 * @member S3M
 * @member USER
 * @member WAV
 * @member XM
 * @member XMA
 * @member AUDIOQUEUE
 * @member AT9
 * @member VORBIS
 * @member MEDIA_FOUNDATION
 * @member MEDIACODEC
 * @member FADPCM
 * @member OPUS

 * @member MAX
 * @member FORCEINT = 65536
 * @const_end
 */

/**
 * @const FMOD_SOUND_FORMAT
 * @member NONE
 * @member PCM8
 * @member PCM16
 * @member PCM24
 * @member PCM32
 * @member PCMFLOAT
 * @member BITSTREAM

 * @member MAX
 * @member FORCEINT
 * @const_end
 */
 
/**
 * @const FMOD_OPENSTATE
 * @member READY
 * @member LOADING
 * @member ERROR
 * @member CONNECTING
 * @member BUFFERING
 * @member SEEKING
 * @member PLAYING
 * @member SETPOSITION

 * @member MAX
 * @member FORCEINT 
 * @const_end
 */
 
/**
 * @const FMOD_SOUNDGROUP_BEHAVIOR
 * @member FAIL
 * @member MUTE
 * @member STEALLOWEST

 * @member MAX
 * @member FORCEINT
 * @const_end
 */
 
/**
 * @const FMOD_CHANNELCONTROL_CALLBACK_TYPE
 * @member END
 * @member VIRTUALVOICE
 * @member SYNCPOINT
 * @member OCCLUSION

 * @member MAX
 * @member FORCEINT
 * @const_end
 */

/**
 * @const FMOD_CHANNELCONTROL_DSP_INDEX
 * @member HEAD
 * @member FADER
 * @member TAIL
 * @member FORCEINT
 * @const_end
 */

/**
 * @const FMOD_ERRORCALLBACK_INSTANCETYPE
 * @member NONE
 * @member SYSTEM
 * @member CHANNEL
 * @member CHANNELGROUP
 * @member CHANNELCONTROL
 * @member SOUND
 * @member SOUNDGROUP
 * @member DSP
 * @member DSPCONNECTION
 * @member GEOMETRY
 * @member REVERB3D
 * @member STUDIO_SYSTEM
 * @member STUDIO_EVENTDESCRIPTION
 * @member STUDIO_EVENTINSTANCE
 * @member STUDIO_PARAMETERINSTANCE
 * @member STUDIO_BUS
 * @member STUDIO_VCA
 * @member STUDIO_BANK
 * @member STUDIO_COMMANDREPLAY
 * @member FORCEINT
 * @const_end
 */

/**
 * @const FMOD_DSP_RESAMPLER
 * @member DEFAULT
 * @member NOINTERP
 * @member LINEAR
 * @member CUBIC
 * @member SPLINE
 * @member MAX
 * @member FORCEINT
 * @const_end
 */

/**
 * @const FMOD_DSP_CALLBACK_TYPE
 * @member DATAPARAMETERRELEASE
 * @member MAX
 * @member FORCEINT
 * @const_end
 */
 
/**
 * @const FMOD_DSPCONNECTION_TYPE
 * @member STANDARD
 * @member SIDECHAIN
 * @member SEND
 * @member SEND_SIDECHAIN
 * @member MAX
 * @member FORCEINT
 * @const_end
 */

/**
 * @const FMOD_TAGTYPE
 * @member UNKNOWN
 * @member ID3V1
 * @member ID3V2
 * @member VORBISCOMMENT
 * @member SHOUTCAST
 * @member ICECAST
 * @member ASF
 * @member MIDI
 * @member PLAYLIST
 * @member FMOD
 * @member USER

 * @member MAX
 * @member FORCEINT
 * @const_end
 */
 
/**
 * @const FMOD_TAGDATATYPE
 * @member BINARY
 * @member INT
 * @member FLOAT
 * @member STRING
 * @member STRING_UTF16
 * @member STRING_UTF16BE
 * @member STRING_UTF8
 * @member MAX
 * @member FORCEINT
 * @const_end
 */
 
/**
 * @const FMOD_PORT_TYPE
 * @member MUSIC
 * @member COPYRIGHT_MUSIC
 * @member VOICE
 * @member CONTROLLER
 * @member PERSONAL
 * @member VIBRATION
 * @member AUX
 * @member MAX
 * @member FORCEINT
 * @const_end
 */

/**
 * @module CoreDefinitons
 * @title Core Definitons
 * @desc The following set of functions are all for checking the availability of certain aspects of the Steam client or server API. This means that these functions should be used before any other Steam API function call to ensure that the client/server setup is correct and communicating with your game:
 * @section_const
 
 * @ref FMOD_VERSION
 * @ref FMOD_DEBUG_FLAGS
 * @ref FMOD_MEMORY_TYPE
 * @ref FMOD_INITFLAGS
 * @ref FMOD_DRIVER_STATE
 * @ref FMOD_TIMEUNIT
 * @ref FMOD_SYSTEM_CALLBACK_TYPE
 * @ref FMOD_MODE
 * @ref FMOD_CHANNELMASK
 * @ref FMOD_PORT_INDEX
 * @ref FMOD_THREAD_PRIORITY
 * @ref FMOD_THREAD_STACK_SIZE
 * @ref FMOD_THREAD_AFFINITY
 * @ref FMOD_PRESET 
 * @ref FMOD_MAX_CHANNEL_WIDTH
 * @ref FMOD_MAX_SYSTEMS
 * @ref FMOD_MAX_LISTENERS
 * @ref FMOD_REVERB_MAXINSTANCES
 * @ref FMOD_THREAD_TYPE
 * @ref FMOD_RESULT
 * @ref FMOD_CHANNELCONTROL_TYPE
 * @ref FMOD_OUTPUTTYPE
 * @ref FMOD_DEBUG_MODE
 * @ref FMOD_SPEAKERMODE
 * @ref FMOD_SPEAKER
 * @ref FMOD_CHANNELORDER
 * @ref FMOD_PLUGINTYPE
 * @ref FMOD_SOUND_TYPE
 * @ref FMOD_SOUND_FORMAT
 * @ref FMOD_OPENSTATE
 * @ref FMOD_SOUNDGROUP_BEHAVIOR
 * @ref FMOD_CHANNELCONTROL_CALLBACK_TYPE
 * @ref FMOD_CHANNELCONTROL_DSP_INDEX
 * @ref FMOD_ERRORCALLBACK_INSTANCETYPE
 * @ref FMOD_DSP_RESAMPLER
 * @ref FMOD_DSP_CALLBACK_TYPE
 * @ref FMOD_DSPCONNECTION_TYPE
 * @ref FMOD_TAGTYPE
 * @ref FMOD_TAGDATATYPE
 * @ref FMOD_PORT_TYPE

 * @section_end
 * @module_end
 */