// ##### extgen :: Auto-generated file do not edit!! #####

// #####################################################################
// # Macros
// #####################################################################

// #####################################################################
// # Enums
// #####################################################################

enum FmodStudioResult
{
    Ok = 0,
    BadCommand = 1,
    ChannelAlloc = 2,
    ChannelStolen = 3,
    Dma = 4,
    DspConnection = 5,
    DspDontProcess = 6,
    DspFormat = 7,
    DspInUse = 8,
    DspNotFound = 9,
    DspReserved = 10,
    DspSilence = 11,
    DspType = 12,
    FileBad = 13,
    FileCouldNotSeek = 14,
    FileDiskEjected = 15,
    FileEof = 16,
    FileEndOfData = 17,
    FileNotFound = 18,
    Format = 19,
    HeaderMismatch = 20,
    Http = 21,
    HttpAccess = 22,
    HttpProxyAuth = 23,
    HttpServerError = 24,
    HttpTimeout = 25,
    Initialization = 26,
    Initialized = 27,
    Internal = 28,
    InvalidFloat = 29,
    InvalidHandle = 30,
    InvalidParam = 31,
    InvalidPosition = 32,
    InvalidSpeaker = 33,
    InvalidSyncPoint = 34,
    InvalidThread = 35,
    InvalidVector = 36,
    MaxAudible = 37,
    Memory = 38,
    MemoryCantPoint = 39,
    Needs3D = 40,
    NeedsHardware = 41,
    NetConnect = 42,
    NetSocketError = 43,
    NetUrl = 44,
    NetWouldBlock = 45,
    NotReady = 46,
    OutputAllocated = 47,
    OutputCreateBuffer = 48,
    OutputDriverCall = 49,
    OutputFormat = 50,
    OutputInit = 51,
    OutputNoDriver = 52,
    Plugin = 53,
    PluginMissing = 54,
    PluginResource = 55,
    PluginVersion = 56,
    Record = 57,
    ReverbChannelGroup = 58,
    ReverbInstance = 59,
    SubSounds = 60,
    SubSoundAllocated = 61,
    SubSoundCantMove = 62,
    TagNotFound = 63,
    TooManyChannels = 64,
    TruncatedData = 65,
    Unimplemented = 66,
    Uninitialized = 67,
    Unsupported = 68,
    Version = 69,
    EventAlreadyLoaded = 70,
    EventLiveUpdateBusy = 71,
    EventLiveUpdateMismatch = 72,
    EventLiveUpdateTimeout = 73,
    EventNotFound = 74,
    StudioUninitialized = 75,
    StudioNotLoaded = 76,
    InvalidString = 77,
    AlreadyLocked = 78,
    NotLocked = 79,
    RecordDisconnected = 80,
    TooManySamples = 81
}

enum FmodStudioDebugFlags
{
    LevelNone = 0,
    LevelError = 1,
    LevelWarning = 2,
    LevelLog = 4,
    TypeMemory = 256,
    TypeFile = 512,
    TypeCodec = 1024,
    TypeTrace = 2048,
    DisplayTimestamps = 65536,
    DisplayLineNumbers = 131072,
    DisplayThread = 262144
}

enum FmodStudioDebugMode
{
    Tty = 0,
    File = 1,
    Callback = 2
}

enum FmodStudioInitFlags
{
    Normal = 0,
    LiveUpdate = 1,
    AllowMissingPlugins = 2,
    SynchronousUpdate = 4,
    DeferredCallbacks = 8,
    LoadFromUpdate = 16,
    MemoryTracking = 32
}

enum FmodStudioLoadingState
{
    Unloading = 0,
    Unloaded = 1,
    Loading = 2,
    Loaded = 3,
    Error = 4
}

enum FmodStudioPlaybackState
{
    Playing = 0,
    Sustaining = 1,
    Stopped = 2,
    Starting = 3,
    Stopping = 4
}

enum FmodStudioStopMode
{
    AllowFadeOut = 0,
    Immediate = 1
}

enum FmodStudioEventProperty
{
    ChannelPriority = 0,
    ScheduleDelay = 1,
    ScheduleLookAhead = 2,
    MinimumDistance = 3,
    MaximumDistance = 4,
    CoolDown = 5
}

enum FmodStudioParameterFlags
{
    ReadOnly = 1,
    Automatic = 2,
    Global = 4,
    Discrete = 8,
    Labeled = 16
}

enum FmodStudioUserPropertyType
{
    Integer = 0,
    Boolean = 1,
    Float = 2,
    String = 3
}

enum FmodStudioLoadBankFlags
{
    Normal = 0,
    NonBlocking = 1,
    DecompressSamples = 2,
    Unencrypted = 4
}

enum FmodStudioCommandCaptureFlags
{
    Normal = 0,
    FileFlush = 1,
    SkipInitialState = 2
}

enum FmodStudioCommandReplayFlags
{
    Normal = 0,
    SkipCleanup = 1,
    FastForward = 2,
    SkipBankLoad = 4
}

enum FmodStudioEventCallbackType
{
    Created = 1,
    Destroyed = 2,
    Starting = 4,
    Started = 8,
    Restarted = 16,
    Stopped = 32,
    StartFailed = 64,
    CreateProgrammerSound = 128,
    DestroyProgrammerSound = 256,
    PluginCreated = 512,
    PluginDestroyed = 1024,
    TimelineMarker = 2048,
    TimelineBeat = 4096,
    SoundPlayed = 8192,
    SoundStopped = 16384,
    RealToVirtual = 32768,
    VirtualToReal = 65536,
    StartEventCommand = 131072,
    NestedTimelineBeat = 262144,
    All = -1
}

enum FmodStudioMode
{
    Default = 0,
    LoopOff = 1,
    LoopOn = 2,
    LoopBidi = 4,
    _2D = 8,
    _3D = 16,
    CreateStream = 128,
    CreateSample = 256,
    CreateCompressedSample = 512,
    OpenUser = 1024,
    OpenMemory = 2048,
    OpenMemoryPoint = 268435456,
    OpenRaw = 4096,
    OpenOnly = 8192,
    AccurateTime = 16384,
    MpegSearch = 32768,
    NonBlocking = 65536,
    Unique = 131072,
    _3DHeadRelative = 262144,
    _3DWorldRelative = 524288,
    _3DInverseRollOff = 1048576,
    _3DLinearRollOff = 2097152,
    _3DLinearSquareRollOff = 4194304,
    _3DInverseTaperedRollOff = 8388608,
    _3DCustomRollOff = 67108864,
    _3DIgnoreGeometry = 1073741824,
    IgnoreTags = 33554432,
    LowMem = 134217728,
    VirtualPlayFromStart = -2147483648
}

enum FmodStudioSoundFormat
{
    None = 0,
    Pcm8 = 1,
    Pcm16 = 2,
    Pcm24 = 3,
    Pcm32 = 4,
    PcmFloat = 5,
    BitStream = 6
}

// #####################################################################
// # Constructors
// #####################################################################

/**
 * @returns {Struct.FmodStudioParameterDescription}
 */
function FmodStudioParameterDescription() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 1023933586;

    self.name = undefined;
    self.id_data1 = undefined;
    self.id_data2 = undefined;
    self.minimum = undefined;
    self.maximum = undefined;
    self.defaultvalue = undefined;
    self.type = undefined;
    self.flags = undefined;

}

/**
 * @returns {Struct.FmodStudioStringInfo}
 */
function FmodStudioStringInfo() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 431421628;

    self.guid = undefined;
    self.path = undefined;

}

/**
 * @returns {Struct.FmodStudioCPUUsage}
 */
function FmodStudioCPUUsage() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 3555240292;

    self.exclusive = undefined;
    self.inclusive = undefined;

}

/**
 * @returns {Struct.FmodStudioMemoryUsage}
 */
function FmodStudioMemoryUsage() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 3203996353;

    self.exclusive = undefined;
    self.inclusive = undefined;
    self.sample_data = undefined;

}

/**
 * @returns {Struct.FmodStudioCommandInfo}
 */
function FmodStudioCommandInfo() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 967774226;

    self.command_name = undefined;
    self.parent_command_index = undefined;
    self.frame_time = undefined;
    self.instance_type = undefined;
    self.output_type = undefined;
    self.instance_handle = undefined;
    self.output_handle = undefined;

}

/**
 * @returns {Struct.FmodStudioCurrentCommand}
 */
function FmodStudioCurrentCommand() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 365904579;

    self.command_index = undefined;
    self.current_time = undefined;

}

/**
 * @returns {Struct.FmodStudioUserProperty}
 */
function FmodStudioUserProperty() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 2891221775;

    self.name = undefined;
    self.type = undefined;
    self.string_value = undefined;
    self.int_value = undefined;
    self.bool_value = undefined;
    self.float_value = undefined;

}

/**
 * @returns {Struct.FmodStudioVec3}
 */
function FmodStudioVec3() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 1370123338;

    self.x = undefined;
    self.y = undefined;
    self.z = undefined;

}

/**
 * @returns {Struct.FmodStudioMinMaxDistance}
 */
function FmodStudioMinMaxDistance() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 4110415344;

    self.min_distance = undefined;
    self.max_distance = undefined;

}

/**
 * @returns {Struct.FmodStudioCoreCPUUsage}
 */
function FmodStudioCoreCPUUsage() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 490958111;

    self.dsp = undefined;
    self.stream = undefined;
    self.geometry = undefined;
    self.update = undefined;
    self.convolution1 = undefined;
    self.convolution2 = undefined;

}

/**
 * @returns {Struct.FmodStudioCreateSoundExInfo}
 */
function FmodStudioCreateSoundExInfo() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 210514585;

    self.length = 0;
    self.file_offset = 0;
    self.num_channels = 0;
    self.default_frequency = 0;
    self.format = 0;
    self.decode_buffer_size = 0;
    self.initial_subsound = 0;
    self.num_subsounds = 0;
    self.inclusion_list_num = 0;
    self.dls_name = "";
    self.encryption_key = "";
    self.max_polyphony = 0;
    self.suggested_sound_type = 0;
    self.file_buffer_size = 0;
    self.channel_order = 0;
    self.initial_sound_group = 0;
    self.initial_seek_position = 0;
    self.initial_seek_pos_type = 0;
    self.ignore_set_filesystem = 0;
    self.audio_queue_policy = 0;
    self.min_midi_granularity = 0;
    self.non_block_thread_id = 0;

}

/**
 * @returns {Struct.FmodStudioBufferInfo}
 */
function FmodStudioBufferInfo() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 418154839;

    self.current_usage = undefined;
    self.peak_usage = undefined;
    self.capacity = undefined;
    self.stall_count = undefined;
    self.stall_time = undefined;

}

/**
 * @returns {Struct.FmodStudioAdvancedSettings}
 */
function FmodStudioAdvancedSettings() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 3186888222;

    self.command_queue_size = undefined;
    self.handle_initial_size = undefined;
    self.studio_update_period = undefined;
    self.idle_sampledata_pool_size = undefined;
    self.streaming_schedule_delay = undefined;
    self.encryption_key = undefined;

}

/**
 * @returns {Struct.FmodStudioParameterValue}
 */
function FmodStudioParameterValue() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 1457701801;

    self.value = undefined;
    self.final_value = undefined;

}

/**
 * @returns {Struct.FmodStudioListener3DAttributes}
 */
function FmodStudioListener3DAttributes() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 2515217851;

    self.position = undefined;
    self.velocity = undefined;
    self.forward = undefined;
    self.up = undefined;

}

/**
 * @returns {Struct.FmodStudioChannelControl3DAttributes}
 */
function FmodStudioChannelControl3DAttributes() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 3370970883;

    self.position = undefined;
    self.velocity = undefined;

}

/**
 * @returns {Struct.FmodStudioSystemCPUUsage}
 */
function FmodStudioSystemCPUUsage() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 563936393;

    self.studio_update = undefined;
    self.core = undefined;

}

/**
 * @returns {Struct.FmodStudioSoundInfo}
 */
function FmodStudioSoundInfo() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 1508813680;

    self.ext_info = undefined;
    self.name_or_data = undefined;
    self.mode = undefined;
    self.sub_sound_index = undefined;

}

/**
 * @returns {Struct.FmodStudioBufferUsage}
 */
function FmodStudioBufferUsage() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 141907778;

    self.command_queue = undefined;
    self.handle = undefined;

}

/**
 * @returns {Struct.FmodStudioListenerAttributes}
 */
function FmodStudioListenerAttributes() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 1155109232;

    self.attributes = undefined;
    self.attenuation = undefined;

}

// #####################################################################
// # Codecs
// #####################################################################

/**
 * @func __FmodStudioParameterDescription_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodStudioParameterDescription} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodStudioParameterDescription_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: name, type: String
        if (!is_string(self.name)) show_error($"{_where} :: self.name expected string", true);
        buffer_write(_buffer, buffer_u32, string_byte_length(self.name));
        buffer_write(_buffer, buffer_string, self.name);

        // field: id_data1, type: Float64
        if (!is_numeric(self.id_data1)) show_error($"{_where} :: self.id_data1 expected number", true);
        buffer_write(_buffer, buffer_f64, self.id_data1);

        // field: id_data2, type: Float64
        if (!is_numeric(self.id_data2)) show_error($"{_where} :: self.id_data2 expected number", true);
        buffer_write(_buffer, buffer_f64, self.id_data2);

        // field: minimum, type: Float64
        if (!is_numeric(self.minimum)) show_error($"{_where} :: self.minimum expected number", true);
        buffer_write(_buffer, buffer_f64, self.minimum);

        // field: maximum, type: Float64
        if (!is_numeric(self.maximum)) show_error($"{_where} :: self.maximum expected number", true);
        buffer_write(_buffer, buffer_f64, self.maximum);

        // field: defaultvalue, type: Float64
        if (!is_numeric(self.defaultvalue)) show_error($"{_where} :: self.defaultvalue expected number", true);
        buffer_write(_buffer, buffer_f64, self.defaultvalue);

        // field: type, type: enum FmodStudioUserPropertyType

        if (!is_numeric(self.type)) show_error($"{_where} :: self.type expected number", true);
        buffer_write(_buffer, buffer_u64, self.type);

        // field: flags, type: enum FmodStudioParameterFlags

        if (!is_numeric(self.flags)) show_error($"{_where} :: self.flags expected number", true);
        buffer_write(_buffer, buffer_u64, self.flags);

    }
}

/**
 * @func __FmodStudioParameterDescription_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodStudioParameterDescription}
 * @ignore
 */
function __FmodStudioParameterDescription_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodStudioParameterDescription();
    with (_inst)
    {
        // field: name, type: String
        buffer_read(_buffer, buffer_u32);
        self.name = buffer_read(_buffer, buffer_string);

        // field: id_data1, type: Float64
        self.id_data1 = buffer_read(_buffer, buffer_f64);

        // field: id_data2, type: Float64
        self.id_data2 = buffer_read(_buffer, buffer_f64);

        // field: minimum, type: Float64
        self.minimum = buffer_read(_buffer, buffer_f64);

        // field: maximum, type: Float64
        self.maximum = buffer_read(_buffer, buffer_f64);

        // field: defaultvalue, type: Float64
        self.defaultvalue = buffer_read(_buffer, buffer_f64);

        // field: type, type: enum FmodStudioUserPropertyType
        self.type = buffer_read(_buffer, buffer_u64);

        // field: flags, type: enum FmodStudioParameterFlags
        self.flags = buffer_read(_buffer, buffer_u64);

    }

    return _inst;
}

/**
 * @func __FmodStudioStringInfo_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodStudioStringInfo} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodStudioStringInfo_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: guid, type: String
        if (!is_string(self.guid)) show_error($"{_where} :: self.guid expected string", true);
        buffer_write(_buffer, buffer_u32, string_byte_length(self.guid));
        buffer_write(_buffer, buffer_string, self.guid);

        // field: path, type: String
        if (!is_string(self.path)) show_error($"{_where} :: self.path expected string", true);
        buffer_write(_buffer, buffer_u32, string_byte_length(self.path));
        buffer_write(_buffer, buffer_string, self.path);

    }
}

/**
 * @func __FmodStudioStringInfo_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodStudioStringInfo}
 * @ignore
 */
function __FmodStudioStringInfo_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodStudioStringInfo();
    with (_inst)
    {
        // field: guid, type: String
        buffer_read(_buffer, buffer_u32);
        self.guid = buffer_read(_buffer, buffer_string);

        // field: path, type: String
        buffer_read(_buffer, buffer_u32);
        self.path = buffer_read(_buffer, buffer_string);

    }

    return _inst;
}

/**
 * @func __FmodStudioCPUUsage_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodStudioCPUUsage} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodStudioCPUUsage_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: exclusive, type: Float64
        if (!is_numeric(self.exclusive)) show_error($"{_where} :: self.exclusive expected number", true);
        buffer_write(_buffer, buffer_f64, self.exclusive);

        // field: inclusive, type: Float64
        if (!is_numeric(self.inclusive)) show_error($"{_where} :: self.inclusive expected number", true);
        buffer_write(_buffer, buffer_f64, self.inclusive);

    }
}

/**
 * @func __FmodStudioCPUUsage_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodStudioCPUUsage}
 * @ignore
 */
