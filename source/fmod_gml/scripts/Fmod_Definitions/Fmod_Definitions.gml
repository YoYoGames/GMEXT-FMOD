// feather ignore GM1003

#region Core Definitions

/* FMOD constants */

#macro FMOD_VERSION    0x00020306                     /* 0xaaaabbcc -> aaaa = product version, bb = major version, cc = minor version.*/

enum FMOD_DEBUG_FLAGS 
{
	LEVEL_NONE          = 0x00000000,
	LEVEL_ERROR         = 0x00000001,
	LEVEL_WARNING       = 0x00000002,
	LEVEL_LOG           = 0x00000004,
	TYPE_MEMORY         = 0x00000100,
	TYPE_FILE           = 0x00000200,
	TYPE_CODEC          = 0x00000400,
	TYPE_TRACE          = 0x00000800,
	DISPLAY_TIMESTAMPS  = 0x00010000,
	DISPLAY_LINENUMBERS = 0x00020000,
	DISPLAY_THREAD      = 0x00040000,
}

enum FMOD_MEMORY_TYPE 
{
	NORMAL			= 0x00000000,
	STREAM_FILE		= 0x00000001,
	STREAM_DECODE	= 0x00000002,
	SAMPLEDATA		= 0x00000004,
	DSP_BUFFER		= 0x00000008,
	PLUGIN			= 0x00000010,
	PERSISTENT		= 0x00200000,
	ALL				= 0xFFFFFFFF,
}

enum FMOD_INIT 
{
	NORMAL					= 0x00000000,
	STREAM_FROM_UPDATE		= 0x00000001,
	MIX_FROM_UPDATE			= 0x00000002,
	RIGHTHANDED_3D			= 0x00000004,
	CLIP_OUTPUT				= 0x00000008,
	CHANNEL_LOWPASS			= 0x00000100,
	CHANNEL_DISTANCEFILTER	= 0x00000200,
	PROFILE_ENABLE			= 0x00010000,
	VOL0_BECOMES_VIRTUAL	= 0x00020000,
	GEOMETRY_USECLOSEST		= 0x00040000,
	PREFER_DOLBY_DOWNMIX	= 0x00080000,
	THREAD_UNSAFE			= 0x00100000,
	PROFILE_METER_ALL		= 0x00200000,
	MEMORY_TRACKING			= 0x00400000
}

enum FMOD_DRIVER_STATE 
{
	CONNECTED	= 0x00000001,
	DEFAULT		= 0x00000002,
}

enum FMOD_TIMEUNIT 
{
	MS = 0x00000001,
	PCM = 0x00000002,
	PCMBYTES = 0x00000004,
	RAWBYTES = 0x00000008,
	PCMFRACTION = 0x00000010,
	MODORDER = 0x00000100,
	MODROW = 0x00000200,
	MODPATTERN = 0x00000400
}

enum FMOD_SYSTEM_CALLBACK 
{
	DEVICELISTCHANGED      = 0x00000001,
	DEVICELOST             = 0x00000002,
	MEMORYALLOCATIONFAILED = 0x00000004,
	THREADCREATED          = 0x00000008,
	BADDSPCONNECTION       = 0x00000010,
	PREMIX                 = 0x00000020,
	POSTMIX                = 0x00000040,
	ERROR                  = 0x00000080,
	MIDMIX                 = 0x00000100,
	THREADDESTROYED        = 0x00000200,
	PREUPDATE              = 0x00000400,
	POSTUPDATE             = 0x00000800,
	RECORDLISTCHANGED      = 0x00001000,
	BUFFEREDNOMIX          = 0x00002000,
	DEVICEREINITIALIZE     = 0x00004000,
	OUTPUTUNDERRUN         = 0x00008000,
	RECORDPOSITIONCHANGED  = 0x00010000,
	ALL                    = 0xFFFFFFFF
}

enum FMOD_MODE
{
	DEFAULT							= 0x00000000,
	LOOP_OFF						= 0x00000001,
	LOOP_NORMAL						= 0x00000002,
	LOOP_BIDI						= 0x00000004,
	AS_2D							= 0x00000008,
	AS_3D							= 0x00000010,
	CREATESTREAM					= 0x00000080,
	CREATESAMPLE					= 0x00000100,
	CREATECOMPRESSEDSAMPLE			= 0x00000200,
	OPENUSER						= 0x00000400,
	OPENMEMORY						= 0x00000800,
	OPENMEMORY_POINT				= 0x10000000,
	OPENRAW							= 0x00001000,
	OPENONLY						= 0x00002000,
	ACCURATETIME					= 0x00004000,
	MPEGSEARCH						= 0x00008000,
	NONBLOCKING						= 0x00010000,
	UNIQUE							= 0x00020000,
	AS_3D_HEADRELATIVE				= 0x00040000,
	AS_3D_WORLDRELATIVE				= 0x00080000,
	AS_3D_INVERSEROLLOFF			= 0x00100000,
	AS_3D_LINEARROLLOFF				= 0x00200000,
	AS_3D_LINEARSQUAREROLLOFF		= 0x00400000,
	AS_3D_INVERSETAPEREDROLLOFF		= 0x00800000,
	AS_3D_CUSTOMROLLOFF				= 0x04000000,
	AS_3D_IGNOREGEOMETRY			= 0x40000000,
	IGNORETAGS						= 0x02000000,
	LOWMEM							= 0x08000000,
	MODEVIRTUAL_PLAYFROMSTART		= 0x80000000,
}