function __FmodStudioCPUUsage_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodStudioCPUUsage();
    with (_inst)
    {
        // field: exclusive, type: Float64
        self.exclusive = buffer_read(_buffer, buffer_f64);

        // field: inclusive, type: Float64
        self.inclusive = buffer_read(_buffer, buffer_f64);

    }

    return _inst;
}

/**
 * @func __FmodStudioMemoryUsage_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodStudioMemoryUsage} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodStudioMemoryUsage_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: exclusive, type: Float64
        if (!is_numeric(self.exclusive)) show_error($"{_where} :: self.exclusive expected number", true);
        buffer_write(_buffer, buffer_f64, self.exclusive);

        // field: inclusive, type: Float64
        if (!is_numeric(self.inclusive)) show_error($"{_where} :: self.inclusive expected number", true);
        buffer_write(_buffer, buffer_f64, self.inclusive);

        // field: sample_data, type: Float64
        if (!is_numeric(self.sample_data)) show_error($"{_where} :: self.sample_data expected number", true);
        buffer_write(_buffer, buffer_f64, self.sample_data);

    }
}

/**
 * @func __FmodStudioMemoryUsage_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodStudioMemoryUsage}
 * @ignore
 */
function __FmodStudioMemoryUsage_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodStudioMemoryUsage();
    with (_inst)
    {
        // field: exclusive, type: Float64
        self.exclusive = buffer_read(_buffer, buffer_f64);

        // field: inclusive, type: Float64
        self.inclusive = buffer_read(_buffer, buffer_f64);

        // field: sample_data, type: Float64
        self.sample_data = buffer_read(_buffer, buffer_f64);

    }

    return _inst;
}

/**
 * @func __FmodStudioCommandInfo_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodStudioCommandInfo} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodStudioCommandInfo_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: command_name, type: String
        if (!is_string(self.command_name)) show_error($"{_where} :: self.command_name expected string", true);
        buffer_write(_buffer, buffer_u32, string_byte_length(self.command_name));
        buffer_write(_buffer, buffer_string, self.command_name);

        // field: parent_command_index, type: Float64
        if (!is_numeric(self.parent_command_index)) show_error($"{_where} :: self.parent_command_index expected number", true);
        buffer_write(_buffer, buffer_f64, self.parent_command_index);

        // field: frame_time, type: Float64
        if (!is_numeric(self.frame_time)) show_error($"{_where} :: self.frame_time expected number", true);
        buffer_write(_buffer, buffer_f64, self.frame_time);

        // field: instance_type, type: Float64
        if (!is_numeric(self.instance_type)) show_error($"{_where} :: self.instance_type expected number", true);
        buffer_write(_buffer, buffer_f64, self.instance_type);

        // field: output_type, type: Float64
        if (!is_numeric(self.output_type)) show_error($"{_where} :: self.output_type expected number", true);
        buffer_write(_buffer, buffer_f64, self.output_type);

        // field: instance_handle, type: Float64
        if (!is_numeric(self.instance_handle)) show_error($"{_where} :: self.instance_handle expected number", true);
        buffer_write(_buffer, buffer_f64, self.instance_handle);

        // field: output_handle, type: Float64
        if (!is_numeric(self.output_handle)) show_error($"{_where} :: self.output_handle expected number", true);
        buffer_write(_buffer, buffer_f64, self.output_handle);

    }
}

/**
 * @func __FmodStudioCommandInfo_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodStudioCommandInfo}
 * @ignore
 */
function __FmodStudioCommandInfo_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodStudioCommandInfo();
    with (_inst)
    {
        // field: command_name, type: String
        buffer_read(_buffer, buffer_u32);
        self.command_name = buffer_read(_buffer, buffer_string);

        // field: parent_command_index, type: Float64
        self.parent_command_index = buffer_read(_buffer, buffer_f64);

        // field: frame_time, type: Float64
        self.frame_time = buffer_read(_buffer, buffer_f64);

        // field: instance_type, type: Float64
        self.instance_type = buffer_read(_buffer, buffer_f64);

        // field: output_type, type: Float64
        self.output_type = buffer_read(_buffer, buffer_f64);

        // field: instance_handle, type: Float64
        self.instance_handle = buffer_read(_buffer, buffer_f64);

        // field: output_handle, type: Float64
        self.output_handle = buffer_read(_buffer, buffer_f64);

    }

    return _inst;
}

/**
 * @func __FmodStudioCurrentCommand_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodStudioCurrentCommand} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodStudioCurrentCommand_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: command_index, type: Float64
        if (!is_numeric(self.command_index)) show_error($"{_where} :: self.command_index expected number", true);
        buffer_write(_buffer, buffer_f64, self.command_index);

        // field: current_time, type: Float64
        if (!is_numeric(self.current_time)) show_error($"{_where} :: self.current_time expected number", true);
        buffer_write(_buffer, buffer_f64, self.current_time);

    }
}

/**
 * @func __FmodStudioCurrentCommand_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodStudioCurrentCommand}
 * @ignore
 */
function __FmodStudioCurrentCommand_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodStudioCurrentCommand();
    with (_inst)
    {
        // field: command_index, type: Float64
        self.command_index = buffer_read(_buffer, buffer_f64);

        // field: current_time, type: Float64
        self.current_time = buffer_read(_buffer, buffer_f64);

    }

    return _inst;
}

/**
 * @func __FmodStudioUserProperty_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodStudioUserProperty} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodStudioUserProperty_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: name, type: String
        if (!is_string(self.name)) show_error($"{_where} :: self.name expected string", true);
        buffer_write(_buffer, buffer_u32, string_byte_length(self.name));
        buffer_write(_buffer, buffer_string, self.name);

        // field: type, type: enum FmodStudioUserPropertyType

        if (!is_numeric(self.type)) show_error($"{_where} :: self.type expected number", true);
        buffer_write(_buffer, buffer_u64, self.type);

        // field: string_value, type: String
        if (!is_string(self.string_value)) show_error($"{_where} :: self.string_value expected string", true);
        buffer_write(_buffer, buffer_u32, string_byte_length(self.string_value));
        buffer_write(_buffer, buffer_string, self.string_value);

        // field: int_value, type: Float64
        if (!is_numeric(self.int_value)) show_error($"{_where} :: self.int_value expected number", true);
        buffer_write(_buffer, buffer_f64, self.int_value);

        // field: bool_value, type: Float64
        if (!is_numeric(self.bool_value)) show_error($"{_where} :: self.bool_value expected number", true);
        buffer_write(_buffer, buffer_f64, self.bool_value);

        // field: float_value, type: Float64
        if (!is_numeric(self.float_value)) show_error($"{_where} :: self.float_value expected number", true);
        buffer_write(_buffer, buffer_f64, self.float_value);

    }
}

/**
 * @func __FmodStudioUserProperty_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodStudioUserProperty}
 * @ignore
 */
function __FmodStudioUserProperty_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodStudioUserProperty();
    with (_inst)
    {
        // field: name, type: String
        buffer_read(_buffer, buffer_u32);
        self.name = buffer_read(_buffer, buffer_string);

        // field: type, type: enum FmodStudioUserPropertyType
        self.type = buffer_read(_buffer, buffer_u64);

        // field: string_value, type: String
        buffer_read(_buffer, buffer_u32);
        self.string_value = buffer_read(_buffer, buffer_string);

        // field: int_value, type: Float64
        self.int_value = buffer_read(_buffer, buffer_f64);

        // field: bool_value, type: Float64
        self.bool_value = buffer_read(_buffer, buffer_f64);

        // field: float_value, type: Float64
        self.float_value = buffer_read(_buffer, buffer_f64);

    }

    return _inst;
}

/**
 * @func __FmodStudioVec3_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodStudioVec3} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodStudioVec3_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: x, type: Float64
        if (!is_numeric(self.x)) show_error($"{_where} :: self.x expected number", true);
        buffer_write(_buffer, buffer_f64, self.x);

        // field: y, type: Float64
        if (!is_numeric(self.y)) show_error($"{_where} :: self.y expected number", true);
        buffer_write(_buffer, buffer_f64, self.y);

        // field: z, type: Float64
        if (!is_numeric(self.z)) show_error($"{_where} :: self.z expected number", true);
        buffer_write(_buffer, buffer_f64, self.z);

    }
}

/**
 * @func __FmodStudioVec3_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodStudioVec3}
 * @ignore
 */
function __FmodStudioVec3_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodStudioVec3();
    with (_inst)
    {
        // field: x, type: Float64
        self.x = buffer_read(_buffer, buffer_f64);

        // field: y, type: Float64
        self.y = buffer_read(_buffer, buffer_f64);

        // field: z, type: Float64
        self.z = buffer_read(_buffer, buffer_f64);

    }

    return _inst;
}

/**
 * @func __FmodStudioMinMaxDistance_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodStudioMinMaxDistance} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodStudioMinMaxDistance_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: min_distance, type: Float64
        if (!is_numeric(self.min_distance)) show_error($"{_where} :: self.min_distance expected number", true);
        buffer_write(_buffer, buffer_f64, self.min_distance);

        // field: max_distance, type: Float64
        if (!is_numeric(self.max_distance)) show_error($"{_where} :: self.max_distance expected number", true);
        buffer_write(_buffer, buffer_f64, self.max_distance);

    }
}

/**
 * @func __FmodStudioMinMaxDistance_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodStudioMinMaxDistance}
 * @ignore
 */
function __FmodStudioMinMaxDistance_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodStudioMinMaxDistance();
    with (_inst)
    {
        // field: min_distance, type: Float64
        self.min_distance = buffer_read(_buffer, buffer_f64);

        // field: max_distance, type: Float64
        self.max_distance = buffer_read(_buffer, buffer_f64);

    }

    return _inst;
}

/**
 * @func __FmodStudioCoreCPUUsage_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodStudioCoreCPUUsage} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodStudioCoreCPUUsage_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: dsp, type: Float64
        if (!is_numeric(self.dsp)) show_error($"{_where} :: self.dsp expected number", true);
        buffer_write(_buffer, buffer_f64, self.dsp);

        // field: stream, type: Float64
        if (!is_numeric(self.stream)) show_error($"{_where} :: self.stream expected number", true);
        buffer_write(_buffer, buffer_f64, self.stream);

        // field: geometry, type: Float64
        if (!is_numeric(self.geometry)) show_error($"{_where} :: self.geometry expected number", true);
        buffer_write(_buffer, buffer_f64, self.geometry);

        // field: update, type: Float64
        if (!is_numeric(self.update)) show_error($"{_where} :: self.update expected number", true);
        buffer_write(_buffer, buffer_f64, self.update);

        // field: convolution1, type: Float64
        if (!is_numeric(self.convolution1)) show_error($"{_where} :: self.convolution1 expected number", true);
        buffer_write(_buffer, buffer_f64, self.convolution1);

        // field: convolution2, type: Float64
        if (!is_numeric(self.convolution2)) show_error($"{_where} :: self.convolution2 expected number", true);
        buffer_write(_buffer, buffer_f64, self.convolution2);

    }
}

/**
 * @func __FmodStudioCoreCPUUsage_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodStudioCoreCPUUsage}
 * @ignore
 */
function __FmodStudioCoreCPUUsage_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodStudioCoreCPUUsage();
    with (_inst)
    {
        // field: dsp, type: Float64
        self.dsp = buffer_read(_buffer, buffer_f64);

        // field: stream, type: Float64
        self.stream = buffer_read(_buffer, buffer_f64);

        // field: geometry, type: Float64
        self.geometry = buffer_read(_buffer, buffer_f64);

        // field: update, type: Float64
        self.update = buffer_read(_buffer, buffer_f64);

        // field: convolution1, type: Float64
        self.convolution1 = buffer_read(_buffer, buffer_f64);

        // field: convolution2, type: Float64
        self.convolution2 = buffer_read(_buffer, buffer_f64);

    }

    return _inst;
}

/**
 * @func __FmodStudioCreateSoundExInfo_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodStudioCreateSoundExInfo} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodStudioCreateSoundExInfo_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: length, type: Float64
        if (!is_numeric(self.length)) show_error($"{_where} :: self.length expected number", true);
        buffer_write(_buffer, buffer_f64, self.length);

        // field: file_offset, type: Float64
        if (!is_numeric(self.file_offset)) show_error($"{_where} :: self.file_offset expected number", true);
        buffer_write(_buffer, buffer_f64, self.file_offset);

        // field: num_channels, type: Float64
        if (!is_numeric(self.num_channels)) show_error($"{_where} :: self.num_channels expected number", true);
        buffer_write(_buffer, buffer_f64, self.num_channels);

        // field: default_frequency, type: Float64
        if (!is_numeric(self.default_frequency)) show_error($"{_where} :: self.default_frequency expected number", true);
        buffer_write(_buffer, buffer_f64, self.default_frequency);

        // field: format, type: enum FmodStudioSoundFormat

        if (!is_numeric(self.format)) show_error($"{_where} :: self.format expected number", true);
        buffer_write(_buffer, buffer_u64, self.format);

        // field: decode_buffer_size, type: Float64
        if (!is_numeric(self.decode_buffer_size)) show_error($"{_where} :: self.decode_buffer_size expected number", true);
        buffer_write(_buffer, buffer_f64, self.decode_buffer_size);

        // field: initial_subsound, type: Float64
        if (!is_numeric(self.initial_subsound)) show_error($"{_where} :: self.initial_subsound expected number", true);
        buffer_write(_buffer, buffer_f64, self.initial_subsound);

        // field: num_subsounds, type: Float64
        if (!is_numeric(self.num_subsounds)) show_error($"{_where} :: self.num_subsounds expected number", true);
        buffer_write(_buffer, buffer_f64, self.num_subsounds);

        // field: inclusion_list_num, type: Float64
        if (!is_numeric(self.inclusion_list_num)) show_error($"{_where} :: self.inclusion_list_num expected number", true);
        buffer_write(_buffer, buffer_f64, self.inclusion_list_num);

        // field: dls_name, type: String
        if (!is_string(self.dls_name)) show_error($"{_where} :: self.dls_name expected string", true);
        buffer_write(_buffer, buffer_u32, string_byte_length(self.dls_name));
        buffer_write(_buffer, buffer_string, self.dls_name);

        // field: encryption_key, type: String
        if (!is_string(self.encryption_key)) show_error($"{_where} :: self.encryption_key expected string", true);
        buffer_write(_buffer, buffer_u32, string_byte_length(self.encryption_key));
        buffer_write(_buffer, buffer_string, self.encryption_key);

        // field: max_polyphony, type: Float64
        if (!is_numeric(self.max_polyphony)) show_error($"{_where} :: self.max_polyphony expected number", true);
        buffer_write(_buffer, buffer_f64, self.max_polyphony);

        // field: suggested_sound_type, type: Float64
        if (!is_numeric(self.suggested_sound_type)) show_error($"{_where} :: self.suggested_sound_type expected number", true);
        buffer_write(_buffer, buffer_f64, self.suggested_sound_type);

        // field: file_buffer_size, type: Float64
        if (!is_numeric(self.file_buffer_size)) show_error($"{_where} :: self.file_buffer_size expected number", true);
        buffer_write(_buffer, buffer_f64, self.file_buffer_size);

        // field: channel_order, type: Float64
        if (!is_numeric(self.channel_order)) show_error($"{_where} :: self.channel_order expected number", true);
        buffer_write(_buffer, buffer_f64, self.channel_order);

        // field: initial_sound_group, type: UInt64
        if (!is_numeric(self.initial_sound_group)) show_error($"{_where} :: self.initial_sound_group expected number", true);
        buffer_write(_buffer, buffer_u64, self.initial_sound_group);

        // field: initial_seek_position, type: Float64
        if (!is_numeric(self.initial_seek_position)) show_error($"{_where} :: self.initial_seek_position expected number", true);
        buffer_write(_buffer, buffer_f64, self.initial_seek_position);

        // field: initial_seek_pos_type, type: Float64
        if (!is_numeric(self.initial_seek_pos_type)) show_error($"{_where} :: self.initial_seek_pos_type expected number", true);
        buffer_write(_buffer, buffer_f64, self.initial_seek_pos_type);

        // field: ignore_set_filesystem, type: Float64
        if (!is_numeric(self.ignore_set_filesystem)) show_error($"{_where} :: self.ignore_set_filesystem expected number", true);
        buffer_write(_buffer, buffer_f64, self.ignore_set_filesystem);

        // field: audio_queue_policy, type: Float64
        if (!is_numeric(self.audio_queue_policy)) show_error($"{_where} :: self.audio_queue_policy expected number", true);
        buffer_write(_buffer, buffer_f64, self.audio_queue_policy);

        // field: min_midi_granularity, type: Float64
        if (!is_numeric(self.min_midi_granularity)) show_error($"{_where} :: self.min_midi_granularity expected number", true);
        buffer_write(_buffer, buffer_f64, self.min_midi_granularity);

        // field: non_block_thread_id, type: Float64
        if (!is_numeric(self.non_block_thread_id)) show_error($"{_where} :: self.non_block_thread_id expected number", true);
        buffer_write(_buffer, buffer_f64, self.non_block_thread_id);

    }
}

/**
 * @func __FmodStudioCreateSoundExInfo_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodStudioCreateSoundExInfo}
 * @ignore
 */