enum FMOD_CHANNELMASK
{
	FRONT_LEFT				= 0x00000001,
	FRONT_RIGHT				= 0x00000002,
	FRONT_CENTER			= 0x00000004,
	LOW_FREQUENCY			= 0x00000008,
	SURROUND_LEFT			= 0x00000010,
	SURROUND_RIGHT			= 0x00000020,
	BACK_LEFT				= 0x00000040,
	BACK_RIGHT				= 0x00000080,
	BACK_CENTER				= 0x00000100,
	MONO					= (FMOD_CHANNELMASK.FRONT_LEFT),
	STEREO					= (FMOD_CHANNELMASK.FRONT_LEFT | FMOD_CHANNELMASK.FRONT_RIGHT),
	LRC						= (FMOD_CHANNELMASK.STEREO | FMOD_CHANNELMASK.FRONT_CENTER),
	QUAD					= (FMOD_CHANNELMASK.STEREO | FMOD_CHANNELMASK.SURROUND_LEFT | FMOD_CHANNELMASK.SURROUND_RIGHT),
	SURROUND				= (FMOD_CHANNELMASK.LRC | FMOD_CHANNELMASK.SURROUND_LEFT | FMOD_CHANNELMASK.SURROUND_RIGHT),
	SURROUND_5POINT1		= (FMOD_CHANNELMASK.SURROUND | FMOD_CHANNELMASK.LOW_FREQUENCY),
	SURROUND_5POINT1_REARS	= (FMOD_CHANNELMASK.LRC | FMOD_CHANNELMASK.LOW_FREQUENCY | FMOD_CHANNELMASK.BACK_LEFT | FMOD_CHANNELMASK.BACK_RIGHT),
	SURROUND_7POINT0		= (FMOD_CHANNELMASK.SURROUND | FMOD_CHANNELMASK.BACK_LEFT | FMOD_CHANNELMASK.BACK_RIGHT),
	SURROUND_7POINT1		= (FMOD_CHANNELMASK.SURROUND_7POINT0 | FMOD_CHANNELMASK.LOW_FREQUENCY ),
}

enum FMOD_PORT_INDEX
{
	NONE                        = 0xFFFFFFFFFFFFFFFF,
	FLAG_VR_CONTROLLER          = 0x1000000000000000,
}

enum FMOD_THREAD_PRIORITY
{
	/* Platform specific priority range */
	PLATFORM_MIN           = (-32 * 1024),
	PLATFORM_MAX           = ( 32 * 1024),
	/* Platform agnostic priorities, maps internally to platform specific value */
	DEFAULT                = (FMOD_THREAD_PRIORITY.PLATFORM_MIN - 1),
	LOW                    = (FMOD_THREAD_PRIORITY.PLATFORM_MIN - 2),
	MEDIUM                 = (FMOD_THREAD_PRIORITY.PLATFORM_MIN - 3),
	HIGH                   = (FMOD_THREAD_PRIORITY.PLATFORM_MIN - 4),
	VERY_HIGH              = (FMOD_THREAD_PRIORITY.PLATFORM_MIN - 5),
	EXTREME                = (FMOD_THREAD_PRIORITY.PLATFORM_MIN - 6),
	CRITICAL               = (FMOD_THREAD_PRIORITY.PLATFORM_MIN - 7),
	/* Thread defaults */
	MIXER                  = FMOD_THREAD_PRIORITY.EXTREME,
	FEEDER                 = FMOD_THREAD_PRIORITY.CRITICAL,
	STREAM                 = FMOD_THREAD_PRIORITY.VERY_HIGH,
	FILE                   = FMOD_THREAD_PRIORITY.HIGH,
	NONBLOCKING            = FMOD_THREAD_PRIORITY.HIGH,
	RECORD                 = FMOD_THREAD_PRIORITY.HIGH,
	GEOMETRY               = FMOD_THREAD_PRIORITY.LOW,
	PROFILER               = FMOD_THREAD_PRIORITY.MEDIUM,
	STUDIO_UPDATE          = FMOD_THREAD_PRIORITY.MEDIUM,
	STUDIO_LOAD_BANK       = FMOD_THREAD_PRIORITY.MEDIUM,
	STUDIO_LOAD_SAMPLE     = FMOD_THREAD_PRIORITY.MEDIUM,
	CONVOLUTION1           = FMOD_THREAD_PRIORITY.VERY_HIGH,
	CONVOLUTION2           = FMOD_THREAD_PRIORITY.VERY_HIGH
}

enum FMOD_THREAD_STACK_SIZE
{
	DEFAULT              = 0,
	MIXER                = (80  * 1024),
	FEEDER               = (16  * 1024),
	STREAM               = (96  * 1024),
	FILE                 = (64  * 1024),
	NONBLOCKING          = (112 * 1024),
	RECORD               = (16  * 1024),
	GEOMETRY             = (48  * 1024),
	PROFILER             = (128 * 1024),
	STUDIO_UPDATE        = (96  * 1024),
	STUDIO_LOAD_BANK     = (96  * 1024),
	STUDIO_LOAD_SAMPLE   = (96  * 1024),
	CONVOLUTION1         = (16  * 1024),
	CONVOLUTION2         = (16  * 1024),	
}

enum FMOD_THREAD_AFFINITY
{
	/* Platform agnostic thread groupings */
	GROUP_DEFAULT          = 0x4000000000000000,
	GROUP_A                = 0x4000000000000001,
	GROUP_B                = 0x4000000000000002,
	GROUP_C                = 0x4000000000000003,
	/* Thread defaults */ 
	MIXER                  = FMOD_THREAD_AFFINITY.GROUP_A,
	FEEDER                 = FMOD_THREAD_AFFINITY.GROUP_C,
	STREAM                 = FMOD_THREAD_AFFINITY.GROUP_C,
	FILE                   = FMOD_THREAD_AFFINITY.GROUP_C,
	NONBLOCKING            = FMOD_THREAD_AFFINITY.GROUP_C,
	RECORD                 = FMOD_THREAD_AFFINITY.GROUP_C,
	GEOMETRY               = FMOD_THREAD_AFFINITY.GROUP_C,
	PROFILER               = FMOD_THREAD_AFFINITY.GROUP_C,
	STUDIO_UPDATE          = FMOD_THREAD_AFFINITY.GROUP_B,
	STUDIO_LOAD_BANK       = FMOD_THREAD_AFFINITY.GROUP_C,
	STUDIO_LOAD_SAMPLE     = FMOD_THREAD_AFFINITY.GROUP_C,
	CONVOLUTION1           = FMOD_THREAD_AFFINITY.GROUP_C,
	CONVOLUTION2           = FMOD_THREAD_AFFINITY.GROUP_C,
	/* Core mask, valid up to 1 << 62 */
	CORE_ALL               = 0,
	CORE_0                 = (1 << 0),
	CORE_1                 = (1 << 1),
	CORE_2                 = (1 << 2),
	CORE_3                 = (1 << 3),
	CORE_4                 = (1 << 4),
	CORE_5                 = (1 << 5),
	CORE_6                 = (1 << 6),
	CORE_7                 = (1 << 7),
	CORE_8                 = (1 << 8),
	CORE_9                 = (1 << 9),
	CORE_10                = (1 << 10),
	CORE_11                = (1 << 11),
	CORE_12                = (1 << 12),
	CORE_13                = (1 << 13),
	CORE_14                = (1 << 14),
	CORE_15                = (1 << 15),
}

/* Preset for struct.FmodReverbProperties */

#macro FMOD_PRESET_OFF                             { decay_time:  1000, early_delay:   7, late_delay:  11, hf_reference: 5000, hf_decay_ratio: 100, diffusion: 100, density: 100, low_shelf_frequency: 250, low_shelf_gain: 0, high_cut:    20, early_late_mix:  96, wet_level: -80.0 }
#macro FMOD_PRESET_GENERIC                         { decay_time:  1500, early_delay:   7, late_delay:  11, hf_reference: 5000, hf_decay_ratio:  83, diffusion: 100, density: 100, low_shelf_frequency: 250, low_shelf_gain: 0, high_cut: 14500, early_late_mix:  96, wet_level:  -8.0 }
#macro FMOD_PRESET_PADDEDCELL                      { decay_time:   170, early_delay:   1, late_delay:   2, hf_reference: 5000, hf_decay_ratio:  10, diffusion: 100, density: 100, low_shelf_frequency: 250, low_shelf_gain: 0, high_cut:   160, early_late_mix:  84, wet_level:  -7.8 }
#macro FMOD_PRESET_ROOM                            { decay_time:   400, early_delay:   2, late_delay:   3, hf_reference: 5000, hf_decay_ratio:  83, diffusion: 100, density: 100, low_shelf_frequency: 250, low_shelf_gain: 0, high_cut:  6050, early_late_mix:  88, wet_level:  -9.4 }
#macro FMOD_PRESET_BATHROOM                        { decay_time:  1500, early_delay:   7, late_delay:  11, hf_reference: 5000, hf_decay_ratio:  54, diffusion: 100, density:  60, low_shelf_frequency: 250, low_shelf_gain: 0, high_cut:  2900, early_late_mix:  83, wet_level:   0.5 }
#macro FMOD_PRESET_LIVINGROOM                      { decay_time:   500, early_delay:   3, late_delay:   4, hf_reference: 5000, hf_decay_ratio:  10, diffusion: 100, density: 100, low_shelf_frequency: 250, low_shelf_gain: 0, high_cut:   160, early_late_mix:  58, wet_level: -19.0 }
#macro FMOD_PRESET_STONEROOM                       { decay_time:  2300, early_delay:  12, late_delay:  17, hf_reference: 5000, hf_decay_ratio:  64, diffusion: 100, density: 100, low_shelf_frequency: 250, low_shelf_gain: 0, high_cut:  7800, early_late_mix:  71, wet_level:  -8.5 }
#macro FMOD_PRESET_AUDITORIUM                      { decay_time:  4300, early_delay:  20, late_delay:  30, hf_reference: 5000, hf_decay_ratio:  59, diffusion: 100, density: 100, low_shelf_frequency: 250, low_shelf_gain: 0, high_cut:  5850, early_late_mix:  64, wet_level: -11.7 }
#macro FMOD_PRESET_CONCERTHALL                     { decay_time:  3900, early_delay:  20, late_delay:  29, hf_reference: 5000, hf_decay_ratio:  70, diffusion: 100, density: 100, low_shelf_frequency: 250, low_shelf_gain: 0, high_cut:  5650, early_late_mix:  80, wet_level:  -9.8 }
#macro FMOD_PRESET_CAVE                            { decay_time:  2900, early_delay:  15, late_delay:  22, hf_reference: 5000, hf_decay_ratio: 100, diffusion: 100, density: 100, low_shelf_frequency: 250, low_shelf_gain: 0, high_cut: 20000, early_late_mix:  59, wet_level: -11.3 }
#macro FMOD_PRESET_ARENA                           { decay_time:  7200, early_delay:  20, late_delay:  30, hf_reference: 5000, hf_decay_ratio:  33, diffusion: 100, density: 100, low_shelf_frequency: 250, low_shelf_gain: 0, high_cut:  4500, early_late_mix:  80, wet_level:  -9.6 }
#macro FMOD_PRESET_HANGAR                          { decay_time: 10000, early_delay:  20, late_delay:  30, hf_reference: 5000, hf_decay_ratio:  23, diffusion: 100, density: 100, low_shelf_frequency: 250, low_shelf_gain: 0, high_cut:  3400, early_late_mix:  72, wet_level:  -7.4 }
#macro FMOD_PRESET_CARPETTEDHALLWAY                { decay_time:   300, early_delay:   2, late_delay:  30, hf_reference: 5000, hf_decay_ratio:  10, diffusion: 100, density: 100, low_shelf_frequency: 250, low_shelf_gain: 0, high_cut:   500, early_late_mix:  56, wet_level: -24.0 }
#macro FMOD_PRESET_HALLWAY                         { decay_time:  1500, early_delay:   7, late_delay:  11, hf_reference: 5000, hf_decay_ratio:  59, diffusion: 100, density: 100, low_shelf_frequency: 250, low_shelf_gain: 0, high_cut:  7800, early_late_mix:  87, wet_level:  -5.5 }
#macro FMOD_PRESET_STONECORRIDOR                   { decay_time:   270, early_delay:  13, late_delay:  20, hf_reference: 5000, hf_decay_ratio:  79, diffusion: 100, density: 100, low_shelf_frequency: 250, low_shelf_gain: 0, high_cut:  9000, early_late_mix:  86, wet_level:  -6.0 }
#macro FMOD_PRESET_ALLEY                           { decay_time:  1500, early_delay:   7, late_delay:  11, hf_reference: 5000, hf_decay_ratio:  86, diffusion: 100, density: 100, low_shelf_frequency: 250, low_shelf_gain: 0, high_cut:  8300, early_late_mix:  80, wet_level:  -9.8 }
#macro FMOD_PRESET_FOREST                          { decay_time:  1500, early_delay: 162, late_delay:  88, hf_reference: 5000, hf_decay_ratio:  54, diffusion:  79, density: 100, low_shelf_frequency: 250, low_shelf_gain: 0, high_cut:   760, early_late_mix:  94, wet_level: -12.3 }
#macro FMOD_PRESET_CITY                            { decay_time:  1500, early_delay:   7, late_delay:  11, hf_reference: 5000, hf_decay_ratio:  67, diffusion:  50, density: 100, low_shelf_frequency: 250, low_shelf_gain: 0, high_cut:  4050, early_late_mix:  66, wet_level: -26.0 }
#macro FMOD_PRESET_MOUNTAINS                       { decay_time:  1500, early_delay: 300, late_delay: 100, hf_reference: 5000, hf_decay_ratio:  21, diffusion:  27, density: 100, low_shelf_frequency: 250, low_shelf_gain: 0, high_cut:  1220, early_late_mix:  82, wet_level: -24.0 }
#macro FMOD_PRESET_QUARRY                          { decay_time:  1500, early_delay:  61, late_delay:  25, hf_reference: 5000, hf_decay_ratio:  83, diffusion: 100, density: 100, low_shelf_frequency: 250, low_shelf_gain: 0, high_cut:  3400, early_late_mix: 100, wet_level:  -5.0 }
#macro FMOD_PRESET_PLAIN                           { decay_time:  1500, early_delay: 179, late_delay: 100, hf_reference: 5000, hf_decay_ratio:  50, diffusion:  21, density: 100, low_shelf_frequency: 250, low_shelf_gain: 0, high_cut:  1670, early_late_mix:  65, wet_level: -28.0 }
#macro FMOD_PRESET_PARKINGLOT                      { decay_time:  1700, early_delay:   8, late_delay:  12, hf_reference: 5000, hf_decay_ratio: 100, diffusion: 100, density: 100, low_shelf_frequency: 250, low_shelf_gain: 0, high_cut: 20000, early_late_mix:  56, wet_level: -19.5 }
#macro FMOD_PRESET_SEWERPIPE                       { decay_time:  2800, early_delay:  14, late_delay:  21, hf_reference: 5000, hf_decay_ratio:  14, diffusion:  80, density:  60, low_shelf_frequency: 250, low_shelf_gain: 0, high_cut:  3400, early_late_mix:  66, wet_level:   1.2 }
#macro FMOD_PRESET_UNDERWATER                      { decay_time:  1500, early_delay:   7, late_delay:  11, hf_reference: 5000, hf_decay_ratio:  10, diffusion: 100, density: 100, low_shelf_frequency: 250, low_shelf_gain: 0, high_cut:   500, early_late_mix:  92, wet_level:   7.0 }