function __FmodStudioCreateSoundExInfo_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodStudioCreateSoundExInfo();
    with (_inst)
    {
        // field: length, type: Float64
        self.length = buffer_read(_buffer, buffer_f64);

        // field: file_offset, type: Float64
        self.file_offset = buffer_read(_buffer, buffer_f64);

        // field: num_channels, type: Float64
        self.num_channels = buffer_read(_buffer, buffer_f64);

        // field: default_frequency, type: Float64
        self.default_frequency = buffer_read(_buffer, buffer_f64);

        // field: format, type: enum FmodStudioSoundFormat
        self.format = buffer_read(_buffer, buffer_u64);

        // field: decode_buffer_size, type: Float64
        self.decode_buffer_size = buffer_read(_buffer, buffer_f64);

        // field: initial_subsound, type: Float64
        self.initial_subsound = buffer_read(_buffer, buffer_f64);

        // field: num_subsounds, type: Float64
        self.num_subsounds = buffer_read(_buffer, buffer_f64);

        // field: inclusion_list_num, type: Float64
        self.inclusion_list_num = buffer_read(_buffer, buffer_f64);

        // field: dls_name, type: String
        buffer_read(_buffer, buffer_u32);
        self.dls_name = buffer_read(_buffer, buffer_string);

        // field: encryption_key, type: String
        buffer_read(_buffer, buffer_u32);
        self.encryption_key = buffer_read(_buffer, buffer_string);

        // field: max_polyphony, type: Float64
        self.max_polyphony = buffer_read(_buffer, buffer_f64);

        // field: suggested_sound_type, type: Float64
        self.suggested_sound_type = buffer_read(_buffer, buffer_f64);

        // field: file_buffer_size, type: Float64
        self.file_buffer_size = buffer_read(_buffer, buffer_f64);

        // field: channel_order, type: Float64
        self.channel_order = buffer_read(_buffer, buffer_f64);

        // field: initial_sound_group, type: UInt64
        self.initial_sound_group = buffer_read(_buffer, buffer_u64);

        // field: initial_seek_position, type: Float64
        self.initial_seek_position = buffer_read(_buffer, buffer_f64);

        // field: initial_seek_pos_type, type: Float64
        self.initial_seek_pos_type = buffer_read(_buffer, buffer_f64);

        // field: ignore_set_filesystem, type: Float64
        self.ignore_set_filesystem = buffer_read(_buffer, buffer_f64);

        // field: audio_queue_policy, type: Float64
        self.audio_queue_policy = buffer_read(_buffer, buffer_f64);

        // field: min_midi_granularity, type: Float64
        self.min_midi_granularity = buffer_read(_buffer, buffer_f64);

        // field: non_block_thread_id, type: Float64
        self.non_block_thread_id = buffer_read(_buffer, buffer_f64);

    }

    return _inst;
}

/**
 * @func __FmodStudioBufferInfo_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodStudioBufferInfo} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodStudioBufferInfo_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: current_usage, type: Float64
        if (!is_numeric(self.current_usage)) show_error($"{_where} :: self.current_usage expected number", true);
        buffer_write(_buffer, buffer_f64, self.current_usage);

        // field: peak_usage, type: Float64
        if (!is_numeric(self.peak_usage)) show_error($"{_where} :: self.peak_usage expected number", true);
        buffer_write(_buffer, buffer_f64, self.peak_usage);

        // field: capacity, type: Float64
        if (!is_numeric(self.capacity)) show_error($"{_where} :: self.capacity expected number", true);
        buffer_write(_buffer, buffer_f64, self.capacity);

        // field: stall_count, type: Float64
        if (!is_numeric(self.stall_count)) show_error($"{_where} :: self.stall_count expected number", true);
        buffer_write(_buffer, buffer_f64, self.stall_count);

        // field: stall_time, type: Float64
        if (!is_numeric(self.stall_time)) show_error($"{_where} :: self.stall_time expected number", true);
        buffer_write(_buffer, buffer_f64, self.stall_time);

    }
}

/**
 * @func __FmodStudioBufferInfo_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodStudioBufferInfo}
 * @ignore
 */
function __FmodStudioBufferInfo_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodStudioBufferInfo();
    with (_inst)
    {
        // field: current_usage, type: Float64
        self.current_usage = buffer_read(_buffer, buffer_f64);

        // field: peak_usage, type: Float64
        self.peak_usage = buffer_read(_buffer, buffer_f64);

        // field: capacity, type: Float64
        self.capacity = buffer_read(_buffer, buffer_f64);

        // field: stall_count, type: Float64
        self.stall_count = buffer_read(_buffer, buffer_f64);

        // field: stall_time, type: Float64
        self.stall_time = buffer_read(_buffer, buffer_f64);

    }

    return _inst;
}

/**
 * @func __FmodStudioAdvancedSettings_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodStudioAdvancedSettings} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodStudioAdvancedSettings_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: command_queue_size, type: Float64
        if (!is_numeric(self.command_queue_size)) show_error($"{_where} :: self.command_queue_size expected number", true);
        buffer_write(_buffer, buffer_f64, self.command_queue_size);

        // field: handle_initial_size, type: Float64
        if (!is_numeric(self.handle_initial_size)) show_error($"{_where} :: self.handle_initial_size expected number", true);
        buffer_write(_buffer, buffer_f64, self.handle_initial_size);

        // field: studio_update_period, type: Float64
        if (!is_numeric(self.studio_update_period)) show_error($"{_where} :: self.studio_update_period expected number", true);
        buffer_write(_buffer, buffer_f64, self.studio_update_period);

        // field: idle_sampledata_pool_size, type: Float64
        if (!is_numeric(self.idle_sampledata_pool_size)) show_error($"{_where} :: self.idle_sampledata_pool_size expected number", true);
        buffer_write(_buffer, buffer_f64, self.idle_sampledata_pool_size);

        // field: streaming_schedule_delay, type: Float64
        if (!is_numeric(self.streaming_schedule_delay)) show_error($"{_where} :: self.streaming_schedule_delay expected number", true);
        buffer_write(_buffer, buffer_f64, self.streaming_schedule_delay);

        // field: encryption_key, type: String
        if (!is_string(self.encryption_key)) show_error($"{_where} :: self.encryption_key expected string", true);
        buffer_write(_buffer, buffer_u32, string_byte_length(self.encryption_key));
        buffer_write(_buffer, buffer_string, self.encryption_key);

    }
}

/**
 * @func __FmodStudioAdvancedSettings_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodStudioAdvancedSettings}
 * @ignore
 */
function __FmodStudioAdvancedSettings_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodStudioAdvancedSettings();
    with (_inst)
    {
        // field: command_queue_size, type: Float64
        self.command_queue_size = buffer_read(_buffer, buffer_f64);

        // field: handle_initial_size, type: Float64
        self.handle_initial_size = buffer_read(_buffer, buffer_f64);

        // field: studio_update_period, type: Float64
        self.studio_update_period = buffer_read(_buffer, buffer_f64);

        // field: idle_sampledata_pool_size, type: Float64
        self.idle_sampledata_pool_size = buffer_read(_buffer, buffer_f64);

        // field: streaming_schedule_delay, type: Float64
        self.streaming_schedule_delay = buffer_read(_buffer, buffer_f64);

        // field: encryption_key, type: String
        buffer_read(_buffer, buffer_u32);
        self.encryption_key = buffer_read(_buffer, buffer_string);

    }

    return _inst;
}

/**
 * @func __FmodStudioParameterValue_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodStudioParameterValue} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodStudioParameterValue_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: value, type: Float64
        if (!is_numeric(self.value)) show_error($"{_where} :: self.value expected number", true);
        buffer_write(_buffer, buffer_f64, self.value);

        // field: final_value, type: Float64
        if (!is_numeric(self.final_value)) show_error($"{_where} :: self.final_value expected number", true);
        buffer_write(_buffer, buffer_f64, self.final_value);

    }
}

/**
 * @func __FmodStudioParameterValue_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodStudioParameterValue}
 * @ignore
 */
function __FmodStudioParameterValue_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodStudioParameterValue();
    with (_inst)
    {
        // field: value, type: Float64
        self.value = buffer_read(_buffer, buffer_f64);

        // field: final_value, type: Float64
        self.final_value = buffer_read(_buffer, buffer_f64);

    }

    return _inst;
}

/**
 * @func __FmodStudioListener3DAttributes_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodStudioListener3DAttributes} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodStudioListener3DAttributes_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: position, type: struct FmodStudioVec3
        if (self.position.__uid != 1370123338) show_error($"{_where} :: self.position expected FmodStudioVec3", true);
        __FmodStudioVec3_encode(self.position, _buffer, buffer_tell(_buffer), _where);

        // field: velocity, type: struct FmodStudioVec3
        if (self.velocity.__uid != 1370123338) show_error($"{_where} :: self.velocity expected FmodStudioVec3", true);
        __FmodStudioVec3_encode(self.velocity, _buffer, buffer_tell(_buffer), _where);

        // field: forward, type: struct FmodStudioVec3
        if (self.forward.__uid != 1370123338) show_error($"{_where} :: self.forward expected FmodStudioVec3", true);
        __FmodStudioVec3_encode(self.forward, _buffer, buffer_tell(_buffer), _where);

        // field: up, type: struct FmodStudioVec3
        if (self.up.__uid != 1370123338) show_error($"{_where} :: self.up expected FmodStudioVec3", true);
        __FmodStudioVec3_encode(self.up, _buffer, buffer_tell(_buffer), _where);

    }
}

/**
 * @func __FmodStudioListener3DAttributes_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodStudioListener3DAttributes}
 * @ignore
 */
function __FmodStudioListener3DAttributes_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodStudioListener3DAttributes();
    with (_inst)
    {
        // field: position, type: struct FmodStudioVec3
        self.position = __FmodStudioVec3_decode(_buffer, buffer_tell(_buffer));

        // field: velocity, type: struct FmodStudioVec3
        self.velocity = __FmodStudioVec3_decode(_buffer, buffer_tell(_buffer));

        // field: forward, type: struct FmodStudioVec3
        self.forward = __FmodStudioVec3_decode(_buffer, buffer_tell(_buffer));

        // field: up, type: struct FmodStudioVec3
        self.up = __FmodStudioVec3_decode(_buffer, buffer_tell(_buffer));

    }

    return _inst;
}

/**
 * @func __FmodStudioChannelControl3DAttributes_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodStudioChannelControl3DAttributes} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodStudioChannelControl3DAttributes_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: position, type: struct FmodStudioVec3
        if (self.position.__uid != 1370123338) show_error($"{_where} :: self.position expected FmodStudioVec3", true);
        __FmodStudioVec3_encode(self.position, _buffer, buffer_tell(_buffer), _where);

        // field: velocity, type: struct FmodStudioVec3
        if (self.velocity.__uid != 1370123338) show_error($"{_where} :: self.velocity expected FmodStudioVec3", true);
        __FmodStudioVec3_encode(self.velocity, _buffer, buffer_tell(_buffer), _where);

    }
}

/**
 * @func __FmodStudioChannelControl3DAttributes_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodStudioChannelControl3DAttributes}
 * @ignore
 */
function __FmodStudioChannelControl3DAttributes_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodStudioChannelControl3DAttributes();
    with (_inst)
    {
        // field: position, type: struct FmodStudioVec3
        self.position = __FmodStudioVec3_decode(_buffer, buffer_tell(_buffer));

        // field: velocity, type: struct FmodStudioVec3
        self.velocity = __FmodStudioVec3_decode(_buffer, buffer_tell(_buffer));

    }

    return _inst;
}

/**
 * @func __FmodStudioSystemCPUUsage_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodStudioSystemCPUUsage} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodStudioSystemCPUUsage_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: studio_update, type: Float64
        if (!is_numeric(self.studio_update)) show_error($"{_where} :: self.studio_update expected number", true);
        buffer_write(_buffer, buffer_f64, self.studio_update);

        // field: core, type: struct FmodStudioCoreCPUUsage
        if (self.core.__uid != 490958111) show_error($"{_where} :: self.core expected FmodStudioCoreCPUUsage", true);
        __FmodStudioCoreCPUUsage_encode(self.core, _buffer, buffer_tell(_buffer), _where);

    }
}

/**
 * @func __FmodStudioSystemCPUUsage_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodStudioSystemCPUUsage}
 * @ignore
 */
function __FmodStudioSystemCPUUsage_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodStudioSystemCPUUsage();
    with (_inst)
    {
        // field: studio_update, type: Float64
        self.studio_update = buffer_read(_buffer, buffer_f64);

        // field: core, type: struct FmodStudioCoreCPUUsage
        self.core = __FmodStudioCoreCPUUsage_decode(_buffer, buffer_tell(_buffer));

    }

    return _inst;
}

/**
 * @func __FmodStudioSoundInfo_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodStudioSoundInfo} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodStudioSoundInfo_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: ext_info, type: struct FmodStudioCreateSoundExInfo
        if (self.ext_info.__uid != 210514585) show_error($"{_where} :: self.ext_info expected FmodStudioCreateSoundExInfo", true);
        __FmodStudioCreateSoundExInfo_encode(self.ext_info, _buffer, buffer_tell(_buffer), _where);

        // field: name_or_data, type: String
        if (!is_string(self.name_or_data)) show_error($"{_where} :: self.name_or_data expected string", true);
        buffer_write(_buffer, buffer_u32, string_byte_length(self.name_or_data));
        buffer_write(_buffer, buffer_string, self.name_or_data);

        // field: mode, type: enum FmodStudioMode

        if (!is_numeric(self.mode)) show_error($"{_where} :: self.mode expected number", true);
        buffer_write(_buffer, buffer_u64, self.mode);

        // field: sub_sound_index, type: Float64
        if (!is_numeric(self.sub_sound_index)) show_error($"{_where} :: self.sub_sound_index expected number", true);
        buffer_write(_buffer, buffer_f64, self.sub_sound_index);

    }
}

/**
 * @func __FmodStudioSoundInfo_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodStudioSoundInfo}
 * @ignore
 */
function __FmodStudioSoundInfo_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodStudioSoundInfo();
    with (_inst)
    {
        // field: ext_info, type: struct FmodStudioCreateSoundExInfo
        self.ext_info = __FmodStudioCreateSoundExInfo_decode(_buffer, buffer_tell(_buffer));

        // field: name_or_data, type: String
        buffer_read(_buffer, buffer_u32);
        self.name_or_data = buffer_read(_buffer, buffer_string);

        // field: mode, type: enum FmodStudioMode
        self.mode = buffer_read(_buffer, buffer_u64);

        // field: sub_sound_index, type: Float64
        self.sub_sound_index = buffer_read(_buffer, buffer_f64);

    }

    return _inst;
}

/**
 * @func __FmodStudioBufferUsage_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodStudioBufferUsage} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodStudioBufferUsage_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: command_queue, type: struct FmodStudioBufferInfo
        if (self.command_queue.__uid != 418154839) show_error($"{_where} :: self.command_queue expected FmodStudioBufferInfo", true);
        __FmodStudioBufferInfo_encode(self.command_queue, _buffer, buffer_tell(_buffer), _where);

        // field: handle, type: struct FmodStudioBufferInfo
        if (self.handle.__uid != 418154839) show_error($"{_where} :: self.handle expected FmodStudioBufferInfo", true);
        __FmodStudioBufferInfo_encode(self.handle, _buffer, buffer_tell(_buffer), _where);

    }
}

/**
 * @func __FmodStudioBufferUsage_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodStudioBufferUsage}
 * @ignore
 */
function __FmodStudioBufferUsage_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodStudioBufferUsage();
    with (_inst)
    {
        // field: command_queue, type: struct FmodStudioBufferInfo
        self.command_queue = __FmodStudioBufferInfo_decode(_buffer, buffer_tell(_buffer));

        // field: handle, type: struct FmodStudioBufferInfo
        self.handle = __FmodStudioBufferInfo_decode(_buffer, buffer_tell(_buffer));

    }

    return _inst;
}

/**
 * @func __FmodStudioListenerAttributes_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodStudioListenerAttributes} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodStudioListenerAttributes_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: attributes, type: struct FmodStudioListener3DAttributes
        if (self.attributes.__uid != 2515217851) show_error($"{_where} :: self.attributes expected FmodStudioListener3DAttributes", true);
        __FmodStudioListener3DAttributes_encode(self.attributes, _buffer, buffer_tell(_buffer), _where);

        // field: attenuation, type: struct FmodStudioVec3
        if (self.attenuation.__uid != 1370123338) show_error($"{_where} :: self.attenuation expected FmodStudioVec3", true);
        __FmodStudioVec3_encode(self.attenuation, _buffer, buffer_tell(_buffer), _where);

    }
}

/**
 * @func __FmodStudioListenerAttributes_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodStudioListenerAttributes}
 * @ignore
 */
function __FmodStudioListenerAttributes_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodStudioListenerAttributes();
    with (_inst)
    {
        // field: attributes, type: struct FmodStudioListener3DAttributes
        self.attributes = __FmodStudioListener3DAttributes_decode(_buffer, buffer_tell(_buffer));

        // field: attenuation, type: struct FmodStudioVec3
        self.attenuation = __FmodStudioVec3_decode(_buffer, buffer_tell(_buffer));

    }

    return _inst;
}

// #####################################################################
// # Functions
// #####################################################################

/**
 * @returns {Real}
 */
function fmod_studio_system_create()
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_system_create(buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = buffer_read(__ret_buffer__, buffer_u64);
    return __result__;
}