#macro FMOD_MAX_CHANNEL_WIDTH                      32
#macro FMOD_MAX_SYSTEMS                            8
#macro FMOD_MAX_LISTENERS                          8
#macro FMOD_REVERB_MAXINSTANCES                    4

enum FMOD_THREAD_TYPE
{
    MIXER,
    FEEDER,
    STREAM,
    FILE,
    NONBLOCKING,
    RECORD,
    GEOMETRY,
    PROFILER,
    STUDIO_UPDATE,
    STUDIO_LOAD_BANK,
    STUDIO_LOAD_SAMPLE,
    CONVOLUTION1,
    CONVOLUTION2,

    MAX,
};

enum FMOD_RESULT
{
	OK,
    ERR_BADCOMMAND,
    ERR_CHANNEL_ALLOC,
    ERR_CHANNEL_STOLEN,
    ERR_DMA,
    ERR_DSP_CONNECTION,
    ERR_DSP_DONTPROCESS,
    ERR_DSP_FORMAT,
    ERR_DSP_INUSE,
    ERR_DSP_NOTFOUND,
    ERR_DSP_RESERVED,
    ERR_DSP_SILENCE,
    ERR_DSP_TYPE,
    ERR_FILE_BAD,
    ERR_FILE_COULDNOTSEEK,
    ERR_FILE_DISKEJECTED,
    ERR_FILE_EOF,
    ERR_FILE_ENDOFDATA,
    ERR_FILE_NOTFOUND,
    ERR_FORMAT,
    ERR_HEADER_MISMATCH,
    ERR_HTTP,
    ERR_HTTP_ACCESS,
    ERR_HTTP_PROXY_AUTH,
    ERR_HTTP_SERVER_ERROR,
    ERR_HTTP_TIMEOUT,
    ERR_INITIALIZATION,
    ERR_INITIALIZED,
    ERR_INTERNAL,
    ERR_INVALID_FLOAT,
    ERR_INVALID_HANDLE,
    ERR_INVALID_PARAM,
    ERR_INVALID_POSITION,
    ERR_INVALID_SPEAKER,
    ERR_INVALID_SYNCPOINT,
    ERR_INVALID_THREAD,
    ERR_INVALID_VECTOR,
    ERR_MAXAUDIBLE,
    ERR_MEMORY,
    ERR_MEMORY_CANTPOINT,
    ERR_NEEDS3D,
    ERR_NEEDSHARDWARE,
    ERR_NET_CONNECT,
    ERR_NET_SOCKET_ERROR,
    ERR_NET_URL,
    ERR_NET_WOULD_BLOCK,
    ERR_NOTREADY,
    ERR_OUTPUT_ALLOCATED,
    ERR_OUTPUT_CREATEBUFFER,
    ERR_OUTPUT_DRIVERCALL,
    ERR_OUTPUT_FORMAT,
    ERR_OUTPUT_INIT,
    ERR_OUTPUT_NODRIVERS,
    ERR_PLUGIN,
    ERR_PLUGIN_MISSING,
    ERR_PLUGIN_RESOURCE,
    ERR_PLUGIN_VERSION,
    ERR_RECORD,
    ERR_REVERB_CHANNELGROUP,
    ERR_REVERB_INSTANCE,
    ERR_SUBSOUNDS,
    ERR_SUBSOUND_ALLOCATED,
    ERR_SUBSOUND_CANTMOVE,
    ERR_TAGNOTFOUND,
    ERR_TOOMANYCHANNELS,
    ERR_TRUNCATED,
    ERR_UNIMPLEMENTED,
    ERR_UNINITIALIZED,
    ERR_UNSUPPORTED,
    ERR_VERSION,
    ERR_EVENT_ALREADY_LOADED,
    ERR_EVENT_LIVEUPDATE_BUSY,
    ERR_EVENT_LIVEUPDATE_MISMATCH,
    ERR_EVENT_LIVEUPDATE_TIMEOUT,
    ERR_EVENT_NOTFOUND,
    ERR_STUDIO_UNINITIALIZED,
    ERR_STUDIO_NOT_LOADED,
    ERR_INVALID_STRING,
    ERR_ALREADY_LOCKED,
    ERR_NOT_LOCKED,
    ERR_RECORD_DISCONNECTED,
    ERR_TOOMANYSAMPLES,
};

enum FMOD_CHANNELCONTROL_TYPE
{
    CHANNEL,
    CHANNELGROUP,

    MAX,
};

enum FMOD_OUTPUTTYPE
{
    AUTODETECT,
    UNKNOWN,
    NOSOUND,
    WAVWRITER,
    NOSOUND_NRT,
    WAVWRITER_NRT,
    WASAPI,
    ASIO,
    PULSEAUDIO,
    ALSA,
    COREAUDIO,
    AUDIOTRACK,
    OPENSL,
    AUDIOOUT,
    AUDIO3D,
    WEBAUDIO,
    NNAUDIO,
    WINSONIC,
    AAUDIO,
    AUDIOWORKLET,
    PHASE,

    MAX,
};

enum FMOD_DEBUG_MODE
{
    TTY,
    FILE,
    CALLBACK,
};

enum FMOD_SPEAKERMODE
{
    DEFAULT,
    RAW,
    MONO,
    STEREO,
    QUAD,
    SURROUND,
    _5POINT1,
    _7POINT1,
    _7POINT1POINT4,

    MAX,
};

enum FMOD_SPEAKER
{
    NONE = -1,
    FRONT_LEFT = 0,
    FRONT_RIGHT,
    FRONT_CENTER,
    LOW_FREQUENCY,
    SURROUND_LEFT,
    SURROUND_RIGHT,
    BACK_LEFT,
    BACK_RIGHT,
    TOP_FRONT_LEFT,
    TOP_FRONT_RIGHT,
    TOP_BACK_LEFT,
    TOP_BACK_RIGHT,

    MAX,
};

enum FMOD_CHANNELORDER
{
    DEFAULT,
    WAVEFORMAT,
    PROTOOLS,
    ALLMONO,
    ALLSTEREO,
    ALSA,

    MAX,
};

enum FMOD_PLUGINTYPE
{
    OUTPUT,
    CODEC,
    DSP,

    MAX,
};

enum FMOD_SOUND_TYPE
{
    UNKNOWN,
    AIFF,
    ASF,
    DLS,
    FLAC,
    FSB,
    IT,
    MIDI,
    MOD,
    MPEG,
    OGGVORBIS,
    PLAYLIST,
    RAW,
    S3M,
    USER,
    WAV,
    XM,
    XMA,
    AUDIOQUEUE,
    AT9,
    VORBIS,
    MEDIA_FOUNDATION,
    MEDIACODEC,
    FADPCM,
    OPUS,

    MAX,
};

enum FMOD_SOUND_FORMAT
{
    NONE,
    PCM8,
    PCM16,
    PCM24,
    PCM32,
    PCMFLOAT,
    BITSTREAM,

    MAX,
};

enum FMOD_OPENSTATE
{
    READY,
    LOADING,
    ERROR,
    CONNECTING,
    BUFFERING,
    SEEKING,
    PLAYING,
    SETPOSITION,

    MAX,
};

enum FMOD_SOUNDGROUP_BEHAVIOR
{
    FAIL,
    MUTE,
    STEALLOWEST,

    MAX,
};

enum FMOD_CHANNELCONTROL_CALLBACK_TYPE
{
    END,
    VIRTUALVOICE,
    SYNCPOINT,
    OCCLUSION,

    MAX,
};

enum FMOD_CHANNELCONTROL_DSP_INDEX
{
    HEAD     = -1,
    FADER    = -2,
    TAIL     = -3,

};

enum FMOD_ERRORCALLBACK_INSTANCETYPE
{
    NONE,
    SYSTEM,
    CHANNEL,
    CHANNELGROUP,
    CHANNELCONTROL,
    SOUND,
    SOUNDGROUP,
    DSP,
    DSPCONNECTION,
    GEOMETRY,
    REVERB3D,
    STUDIO_SYSTEM,
    STUDIO_EVENTDESCRIPTION,
    STUDIO_EVENTINSTANCE,
    STUDIO_PARAMETERINSTANCE,
    STUDIO_BUS,
    STUDIO_VCA,
    STUDIO_BANK,
    STUDIO_COMMANDREPLAY,
};

enum FMOD_DSP_RESAMPLER
{
    DEFAULT,
    NOINTERP,
    LINEAR,
    CUBIC,
    SPLINE,

    MAX,
};

enum FMOD_DSP_CALLBACK_TYPE
{
    DATAPARAMETERRELEASE,

    MAX,
};

enum FMOD_DSPCONNECTION_TYPE
{
    STANDARD,
    SIDECHAIN,
    SEND,
    SEND_SIDECHAIN,