// Skipping function fmod_studio_system_init (no wrapper is required)


// Skipping function fmod_studio_system_release (no wrapper is required)


// Skipping function fmod_studio_system_update (no wrapper is required)


// Skipping function fmod_studio_system_flush_commands (no wrapper is required)


// Skipping function fmod_studio_system_flush_sample_loading (no wrapper is required)


/**
 * @param {String} _filename
 * @param {Real} _flags
 * @returns {Real}
 */
function fmod_studio_system_load_bank_file(_filename, _flags)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_system_load_bank_file(_filename, _flags, buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    if (buffer_read(__ret_buffer__, buffer_bool))
    {
        __result__ = buffer_read(__ret_buffer__, buffer_u64);
    }
    else
    {
        __result__ = undefined;
    }
    return __result__;
}

/**
 * @param {String} _data
 * @param {Real} _flags
 * @returns {Real}
 */
function fmod_studio_system_load_bank_memory(_data, _flags)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_system_load_bank_memory(_data, _flags, buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    if (buffer_read(__ret_buffer__, buffer_bool))
    {
        __result__ = buffer_read(__ret_buffer__, buffer_u64);
    }
    else
    {
        __result__ = undefined;
    }
    return __result__;
}

// Skipping function fmod_studio_system_unload_all (no wrapper is required)


// Skipping function fmod_studio_system_get_bank_count (no wrapper is required)


/**
 * @param {Real} _index
 * @returns {Real}
 */
function fmod_studio_system_get_bank_at(_index)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_system_get_bank_at(_index, buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    if (buffer_read(__ret_buffer__, buffer_bool))
    {
        __result__ = buffer_read(__ret_buffer__, buffer_u64);
    }
    else
    {
        __result__ = undefined;
    }
    return __result__;
}

/**
 * @param {String} _path
 * @returns {Real}
 */
function fmod_studio_system_get_bank(_path)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_system_get_bank(_path, buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    if (buffer_read(__ret_buffer__, buffer_bool))
    {
        __result__ = buffer_read(__ret_buffer__, buffer_u64);
    }
    else
    {
        __result__ = undefined;
    }
    return __result__;
}

/**
 * @param {String} _str_guid
 * @returns {Real}
 */
function fmod_studio_system_get_bank_by_id(_str_guid)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_system_get_bank_by_id(_str_guid, buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    if (buffer_read(__ret_buffer__, buffer_bool))
    {
        __result__ = buffer_read(__ret_buffer__, buffer_u64);
    }
    else
    {
        __result__ = undefined;
    }
    return __result__;
}

/**
 * @param {String} _path
 * @returns {Real}
 */
function fmod_studio_system_get_event(_path)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_system_get_event(_path, buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    if (buffer_read(__ret_buffer__, buffer_bool))
    {
        __result__ = buffer_read(__ret_buffer__, buffer_u64);
    }
    else
    {
        __result__ = undefined;
    }
    return __result__;
}

/**
 * @param {String} _path
 * @returns {Real}
 */
function fmod_studio_system_create_event_instance(_path)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_system_create_event_instance(_path, buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    if (buffer_read(__ret_buffer__, buffer_bool))
    {
        __result__ = buffer_read(__ret_buffer__, buffer_u64);
    }
    else
    {
        __result__ = undefined;
    }
    return __result__;
}

/**
 * @param {String} _path
 * @returns {Real}
 */
function fmod_studio_system_get_bus(_path)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_system_get_bus(_path, buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    if (buffer_read(__ret_buffer__, buffer_bool))
    {
        __result__ = buffer_read(__ret_buffer__, buffer_u64);
    }
    else
    {
        __result__ = undefined;
    }
    return __result__;
}

/**
 * @returns {Real}
 */
function fmod_studio_system_get_master_bus()
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_system_get_master_bus(buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    if (buffer_read(__ret_buffer__, buffer_bool))
    {
        __result__ = buffer_read(__ret_buffer__, buffer_u64);
    }
    else
    {
        __result__ = undefined;
    }
    return __result__;
}

/**
 * @param {String} _str_guid
 * @returns {Real}
 */
function fmod_studio_system_get_bus_by_id(_str_guid)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_system_get_bus_by_id(_str_guid, buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    if (buffer_read(__ret_buffer__, buffer_bool))
    {
        __result__ = buffer_read(__ret_buffer__, buffer_u64);
    }
    else
    {
        __result__ = undefined;
    }
    return __result__;
}

/**
 * @param {String} _path
 * @returns {Real}
 */
function fmod_studio_system_get_vca(_path)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_system_get_vca(_path, buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    if (buffer_read(__ret_buffer__, buffer_bool))
    {
        __result__ = buffer_read(__ret_buffer__, buffer_u64);
    }
    else
    {
        __result__ = undefined;
    }
    return __result__;
}

/**
 * @param {String} _str_guid
 * @returns {Real}
 */
function fmod_studio_system_get_vca_by_id(_str_guid)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_system_get_vca_by_id(_str_guid, buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    if (buffer_read(__ret_buffer__, buffer_bool))
    {
        __result__ = buffer_read(__ret_buffer__, buffer_u64);
    }
    else
    {
        __result__ = undefined;
    }
    return __result__;
}

// Skipping function fmod_studio_system_set_listener_attributes (no wrapper is required)


// Skipping function fmod_studio_system_set_listener_weight (no wrapper is required)


// Skipping function fmod_studio_system_get_num_listeners (no wrapper is required)


/**
 * @param {Real} _listener_index
 * @returns {Struct.FmodStudioListenerAttributes}
 */