    MAX,
};

enum FMOD_TAGTYPE
{
    UNKNOWN,
    ID3V1,
    ID3V2,
    VORBISCOMMENT,
    SHOUTCAST,
    ICECAST,
    ASF,
    MIDI,
    PLAYLIST,
    FMOD,
    USER,

    MAX,
};

enum FMOD_TAGDATATYPE
{
    BINARY,
    INT,
    FLOAT,
    STRING,
    STRING_UTF16,
    STRING_UTF16BE,
    STRING_UTF8,

    MAX,
};

enum FMOD_PORT_TYPE
{
    MUSIC,
    COPYRIGHT_MUSIC,
    VOICE,
    CONTROLLER,
    PERSONAL,
    VIBRATION,
    AUX,

    MAX,
};

/* Codec constants */

#macro FMOD_CODEC_PLUGIN_VERSION 1

enum FMOD_CODEC_SEEK_METHOD 
{
	SET      = 0,
	CURRENT  = 1,
	END      = 2,
}

/* DSP Constants */

#macro FMOD_PLUGIN_SDK_VERSION             110
#macro FMOD_DSP_GETPARAM_VALUESTR_LENGTH   32

enum FMOD_DSP_TYPE
{
	UNKNOWN,
    MIXER,
    OSCILLATOR,
    LOWPASS,
    ITLOWPASS,
    HIGHPASS,
    ECHO,
    FADER,
    FLANGE,
    DISTORTION,
    NORMALIZE,
    LIMITER,
    PARAMEQ,
    PITCHSHIFT,
    CHORUS,
    ITECHO,
    COMPRESSOR,
    SFXREVERB,
    LOWPASS_SIMPLE,
    DELAY,
    TREMOLO,
    SEND,
    RETURN,
    HIGHPASS_SIMPLE,
    PAN,
    THREE_EQ,
    FFT,
    LOUDNESS_METER,
    CONVOLUTIONREVERB,
    CHANNELMIX,
    TRANSCEIVER,
    OBJECTPAN,
    MULTIBAND_EQ,
    MULTIBAND_DYNAMICS,
	
    MAX,
};

enum FMOD_DSP_OSCILLATOR
{
    TYPE,
    RATE
};

enum FMOD_DSP_LOWPASS
{
    CUTOFF,
    RESONANCE
};

enum FMOD_DSP_ITLOWPASS
{
    CUTOFF,
    RESONANCE
};

enum FMOD_DSP_HIGHPASS
{
    CUTOFF,
    RESONANCE
};

enum FMOD_DSP_ECHO
{
    DELAY,
    FEEDBACK,
    DRYLEVEL,
    WETLEVEL
};

enum FMOD_DSP_FADER
{
    GAIN,
    OVERALL_GAIN,
};

enum FMOD_DSP_FLANGE
{
    MIX,
    DEPTH,
    RATE
};

enum FMOD_DSP_DISTORTION
{
    LEVEL
};

enum FMOD_DSP_NORMALIZE
{
    FADETIME,
    THRESHOLD,
    MAXAMP
};

enum FMOD_DSP_LIMITER
{
    RELEASETIME,
    CEILING,
    MAXIMIZERGAIN,
    MODE,
};

enum FMOD_DSP_PARAMEQ
{
    CENTER,
    BANDWIDTH,
    GAIN
};

enum FMOD_DSP_MULTIBAND_EQ
{
    A_FILTER,
    A_FREQUENCY,
    A_Q,
    A_GAIN,
    B_FILTER,
    B_FREQUENCY,
    B_Q,
    B_GAIN,
    C_FILTER,
    C_FREQUENCY,
    C_Q,
    C_GAIN,
    D_FILTER,
    D_FREQUENCY,
    D_Q,
    D_GAIN,
    E_FILTER,
    E_FREQUENCY,
    E_Q,
    E_GAIN,
};

enum FMOD_DSP_MULTIBAND_EQ_FILTER_TYPE
{
    DISABLED,
    LOWPASS_12DB,
    LOWPASS_24DB,
    LOWPASS_48DB,
    HIGHPASS_12DB,
    HIGHPASS_24DB,
    HIGHPASS_48DB,
    LOWSHELF,
    HIGHSHELF,
    PEAKING,
    BANDPASS,
    NOTCH,
    ALLPASS,
};

enum FMOD_DSP_PITCHSHIFT
{
    PITCH,
    FFTSIZE,
    OVERLAP,
    MAXCHANNELS
};

enum FMOD_DSP_CHORUS
{
    MIX,
    RATE,
    DEPTH,
};

enum FMOD_DSP_ITECHO
{
    WETDRYMIX,
    FEEDBACK,
    LEFTDELAY,
    RIGHTDELAY,
    PANDELAY
};

enum FMOD_DSP_COMPRESSOR
{
    THRESHOLD, 
    RATIO, 
    ATTACK,
    RELEASE,
    GAINMAKEUP,
    USESIDECHAIN,
    LINKED
};

enum FMOD_DSP_SFXREVERB
{
    DECAYTIME,
    EARLYDELAY,
    LATEDELAY,
    HFREFERENCE,
    HFDECAYRATIO,
    DIFFUSION,
    DENSITY,
    LOWSHELFFREQUENCY,
    LOWSHELFGAIN,
    HIGHCUT,
    EARLYLATEMIX,
    WETLEVEL,
    DRYLEVEL
};

enum FMOD_DSP_LOWPASS_SIMPLE
{
    CUTOFF
};

enum FMOD_DSP_DELAY
{
    CH0,
    CH1,
    CH2,
    CH3,
    CH4,
    CH5,
    CH6,
    CH7,
    CH8,
    CH9,
    CH10,
    CH11,
    CH12,
    CH13,
    CH14,
    CH15,
    MAXDELAY
};

enum FMOD_DSP_TREMOLO
{
    FREQUENCY,
    DEPTH,
    SHAPE,
    SKEW,
    DUTY,
    SQUARE,
    PHASE,
    SPREAD
};

enum FMOD_DSP_SEND
{
    RETURNID,
    LEVEL,
};

enum FMOD_DSP_RETURN
{
    ID,
    INPUT_SPEAKER_MODE
};

enum FMOD_DSP_HIGHPASS_SIMPLE
{
    CUTOFF
};

enum FMOD_DSP_PAN_2D_STEREO_MODE_TYPE
{
    DISTRIBUTED,
    DISCRETE
};

enum FMOD_DSP_PAN_MODE_TYPE
{
    MONO,
    STEREO,
    SURROUND
};

enum FMOD_DSP_PAN_3D_ROLLOFF_TYPE
{
    LINEARSQUARED,
    LINEAR,
    INVERSE,
    INVERSETAPERED,
    CUSTOM
};

enum FMOD_DSP_PAN_3D_EXTENT_MODE_TYPE
{
    AUTO,
    USER,
    OFF
};

enum FMOD_DSP_PAN
{
    MODE,
    _2D_STEREO_POSITION,
    _2D_DIRECTION,
    _2D_EXTENT,
    _2D_ROTATION,
    _2D_LFE_LEVEL,
    _2D_STEREO_MODE,
    _2D_STEREO_SEPARATION,
    _2D_STEREO_AXIS,
    ENABLED_SPEAKERS,
    _3D_POSITION,
    _3D_ROLLOFF,
    _3D_MIN_DISTANCE,
    _3D_MAX_DISTANCE,
    _3D_EXTENT_MODE,
    _3D_SOUND_SIZE,
    _3D_MIN_EXTENT,
    _3D_PAN_BLEND,
    LFE_UPMIX_ENABLED,
    OVERALL_GAIN,
    SURROUND_SPEAKER_MODE,
    _2D_HEIGHT_BLEND,
    ATTENUATION_RANGE,
    OVERRIDE_RANGE
};

enum FMOD_DSP_THREE_EQ_CROSSOVERSLOPE_TYPE
{
    _12DB,
    _24DB,
    _48DB
};

enum FMOD_DSP_THREE_EQ
{
    LOWGAIN,
    MIDGAIN,
    HIGHGAIN,
    LOWCROSSOVER,
    HIGHCROSSOVER,
    CROSSOVERSLOPE
};

enum FMOD_DSP_FFT_WINDOW_TYPE
{
    RECT,
    TRIANGLE,
    HAMMING,
    HANNING,
    BLACKMAN,
    BLACKMANHARRIS
};

enum FMOD_DSP_FFT
{
	WINDOWSIZE,
	WINDOW_TYPE,
	BAND_START_FREQ,
	BAND_STOP_FREQ,
	SPECTRUMDATA,
	RMS,
	SPECTRAL_CENTROID,
	IMMEDIATE_MODE,
	DOWNMIX,
	CHANNEL
};

#macro FMOD_DSP_LOUDNESS_METER_HISTOGRAM_SAMPLES 66

enum FMOD_DSP_LOUDNESS_METER
{
    STATE,
    WEIGHTING,
    INFO
};

enum FMOD_DSP_LOUDNESS_METER_STATE_TYPE
{
    RESET_INTEGRATED = -3,
    RESET_MAXPEAK = -2,
    RESET_ALL = -1,
    PAUSED = 0,
    ANALYZING = 1
};

enum FMOD_DSP_ENVELOPEFOLLOWER
{
    ATTACK,
    RELEASE,
    ENVELOPE,
    USESIDECHAIN
};

enum FMOD_DSP_CONVOLUTION_REVERB_PARAM
{
    IR,
    WET,
    DRY,
    LINKED
};

enum FMOD_DSP_CHANNELMIX_OUTPUT
{
    DEFAULT,
    ALLMONO,
    ALLSTEREO,
    ALLQUAD,
    ALL5POINT1,
    ALL7POINT1,
    ALLLFE,
    ALL7POINT1POINT4
};

enum FMOD_DSP_CHANNELMIX
{
    OUTPUTGROUPING,
    GAIN_CH0,
    GAIN_CH1,
    GAIN_CH2,
    GAIN_CH3,
    GAIN_CH4,
    GAIN_CH5,
    GAIN_CH6,
    GAIN_CH7,
    GAIN_CH8,
    GAIN_CH9,
    GAIN_CH10,
    GAIN_CH11,
    GAIN_CH12,
    GAIN_CH13,
    GAIN_CH14,
    GAIN_CH15,
    GAIN_CH16,
    GAIN_CH17,
    GAIN_CH18,
    GAIN_CH19,
    GAIN_CH20,
    GAIN_CH21,
    GAIN_CH22,
    GAIN_CH23,
    GAIN_CH24,
    GAIN_CH25,
    GAIN_CH26,
    GAIN_CH27,
    GAIN_CH28,
    GAIN_CH29,
    GAIN_CH30,
    GAIN_CH31,
    OUTPUT_CH0,
    OUTPUT_CH1,
    OUTPUT_CH2,
    OUTPUT_CH3,
    OUTPUT_CH4,
    OUTPUT_CH5,
    OUTPUT_CH6,
    OUTPUT_CH7,
    OUTPUT_CH8,
    OUTPUT_CH9,
    OUTPUT_CH10,
    OUTPUT_CH11,
    OUTPUT_CH12,
    OUTPUT_CH13,
    OUTPUT_CH14,
    OUTPUT_CH15,
    OUTPUT_CH16,
    OUTPUT_CH17,
    OUTPUT_CH18,
    OUTPUT_CH19,
    OUTPUT_CH20,
    OUTPUT_CH21,
    OUTPUT_CH22,
    OUTPUT_CH23,
    OUTPUT_CH24,
    OUTPUT_CH25,
    OUTPUT_CH26,
    OUTPUT_CH27,
    OUTPUT_CH28,
    OUTPUT_CH29,
    OUTPUT_CH30,
    OUTPUT_CH31
};

enum FMOD_DSP_TRANSCEIVER_SPEAKERMODE
{
    AUTO = -1,
    MONO = 0,
    STEREO,
    SURROUND,
};