function fmod_studio_system_get_listener_attributes(_listener_index)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_system_get_listener_attributes(_listener_index, buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodStudioListenerAttributes_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

// Skipping function fmod_studio_system_get_listener_weight (no wrapper is required)


// Skipping function fmod_studio_system_set_parameter_by_name (no wrapper is required)


// Skipping function fmod_studio_system_get_parameter_by_name (no wrapper is required)


/**
 * @returns {Real}
 */
function fmod_studio_system_get_core_system()
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_system_get_core_system(buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = buffer_read(__ret_buffer__, buffer_u64);
    return __result__;
}

/**
 * @returns {Real}
 */
function fmod_studio_system_get_core_system_ptr()
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_system_get_core_system_ptr(buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = buffer_read(__ret_buffer__, buffer_u64);
    return __result__;
}

/**
 * @returns {Enum.FmodStudioResult}
 */
function fmod_studio_last_result()
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_last_result(buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = buffer_read(__ret_buffer__, buffer_u64);
    return __result__;
}

// Skipping function fmod_studio_system_set_num_listeners (no wrapper is required)


// Skipping function fmod_studio_system_lookup_id (no wrapper is required)


// Skipping function fmod_studio_system_lookup_path (no wrapper is required)


/**
 * @param {String} _id
 * @returns {Real}
 */
function fmod_studio_system_get_event_by_id(_id)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_system_get_event_by_id(_id, buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = buffer_read(__ret_buffer__, buffer_u64);
    return __result__;
}

// Skipping function fmod_studio_system_is_valid (no wrapper is required)


/**
 * @param {String} _filename
 * @param {Enum.FmodStudioCommandCaptureFlags} _flags
 * @returns {Real}
 */
function fmod_studio_system_start_command_capture(_filename, _flags)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _filename, type: String
    if (!is_string(_filename)) show_error($"{_GMFUNCTION_} :: _filename expected string", true);
    buffer_write(__args_buffer__, buffer_u32, string_byte_length(_filename));
    buffer_write(__args_buffer__, buffer_string, _filename);

    // param: _flags, type: enum FmodStudioCommandCaptureFlags

    if (!is_numeric(_flags)) show_error($"{_GMFUNCTION_} :: _flags expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _flags);

    var __return_value__ = __fmod_studio_system_start_command_capture(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

// Skipping function fmod_studio_system_stop_command_capture (no wrapper is required)


/**
 * @param {String} _filename
 * @param {Enum.FmodStudioCommandReplayFlags} _flags
 * @returns {Real}
 */
function fmod_studio_system_load_command_replay(_filename, _flags)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _filename, type: String
    if (!is_string(_filename)) show_error($"{_GMFUNCTION_} :: _filename expected string", true);
    buffer_write(__args_buffer__, buffer_u32, string_byte_length(_filename));
    buffer_write(__args_buffer__, buffer_string, _filename);

    // param: _flags, type: enum FmodStudioCommandReplayFlags

    if (!is_numeric(_flags)) show_error($"{_GMFUNCTION_} :: _flags expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _flags);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_system_load_command_replay(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = buffer_read(__ret_buffer__, buffer_u64);
    return __result__;
}

/**
 * @param {String} _key
 * @returns {Struct.FmodStudioSoundInfo}
 */
function fmod_studio_system_get_sound_info(_key)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_system_get_sound_info(_key, buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodStudioSoundInfo_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @param {Real} _id_data1
 * @param {Real} _id_data2
 * @returns {Struct.FmodStudioParameterValue}
 */
function fmod_studio_system_get_parameter_by_id(_id_data1, _id_data2)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_system_get_parameter_by_id(_id_data1, _id_data2, buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodStudioParameterValue_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

// Skipping function fmod_studio_system_set_parameter_by_id (no wrapper is required)


/**
 * @param {Real} _id_data1
 * @param {Real} _id_data2
 * @returns {Struct.FmodStudioParameterDescription}
 */
function fmod_studio_system_get_parameter_description_by_id(_id_data1, _id_data2)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_system_get_parameter_description_by_id(_id_data1, _id_data2, buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodStudioParameterDescription_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @param {String} _name
 * @returns {Struct.FmodStudioParameterDescription}
 */
function fmod_studio_system_get_parameter_description_by_name(_name)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_system_get_parameter_description_by_name(_name, buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodStudioParameterDescription_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

// Skipping function fmod_studio_system_get_parameter_description_count (no wrapper is required)


/**
 * @param {Real} _index
 * @returns {Struct.FmodStudioParameterDescription}
 */
function fmod_studio_system_get_parameter_description_at(_index)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_system_get_parameter_description_at(_index, buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodStudioParameterDescription_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

// Skipping function fmod_studio_system_get_parameter_label_by_id (no wrapper is required)


// Skipping function fmod_studio_system_get_parameter_label_by_name (no wrapper is required)


// Skipping function fmod_studio_system_set_parameter_by_id_with_label (no wrapper is required)


// Skipping function fmod_studio_system_set_parameter_by_name_with_label (no wrapper is required)


/**
 * @returns {Struct.FmodStudioSystemCPUUsage}
 */
function fmod_studio_system_get_cpu_usage()
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_system_get_cpu_usage(buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodStudioSystemCPUUsage_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @returns {Struct.FmodStudioBufferUsage}
 */
function fmod_studio_system_get_buffer_usage()
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_system_get_buffer_usage(buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodStudioBufferUsage_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

// Skipping function fmod_studio_system_reset_buffer_usage (no wrapper is required)


/**
 * @returns {Struct.FmodStudioMemoryUsage}
 */
function fmod_studio_system_get_memory_usage()
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_system_get_memory_usage(buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodStudioMemoryUsage_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @returns {Struct.FmodStudioAdvancedSettings}
 */
function fmod_studio_system_get_advanced_settings()
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_system_get_advanced_settings(buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodStudioAdvancedSettings_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @param {Struct.FmodStudioAdvancedSettings} _settings
 * @returns {Real}
 */
function fmod_studio_system_set_advanced_settings(_settings)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _settings, type: struct FmodStudioAdvancedSettings
    if (_settings.__uid != 3186888222) show_error($"{_GMFUNCTION_} :: _settings expected FmodStudioAdvancedSettings", true);
    __FmodStudioAdvancedSettings_encode(_settings, __args_buffer__, buffer_tell(__args_buffer__), _GMFUNCTION_);

    var __return_value__ = __fmod_studio_system_set_advanced_settings(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

// Skipping function fmod_studio_system_set_callback (no wrapper is required)


// Skipping function fmod_studio_system_get_user_data (no wrapper is required)


// Skipping function fmod_studio_system_set_user_data (no wrapper is required)


/**
 * @param {Real} _bank_ref
 * @returns {Real}
 */
function fmod_studio_bank_unload(_bank_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _bank_ref, type: UInt64
    if (!is_numeric(_bank_ref)) show_error($"{_GMFUNCTION_} :: _bank_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _bank_ref);

    var __return_value__ = __fmod_studio_bank_unload(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _bank_ref
 * @returns {Real}
 */
function fmod_studio_bank_get_loading_state(_bank_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _bank_ref, type: UInt64
    if (!is_numeric(_bank_ref)) show_error($"{_GMFUNCTION_} :: _bank_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _bank_ref);

    var __return_value__ = __fmod_studio_bank_get_loading_state(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _bank_ref
 * @returns {Real}
 */
function fmod_studio_bank_get_sample_loading_state(_bank_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _bank_ref, type: UInt64
    if (!is_numeric(_bank_ref)) show_error($"{_GMFUNCTION_} :: _bank_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _bank_ref);

    var __return_value__ = __fmod_studio_bank_get_sample_loading_state(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _bank_ref
 * @returns {String}
 */
function fmod_studio_bank_get_path(_bank_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _bank_ref, type: UInt64
    if (!is_numeric(_bank_ref)) show_error($"{_GMFUNCTION_} :: _bank_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _bank_ref);

    var __return_value__ = __fmod_studio_bank_get_path(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _bank_ref
 * @returns {Real}
 */
function fmod_studio_bank_get_parent_studio_system(_bank_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _bank_ref, type: UInt64
    if (!is_numeric(_bank_ref)) show_error($"{_GMFUNCTION_} :: _bank_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _bank_ref);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_bank_get_parent_studio_system(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    if (buffer_read(__ret_buffer__, buffer_bool))
    {
        __result__ = buffer_read(__ret_buffer__, buffer_u64);
    }
    else
    {
        __result__ = undefined;
    }
    return __result__;
}

/**
 * @param {Real} _bank_ref
 * @returns {Real}
 */
function fmod_studio_bank_get_event_count(_bank_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _bank_ref, type: UInt64
    if (!is_numeric(_bank_ref)) show_error($"{_GMFUNCTION_} :: _bank_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _bank_ref);

    var __return_value__ = __fmod_studio_bank_get_event_count(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _bank_ref
 * @param {Real} _index
 * @returns {Real}
 */
function fmod_studio_bank_get_event_at(_bank_ref, _index)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _bank_ref, type: UInt64
    if (!is_numeric(_bank_ref)) show_error($"{_GMFUNCTION_} :: _bank_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _bank_ref);

    // param: _index, type: Float64
    if (!is_numeric(_index)) show_error($"{_GMFUNCTION_} :: _index expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _index);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_bank_get_event_at(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    if (buffer_read(__ret_buffer__, buffer_bool))
    {
        __result__ = buffer_read(__ret_buffer__, buffer_u64);
    }
    else
    {
        __result__ = undefined;
    }
    return __result__;
}

/**
 * @param {Real} _bank_ref
 * @returns {Real}
 */
function fmod_studio_bank_get_bus_count(_bank_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _bank_ref, type: UInt64
    if (!is_numeric(_bank_ref)) show_error($"{_GMFUNCTION_} :: _bank_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _bank_ref);

    var __return_value__ = __fmod_studio_bank_get_bus_count(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _bank_ref
 * @param {Real} _index
 * @returns {Real}
 */
function fmod_studio_bank_get_bus_at(_bank_ref, _index)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _bank_ref, type: UInt64
    if (!is_numeric(_bank_ref)) show_error($"{_GMFUNCTION_} :: _bank_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _bank_ref);

    // param: _index, type: Float64
    if (!is_numeric(_index)) show_error($"{_GMFUNCTION_} :: _index expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _index);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_bank_get_bus_at(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    if (buffer_read(__ret_buffer__, buffer_bool))
    {
        __result__ = buffer_read(__ret_buffer__, buffer_u64);
    }
    else
    {
        __result__ = undefined;
    }
    return __result__;
}

/**
 * @param {Real} _bank_ref
 * @returns {Real}
 */
function fmod_studio_bank_get_vca_count(_bank_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _bank_ref, type: UInt64
    if (!is_numeric(_bank_ref)) show_error($"{_GMFUNCTION_} :: _bank_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _bank_ref);

    var __return_value__ = __fmod_studio_bank_get_vca_count(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _bank_ref
 * @param {Real} _index
 * @returns {Real}
 */
function fmod_studio_bank_get_vca_at(_bank_ref, _index)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _bank_ref, type: UInt64
    if (!is_numeric(_bank_ref)) show_error($"{_GMFUNCTION_} :: _bank_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _bank_ref);

    // param: _index, type: Float64
    if (!is_numeric(_index)) show_error($"{_GMFUNCTION_} :: _index expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _index);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_bank_get_vca_at(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    if (buffer_read(__ret_buffer__, buffer_bool))
    {
        __result__ = buffer_read(__ret_buffer__, buffer_u64);
    }
    else
    {
        __result__ = undefined;
    }
    return __result__;
}

/**
 * @param {Real} _bank_ref
 * @returns {Real}
 */
function fmod_studio_bank_get_string_count(_bank_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _bank_ref, type: UInt64
    if (!is_numeric(_bank_ref)) show_error($"{_GMFUNCTION_} :: _bank_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _bank_ref);

    var __return_value__ = __fmod_studio_bank_get_string_count(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _bank_ref
 * @returns {String}
 */
function fmod_studio_bank_get_id(_bank_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _bank_ref, type: UInt64
    if (!is_numeric(_bank_ref)) show_error($"{_GMFUNCTION_} :: _bank_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _bank_ref);

    var __return_value__ = __fmod_studio_bank_get_id(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _bank_ref
 * @returns {Real}
 */
function fmod_studio_bank_is_valid(_bank_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _bank_ref, type: UInt64
    if (!is_numeric(_bank_ref)) show_error($"{_GMFUNCTION_} :: _bank_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _bank_ref);

    var __return_value__ = __fmod_studio_bank_is_valid(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _bank_ref
 * @param {Real} _string_index
 * @returns {Struct.FmodStudioStringInfo}
 */
function fmod_studio_bank_get_string_info(_bank_ref, _string_index)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _bank_ref, type: UInt64
    if (!is_numeric(_bank_ref)) show_error($"{_GMFUNCTION_} :: _bank_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _bank_ref);

    // param: _string_index, type: Float64
    if (!is_numeric(_string_index)) show_error($"{_GMFUNCTION_} :: _string_index expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _string_index);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_bank_get_string_info(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodStudioStringInfo_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @param {Real} _bank_ref
 * @returns {Real}
 */
function fmod_studio_bank_load_sample_data(_bank_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _bank_ref, type: UInt64
    if (!is_numeric(_bank_ref)) show_error($"{_GMFUNCTION_} :: _bank_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _bank_ref);

    var __return_value__ = __fmod_studio_bank_load_sample_data(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _bank_ref
 * @returns {Real}
 */
function fmod_studio_bank_unload_sample_data(_bank_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _bank_ref, type: UInt64
    if (!is_numeric(_bank_ref)) show_error($"{_GMFUNCTION_} :: _bank_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _bank_ref);

    var __return_value__ = __fmod_studio_bank_unload_sample_data(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _bank_ref
 * @returns {Real}
 */
function fmod_studio_bank_get_user_data(_bank_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _bank_ref, type: UInt64
    if (!is_numeric(_bank_ref)) show_error($"{_GMFUNCTION_} :: _bank_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _bank_ref);

    var __return_value__ = __fmod_studio_bank_get_user_data(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _bank_ref
 * @param {Real} _user_data
 * @returns {Real}
 */
function fmod_studio_bank_set_user_data(_bank_ref, _user_data)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _bank_ref, type: UInt64
    if (!is_numeric(_bank_ref)) show_error($"{_GMFUNCTION_} :: _bank_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _bank_ref);

    // param: _user_data, type: Float64
    if (!is_numeric(_user_data)) show_error($"{_GMFUNCTION_} :: _user_data expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _user_data);

    var __return_value__ = __fmod_studio_bank_set_user_data(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _event_desc_ref
 * @returns {String}
 */
function fmod_studio_event_description_get_path(_event_desc_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _event_desc_ref, type: UInt64
    if (!is_numeric(_event_desc_ref)) show_error($"{_GMFUNCTION_} :: _event_desc_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _event_desc_ref);

    var __return_value__ = __fmod_studio_event_description_get_path(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _event_desc_ref
 * @returns {Real}
 */
function fmod_studio_event_description_create_instance(_event_desc_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _event_desc_ref, type: UInt64
    if (!is_numeric(_event_desc_ref)) show_error($"{_GMFUNCTION_} :: _event_desc_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _event_desc_ref);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_event_description_create_instance(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    if (buffer_read(__ret_buffer__, buffer_bool))
    {
        __result__ = buffer_read(__ret_buffer__, buffer_u64);
    }
    else
    {
        __result__ = undefined;
    }
    return __result__;
}

/**
 * @param {Real} _event_desc_ref
 * @returns {Real}
 */
function fmod_studio_event_description_get_instance_count(_event_desc_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _event_desc_ref, type: UInt64
    if (!is_numeric(_event_desc_ref)) show_error($"{_GMFUNCTION_} :: _event_desc_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _event_desc_ref);

    var __return_value__ = __fmod_studio_event_description_get_instance_count(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _event_desc_ref
 * @param {Real} _index
 * @returns {Real}
 */
function fmod_studio_event_description_get_instance_at(_event_desc_ref, _index)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _event_desc_ref, type: UInt64
    if (!is_numeric(_event_desc_ref)) show_error($"{_GMFUNCTION_} :: _event_desc_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _event_desc_ref);

    // param: _index, type: Float64
    if (!is_numeric(_index)) show_error($"{_GMFUNCTION_} :: _index expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _index);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_event_description_get_instance_at(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    if (buffer_read(__ret_buffer__, buffer_bool))
    {
        __result__ = buffer_read(__ret_buffer__, buffer_u64);
    }
    else
    {
        __result__ = undefined;
    }
    return __result__;
}

/**
 * @param {Real} _event_desc_ref
 * @returns {Real}
 */
function fmod_studio_event_description_is_snapshot(_event_desc_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _event_desc_ref, type: UInt64
    if (!is_numeric(_event_desc_ref)) show_error($"{_GMFUNCTION_} :: _event_desc_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _event_desc_ref);

    var __return_value__ = __fmod_studio_event_description_is_snapshot(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _event_desc_ref
 * @returns {Real}
 */
function fmod_studio_event_description_is_one_shot(_event_desc_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _event_desc_ref, type: UInt64
    if (!is_numeric(_event_desc_ref)) show_error($"{_GMFUNCTION_} :: _event_desc_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _event_desc_ref);

    var __return_value__ = __fmod_studio_event_description_is_one_shot(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _event_desc_ref
 * @returns {Real}
 */
function fmod_studio_event_description_has_sustain_point(_event_desc_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _event_desc_ref, type: UInt64
    if (!is_numeric(_event_desc_ref)) show_error($"{_GMFUNCTION_} :: _event_desc_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _event_desc_ref);

    var __return_value__ = __fmod_studio_event_description_has_sustain_point(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _event_desc_ref
 * @returns {Real}
 */
function fmod_studio_event_description_get_length(_event_desc_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _event_desc_ref, type: UInt64
    if (!is_numeric(_event_desc_ref)) show_error($"{_GMFUNCTION_} :: _event_desc_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _event_desc_ref);

    var __return_value__ = __fmod_studio_event_description_get_length(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _event_desc_ref
 * @returns {Real}
 */
function fmod_studio_event_description_get_parameter_count(_event_desc_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _event_desc_ref, type: UInt64
    if (!is_numeric(_event_desc_ref)) show_error($"{_GMFUNCTION_} :: _event_desc_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _event_desc_ref);

    var __return_value__ = __fmod_studio_event_description_get_parameter_count(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _event_desc_ref
 * @returns {Real}
 */
function fmod_studio_event_description_release_all_instances(_event_desc_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _event_desc_ref, type: UInt64
    if (!is_numeric(_event_desc_ref)) show_error($"{_GMFUNCTION_} :: _event_desc_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _event_desc_ref);

    var __return_value__ = __fmod_studio_event_description_release_all_instances(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _event_desc_ref
 * @param {String} _name
 * @returns {Struct.FmodStudioParameterDescription}
 */
function fmod_studio_event_description_get_parameter_description_by_name(_event_desc_ref, _name)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _event_desc_ref, type: UInt64
    if (!is_numeric(_event_desc_ref)) show_error($"{_GMFUNCTION_} :: _event_desc_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _event_desc_ref);

    // param: _name, type: String
    if (!is_string(_name)) show_error($"{_GMFUNCTION_} :: _name expected string", true);
    buffer_write(__args_buffer__, buffer_u32, string_byte_length(_name));
    buffer_write(__args_buffer__, buffer_string, _name);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_event_description_get_parameter_description_by_name(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodStudioParameterDescription_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @param {Real} _event_desc_ref
 * @returns {Real}
 */
function fmod_studio_event_description_load_sample_data(_event_desc_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _event_desc_ref, type: UInt64
    if (!is_numeric(_event_desc_ref)) show_error($"{_GMFUNCTION_} :: _event_desc_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _event_desc_ref);

    var __return_value__ = __fmod_studio_event_description_load_sample_data(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _event_desc_ref
 * @returns {Real}
 */
function fmod_studio_event_description_is_valid(_event_desc_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _event_desc_ref, type: UInt64
    if (!is_numeric(_event_desc_ref)) show_error($"{_GMFUNCTION_} :: _event_desc_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _event_desc_ref);

    var __return_value__ = __fmod_studio_event_description_is_valid(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _event_desc_ref
 * @returns {Real}
 */
function fmod_studio_event_description_is_3d(_event_desc_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _event_desc_ref, type: UInt64
    if (!is_numeric(_event_desc_ref)) show_error($"{_GMFUNCTION_} :: _event_desc_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _event_desc_ref);

    var __return_value__ = __fmod_studio_event_description_is_3d(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _event_desc_ref
 * @returns {Real}
 */
function fmod_studio_event_description_is_stream(_event_desc_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _event_desc_ref, type: UInt64
    if (!is_numeric(_event_desc_ref)) show_error($"{_GMFUNCTION_} :: _event_desc_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _event_desc_ref);

    var __return_value__ = __fmod_studio_event_description_is_stream(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _event_desc_ref
 * @returns {Real}
 */
function fmod_studio_event_description_is_doppler_enabled(_event_desc_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _event_desc_ref, type: UInt64
    if (!is_numeric(_event_desc_ref)) show_error($"{_GMFUNCTION_} :: _event_desc_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _event_desc_ref);

    var __return_value__ = __fmod_studio_event_description_is_doppler_enabled(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _event_desc_ref
 * @returns {String}
 */
function fmod_studio_event_description_get_id(_event_desc_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _event_desc_ref, type: UInt64
    if (!is_numeric(_event_desc_ref)) show_error($"{_GMFUNCTION_} :: _event_desc_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _event_desc_ref);

    var __return_value__ = __fmod_studio_event_description_get_id(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _event_desc_ref
 * @returns {Struct.FmodStudioMinMaxDistance}
 */
function fmod_studio_event_description_get_min_max_distance(_event_desc_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _event_desc_ref, type: UInt64
    if (!is_numeric(_event_desc_ref)) show_error($"{_GMFUNCTION_} :: _event_desc_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _event_desc_ref);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_event_description_get_min_max_distance(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodStudioMinMaxDistance_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @param {Real} _event_desc_ref
 * @returns {Real}
 */
function fmod_studio_event_description_get_sound_size(_event_desc_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _event_desc_ref, type: UInt64
    if (!is_numeric(_event_desc_ref)) show_error($"{_GMFUNCTION_} :: _event_desc_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _event_desc_ref);

    var __return_value__ = __fmod_studio_event_description_get_sound_size(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _event_desc_ref
 * @returns {Real}
 */
function fmod_studio_event_description_get_sample_loading_state(_event_desc_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _event_desc_ref, type: UInt64
    if (!is_numeric(_event_desc_ref)) show_error($"{_GMFUNCTION_} :: _event_desc_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _event_desc_ref);

    var __return_value__ = __fmod_studio_event_description_get_sample_loading_state(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _event_desc_ref
 * @returns {Real}
 */
function fmod_studio_event_description_unload_sample_data(_event_desc_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _event_desc_ref, type: UInt64
    if (!is_numeric(_event_desc_ref)) show_error($"{_GMFUNCTION_} :: _event_desc_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _event_desc_ref);

    var __return_value__ = __fmod_studio_event_description_unload_sample_data(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _event_desc_ref
 * @param {Real} _callback_mask
 * @returns {Real}
 */
function fmod_studio_event_description_set_callback(_event_desc_ref, _callback_mask)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _event_desc_ref, type: UInt64
    if (!is_numeric(_event_desc_ref)) show_error($"{_GMFUNCTION_} :: _event_desc_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _event_desc_ref);

    // param: _callback_mask, type: Float64
    if (!is_numeric(_callback_mask)) show_error($"{_GMFUNCTION_} :: _callback_mask expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _callback_mask);

    var __return_value__ = __fmod_studio_event_description_set_callback(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _event_desc_ref
 * @returns {Real}
 */
function fmod_studio_event_description_get_user_data(_event_desc_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _event_desc_ref, type: UInt64
    if (!is_numeric(_event_desc_ref)) show_error($"{_GMFUNCTION_} :: _event_desc_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _event_desc_ref);

    var __return_value__ = __fmod_studio_event_description_get_user_data(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _event_desc_ref
 * @param {Real} _user_data
 * @returns {Real}
 */
function fmod_studio_event_description_set_user_data(_event_desc_ref, _user_data)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _event_desc_ref, type: UInt64
    if (!is_numeric(_event_desc_ref)) show_error($"{_GMFUNCTION_} :: _event_desc_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _event_desc_ref);

    // param: _user_data, type: Float64
    if (!is_numeric(_user_data)) show_error($"{_GMFUNCTION_} :: _user_data expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _user_data);

    var __return_value__ = __fmod_studio_event_description_set_user_data(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _event_desc_ref
 * @param {String} _name
 * @returns {Struct.FmodStudioUserProperty}
 */
function fmod_studio_event_description_get_user_property(_event_desc_ref, _name)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _event_desc_ref, type: UInt64
    if (!is_numeric(_event_desc_ref)) show_error($"{_GMFUNCTION_} :: _event_desc_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _event_desc_ref);

    // param: _name, type: String
    if (!is_string(_name)) show_error($"{_GMFUNCTION_} :: _name expected string", true);
    buffer_write(__args_buffer__, buffer_u32, string_byte_length(_name));
    buffer_write(__args_buffer__, buffer_string, _name);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_event_description_get_user_property(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodStudioUserProperty_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @param {Real} _event_desc_ref
 * @param {Real} _index
 * @returns {Struct.FmodStudioUserProperty}
 */
function fmod_studio_event_description_get_user_property_at(_event_desc_ref, _index)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _event_desc_ref, type: UInt64
    if (!is_numeric(_event_desc_ref)) show_error($"{_GMFUNCTION_} :: _event_desc_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _event_desc_ref);

    // param: _index, type: Float64
    if (!is_numeric(_index)) show_error($"{_GMFUNCTION_} :: _index expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _index);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_event_description_get_user_property_at(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodStudioUserProperty_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @param {Real} _event_desc_ref
 * @returns {Real}
 */
function fmod_studio_event_description_get_user_property_count(_event_desc_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _event_desc_ref, type: UInt64
    if (!is_numeric(_event_desc_ref)) show_error($"{_GMFUNCTION_} :: _event_desc_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _event_desc_ref);

    var __return_value__ = __fmod_studio_event_description_get_user_property_count(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _event_desc_ref
 * @param {Real} _id_data1
 * @param {Real} _id_data2
 * @returns {Struct.FmodStudioParameterDescription}
 */
function fmod_studio_event_description_get_parameter_description_by_id(_event_desc_ref, _id_data1, _id_data2)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _event_desc_ref, type: UInt64
    if (!is_numeric(_event_desc_ref)) show_error($"{_GMFUNCTION_} :: _event_desc_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _event_desc_ref);

    // param: _id_data1, type: Float64
    if (!is_numeric(_id_data1)) show_error($"{_GMFUNCTION_} :: _id_data1 expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _id_data1);

    // param: _id_data2, type: Float64
    if (!is_numeric(_id_data2)) show_error($"{_GMFUNCTION_} :: _id_data2 expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _id_data2);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_event_description_get_parameter_description_by_id(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodStudioParameterDescription_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @param {Real} _event_desc_ref
 * @param {Real} _index
 * @returns {Struct.FmodStudioParameterDescription}
 */
function fmod_studio_event_description_get_parameter_description_at(_event_desc_ref, _index)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _event_desc_ref, type: UInt64
    if (!is_numeric(_event_desc_ref)) show_error($"{_GMFUNCTION_} :: _event_desc_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _event_desc_ref);

    // param: _index, type: Float64
    if (!is_numeric(_index)) show_error($"{_GMFUNCTION_} :: _index expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _index);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_event_description_get_parameter_description_at(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodStudioParameterDescription_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @param {Real} _event_desc_ref
 * @param {Real} _id_data1
 * @param {Real} _id_data2
 * @param {Real} _label_index
 * @returns {String}
 */
function fmod_studio_event_description_get_parameter_label_by_id(_event_desc_ref, _id_data1, _id_data2, _label_index)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _event_desc_ref, type: UInt64
    if (!is_numeric(_event_desc_ref)) show_error($"{_GMFUNCTION_} :: _event_desc_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _event_desc_ref);

    // param: _id_data1, type: Float64
    if (!is_numeric(_id_data1)) show_error($"{_GMFUNCTION_} :: _id_data1 expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _id_data1);

    // param: _id_data2, type: Float64
    if (!is_numeric(_id_data2)) show_error($"{_GMFUNCTION_} :: _id_data2 expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _id_data2);

    // param: _label_index, type: Float64
    if (!is_numeric(_label_index)) show_error($"{_GMFUNCTION_} :: _label_index expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _label_index);

    var __return_value__ = __fmod_studio_event_description_get_parameter_label_by_id(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _event_desc_ref
 * @param {Real} _index
 * @param {Real} _label_index
 * @returns {String}
 */
function fmod_studio_event_description_get_parameter_label_at(_event_desc_ref, _index, _label_index)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _event_desc_ref, type: UInt64
    if (!is_numeric(_event_desc_ref)) show_error($"{_GMFUNCTION_} :: _event_desc_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _event_desc_ref);

    // param: _index, type: Float64
    if (!is_numeric(_index)) show_error($"{_GMFUNCTION_} :: _index expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _index);

    // param: _label_index, type: Float64
    if (!is_numeric(_label_index)) show_error($"{_GMFUNCTION_} :: _label_index expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _label_index);

    var __return_value__ = __fmod_studio_event_description_get_parameter_label_at(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _event_desc_ref
 * @param {String} _name
 * @param {Real} _label_index
 * @returns {String}
 */
function fmod_studio_event_description_get_parameter_label_by_name(_event_desc_ref, _name, _label_index)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _event_desc_ref, type: UInt64
    if (!is_numeric(_event_desc_ref)) show_error($"{_GMFUNCTION_} :: _event_desc_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _event_desc_ref);

    // param: _name, type: String
    if (!is_string(_name)) show_error($"{_GMFUNCTION_} :: _name expected string", true);
    buffer_write(__args_buffer__, buffer_u32, string_byte_length(_name));
    buffer_write(__args_buffer__, buffer_string, _name);

    // param: _label_index, type: Float64
    if (!is_numeric(_label_index)) show_error($"{_GMFUNCTION_} :: _label_index expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _label_index);

    var __return_value__ = __fmod_studio_event_description_get_parameter_label_by_name(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _instance_ref
 * @returns {Real}
 */
function fmod_studio_event_instance_start(_instance_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _instance_ref, type: UInt64
    if (!is_numeric(_instance_ref)) show_error($"{_GMFUNCTION_} :: _instance_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _instance_ref);

    var __return_value__ = __fmod_studio_event_instance_start(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _instance_ref
 * @param {Real} _stop_mode
 * @returns {Real}
 */
function fmod_studio_event_instance_stop(_instance_ref, _stop_mode)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _instance_ref, type: UInt64
    if (!is_numeric(_instance_ref)) show_error($"{_GMFUNCTION_} :: _instance_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _instance_ref);

    // param: _stop_mode, type: Float64
    if (!is_numeric(_stop_mode)) show_error($"{_GMFUNCTION_} :: _stop_mode expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _stop_mode);

    var __return_value__ = __fmod_studio_event_instance_stop(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _instance_ref
 * @returns {Real}
 */
function fmod_studio_event_instance_get_playback_state(_instance_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _instance_ref, type: UInt64
    if (!is_numeric(_instance_ref)) show_error($"{_GMFUNCTION_} :: _instance_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _instance_ref);

    var __return_value__ = __fmod_studio_event_instance_get_playback_state(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _instance_ref
 * @returns {Real}
 */
function fmod_studio_event_instance_get_paused(_instance_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _instance_ref, type: UInt64
    if (!is_numeric(_instance_ref)) show_error($"{_GMFUNCTION_} :: _instance_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _instance_ref);

    var __return_value__ = __fmod_studio_event_instance_get_paused(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _instance_ref
 * @param {Real} _paused
 * @returns {Real}
 */
function fmod_studio_event_instance_set_paused(_instance_ref, _paused)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _instance_ref, type: UInt64
    if (!is_numeric(_instance_ref)) show_error($"{_GMFUNCTION_} :: _instance_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _instance_ref);

    // param: _paused, type: Float64
    if (!is_numeric(_paused)) show_error($"{_GMFUNCTION_} :: _paused expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _paused);

    var __return_value__ = __fmod_studio_event_instance_set_paused(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _instance_ref
 * @returns {Real}
 */
function fmod_studio_event_instance_get_timeline_position(_instance_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _instance_ref, type: UInt64
    if (!is_numeric(_instance_ref)) show_error($"{_GMFUNCTION_} :: _instance_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _instance_ref);

    var __return_value__ = __fmod_studio_event_instance_get_timeline_position(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _instance_ref
 * @param {Real} _position
 * @returns {Real}
 */
function fmod_studio_event_instance_set_timeline_position(_instance_ref, _position)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _instance_ref, type: UInt64
    if (!is_numeric(_instance_ref)) show_error($"{_GMFUNCTION_} :: _instance_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _instance_ref);

    // param: _position, type: Float64
    if (!is_numeric(_position)) show_error($"{_GMFUNCTION_} :: _position expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _position);

    var __return_value__ = __fmod_studio_event_instance_set_timeline_position(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _instance_ref
 * @returns {Real}
 */
function fmod_studio_event_instance_keyoff(_instance_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _instance_ref, type: UInt64
    if (!is_numeric(_instance_ref)) show_error($"{_GMFUNCTION_} :: _instance_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _instance_ref);

    var __return_value__ = __fmod_studio_event_instance_keyoff(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _instance_ref
 * @returns {Real}
 */
function fmod_studio_event_instance_get_volume(_instance_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _instance_ref, type: UInt64
    if (!is_numeric(_instance_ref)) show_error($"{_GMFUNCTION_} :: _instance_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _instance_ref);

    var __return_value__ = __fmod_studio_event_instance_get_volume(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _instance_ref
 * @param {Real} _volume
 * @returns {Real}
 */
function fmod_studio_event_instance_set_volume(_instance_ref, _volume)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _instance_ref, type: UInt64
    if (!is_numeric(_instance_ref)) show_error($"{_GMFUNCTION_} :: _instance_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _instance_ref);

    // param: _volume, type: Float64
    if (!is_numeric(_volume)) show_error($"{_GMFUNCTION_} :: _volume expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _volume);

    var __return_value__ = __fmod_studio_event_instance_set_volume(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _instance_ref
 * @returns {Real}
 */
function fmod_studio_event_instance_get_pitch(_instance_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _instance_ref, type: UInt64
    if (!is_numeric(_instance_ref)) show_error($"{_GMFUNCTION_} :: _instance_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _instance_ref);

    var __return_value__ = __fmod_studio_event_instance_get_pitch(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _instance_ref
 * @param {Real} _pitch
 * @returns {Real}
 */
function fmod_studio_event_instance_set_pitch(_instance_ref, _pitch)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _instance_ref, type: UInt64
    if (!is_numeric(_instance_ref)) show_error($"{_GMFUNCTION_} :: _instance_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _instance_ref);

    // param: _pitch, type: Float64
    if (!is_numeric(_pitch)) show_error($"{_GMFUNCTION_} :: _pitch expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _pitch);

    var __return_value__ = __fmod_studio_event_instance_set_pitch(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _instance_ref
 * @param {String} _name
 * @param {Real} _value
 * @returns {Real}
 */
function fmod_studio_event_instance_set_parameter_by_name(_instance_ref, _name, _value)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _instance_ref, type: UInt64
    if (!is_numeric(_instance_ref)) show_error($"{_GMFUNCTION_} :: _instance_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _instance_ref);

    // param: _name, type: String
    if (!is_string(_name)) show_error($"{_GMFUNCTION_} :: _name expected string", true);
    buffer_write(__args_buffer__, buffer_u32, string_byte_length(_name));
    buffer_write(__args_buffer__, buffer_string, _name);

    // param: _value, type: Float64
    if (!is_numeric(_value)) show_error($"{_GMFUNCTION_} :: _value expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _value);

    var __return_value__ = __fmod_studio_event_instance_set_parameter_by_name(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _instance_ref
 * @param {String} _name
 * @returns {Real}
 */
function fmod_studio_event_instance_get_parameter_by_name(_instance_ref, _name)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _instance_ref, type: UInt64
    if (!is_numeric(_instance_ref)) show_error($"{_GMFUNCTION_} :: _instance_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _instance_ref);

    // param: _name, type: String
    if (!is_string(_name)) show_error($"{_GMFUNCTION_} :: _name expected string", true);
    buffer_write(__args_buffer__, buffer_u32, string_byte_length(_name));
    buffer_write(__args_buffer__, buffer_string, _name);

    var __return_value__ = __fmod_studio_event_instance_get_parameter_by_name(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _instance_ref
 * @returns {Real}
 */
function fmod_studio_event_instance_get_parameter_count(_instance_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _instance_ref, type: UInt64
    if (!is_numeric(_instance_ref)) show_error($"{_GMFUNCTION_} :: _instance_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _instance_ref);

    var __return_value__ = __fmod_studio_event_instance_get_parameter_count(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _instance_ref
 * @param {Real} _id_data1
 * @param {Real} _id_data2
 * @returns {Real}
 */
function fmod_studio_event_instance_get_parameter_by_id(_instance_ref, _id_data1, _id_data2)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _instance_ref, type: UInt64
    if (!is_numeric(_instance_ref)) show_error($"{_GMFUNCTION_} :: _instance_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _instance_ref);

    // param: _id_data1, type: Float64
    if (!is_numeric(_id_data1)) show_error($"{_GMFUNCTION_} :: _id_data1 expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _id_data1);

    // param: _id_data2, type: Float64
    if (!is_numeric(_id_data2)) show_error($"{_GMFUNCTION_} :: _id_data2 expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _id_data2);

    var __return_value__ = __fmod_studio_event_instance_get_parameter_by_id(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _instance_ref
 * @param {Real} _id_data1
 * @param {Real} _id_data2
 * @param {Real} _value
 * @returns {Real}
 */
function fmod_studio_event_instance_set_parameter_by_id(_instance_ref, _id_data1, _id_data2, _value)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _instance_ref, type: UInt64
    if (!is_numeric(_instance_ref)) show_error($"{_GMFUNCTION_} :: _instance_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _instance_ref);

    // param: _id_data1, type: Float64
    if (!is_numeric(_id_data1)) show_error($"{_GMFUNCTION_} :: _id_data1 expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _id_data1);

    // param: _id_data2, type: Float64
    if (!is_numeric(_id_data2)) show_error($"{_GMFUNCTION_} :: _id_data2 expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _id_data2);

    // param: _value, type: Float64
    if (!is_numeric(_value)) show_error($"{_GMFUNCTION_} :: _value expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _value);

    var __return_value__ = __fmod_studio_event_instance_set_parameter_by_id(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _instance_ref
 * @param {Function} _callback
 * @param {Enum.FmodStudioEventCallbackType} _mask
 * @returns {Real}
 */
function fmod_studio_event_instance_set_callback(_instance_ref, _callback, _mask)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __dispatcher__ = __GMFMODStudio_get_dispatcher();

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _instance_ref, type: UInt64
    if (!is_numeric(_instance_ref)) show_error($"{_GMFUNCTION_} :: _instance_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _instance_ref);

    // param: _callback, type: optional<Function>
    if (is_undefined(_callback))
    {
        buffer_write(__args_buffer__, buffer_bool, false);
    }
    else
    {
        buffer_write(__args_buffer__, buffer_bool, true);
        if (!is_callable(_callback)) show_error($"{_GMFUNCTION_} :: _callback expected callable type", true);
        var _callback_handle = __ext_core_function_register(_callback, __dispatcher__);
        buffer_write(__args_buffer__, buffer_u64, _callback_handle);
    }

    // param: _mask, type: enum FmodStudioEventCallbackType

    if (!is_numeric(_mask)) show_error($"{_GMFUNCTION_} :: _mask expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _mask);

    var __return_value__ = __fmod_studio_event_instance_set_callback(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _instance_ref
 * @param {Real} _id_data1
 * @param {Real} _id_data2
 * @param {String} _label
 * @param {Real} _ignore_seek_speed
 * @returns {Real}
 */
function fmod_studio_event_instance_set_parameter_by_id_with_label(_instance_ref, _id_data1, _id_data2, _label, _ignore_seek_speed)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _instance_ref, type: UInt64
    if (!is_numeric(_instance_ref)) show_error($"{_GMFUNCTION_} :: _instance_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _instance_ref);

    // param: _id_data1, type: Float64
    if (!is_numeric(_id_data1)) show_error($"{_GMFUNCTION_} :: _id_data1 expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _id_data1);

    // param: _id_data2, type: Float64
    if (!is_numeric(_id_data2)) show_error($"{_GMFUNCTION_} :: _id_data2 expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _id_data2);

    // param: _label, type: String
    if (!is_string(_label)) show_error($"{_GMFUNCTION_} :: _label expected string", true);
    buffer_write(__args_buffer__, buffer_u32, string_byte_length(_label));
    buffer_write(__args_buffer__, buffer_string, _label);

    // param: _ignore_seek_speed, type: Float64
    if (!is_numeric(_ignore_seek_speed)) show_error($"{_GMFUNCTION_} :: _ignore_seek_speed expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _ignore_seek_speed);

    var __return_value__ = __fmod_studio_event_instance_set_parameter_by_id_with_label(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _instance_ref
 * @param {String} _name
 * @param {String} _label
 * @param {Real} _ignore_seek_speed
 * @returns {Real}
 */
function fmod_studio_event_instance_set_parameter_by_name_with_label(_instance_ref, _name, _label, _ignore_seek_speed)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _instance_ref, type: UInt64
    if (!is_numeric(_instance_ref)) show_error($"{_GMFUNCTION_} :: _instance_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _instance_ref);

    // param: _name, type: String
    if (!is_string(_name)) show_error($"{_GMFUNCTION_} :: _name expected string", true);
    buffer_write(__args_buffer__, buffer_u32, string_byte_length(_name));
    buffer_write(__args_buffer__, buffer_string, _name);

    // param: _label, type: String
    if (!is_string(_label)) show_error($"{_GMFUNCTION_} :: _label expected string", true);
    buffer_write(__args_buffer__, buffer_u32, string_byte_length(_label));
    buffer_write(__args_buffer__, buffer_string, _label);

    // param: _ignore_seek_speed, type: Float64
    if (!is_numeric(_ignore_seek_speed)) show_error($"{_GMFUNCTION_} :: _ignore_seek_speed expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _ignore_seek_speed);

    var __return_value__ = __fmod_studio_event_instance_set_parameter_by_name_with_label(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _instance_ref
 * @param {Real} _x
 * @param {Real} _y
 * @param {Real} _z
 * @returns {Real}
 */
function fmod_studio_event_instance_set_3d_attributes(_instance_ref, _x, _y, _z)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _instance_ref, type: UInt64
    if (!is_numeric(_instance_ref)) show_error($"{_GMFUNCTION_} :: _instance_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _instance_ref);

    // param: _x, type: Float64
    if (!is_numeric(_x)) show_error($"{_GMFUNCTION_} :: _x expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _x);

    // param: _y, type: Float64
    if (!is_numeric(_y)) show_error($"{_GMFUNCTION_} :: _y expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _y);

    // param: _z, type: Float64
    if (!is_numeric(_z)) show_error($"{_GMFUNCTION_} :: _z expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _z);

    var __return_value__ = __fmod_studio_event_instance_set_3d_attributes(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _instance_ref
 * @returns {Struct.FmodStudioChannelControl3DAttributes}
 */
function fmod_studio_event_instance_get_3d_attributes(_instance_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _instance_ref, type: UInt64
    if (!is_numeric(_instance_ref)) show_error($"{_GMFUNCTION_} :: _instance_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _instance_ref);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_event_instance_get_3d_attributes(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodStudioChannelControl3DAttributes_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @param {Real} _instance_ref
 * @returns {Struct.FmodStudioMinMaxDistance}
 */
function fmod_studio_event_instance_get_min_max_distance(_instance_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _instance_ref, type: UInt64
    if (!is_numeric(_instance_ref)) show_error($"{_GMFUNCTION_} :: _instance_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _instance_ref);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_event_instance_get_min_max_distance(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodStudioMinMaxDistance_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @param {Real} _instance_ref
 * @returns {Real}
 */
function fmod_studio_event_instance_get_listener_mask(_instance_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _instance_ref, type: UInt64
    if (!is_numeric(_instance_ref)) show_error($"{_GMFUNCTION_} :: _instance_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _instance_ref);

    var __return_value__ = __fmod_studio_event_instance_get_listener_mask(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _instance_ref
 * @param {Real} _mask
 * @returns {Real}
 */
function fmod_studio_event_instance_set_listener_mask(_instance_ref, _mask)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _instance_ref, type: UInt64
    if (!is_numeric(_instance_ref)) show_error($"{_GMFUNCTION_} :: _instance_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _instance_ref);

    // param: _mask, type: Float64
    if (!is_numeric(_mask)) show_error($"{_GMFUNCTION_} :: _mask expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _mask);

    var __return_value__ = __fmod_studio_event_instance_set_listener_mask(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _instance_ref
 * @param {Real} _index
 * @returns {Real}
 */
function fmod_studio_event_instance_get_reverb_level(_instance_ref, _index)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _instance_ref, type: UInt64
    if (!is_numeric(_instance_ref)) show_error($"{_GMFUNCTION_} :: _instance_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _instance_ref);

    // param: _index, type: Float64
    if (!is_numeric(_index)) show_error($"{_GMFUNCTION_} :: _index expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _index);

    var __return_value__ = __fmod_studio_event_instance_get_reverb_level(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _instance_ref
 * @param {Real} _index
 * @param {Real} _level
 * @returns {Real}
 */
function fmod_studio_event_instance_set_reverb_level(_instance_ref, _index, _level)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _instance_ref, type: UInt64
    if (!is_numeric(_instance_ref)) show_error($"{_GMFUNCTION_} :: _instance_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _instance_ref);

    // param: _index, type: Float64
    if (!is_numeric(_index)) show_error($"{_GMFUNCTION_} :: _index expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _index);

    // param: _level, type: Float64
    if (!is_numeric(_level)) show_error($"{_GMFUNCTION_} :: _level expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _level);

    var __return_value__ = __fmod_studio_event_instance_set_reverb_level(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _instance_ref
 * @param {Enum.FmodStudioEventProperty} _property_type
 * @returns {Real}
 */
function fmod_studio_event_instance_get_property(_instance_ref, _property_type)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _instance_ref, type: UInt64
    if (!is_numeric(_instance_ref)) show_error($"{_GMFUNCTION_} :: _instance_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _instance_ref);

    // param: _property_type, type: enum FmodStudioEventProperty

    if (!is_numeric(_property_type)) show_error($"{_GMFUNCTION_} :: _property_type expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _property_type);

    var __return_value__ = __fmod_studio_event_instance_get_property(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _instance_ref
 * @param {Enum.FmodStudioEventProperty} _property_type
 * @param {Real} _value
 * @returns {Real}
 */
function fmod_studio_event_instance_set_property(_instance_ref, _property_type, _value)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _instance_ref, type: UInt64
    if (!is_numeric(_instance_ref)) show_error($"{_GMFUNCTION_} :: _instance_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _instance_ref);

    // param: _property_type, type: enum FmodStudioEventProperty

    if (!is_numeric(_property_type)) show_error($"{_GMFUNCTION_} :: _property_type expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _property_type);

    // param: _value, type: Float64
    if (!is_numeric(_value)) show_error($"{_GMFUNCTION_} :: _value expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _value);

    var __return_value__ = __fmod_studio_event_instance_set_property(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _instance_ref
 * @returns {Real}
 */
function fmod_studio_event_instance_get_user_data(_instance_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _instance_ref, type: UInt64
    if (!is_numeric(_instance_ref)) show_error($"{_GMFUNCTION_} :: _instance_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _instance_ref);

    var __return_value__ = __fmod_studio_event_instance_get_user_data(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _instance_ref
 * @param {Real} _user_data
 * @returns {Real}
 */
function fmod_studio_event_instance_set_user_data(_instance_ref, _user_data)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _instance_ref, type: UInt64
    if (!is_numeric(_instance_ref)) show_error($"{_GMFUNCTION_} :: _instance_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _instance_ref);

    // param: _user_data, type: Float64
    if (!is_numeric(_user_data)) show_error($"{_GMFUNCTION_} :: _user_data expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _user_data);

    var __return_value__ = __fmod_studio_event_instance_set_user_data(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _instance_ref
 * @returns {Real}
 */
function fmod_studio_event_instance_is_valid(_instance_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _instance_ref, type: UInt64
    if (!is_numeric(_instance_ref)) show_error($"{_GMFUNCTION_} :: _instance_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _instance_ref);

    var __return_value__ = __fmod_studio_event_instance_is_valid(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _instance_ref
 * @returns {Real}
 */
function fmod_studio_event_instance_is_virtual(_instance_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _instance_ref, type: UInt64
    if (!is_numeric(_instance_ref)) show_error($"{_GMFUNCTION_} :: _instance_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _instance_ref);

    var __return_value__ = __fmod_studio_event_instance_is_virtual(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _instance_ref
 * @returns {Real}
 */
function fmod_studio_event_instance_get_channel_group(_instance_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _instance_ref, type: UInt64
    if (!is_numeric(_instance_ref)) show_error($"{_GMFUNCTION_} :: _instance_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _instance_ref);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_event_instance_get_channel_group(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = buffer_read(__ret_buffer__, buffer_u64);
    return __result__;
}

/**
 * @param {Real} _instance_ref
 * @returns {Struct.FmodStudioCPUUsage}
 */
function fmod_studio_event_instance_get_cpu_usage(_instance_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _instance_ref, type: UInt64
    if (!is_numeric(_instance_ref)) show_error($"{_GMFUNCTION_} :: _instance_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _instance_ref);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_event_instance_get_cpu_usage(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodStudioCPUUsage_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @param {Real} _instance_ref
 * @returns {Struct.FmodStudioMemoryUsage}
 */
function fmod_studio_event_instance_get_memory_usage(_instance_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _instance_ref, type: UInt64
    if (!is_numeric(_instance_ref)) show_error($"{_GMFUNCTION_} :: _instance_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _instance_ref);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_event_instance_get_memory_usage(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodStudioMemoryUsage_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @param {Real} _instance_ref
 * @returns {Real}
 */
function fmod_studio_event_instance_get_description(_instance_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _instance_ref, type: UInt64
    if (!is_numeric(_instance_ref)) show_error($"{_GMFUNCTION_} :: _instance_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _instance_ref);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_event_instance_get_description(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    if (buffer_read(__ret_buffer__, buffer_bool))
    {
        __result__ = buffer_read(__ret_buffer__, buffer_u64);
    }
    else
    {
        __result__ = undefined;
    }
    return __result__;
}

/**
 * @param {Real} _instance_ref
 * @returns {Real}
 */
function fmod_studio_event_instance_release(_instance_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _instance_ref, type: UInt64
    if (!is_numeric(_instance_ref)) show_error($"{_GMFUNCTION_} :: _instance_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _instance_ref);

    var __return_value__ = __fmod_studio_event_instance_release(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _bus_ref
 * @returns {String}
 */
function fmod_studio_bus_get_path(_bus_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _bus_ref, type: UInt64
    if (!is_numeric(_bus_ref)) show_error($"{_GMFUNCTION_} :: _bus_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _bus_ref);

    var __return_value__ = __fmod_studio_bus_get_path(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _bus_ref
 * @returns {Real}
 */
function fmod_studio_bus_get_volume(_bus_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _bus_ref, type: UInt64
    if (!is_numeric(_bus_ref)) show_error($"{_GMFUNCTION_} :: _bus_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _bus_ref);

    var __return_value__ = __fmod_studio_bus_get_volume(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _bus_ref
 * @param {Real} _volume
 * @returns {Real}
 */
function fmod_studio_bus_set_volume(_bus_ref, _volume)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _bus_ref, type: UInt64
    if (!is_numeric(_bus_ref)) show_error($"{_GMFUNCTION_} :: _bus_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _bus_ref);

    // param: _volume, type: Float64
    if (!is_numeric(_volume)) show_error($"{_GMFUNCTION_} :: _volume expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _volume);

    var __return_value__ = __fmod_studio_bus_set_volume(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _bus_ref
 * @returns {Real}
 */
function fmod_studio_bus_get_paused(_bus_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _bus_ref, type: UInt64
    if (!is_numeric(_bus_ref)) show_error($"{_GMFUNCTION_} :: _bus_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _bus_ref);

    var __return_value__ = __fmod_studio_bus_get_paused(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _bus_ref
 * @param {Real} _paused
 * @returns {Real}
 */
function fmod_studio_bus_set_paused(_bus_ref, _paused)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _bus_ref, type: UInt64
    if (!is_numeric(_bus_ref)) show_error($"{_GMFUNCTION_} :: _bus_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _bus_ref);

    // param: _paused, type: Float64
    if (!is_numeric(_paused)) show_error($"{_GMFUNCTION_} :: _paused expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _paused);

    var __return_value__ = __fmod_studio_bus_set_paused(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _bus_ref
 * @param {Real} _stop_mode
 * @returns {Real}
 */
function fmod_studio_bus_stop_all_events(_bus_ref, _stop_mode)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _bus_ref, type: UInt64
    if (!is_numeric(_bus_ref)) show_error($"{_GMFUNCTION_} :: _bus_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _bus_ref);

    // param: _stop_mode, type: Float64
    if (!is_numeric(_stop_mode)) show_error($"{_GMFUNCTION_} :: _stop_mode expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _stop_mode);

    var __return_value__ = __fmod_studio_bus_stop_all_events(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @returns {Real}
 */
function fmod_studio_bus_get_master_bus()
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_bus_get_master_bus(buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    if (buffer_read(__ret_buffer__, buffer_bool))
    {
        __result__ = buffer_read(__ret_buffer__, buffer_u64);
    }
    else
    {
        __result__ = undefined;
    }
    return __result__;
}

/**
 * @param {Real} _bus_ref
 * @returns {String}
 */
function fmod_studio_bus_get_id(_bus_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _bus_ref, type: UInt64
    if (!is_numeric(_bus_ref)) show_error($"{_GMFUNCTION_} :: _bus_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _bus_ref);

    var __return_value__ = __fmod_studio_bus_get_id(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _bus_ref
 * @returns {Real}
 */
function fmod_studio_bus_is_valid(_bus_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _bus_ref, type: UInt64
    if (!is_numeric(_bus_ref)) show_error($"{_GMFUNCTION_} :: _bus_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _bus_ref);

    var __return_value__ = __fmod_studio_bus_is_valid(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _bus_ref
 * @returns {Real}
 */
function fmod_studio_bus_get_channel_group(_bus_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _bus_ref, type: UInt64
    if (!is_numeric(_bus_ref)) show_error($"{_GMFUNCTION_} :: _bus_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _bus_ref);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_bus_get_channel_group(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = buffer_read(__ret_buffer__, buffer_u64);
    return __result__;
}

/**
 * @param {Real} _bus_ref
 * @returns {Real}
 */
function fmod_studio_bus_lock_channel_group(_bus_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _bus_ref, type: UInt64
    if (!is_numeric(_bus_ref)) show_error($"{_GMFUNCTION_} :: _bus_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _bus_ref);

    var __return_value__ = __fmod_studio_bus_lock_channel_group(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _bus_ref
 * @returns {Real}
 */
function fmod_studio_bus_unlock_channel_group(_bus_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _bus_ref, type: UInt64
    if (!is_numeric(_bus_ref)) show_error($"{_GMFUNCTION_} :: _bus_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _bus_ref);

    var __return_value__ = __fmod_studio_bus_unlock_channel_group(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _bus_ref
 * @returns {Struct.FmodStudioCPUUsage}
 */
function fmod_studio_bus_get_cpu_usage(_bus_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _bus_ref, type: UInt64
    if (!is_numeric(_bus_ref)) show_error($"{_GMFUNCTION_} :: _bus_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _bus_ref);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_bus_get_cpu_usage(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodStudioCPUUsage_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @param {Real} _bus_ref
 * @returns {Struct.FmodStudioMemoryUsage}
 */
function fmod_studio_bus_get_memory_usage(_bus_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _bus_ref, type: UInt64
    if (!is_numeric(_bus_ref)) show_error($"{_GMFUNCTION_} :: _bus_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _bus_ref);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_bus_get_memory_usage(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodStudioMemoryUsage_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @param {Real} _bus_ref
 * @returns {Real}
 */
function fmod_studio_bus_get_mute(_bus_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _bus_ref, type: UInt64
    if (!is_numeric(_bus_ref)) show_error($"{_GMFUNCTION_} :: _bus_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _bus_ref);

    var __return_value__ = __fmod_studio_bus_get_mute(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _bus_ref
 * @param {Real} _mute
 * @returns {Real}
 */
function fmod_studio_bus_set_mute(_bus_ref, _mute)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _bus_ref, type: UInt64
    if (!is_numeric(_bus_ref)) show_error($"{_GMFUNCTION_} :: _bus_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _bus_ref);

    // param: _mute, type: Float64
    if (!is_numeric(_mute)) show_error($"{_GMFUNCTION_} :: _mute expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _mute);

    var __return_value__ = __fmod_studio_bus_set_mute(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _bus_ref
 * @returns {Real}
 */
function fmod_studio_bus_get_port_index(_bus_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _bus_ref, type: UInt64
    if (!is_numeric(_bus_ref)) show_error($"{_GMFUNCTION_} :: _bus_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _bus_ref);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_bus_get_port_index(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = buffer_read(__ret_buffer__, buffer_u64);
    return __result__;
}

/**
 * @param {Real} _bus_ref
 * @param {Real} _port_index
 * @returns {Real}
 */
function fmod_studio_bus_set_port_index(_bus_ref, _port_index)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _bus_ref, type: UInt64
    if (!is_numeric(_bus_ref)) show_error($"{_GMFUNCTION_} :: _bus_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _bus_ref);

    // param: _port_index, type: UInt64
    if (!is_numeric(_port_index)) show_error($"{_GMFUNCTION_} :: _port_index expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _port_index);

    var __return_value__ = __fmod_studio_bus_set_port_index(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _vca_ref
 * @returns {String}
 */
function fmod_studio_vca_get_path(_vca_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _vca_ref, type: UInt64
    if (!is_numeric(_vca_ref)) show_error($"{_GMFUNCTION_} :: _vca_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _vca_ref);

    var __return_value__ = __fmod_studio_vca_get_path(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _vca_ref
 * @returns {Real}
 */
function fmod_studio_vca_get_volume(_vca_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _vca_ref, type: UInt64
    if (!is_numeric(_vca_ref)) show_error($"{_GMFUNCTION_} :: _vca_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _vca_ref);

    var __return_value__ = __fmod_studio_vca_get_volume(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _vca_ref
 * @param {Real} _volume
 * @returns {Real}
 */
function fmod_studio_vca_set_volume(_vca_ref, _volume)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _vca_ref, type: UInt64
    if (!is_numeric(_vca_ref)) show_error($"{_GMFUNCTION_} :: _vca_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _vca_ref);

    // param: _volume, type: Float64
    if (!is_numeric(_volume)) show_error($"{_GMFUNCTION_} :: _volume expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _volume);

    var __return_value__ = __fmod_studio_vca_set_volume(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _replay_ref
 * @returns {Real}
 */
function fmod_studio_command_replay_get_playback_state(_replay_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _replay_ref, type: UInt64
    if (!is_numeric(_replay_ref)) show_error($"{_GMFUNCTION_} :: _replay_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _replay_ref);

    var __return_value__ = __fmod_studio_command_replay_get_playback_state(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _replay_ref
 * @returns {Real}
 */
function fmod_studio_command_replay_get_current_command(_replay_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _replay_ref, type: UInt64
    if (!is_numeric(_replay_ref)) show_error($"{_GMFUNCTION_} :: _replay_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _replay_ref);

    var __return_value__ = __fmod_studio_command_replay_get_current_command(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _replay_ref
 * @returns {Real}
 */
function fmod_studio_command_replay_release(_replay_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _replay_ref, type: UInt64
    if (!is_numeric(_replay_ref)) show_error($"{_GMFUNCTION_} :: _replay_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _replay_ref);

    var __return_value__ = __fmod_studio_command_replay_release(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _replay_ref
 * @returns {Real}
 */
function fmod_studio_command_replay_get_command_count(_replay_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _replay_ref, type: UInt64
    if (!is_numeric(_replay_ref)) show_error($"{_GMFUNCTION_} :: _replay_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _replay_ref);

    var __return_value__ = __fmod_studio_command_replay_get_command_count(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _replay_ref
 * @returns {Real}
 */
function fmod_studio_command_replay_get_length(_replay_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _replay_ref, type: UInt64
    if (!is_numeric(_replay_ref)) show_error($"{_GMFUNCTION_} :: _replay_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _replay_ref);

    var __return_value__ = __fmod_studio_command_replay_get_length(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _replay_ref
 * @returns {Real}
 */
function fmod_studio_command_replay_get_system_object(_replay_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _replay_ref, type: UInt64
    if (!is_numeric(_replay_ref)) show_error($"{_GMFUNCTION_} :: _replay_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _replay_ref);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_command_replay_get_system_object(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = buffer_read(__ret_buffer__, buffer_u64);
    return __result__;
}

/**
 * @param {Real} _replay_ref
 * @returns {Real}
 */
function fmod_studio_command_replay_is_valid(_replay_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _replay_ref, type: UInt64
    if (!is_numeric(_replay_ref)) show_error($"{_GMFUNCTION_} :: _replay_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _replay_ref);

    var __return_value__ = __fmod_studio_command_replay_is_valid(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _replay_ref
 * @param {Real} _command_index
 * @returns {Struct.FmodStudioCommandInfo}
 */
function fmod_studio_command_replay_get_command_info(_replay_ref, _command_index)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _replay_ref, type: UInt64
    if (!is_numeric(_replay_ref)) show_error($"{_GMFUNCTION_} :: _replay_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _replay_ref);

    // param: _command_index, type: Float64
    if (!is_numeric(_command_index)) show_error($"{_GMFUNCTION_} :: _command_index expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _command_index);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_command_replay_get_command_info(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodStudioCommandInfo_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @param {Real} _replay_ref
 * @param {Real} _command_index
 * @returns {String}
 */
function fmod_studio_command_replay_get_command_string(_replay_ref, _command_index)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _replay_ref, type: UInt64
    if (!is_numeric(_replay_ref)) show_error($"{_GMFUNCTION_} :: _replay_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _replay_ref);

    // param: _command_index, type: Float64
    if (!is_numeric(_command_index)) show_error($"{_GMFUNCTION_} :: _command_index expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _command_index);

    var __return_value__ = __fmod_studio_command_replay_get_command_string(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _replay_ref
 * @param {Real} _time
 * @returns {Real}
 */
function fmod_studio_command_replay_get_command_at_time(_replay_ref, _time)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _replay_ref, type: UInt64
    if (!is_numeric(_replay_ref)) show_error($"{_GMFUNCTION_} :: _replay_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _replay_ref);

    // param: _time, type: Float64
    if (!is_numeric(_time)) show_error($"{_GMFUNCTION_} :: _time expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _time);

    var __return_value__ = __fmod_studio_command_replay_get_command_at_time(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _replay_ref
 * @param {Real} _command_index
 * @returns {Real}
 */
function fmod_studio_command_replay_seek_to_command(_replay_ref, _command_index)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _replay_ref, type: UInt64
    if (!is_numeric(_replay_ref)) show_error($"{_GMFUNCTION_} :: _replay_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _replay_ref);

    // param: _command_index, type: Float64
    if (!is_numeric(_command_index)) show_error($"{_GMFUNCTION_} :: _command_index expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _command_index);

    var __return_value__ = __fmod_studio_command_replay_seek_to_command(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _replay_ref
 * @param {Real} _time
 * @returns {Real}
 */
function fmod_studio_command_replay_seek_to_time(_replay_ref, _time)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _replay_ref, type: UInt64
    if (!is_numeric(_replay_ref)) show_error($"{_GMFUNCTION_} :: _replay_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _replay_ref);

    // param: _time, type: Float64
    if (!is_numeric(_time)) show_error($"{_GMFUNCTION_} :: _time expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _time);

    var __return_value__ = __fmod_studio_command_replay_seek_to_time(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _replay_ref
 * @param {String} _path
 * @returns {Real}
 */
function fmod_studio_command_replay_set_bank_path(_replay_ref, _path)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _replay_ref, type: UInt64
    if (!is_numeric(_replay_ref)) show_error($"{_GMFUNCTION_} :: _replay_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _replay_ref);

    // param: _path, type: String
    if (!is_string(_path)) show_error($"{_GMFUNCTION_} :: _path expected string", true);
    buffer_write(__args_buffer__, buffer_u32, string_byte_length(_path));
    buffer_write(__args_buffer__, buffer_string, _path);

    var __return_value__ = __fmod_studio_command_replay_set_bank_path(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _replay_ref
 * @returns {Real}
 */
function fmod_studio_command_replay_get_paused(_replay_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _replay_ref, type: UInt64
    if (!is_numeric(_replay_ref)) show_error($"{_GMFUNCTION_} :: _replay_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _replay_ref);

    var __return_value__ = __fmod_studio_command_replay_get_paused(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _replay_ref
 * @param {Real} _paused
 * @returns {Real}
 */
function fmod_studio_command_replay_set_paused(_replay_ref, _paused)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _replay_ref, type: UInt64
    if (!is_numeric(_replay_ref)) show_error($"{_GMFUNCTION_} :: _replay_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _replay_ref);

    // param: _paused, type: Float64
    if (!is_numeric(_paused)) show_error($"{_GMFUNCTION_} :: _paused expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _paused);

    var __return_value__ = __fmod_studio_command_replay_set_paused(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _replay_ref
 * @returns {Real}
 */
function fmod_studio_command_replay_start(_replay_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _replay_ref, type: UInt64
    if (!is_numeric(_replay_ref)) show_error($"{_GMFUNCTION_} :: _replay_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _replay_ref);

    var __return_value__ = __fmod_studio_command_replay_start(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _replay_ref
 * @returns {Real}
 */
function fmod_studio_command_replay_stop(_replay_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _replay_ref, type: UInt64
    if (!is_numeric(_replay_ref)) show_error($"{_GMFUNCTION_} :: _replay_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _replay_ref);

    var __return_value__ = __fmod_studio_command_replay_stop(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _replay_ref
 * @returns {Real}
 */
function fmod_studio_command_replay_get_user_data(_replay_ref)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _replay_ref, type: UInt64
    if (!is_numeric(_replay_ref)) show_error($"{_GMFUNCTION_} :: _replay_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _replay_ref);

    var __return_value__ = __fmod_studio_command_replay_get_user_data(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _replay_ref
 * @param {Real} _user_data
 * @returns {Real}
 */
function fmod_studio_command_replay_set_user_data(_replay_ref, _user_data)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _replay_ref, type: UInt64
    if (!is_numeric(_replay_ref)) show_error($"{_GMFUNCTION_} :: _replay_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _replay_ref);

    // param: _user_data, type: Float64
    if (!is_numeric(_user_data)) show_error($"{_GMFUNCTION_} :: _user_data expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _user_data);

    var __return_value__ = __fmod_studio_command_replay_set_user_data(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _replay_ref
 * @param {Function} _callback
 * @returns {Real}
 */
function fmod_studio_command_replay_set_frame_callback(_replay_ref, _callback)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __dispatcher__ = __GMFMODStudio_get_dispatcher();

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _replay_ref, type: UInt64
    if (!is_numeric(_replay_ref)) show_error($"{_GMFUNCTION_} :: _replay_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _replay_ref);

    // param: _callback, type: optional<Function>
    if (is_undefined(_callback))
    {
        buffer_write(__args_buffer__, buffer_bool, false);
    }
    else
    {
        buffer_write(__args_buffer__, buffer_bool, true);
        if (!is_callable(_callback)) show_error($"{_GMFUNCTION_} :: _callback expected callable type", true);
        var _callback_handle = __ext_core_function_register(_callback, __dispatcher__);
        buffer_write(__args_buffer__, buffer_u64, _callback_handle);
    }

    var __return_value__ = __fmod_studio_command_replay_set_frame_callback(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _replay_ref
 * @param {Function} _callback
 * @returns {Real}
 */
function fmod_studio_command_replay_set_create_instance_callback(_replay_ref, _callback)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __dispatcher__ = __GMFMODStudio_get_dispatcher();

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _replay_ref, type: UInt64
    if (!is_numeric(_replay_ref)) show_error($"{_GMFUNCTION_} :: _replay_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _replay_ref);

    // param: _callback, type: optional<Function>
    if (is_undefined(_callback))
    {
        buffer_write(__args_buffer__, buffer_bool, false);
    }
    else
    {
        buffer_write(__args_buffer__, buffer_bool, true);
        if (!is_callable(_callback)) show_error($"{_GMFUNCTION_} :: _callback expected callable type", true);
        var _callback_handle = __ext_core_function_register(_callback, __dispatcher__);
        buffer_write(__args_buffer__, buffer_u64, _callback_handle);
    }

    var __return_value__ = __fmod_studio_command_replay_set_create_instance_callback(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _replay_ref
 * @param {Function} _callback
 * @returns {Real}
 */
function fmod_studio_command_replay_set_load_bank_callback(_replay_ref, _callback)
{
    var __available__ = __GMFMODStudio_is_available();
    if (!__available__) return;

    var __dispatcher__ = __GMFMODStudio_get_dispatcher();

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _replay_ref, type: UInt64
    if (!is_numeric(_replay_ref)) show_error($"{_GMFUNCTION_} :: _replay_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _replay_ref);

    // param: _callback, type: optional<Function>
    if (is_undefined(_callback))
    {
        buffer_write(__args_buffer__, buffer_bool, false);
    }
    else
    {
        buffer_write(__args_buffer__, buffer_bool, true);
        if (!is_callable(_callback)) show_error($"{_GMFUNCTION_} :: _callback expected callable type", true);
        var _callback_handle = __ext_core_function_register(_callback, __dispatcher__);
        buffer_write(__args_buffer__, buffer_u64, _callback_handle);
    }

    var __return_value__ = __fmod_studio_command_replay_set_load_bank_callback(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/// @ignore
function __GMFMODStudio_get_decoders()
{
    static __decoders__ = [
        __FmodStudioParameterDescription_decode,
        __FmodStudioStringInfo_decode,
        __FmodStudioCPUUsage_decode,
        __FmodStudioMemoryUsage_decode,
        __FmodStudioCommandInfo_decode,
        __FmodStudioCurrentCommand_decode,
        __FmodStudioUserProperty_decode,
        __FmodStudioVec3_decode,
        __FmodStudioMinMaxDistance_decode,
        __FmodStudioCoreCPUUsage_decode,
        __FmodStudioCreateSoundExInfo_decode,
        __FmodStudioBufferInfo_decode,
        __FmodStudioAdvancedSettings_decode,
        __FmodStudioParameterValue_decode,
        __FmodStudioListener3DAttributes_decode,
        __FmodStudioChannelControl3DAttributes_decode,
        __FmodStudioSystemCPUUsage_decode,
        __FmodStudioSoundInfo_decode,
        __FmodStudioBufferUsage_decode,
        __FmodStudioListenerAttributes_decode
    ];
    return __decoders__;
}
/// @ignore
function __GMFMODStudio_get_dispatcher()
{
    static __dispatcher__ = new __GMNativeFunctionDispatcher(__GMFMODStudio_invocation_handler, __GMFMODStudio_get_decoders());
    return __dispatcher__;
}
/// @ignore
function __GMFMODStudio_is_available()
{
    static __available__ = extension_exists("GMFMODStudio");
    return __available__;
}
// #####################################################################
// # Exports
// #####################################################################

#export FmodStudioResult, FmodStudioDebugFlags, FmodStudioDebugMode, FmodStudioInitFlags, FmodStudioLoadingState, FmodStudioPlaybackState, FmodStudioStopMode, FmodStudioEventProperty, FmodStudioParameterFlags, FmodStudioUserPropertyType, FmodStudioLoadBankFlags, FmodStudioCommandCaptureFlags, FmodStudioCommandReplayFlags, FmodStudioEventCallbackType, FmodStudioMode, FmodStudioSoundFormat, FmodStudioParameterDescription, FmodStudioStringInfo, FmodStudioCPUUsage, FmodStudioMemoryUsage, FmodStudioCommandInfo, FmodStudioCurrentCommand, FmodStudioUserProperty, FmodStudioVec3, FmodStudioMinMaxDistance, FmodStudioCoreCPUUsage, FmodStudioCreateSoundExInfo, FmodStudioBufferInfo, FmodStudioAdvancedSettings, FmodStudioParameterValue, FmodStudioListener3DAttributes, FmodStudioChannelControl3DAttributes, FmodStudioSystemCPUUsage, FmodStudioSoundInfo, FmodStudioBufferUsage, FmodStudioListenerAttributes, fmod_studio_system_create, fmod_studio_system_load_bank_file, fmod_studio_system_load_bank_memory, fmod_studio_system_get_bank_at, fmod_studio_system_get_bank, fmod_studio_system_get_bank_by_id, fmod_studio_system_get_event, fmod_studio_system_create_event_instance, fmod_studio_system_get_bus, fmod_studio_system_get_master_bus, fmod_studio_system_get_bus_by_id, fmod_studio_system_get_vca, fmod_studio_system_get_vca_by_id, fmod_studio_system_get_listener_attributes, fmod_studio_system_get_core_system, fmod_studio_system_get_core_system_ptr, fmod_studio_last_result, fmod_studio_system_get_event_by_id, fmod_studio_system_start_command_capture, fmod_studio_system_load_command_replay, fmod_studio_system_get_sound_info, fmod_studio_system_get_parameter_by_id, fmod_studio_system_get_parameter_description_by_id, fmod_studio_system_get_parameter_description_by_name, fmod_studio_system_get_parameter_description_at, fmod_studio_system_get_cpu_usage, fmod_studio_system_get_buffer_usage, fmod_studio_system_get_memory_usage, fmod_studio_system_get_advanced_settings, fmod_studio_system_set_advanced_settings, fmod_studio_bank_unload, fmod_studio_bank_get_loading_state, fmod_studio_bank_get_sample_loading_state, fmod_studio_bank_get_path, fmod_studio_bank_get_parent_studio_system, fmod_studio_bank_get_event_count, fmod_studio_bank_get_event_at, fmod_studio_bank_get_bus_count, fmod_studio_bank_get_bus_at, fmod_studio_bank_get_vca_count, fmod_studio_bank_get_vca_at, fmod_studio_bank_get_string_count, fmod_studio_bank_get_id, fmod_studio_bank_is_valid, fmod_studio_bank_get_string_info, fmod_studio_bank_load_sample_data, fmod_studio_bank_unload_sample_data, fmod_studio_bank_get_user_data, fmod_studio_bank_set_user_data, fmod_studio_event_description_get_path, fmod_studio_event_description_create_instance, fmod_studio_event_description_get_instance_count, fmod_studio_event_description_get_instance_at, fmod_studio_event_description_is_snapshot, fmod_studio_event_description_is_one_shot, fmod_studio_event_description_has_sustain_point, fmod_studio_event_description_get_length, fmod_studio_event_description_get_parameter_count, fmod_studio_event_description_release_all_instances, fmod_studio_event_description_get_parameter_description_by_name, fmod_studio_event_description_load_sample_data, fmod_studio_event_description_is_valid, fmod_studio_event_description_is_3d, fmod_studio_event_description_is_stream, fmod_studio_event_description_is_doppler_enabled, fmod_studio_event_description_get_id, fmod_studio_event_description_get_min_max_distance, fmod_studio_event_description_get_sound_size, fmod_studio_event_description_get_sample_loading_state, fmod_studio_event_description_unload_sample_data, fmod_studio_event_description_set_callback, fmod_studio_event_description_get_user_data, fmod_studio_event_description_set_user_data, fmod_studio_event_description_get_user_property, fmod_studio_event_description_get_user_property_at, fmod_studio_event_description_get_user_property_count, fmod_studio_event_description_get_parameter_description_by_id, fmod_studio_event_description_get_parameter_description_at, fmod_studio_event_description_get_parameter_label_by_id, fmod_studio_event_description_get_parameter_label_at, fmod_studio_event_description_get_parameter_label_by_name, fmod_studio_event_instance_start, fmod_studio_event_instance_stop, fmod_studio_event_instance_get_playback_state, fmod_studio_event_instance_get_paused, fmod_studio_event_instance_set_paused, fmod_studio_event_instance_get_timeline_position, fmod_studio_event_instance_set_timeline_position, fmod_studio_event_instance_keyoff, fmod_studio_event_instance_get_volume, fmod_studio_event_instance_set_volume, fmod_studio_event_instance_get_pitch, fmod_studio_event_instance_set_pitch, fmod_studio_event_instance_set_parameter_by_name, fmod_studio_event_instance_get_parameter_by_name, fmod_studio_event_instance_get_parameter_count, fmod_studio_event_instance_get_parameter_by_id, fmod_studio_event_instance_set_parameter_by_id, fmod_studio_event_instance_set_callback, fmod_studio_event_instance_set_parameter_by_id_with_label, fmod_studio_event_instance_set_parameter_by_name_with_label, fmod_studio_event_instance_set_3d_attributes, fmod_studio_event_instance_get_3d_attributes, fmod_studio_event_instance_get_min_max_distance, fmod_studio_event_instance_get_listener_mask, fmod_studio_event_instance_set_listener_mask, fmod_studio_event_instance_get_reverb_level, fmod_studio_event_instance_set_reverb_level, fmod_studio_event_instance_get_property, fmod_studio_event_instance_set_property, fmod_studio_event_instance_get_user_data, fmod_studio_event_instance_set_user_data, fmod_studio_event_instance_is_valid, fmod_studio_event_instance_is_virtual, fmod_studio_event_instance_get_channel_group, fmod_studio_event_instance_get_cpu_usage, fmod_studio_event_instance_get_memory_usage, fmod_studio_event_instance_get_description, fmod_studio_event_instance_release, fmod_studio_bus_get_path, fmod_studio_bus_get_volume, fmod_studio_bus_set_volume, fmod_studio_bus_get_paused, fmod_studio_bus_set_paused, fmod_studio_bus_stop_all_events, fmod_studio_bus_get_master_bus, fmod_studio_bus_get_id, fmod_studio_bus_is_valid, fmod_studio_bus_get_channel_group, fmod_studio_bus_lock_channel_group, fmod_studio_bus_unlock_channel_group, fmod_studio_bus_get_cpu_usage, fmod_studio_bus_get_memory_usage, fmod_studio_bus_get_mute, fmod_studio_bus_set_mute, fmod_studio_bus_get_port_index, fmod_studio_bus_set_port_index, fmod_studio_vca_get_path, fmod_studio_vca_get_volume, fmod_studio_vca_set_volume, fmod_studio_command_replay_get_playback_state, fmod_studio_command_replay_get_current_command, fmod_studio_command_replay_release, fmod_studio_command_replay_get_command_count, fmod_studio_command_replay_get_length, fmod_studio_command_replay_get_system_object, fmod_studio_command_replay_is_valid, fmod_studio_command_replay_get_command_info, fmod_studio_command_replay_get_command_string, fmod_studio_command_replay_get_command_at_time, fmod_studio_command_replay_seek_to_command, fmod_studio_command_replay_seek_to_time, fmod_studio_command_replay_set_bank_path, fmod_studio_command_replay_get_paused, fmod_studio_command_replay_set_paused, fmod_studio_command_replay_start, fmod_studio_command_replay_stop, fmod_studio_command_replay_get_user_data, fmod_studio_command_replay_set_user_data, fmod_studio_command_replay_set_frame_callback, fmod_studio_command_replay_set_create_instance_callback, fmod_studio_command_replay_set_load_bank_callback