enum FMOD_DSP_TRANSCEIVER
{
    TRANSMIT,
    GAIN,
    CHANNEL,
    TRANSMITSPEAKERMODE
};

enum FMOD_DSP_OBJECTPAN
{
    _3D_POSITION,
    _3D_ROLLOFF,
    _3D_MIN_DISTANCE,
    _3D_MAX_DISTANCE,
    _3D_EXTENT_MODE,
    _3D_SOUND_SIZE,
    _3D_MIN_EXTENT,
    OVERALL_GAIN,
    OUTPUTGAIN,
    ATTENUATION_RANGE,
    OVERRIDE_RANGE
};

/* Output constants */

#macro FMOD_OUTPUT_PLUGIN_VERSION 5

enum FMOD_OUTPUT_METHOD
{
	MIX_DIRECT    = 0,
	MIX_BUFFERED  = 1,
}

#endregion

#region Studio Definitions

#macro FMOD_STUDIO_LOAD_MEMORY_ALIGNMENT                   32

enum FMOD_STUDIO_INIT 
{
	NORMAL                  = 0x00000000,
	LIVEUPDATE              = 0x00000001,
	ALLOW_MISSING_PLUGINS   = 0x00000002,
	SYNCHRONOUS_UPDATE      = 0x00000004,
	DEFERRED_CALLBACKS      = 0x00000008,
	LOAD_FROM_UPDATE        = 0x00000010,
	MEMORY_TRACKING         = 0x00000020,
}

enum FMOD_STUDIO_PARAMETER_FLAGS 
{
	READONLY    = 0x00000001,
	AUTOMATIC   = 0x00000002,
	GLOBAL      = 0x00000004,
	DISCRETE    = 0x00000008,
	LABELED     = 0x00000010,
}

enum FMOD_STUDIO_SYSTEM_CALLBACK 
{
	PREUPDATE               = 0x00000001,
	POSTUPDATE              = 0x00000002,
	BANK_UNLOAD             = 0x00000004,
	LIVEUPDATE_CONNECTED    = 0x00000008,
	LIVEUPDATE_DISCONNECTED = 0x00000010,
	ALL                     = 0xFFFFFFFF,
}

enum FMOD_STUDIO_EVENT_CALLBACK 
{
	CREATED                   = 0x00000001,
	DESTROYED                 = 0x00000002,
	STARTING                  = 0x00000004,
	STARTED                   = 0x00000008,
	RESTARTED                 = 0x00000010,
	STOPPED                   = 0x00000020,
	START_FAILED              = 0x00000040,
	CREATE_PROGRAMMER_SOUND   = 0x00000080,
	DESTROY_PROGRAMMER_SOUND  = 0x00000100,
	PLUGIN_CREATED            = 0x00000200,
	PLUGIN_DESTROYED          = 0x00000400,
	TIMELINE_MARKER           = 0x00000800,
	TIMELINE_BEAT             = 0x00001000,
	SOUND_PLAYED              = 0x00002000,
	SOUND_STOPPED             = 0x00004000,
	REAL_TO_VIRTUAL           = 0x00008000,
	VIRTUAL_TO_REAL           = 0x00010000,
	START_EVENT_COMMAND       = 0x00020000,
	NESTED_TIMELINE_BEAT      = 0x00040000,
	ALL                       = 0xFFFFFFFF,
}

enum FMOD_STUDIO_LOAD_BANK 
{
	NORMAL              = 0x00000000,
	NONBLOCKING         = 0x00000001,
	DECOMPRESS_SAMPLES  = 0x00000002,
	UNENCRYPTED         = 0x00000004,
}

enum FMOD_STUDIO_COMMANDCAPTURE 
{
	NORMAL              = 0x00000000,
	FILEFLUSH           = 0x00000001,
	SKIP_INITIAL_STATE  = 0x00000002,
}

enum FMOD_STUDIO_COMMANDREPLAY
{
	NORMAL              = 0x00000000,
	SKIP_CLEANUP        = 0x00000001,
	FAST_FORWARD        = 0x00000002,
	SKIP_BANK_LOAD      = 0x00000004,
}

enum FMOD_STUDIO_LOADING_STATE
{
    UNLOADING,
    UNLOADED,
    LOADING,
    LOADED,
    ERROR,
};

enum FMOD_STUDIO_LOAD_MEMORY_MODE
{
    MEMORY,
    MEMORY_POINT,
};

enum FMOD_STUDIO_PARAMETER_TYPE
{
    GAME_CONTROLLED,
    AUTOMATIC_DISTANCE,
    AUTOMATIC_EVENT_CONE_ANGLE,
    AUTOMATIC_EVENT_ORIENTATION,
    AUTOMATIC_DIRECTION,
    AUTOMATIC_ELEVATION,
    AUTOMATIC_LISTENER_ORIENTATION,
    AUTOMATIC_SPEED,
    AUTOMATIC_SPEED_ABSOLUTE,
    AUTOMATIC_DISTANCE_NORMALIZED,

    MAX,
};

enum FMOD_STUDIO_USER_PROPERTY_TYPE
{
    INTEGER,
    BOOLEAN,
    FLOAT,
    STRING,
};

enum FMOD_STUDIO_EVENT_PROPERTY
{
    CHANNELPRIORITY,
    SCHEDULE_DELAY,
    SCHEDULE_LOOKAHEAD,
    MINIMUM_DISTANCE,
    MAXIMUM_DISTANCE,
    COOLDOWN,
    MAX,
};

enum FMOD_STUDIO_PLAYBACK_STATE
{
    PLAYING,
    SUSTAINING,
    STOPPED,
    STARTING,
    STOPPING,
};

enum FMOD_STUDIO_STOP_MODE
{
    ALLOWFADEOUT,
    IMMEDIATE,
};

enum FMOD_STUDIO_INSTANCETYPE
{
    NONE,
    SYSTEM,
    EVENTDESCRIPTION,
    EVENTINSTANCE,
    PARAMETERINSTANCE,
    BUS,
    VCA,
    BANK,
    COMMANDREPLAY,
};

#endregion

