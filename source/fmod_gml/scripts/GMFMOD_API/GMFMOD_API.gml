// ##### extgen :: Auto-generated file do not edit!! #####

// #####################################################################
// # Macros
// #####################################################################

// #####################################################################
// # Enums
// #####################################################################

enum FmodResult
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
    FileUnwanted = 19,
    FormatUnsupported = 20,
    Generic = 21,
    InvalidHandle = 22,
    InvalidParam = 23,
    InvalidPosition = 24,
    InvalidSpeakerMode = 25,
    InvalidThread = 26,
    InvalidVector = 27,
    MaxAudioEngines = 28,
    Memory = 29,
    MemoryCantPoint = 30,
    Needs3D = 31,
    NeedsSoftware = 32,
    NetConnect = 33,
    NetSocketError = 34,
    NetUrl = 35,
    NetWouldBlock = 36,
    NotReady = 37,
    OutputAllocated = 38,
    OutputCreateBuffer = 39,
    OutputDriverCall = 40,
    OutputFormat = 41,
    OutputInit = 42,
    OutputNoDriver = 43,
    Record = 44,
    ReverseStereo = 45,
    Threading = 46,
    TooManyChannels = 47,
    TruncatedData = 48,
    Unimplemented = 49,
    Uninitialized = 50,
    Unsupported = 51,
    Update = 52,
    Version = 53,
    EventAlreadyLoaded = 54,
    InternalError = 55,
    InvalidSecret = 56,
    MissingCallback = 57,
    SampleMissing = 58,
    Plugin = 59,
    PluginMissing = 60,
    PluginResource = 61,
    PluginVersion = 62,
    ReverbChannelGroup = 63,
    ReverbInstance = 64,
    SubSounds = 65,
    SubSoundAllocated = 66,
    SubSoundCantMove = 67,
    TagNotFound = 68,
    Http = 69,
    HttpAccess = 70,
    HttpProxyAuth = 71,
    HttpServerError = 72,
    HttpTimeout = 73,
    InvalidFloat = 74,
    InvalidSyncPoint = 75,
    InvalidSpeaker = 76,
    InvalidString = 77,
    AlreadyLocked = 78,
    NotLocked = 79,
    RecordDisconnected = 80,
    TooManySamples = 81,
    StudioUninitialized = 82,
    StudioNotLoaded = 83,
    EventNotFound = 84,
    EventLiveUpdateBusy = 85,
    EventLiveUpdateMismatch = 86,
    EventLiveUpdateTimeout = 87,
    Format = 88,
    Initialization = 89,
    Initialized = 90,
    Internal = 91,
    MaxAudible = 92,
    NeedsHardware = 93
}

enum FmodInitFlags
{
    Normal = 0,
    StreamFromUpdate = 1,
    IgnoreTags = 2,
    SyncMixDown = 4,
    ProfileEnable = 16,
    Vol0BecomesVirtual = 32,
    GeometryUseCheap = 64,
    ClipOutput = 128,
    Unicode = 256,
    TimerTickBaseClockSource = 512,
    ProfileMeterAll = 1024,
    MemoryTracking = 2048,
    ThreadUnsafe = 4096,
    ProfileMeterThreadLocks = 8192
}

enum FmodStudioInitFlags
{
    Normal = 0,
    LiveUpdate = 1,
    AllowMissingPlugins = 2,
    SynchronousUpdate = 4,
    DeferredCallbacks = 8,
    LoadFromUpdate = 16,
    DebugOverlay = 32,
    DisableSounds = 64,
    DisableAllSamples = 128,
    DisableCommandReplay = 256
}

enum FmodMode
{
    Default = 0,
    LoopOff = 1,
    LoopOn = 4,
    LoopBidi = 8,
    _2D = 16,
    _3D = 32,
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
    _3DCustomRollOff = 67108864,
    _3DIgnoreGeometry = 1073741824,
    IgnoreTags = 33554432,
    LowMem = 134217728,
    VirtualPlayFromStart = -2147483648
}

enum FmodTimeUnit
{
    Ms = 1,
    Pcm = 2,
    PcmBytes = 4,
    RawBytes = 8,
    PcmFraction = 16,
    ModOrder = 256,
    ModRow = 512,
    ModPattern = 1024
}

enum FmodDspType
{
    Unknown = -1,
    Mixer = 0,
    Oscillator = 1,
    LowPass = 2,
    ItLowPass = 3,
    HighPass = 4,
    Echo = 5,
    Flange = 6,
    Distortion = 7,
    Normalize = 8,
    Limiter = 9,
    ParamEq = 10,
    PitchShift = 11,
    Chorus = 12,
    VstPlugin = 13,
    WinampPlugin = 14,
    Convolution = 15,
    ChannelMix = 16,
    Transceiver = 17,
    ObjectPan = 18,
    MultibandEq = 19,
    CompDynEq = 20
}

enum FmodDspConnectionType
{
    Default = 0,
    Dry = 1,
    Wet = 2
}

enum FmodDebugFlags
{
    LevelNone = 0,
    LevelError = 1,
    LevelWarning = 2,
    LevelLog = 4,
    TypeMemory = 256,
    TypeFile = 512,
    TypeCodec = 1024,
    TypeTrace = 2048,
    DisplayTimeStamps = 65536,
    DisplayLineNumbers = 131072,
    DisplayCompress = 262144,
    DisplayThreadId = 524288,
    DisplayModule = 1048576,
    DisplaySourceCodeLine = 2097152
}

enum FmodDebugMode
{
    Tty = 0,
    File = 1,
    Callback = 2,
    FilePlusTty = 3
}

enum FmodSpeakerMode
{
    Default = 0,
    Raw = 1,
    Mono = 2,
    Stereo = 3,
    Quad = 4,
    Surround = 5,
    _5Point1 = 6,
    _7Point1 = 7,
    _7Point1PointFront = 8,
    _5Point1Rears = 9
}

enum FmodSoundType
{
    Unknown = 0,
    Aiff = 1,
    Asf = 2,
    Dsd = 3,
    Flac = 4,
    Fsb = 5,
    It = 6,
    Midi = 7,
    Mpeg = 8,
    OggVorbis = 9,
    Playlist = 10,
    Raw = 11,
    S3m = 12,
    User = 13,
    Wav = 14,
    Xm = 15,
    Xwm = 16,
    Ac3 = 17,
    At9 = 18,
    Vorbis = 19,
    MediaFoundation = 20,
    MediaCodec = 21,
    Fadpcm = 22,
    Opus = 23
}

enum FmodSoundFormat
{
    None = 0,
    Pcm8 = 1,
    Pcm16 = 2,
    Pcm24 = 3,
    Pcm32 = 4,
    PcmFloat = 5,
    BitStream = 6
}

enum FmodOutputType
{
    AutoDetect = 0,
    Unknown = 1,
    NoSound = 2,
    WavWriter = 3,
    NoSoundNrt = 4,
    WavWriterNrt = 5,
    Wasapi = 6,
    Asio = 7,
    PulseAudio = 8,
    Alsa = 9,
    CoreAudio = 10,
    AudioTrack = 11,
    OpenSl = 12,
    AudioOut = 13,
    Audio3D = 14,
    WebAudio = 15,
    NnAudio = 16,
    WinSonic = 17,
    AAudio = 18,
    NativeAudio = 19
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
    Starting = 3
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
    Interactive = 4,
    Labeled = 8
}

enum FmodStudioUserPropertyType
{
    String = 0,
    Integer = 1,
    Float = 2,
    Boolean = 3
}

// #####################################################################
// # Constructors
// #####################################################################

/**
 * @returns {Struct.FmodChannelRef}
 */
function FmodChannelRef() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 287688359;

    self._ref = undefined;

}

/**
 * @returns {Struct.FmodChannelGroupRef}
 */
function FmodChannelGroupRef() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 1748069326;

    self._ref = undefined;

}

/**
 * @returns {Struct.FmodSoundRef}
 */
function FmodSoundRef() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 237087423;

    self._ref = undefined;

}

/**
 * @returns {Struct.FmodSystemRef}
 */
function FmodSystemRef() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 3684475095;

    self._ref = undefined;

}

/**
 * @returns {Struct.FmodDSPConnectionRef}
 */
function FmodDSPConnectionRef() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 67812655;

    self._ref = undefined;

}

/**
 * @returns {Struct.FmodSoundGroupRef}
 */
function FmodSoundGroupRef() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 1515681958;

    self._ref = undefined;

}

/**
 * @returns {Struct.FmodReverb3DRef}
 */
function FmodReverb3DRef() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 1101904757;

    self._ref = undefined;

}

/**
 * @returns {Struct.FmodDSPRef}
 */
function FmodDSPRef() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 4021659635;

    self._ref = undefined;

}

/**
 * @returns {Struct.FmodGeometryRef}
 */
function FmodGeometryRef() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 55360464;

    self._ref = undefined;

}

/**
 * @returns {Struct.FmodStudioSystemRef}
 */
function FmodStudioSystemRef() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 1633751673;

    self._ref = undefined;

}

/**
 * @returns {Struct.FmodStudioBankRef}
 */
function FmodStudioBankRef() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 2085290352;

    self._ref = undefined;

}

/**
 * @returns {Struct.FmodStudioBusRef}
 */
function FmodStudioBusRef() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 1572912022;

    self._ref = undefined;

}

/**
 * @returns {Struct.FmodStudioEventInstanceRef}
 */
function FmodStudioEventInstanceRef() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 1079537513;

    self._ref = undefined;

}

/**
 * @returns {Struct.FmodStudioEventDescriptionRef}
 */
function FmodStudioEventDescriptionRef() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 2708661012;

    self._ref = undefined;

}

/**
 * @returns {Struct.FmodStudioVCARef}
 */
function FmodStudioVCARef() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 706235938;

    self._ref = undefined;

}

/**
 * @returns {Struct.FmodStudioCommandReplayRef}
 */
function FmodStudioCommandReplayRef() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 1846997058;

    self._ref = undefined;

}

// #####################################################################
// # Codecs
// #####################################################################

/**
 * @func __FmodChannelRef_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodChannelRef} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodChannelRef_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: _ref, type: UInt64
        if (!is_numeric(self._ref)) show_error($"{_where} :: self._ref expected number", true);
        buffer_write(_buffer, buffer_u64, self._ref);

    }
}

/**
 * @func __FmodChannelRef_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodChannelRef}
 * @ignore
 */
function __FmodChannelRef_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodChannelRef();
    with (_inst)
    {
        // field: _ref, type: UInt64
        self._ref = buffer_read(_buffer, buffer_u64);

    }

    return _inst;
}

/**
 * @func __FmodChannelGroupRef_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodChannelGroupRef} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodChannelGroupRef_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: _ref, type: UInt64
        if (!is_numeric(self._ref)) show_error($"{_where} :: self._ref expected number", true);
        buffer_write(_buffer, buffer_u64, self._ref);

    }
}

/**
 * @func __FmodChannelGroupRef_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodChannelGroupRef}
 * @ignore
 */
function __FmodChannelGroupRef_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodChannelGroupRef();
    with (_inst)
    {
        // field: _ref, type: UInt64
        self._ref = buffer_read(_buffer, buffer_u64);

    }

    return _inst;
}

/**
 * @func __FmodSoundRef_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodSoundRef} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodSoundRef_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: _ref, type: UInt64
        if (!is_numeric(self._ref)) show_error($"{_where} :: self._ref expected number", true);
        buffer_write(_buffer, buffer_u64, self._ref);

    }
}

/**
 * @func __FmodSoundRef_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodSoundRef}
 * @ignore
 */
function __FmodSoundRef_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodSoundRef();
    with (_inst)
    {
        // field: _ref, type: UInt64
        self._ref = buffer_read(_buffer, buffer_u64);

    }

    return _inst;
}

/**
 * @func __FmodSystemRef_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodSystemRef} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodSystemRef_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: _ref, type: UInt64
        if (!is_numeric(self._ref)) show_error($"{_where} :: self._ref expected number", true);
        buffer_write(_buffer, buffer_u64, self._ref);

    }
}

/**
 * @func __FmodSystemRef_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodSystemRef}
 * @ignore
 */
function __FmodSystemRef_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodSystemRef();
    with (_inst)
    {
        // field: _ref, type: UInt64
        self._ref = buffer_read(_buffer, buffer_u64);

    }

    return _inst;
}

/**
 * @func __FmodDSPConnectionRef_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodDSPConnectionRef} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodDSPConnectionRef_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: _ref, type: UInt64
        if (!is_numeric(self._ref)) show_error($"{_where} :: self._ref expected number", true);
        buffer_write(_buffer, buffer_u64, self._ref);

    }
}

/**
 * @func __FmodDSPConnectionRef_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodDSPConnectionRef}
 * @ignore
 */
function __FmodDSPConnectionRef_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodDSPConnectionRef();
    with (_inst)
    {
        // field: _ref, type: UInt64
        self._ref = buffer_read(_buffer, buffer_u64);

    }

    return _inst;
}

/**
 * @func __FmodSoundGroupRef_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodSoundGroupRef} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodSoundGroupRef_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: _ref, type: UInt64
        if (!is_numeric(self._ref)) show_error($"{_where} :: self._ref expected number", true);
        buffer_write(_buffer, buffer_u64, self._ref);

    }
}

/**
 * @func __FmodSoundGroupRef_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodSoundGroupRef}
 * @ignore
 */
function __FmodSoundGroupRef_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodSoundGroupRef();
    with (_inst)
    {
        // field: _ref, type: UInt64
        self._ref = buffer_read(_buffer, buffer_u64);

    }

    return _inst;
}

/**
 * @func __FmodReverb3DRef_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodReverb3DRef} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodReverb3DRef_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: _ref, type: UInt64
        if (!is_numeric(self._ref)) show_error($"{_where} :: self._ref expected number", true);
        buffer_write(_buffer, buffer_u64, self._ref);

    }
}

/**
 * @func __FmodReverb3DRef_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodReverb3DRef}
 * @ignore
 */
function __FmodReverb3DRef_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodReverb3DRef();
    with (_inst)
    {
        // field: _ref, type: UInt64
        self._ref = buffer_read(_buffer, buffer_u64);

    }

    return _inst;
}

/**
 * @func __FmodDSPRef_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodDSPRef} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodDSPRef_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: _ref, type: UInt64
        if (!is_numeric(self._ref)) show_error($"{_where} :: self._ref expected number", true);
        buffer_write(_buffer, buffer_u64, self._ref);

    }
}

/**
 * @func __FmodDSPRef_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodDSPRef}
 * @ignore
 */
function __FmodDSPRef_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodDSPRef();
    with (_inst)
    {
        // field: _ref, type: UInt64
        self._ref = buffer_read(_buffer, buffer_u64);

    }

    return _inst;
}

/**
 * @func __FmodGeometryRef_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodGeometryRef} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodGeometryRef_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: _ref, type: UInt64
        if (!is_numeric(self._ref)) show_error($"{_where} :: self._ref expected number", true);
        buffer_write(_buffer, buffer_u64, self._ref);

    }
}

/**
 * @func __FmodGeometryRef_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodGeometryRef}
 * @ignore
 */
function __FmodGeometryRef_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodGeometryRef();
    with (_inst)
    {
        // field: _ref, type: UInt64
        self._ref = buffer_read(_buffer, buffer_u64);

    }

    return _inst;
}

/**
 * @func __FmodStudioSystemRef_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodStudioSystemRef} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodStudioSystemRef_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: _ref, type: UInt64
        if (!is_numeric(self._ref)) show_error($"{_where} :: self._ref expected number", true);
        buffer_write(_buffer, buffer_u64, self._ref);

    }
}

/**
 * @func __FmodStudioSystemRef_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodStudioSystemRef}
 * @ignore
 */
function __FmodStudioSystemRef_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodStudioSystemRef();
    with (_inst)
    {
        // field: _ref, type: UInt64
        self._ref = buffer_read(_buffer, buffer_u64);

    }

    return _inst;
}

/**
 * @func __FmodStudioBankRef_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodStudioBankRef} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodStudioBankRef_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: _ref, type: UInt64
        if (!is_numeric(self._ref)) show_error($"{_where} :: self._ref expected number", true);
        buffer_write(_buffer, buffer_u64, self._ref);

    }
}

/**
 * @func __FmodStudioBankRef_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodStudioBankRef}
 * @ignore
 */
function __FmodStudioBankRef_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodStudioBankRef();
    with (_inst)
    {
        // field: _ref, type: UInt64
        self._ref = buffer_read(_buffer, buffer_u64);

    }

    return _inst;
}

/**
 * @func __FmodStudioBusRef_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodStudioBusRef} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodStudioBusRef_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: _ref, type: UInt64
        if (!is_numeric(self._ref)) show_error($"{_where} :: self._ref expected number", true);
        buffer_write(_buffer, buffer_u64, self._ref);

    }
}

/**
 * @func __FmodStudioBusRef_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodStudioBusRef}
 * @ignore
 */
function __FmodStudioBusRef_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodStudioBusRef();
    with (_inst)
    {
        // field: _ref, type: UInt64
        self._ref = buffer_read(_buffer, buffer_u64);

    }

    return _inst;
}

/**
 * @func __FmodStudioEventInstanceRef_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodStudioEventInstanceRef} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodStudioEventInstanceRef_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: _ref, type: UInt64
        if (!is_numeric(self._ref)) show_error($"{_where} :: self._ref expected number", true);
        buffer_write(_buffer, buffer_u64, self._ref);

    }
}

/**
 * @func __FmodStudioEventInstanceRef_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodStudioEventInstanceRef}
 * @ignore
 */
function __FmodStudioEventInstanceRef_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodStudioEventInstanceRef();
    with (_inst)
    {
        // field: _ref, type: UInt64
        self._ref = buffer_read(_buffer, buffer_u64);

    }

    return _inst;
}

/**
 * @func __FmodStudioEventDescriptionRef_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodStudioEventDescriptionRef} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodStudioEventDescriptionRef_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: _ref, type: UInt64
        if (!is_numeric(self._ref)) show_error($"{_where} :: self._ref expected number", true);
        buffer_write(_buffer, buffer_u64, self._ref);

    }
}

/**
 * @func __FmodStudioEventDescriptionRef_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodStudioEventDescriptionRef}
 * @ignore
 */
function __FmodStudioEventDescriptionRef_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodStudioEventDescriptionRef();
    with (_inst)
    {
        // field: _ref, type: UInt64
        self._ref = buffer_read(_buffer, buffer_u64);

    }

    return _inst;
}

/**
 * @func __FmodStudioVCARef_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodStudioVCARef} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodStudioVCARef_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: _ref, type: UInt64
        if (!is_numeric(self._ref)) show_error($"{_where} :: self._ref expected number", true);
        buffer_write(_buffer, buffer_u64, self._ref);

    }
}

/**
 * @func __FmodStudioVCARef_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodStudioVCARef}
 * @ignore
 */
function __FmodStudioVCARef_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodStudioVCARef();
    with (_inst)
    {
        // field: _ref, type: UInt64
        self._ref = buffer_read(_buffer, buffer_u64);

    }

    return _inst;
}

/**
 * @func __FmodStudioCommandReplayRef_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodStudioCommandReplayRef} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodStudioCommandReplayRef_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: _ref, type: UInt64
        if (!is_numeric(self._ref)) show_error($"{_where} :: self._ref expected number", true);
        buffer_write(_buffer, buffer_u64, self._ref);

    }
}

/**
 * @func __FmodStudioCommandReplayRef_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodStudioCommandReplayRef}
 * @ignore
 */
function __FmodStudioCommandReplayRef_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodStudioCommandReplayRef();
    with (_inst)
    {
        // field: _ref, type: UInt64
        self._ref = buffer_read(_buffer, buffer_u64);

    }

    return _inst;
}

// #####################################################################
// # Functions
// #####################################################################

/**
 * @returns {Enum.FmodResult}
 */
function fmod_last_result()
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __ret_buffer = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_last_result(buffer_get_address(__ret_buffer), buffer_get_size(__ret_buffer));

    var __result__ = undefined;
    __result__ = buffer_read(__ret_buffer, buffer_u64);
    return __result__;
}

/**
 * @param {Enum.FmodDebugFlags} _flags
 * @param {Enum.FmodDebugMode} _mode
 */
function fmod_debug_initialize(_flags, _mode)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _flags, type: enum FmodDebugFlags

    if (!is_numeric(_flags)) show_error($"{_GMFUNCTION_} :: _flags expected number", true);
    buffer_write(__args_buffer, buffer_u64, _flags);

    // param: _mode, type: enum FmodDebugMode

    if (!is_numeric(_mode)) show_error($"{_GMFUNCTION_} :: _mode expected number", true);
    buffer_write(__args_buffer, buffer_u64, _mode);

    var __return_value__ = __fmod_debug_initialize(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

// Skipping function fmod_path_bundle (no wrapper is required)


// Skipping function fmod_path_user (no wrapper is required)


/**
 * @param {Struct.FmodChannelRef} _channel_ref
 * @param {Real} _frequency
 * @returns {Real}
 */
function fmod_channel_set_frequency(_channel_ref, _frequency)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _channel_ref, type: struct FmodChannelRef
    if (_channel_ref.__uid != 287688359) show_error($"{_GMFUNCTION_} :: _channel_ref expected FmodChannelRef", true);
    __FmodChannelRef_encode(_channel_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _frequency, type: Float64
    if (!is_numeric(_frequency)) show_error($"{_GMFUNCTION_} :: _frequency expected number", true);
    buffer_write(__args_buffer, buffer_f64, _frequency);

    var __return_value__ = __fmod_channel_set_frequency(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodChannelRef} _channel_ref
 * @returns {Real}
 */
function fmod_channel_get_frequency(_channel_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _channel_ref, type: struct FmodChannelRef
    if (_channel_ref.__uid != 287688359) show_error($"{_GMFUNCTION_} :: _channel_ref expected FmodChannelRef", true);
    __FmodChannelRef_encode(_channel_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_channel_get_frequency(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodChannelRef} _channel_ref
 * @param {Real} _priority
 * @returns {Real}
 */
function fmod_channel_set_priority(_channel_ref, _priority)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _channel_ref, type: struct FmodChannelRef
    if (_channel_ref.__uid != 287688359) show_error($"{_GMFUNCTION_} :: _channel_ref expected FmodChannelRef", true);
    __FmodChannelRef_encode(_channel_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _priority, type: Float64
    if (!is_numeric(_priority)) show_error($"{_GMFUNCTION_} :: _priority expected number", true);
    buffer_write(__args_buffer, buffer_f64, _priority);

    var __return_value__ = __fmod_channel_set_priority(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodChannelRef} _channel_ref
 * @returns {Real}
 */
function fmod_channel_get_priority(_channel_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _channel_ref, type: struct FmodChannelRef
    if (_channel_ref.__uid != 287688359) show_error($"{_GMFUNCTION_} :: _channel_ref expected FmodChannelRef", true);
    __FmodChannelRef_encode(_channel_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_channel_get_priority(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodChannelRef} _channel_ref
 * @param {Real} _position
 * @param {Real} _time_unit
 * @returns {Real}
 */
function fmod_channel_set_position(_channel_ref, _position, _time_unit)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _channel_ref, type: struct FmodChannelRef
    if (_channel_ref.__uid != 287688359) show_error($"{_GMFUNCTION_} :: _channel_ref expected FmodChannelRef", true);
    __FmodChannelRef_encode(_channel_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _position, type: Float64
    if (!is_numeric(_position)) show_error($"{_GMFUNCTION_} :: _position expected number", true);
    buffer_write(__args_buffer, buffer_f64, _position);

    // param: _time_unit, type: Float64
    if (!is_numeric(_time_unit)) show_error($"{_GMFUNCTION_} :: _time_unit expected number", true);
    buffer_write(__args_buffer, buffer_f64, _time_unit);

    var __return_value__ = __fmod_channel_set_position(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodChannelRef} _channel_ref
 * @param {Real} _time_unit
 * @returns {Real}
 */
function fmod_channel_get_position(_channel_ref, _time_unit)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _channel_ref, type: struct FmodChannelRef
    if (_channel_ref.__uid != 287688359) show_error($"{_GMFUNCTION_} :: _channel_ref expected FmodChannelRef", true);
    __FmodChannelRef_encode(_channel_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _time_unit, type: Float64
    if (!is_numeric(_time_unit)) show_error($"{_GMFUNCTION_} :: _time_unit expected number", true);
    buffer_write(__args_buffer, buffer_f64, _time_unit);

    var __return_value__ = __fmod_channel_get_position(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodChannelRef} _channel_ref
 * @param {Struct.FmodChannelGroupRef} _channel_group_ref
 * @returns {Real}
 */
function fmod_channel_set_channel_group(_channel_ref, _channel_group_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _channel_ref, type: struct FmodChannelRef
    if (_channel_ref.__uid != 287688359) show_error($"{_GMFUNCTION_} :: _channel_ref expected FmodChannelRef", true);
    __FmodChannelRef_encode(_channel_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _channel_group_ref, type: struct FmodChannelGroupRef
    if (_channel_group_ref.__uid != 1748069326) show_error($"{_GMFUNCTION_} :: _channel_group_ref expected FmodChannelGroupRef", true);
    __FmodChannelGroupRef_encode(_channel_group_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_channel_set_channel_group(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodChannelRef} _channel_ref
 * @returns {Struct.FmodChannelGroupRef}
 */
function fmod_channel_get_channel_group(_channel_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _channel_ref, type: struct FmodChannelRef
    if (_channel_ref.__uid != 287688359) show_error($"{_GMFUNCTION_} :: _channel_ref expected FmodChannelRef", true);
    __FmodChannelRef_encode(_channel_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __ret_buffer = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_channel_get_channel_group(buffer_get_address(__args_buffer), buffer_tell(__args_buffer), buffer_get_address(__ret_buffer), buffer_get_size(__ret_buffer));

    var __result__ = undefined;
    __result__ = __FmodChannelGroupRef_decode(__ret_buffer, buffer_tell(__ret_buffer));
    return __result__;
}

/**
 * @param {Struct.FmodChannelRef} _channel_ref
 * @param {Real} _loop_count
 * @returns {Real}
 */
function fmod_channel_set_loop_count(_channel_ref, _loop_count)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _channel_ref, type: struct FmodChannelRef
    if (_channel_ref.__uid != 287688359) show_error($"{_GMFUNCTION_} :: _channel_ref expected FmodChannelRef", true);
    __FmodChannelRef_encode(_channel_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _loop_count, type: Float64
    if (!is_numeric(_loop_count)) show_error($"{_GMFUNCTION_} :: _loop_count expected number", true);
    buffer_write(__args_buffer, buffer_f64, _loop_count);

    var __return_value__ = __fmod_channel_set_loop_count(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodChannelRef} _channel_ref
 * @returns {Real}
 */
function fmod_channel_get_loop_count(_channel_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _channel_ref, type: struct FmodChannelRef
    if (_channel_ref.__uid != 287688359) show_error($"{_GMFUNCTION_} :: _channel_ref expected FmodChannelRef", true);
    __FmodChannelRef_encode(_channel_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_channel_get_loop_count(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodChannelRef} _channel_ref
 * @param {Real} _loop_start
 * @param {Real} _loop_start_type
 * @param {Real} _loop_end
 * @param {Real} _loop_end_type
 * @returns {Real}
 */
function fmod_channel_set_loop_points(_channel_ref, _loop_start, _loop_start_type, _loop_end, _loop_end_type)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _channel_ref, type: struct FmodChannelRef
    if (_channel_ref.__uid != 287688359) show_error($"{_GMFUNCTION_} :: _channel_ref expected FmodChannelRef", true);
    __FmodChannelRef_encode(_channel_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _loop_start, type: Float64
    if (!is_numeric(_loop_start)) show_error($"{_GMFUNCTION_} :: _loop_start expected number", true);
    buffer_write(__args_buffer, buffer_f64, _loop_start);

    // param: _loop_start_type, type: Float64
    if (!is_numeric(_loop_start_type)) show_error($"{_GMFUNCTION_} :: _loop_start_type expected number", true);
    buffer_write(__args_buffer, buffer_f64, _loop_start_type);

    // param: _loop_end, type: Float64
    if (!is_numeric(_loop_end)) show_error($"{_GMFUNCTION_} :: _loop_end expected number", true);
    buffer_write(__args_buffer, buffer_f64, _loop_end);

    // param: _loop_end_type, type: Float64
    if (!is_numeric(_loop_end_type)) show_error($"{_GMFUNCTION_} :: _loop_end_type expected number", true);
    buffer_write(__args_buffer, buffer_f64, _loop_end_type);

    var __return_value__ = __fmod_channel_set_loop_points(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodChannelRef} _channel_ref
 * @returns {Real}
 */
function fmod_channel_is_virtual(_channel_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _channel_ref, type: struct FmodChannelRef
    if (_channel_ref.__uid != 287688359) show_error($"{_GMFUNCTION_} :: _channel_ref expected FmodChannelRef", true);
    __FmodChannelRef_encode(_channel_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_channel_is_virtual(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodChannelRef} _channel_ref
 * @returns {Real}
 */
function fmod_channel_get_index(_channel_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _channel_ref, type: struct FmodChannelRef
    if (_channel_ref.__uid != 287688359) show_error($"{_GMFUNCTION_} :: _channel_ref expected FmodChannelRef", true);
    __FmodChannelRef_encode(_channel_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_channel_get_index(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodChannelRef} _channel_ref
 * @returns {Struct.FmodSoundRef}
 */
function fmod_channel_get_current_sound(_channel_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _channel_ref, type: struct FmodChannelRef
    if (_channel_ref.__uid != 287688359) show_error($"{_GMFUNCTION_} :: _channel_ref expected FmodChannelRef", true);
    __FmodChannelRef_encode(_channel_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __ret_buffer = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_channel_get_current_sound(buffer_get_address(__args_buffer), buffer_tell(__args_buffer), buffer_get_address(__ret_buffer), buffer_get_size(__ret_buffer));

    var __result__ = undefined;
    __result__ = __FmodSoundRef_decode(__ret_buffer, buffer_tell(__ret_buffer));
    return __result__;
}

/**
 * @param {Struct.FmodChannelRef} _channel_ref
 * @returns {Struct.FmodSystemRef}
 */
function fmod_channel_get_system_object(_channel_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _channel_ref, type: struct FmodChannelRef
    if (_channel_ref.__uid != 287688359) show_error($"{_GMFUNCTION_} :: _channel_ref expected FmodChannelRef", true);
    __FmodChannelRef_encode(_channel_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __ret_buffer = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_channel_get_system_object(buffer_get_address(__args_buffer), buffer_tell(__args_buffer), buffer_get_address(__ret_buffer), buffer_get_size(__ret_buffer));

    var __result__ = undefined;
    __result__ = __FmodSystemRef_decode(__ret_buffer, buffer_tell(__ret_buffer));
    return __result__;
}

/**
 * @returns {Struct.FmodSystemRef}
 */
function fmod_system_create()
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __ret_buffer = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_system_create(buffer_get_address(__ret_buffer), buffer_get_size(__ret_buffer));

    var __result__ = undefined;
    __result__ = __FmodSystemRef_decode(__ret_buffer, buffer_tell(__ret_buffer));
    return __result__;
}

// Skipping function fmod_system_init (no wrapper is required)


/**
 * @param {Struct.FmodSystemRef} _system_ref
 * @returns {Real}
 */
function fmod_system_release(_system_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _system_ref, type: struct FmodSystemRef
    if (_system_ref.__uid != 3684475095) show_error($"{_GMFUNCTION_} :: _system_ref expected FmodSystemRef", true);
    __FmodSystemRef_encode(_system_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_system_release(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodSystemRef} _system_ref
 * @returns {Real}
 */
function fmod_system_close(_system_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _system_ref, type: struct FmodSystemRef
    if (_system_ref.__uid != 3684475095) show_error($"{_GMFUNCTION_} :: _system_ref expected FmodSystemRef", true);
    __FmodSystemRef_encode(_system_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_system_close(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

// Skipping function fmod_system_update (no wrapper is required)


/**
 * @param {Real} _index
 * @returns {Struct.FmodChannelRef}
 */
function fmod_system_get_channel(_index)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __ret_buffer = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_system_get_channel(_index, buffer_get_address(__ret_buffer), buffer_get_size(__ret_buffer));

    var __result__ = undefined;
    __result__ = __FmodChannelRef_decode(__ret_buffer, buffer_tell(__ret_buffer));
    return __result__;
}

/**
 * @returns {Struct.FmodChannelGroupRef}
 */
function fmod_system_get_master_channel_group()
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __ret_buffer = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_system_get_master_channel_group(buffer_get_address(__ret_buffer), buffer_get_size(__ret_buffer));

    var __result__ = undefined;
    __result__ = __FmodChannelGroupRef_decode(__ret_buffer, buffer_tell(__ret_buffer));
    return __result__;
}

// Skipping function fmod_system_set_output (no wrapper is required)


// Skipping function fmod_system_get_output (no wrapper is required)


// Skipping function fmod_system_get_num_drivers (no wrapper is required)


// Skipping function fmod_system_set_driver (no wrapper is required)


// Skipping function fmod_system_get_driver (no wrapper is required)


// Skipping function fmod_system_set_software_channels (no wrapper is required)


// Skipping function fmod_system_get_software_channels (no wrapper is required)


/**
 * @param {String} _name_or_data
 * @param {Real} _mode
 * @returns {Struct.FmodSoundRef}
 */
function fmod_system_create_sound(_name_or_data, _mode)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __ret_buffer = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_system_create_sound(_name_or_data, _mode, buffer_get_address(__ret_buffer), buffer_get_size(__ret_buffer));

    var __result__ = undefined;
    __result__ = __FmodSoundRef_decode(__ret_buffer, buffer_tell(__ret_buffer));
    return __result__;
}

/**
 * @param {String} _name_or_data
 * @param {Real} _mode
 * @returns {Struct.FmodSoundRef}
 */
function fmod_system_create_stream(_name_or_data, _mode)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __ret_buffer = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_system_create_stream(_name_or_data, _mode, buffer_get_address(__ret_buffer), buffer_get_size(__ret_buffer));

    var __result__ = undefined;
    __result__ = __FmodSoundRef_decode(__ret_buffer, buffer_tell(__ret_buffer));
    return __result__;
}

/**
 * @param {Struct.FmodSoundRef} _sound_ref
 * @param {Struct.FmodChannelGroupRef} _channel_group_ref
 * @param {Real} _pause
 * @returns {Struct.FmodChannelRef}
 */
function fmod_system_play_sound(_sound_ref, _channel_group_ref, _pause)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _sound_ref, type: struct FmodSoundRef
    if (_sound_ref.__uid != 237087423) show_error($"{_GMFUNCTION_} :: _sound_ref expected FmodSoundRef", true);
    __FmodSoundRef_encode(_sound_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _channel_group_ref, type: struct FmodChannelGroupRef
    if (_channel_group_ref.__uid != 1748069326) show_error($"{_GMFUNCTION_} :: _channel_group_ref expected FmodChannelGroupRef", true);
    __FmodChannelGroupRef_encode(_channel_group_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _pause, type: Float64
    if (!is_numeric(_pause)) show_error($"{_GMFUNCTION_} :: _pause expected number", true);
    buffer_write(__args_buffer, buffer_f64, _pause);

    var __ret_buffer = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_system_play_sound(buffer_get_address(__args_buffer), buffer_tell(__args_buffer), buffer_get_address(__ret_buffer), buffer_get_size(__ret_buffer));

    var __result__ = undefined;
    __result__ = __FmodChannelRef_decode(__ret_buffer, buffer_tell(__ret_buffer));
    return __result__;
}

/**
 * @param {Struct.FmodSoundRef} _sound_ref
 * @param {Real} _length_type
 * @returns {Real}
 */
function fmod_sound_get_length(_sound_ref, _length_type)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _sound_ref, type: struct FmodSoundRef
    if (_sound_ref.__uid != 237087423) show_error($"{_GMFUNCTION_} :: _sound_ref expected FmodSoundRef", true);
    __FmodSoundRef_encode(_sound_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _length_type, type: Float64
    if (!is_numeric(_length_type)) show_error($"{_GMFUNCTION_} :: _length_type expected number", true);
    buffer_write(__args_buffer, buffer_f64, _length_type);

    var __return_value__ = __fmod_sound_get_length(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodSoundRef} _sound_ref
 * @param {Real} _frequency
 * @param {Real} _priority
 * @returns {Real}
 */
function fmod_sound_set_defaults(_sound_ref, _frequency, _priority)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _sound_ref, type: struct FmodSoundRef
    if (_sound_ref.__uid != 237087423) show_error($"{_GMFUNCTION_} :: _sound_ref expected FmodSoundRef", true);
    __FmodSoundRef_encode(_sound_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _frequency, type: Float64
    if (!is_numeric(_frequency)) show_error($"{_GMFUNCTION_} :: _frequency expected number", true);
    buffer_write(__args_buffer, buffer_f64, _frequency);

    // param: _priority, type: Float64
    if (!is_numeric(_priority)) show_error($"{_GMFUNCTION_} :: _priority expected number", true);
    buffer_write(__args_buffer, buffer_f64, _priority);

    var __return_value__ = __fmod_sound_set_defaults(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodSoundRef} _sound_ref
 * @param {Real} _mode
 * @returns {Real}
 */
function fmod_sound_set_mode(_sound_ref, _mode)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _sound_ref, type: struct FmodSoundRef
    if (_sound_ref.__uid != 237087423) show_error($"{_GMFUNCTION_} :: _sound_ref expected FmodSoundRef", true);
    __FmodSoundRef_encode(_sound_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _mode, type: Float64
    if (!is_numeric(_mode)) show_error($"{_GMFUNCTION_} :: _mode expected number", true);
    buffer_write(__args_buffer, buffer_f64, _mode);

    var __return_value__ = __fmod_sound_set_mode(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodSoundRef} _sound_ref
 * @returns {Real}
 */
function fmod_sound_get_mode(_sound_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _sound_ref, type: struct FmodSoundRef
    if (_sound_ref.__uid != 237087423) show_error($"{_GMFUNCTION_} :: _sound_ref expected FmodSoundRef", true);
    __FmodSoundRef_encode(_sound_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_sound_get_mode(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodSoundRef} _sound_ref
 * @param {Real} _count
 * @returns {Real}
 */
function fmod_sound_set_loop_count(_sound_ref, _count)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _sound_ref, type: struct FmodSoundRef
    if (_sound_ref.__uid != 237087423) show_error($"{_GMFUNCTION_} :: _sound_ref expected FmodSoundRef", true);
    __FmodSoundRef_encode(_sound_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _count, type: Float64
    if (!is_numeric(_count)) show_error($"{_GMFUNCTION_} :: _count expected number", true);
    buffer_write(__args_buffer, buffer_f64, _count);

    var __return_value__ = __fmod_sound_set_loop_count(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodSoundRef} _sound_ref
 * @returns {Real}
 */
function fmod_sound_get_loop_count(_sound_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _sound_ref, type: struct FmodSoundRef
    if (_sound_ref.__uid != 237087423) show_error($"{_GMFUNCTION_} :: _sound_ref expected FmodSoundRef", true);
    __FmodSoundRef_encode(_sound_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_sound_get_loop_count(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodSoundRef} _sound_ref
 * @param {Real} _loop_start
 * @param {Real} _loop_start_type
 * @param {Real} _loop_end
 * @param {Real} _loop_end_type
 * @returns {Real}
 */
function fmod_sound_set_loop_points(_sound_ref, _loop_start, _loop_start_type, _loop_end, _loop_end_type)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _sound_ref, type: struct FmodSoundRef
    if (_sound_ref.__uid != 237087423) show_error($"{_GMFUNCTION_} :: _sound_ref expected FmodSoundRef", true);
    __FmodSoundRef_encode(_sound_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _loop_start, type: Float64
    if (!is_numeric(_loop_start)) show_error($"{_GMFUNCTION_} :: _loop_start expected number", true);
    buffer_write(__args_buffer, buffer_f64, _loop_start);

    // param: _loop_start_type, type: Float64
    if (!is_numeric(_loop_start_type)) show_error($"{_GMFUNCTION_} :: _loop_start_type expected number", true);
    buffer_write(__args_buffer, buffer_f64, _loop_start_type);

    // param: _loop_end, type: Float64
    if (!is_numeric(_loop_end)) show_error($"{_GMFUNCTION_} :: _loop_end expected number", true);
    buffer_write(__args_buffer, buffer_f64, _loop_end);

    // param: _loop_end_type, type: Float64
    if (!is_numeric(_loop_end_type)) show_error($"{_GMFUNCTION_} :: _loop_end_type expected number", true);
    buffer_write(__args_buffer, buffer_f64, _loop_end_type);

    var __return_value__ = __fmod_sound_set_loop_points(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodSoundRef} _sound_ref
 * @param {Real} _min
 * @param {Real} _max
 * @returns {Real}
 */
function fmod_sound_set_3d_min_max_distance(_sound_ref, _min, _max)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _sound_ref, type: struct FmodSoundRef
    if (_sound_ref.__uid != 237087423) show_error($"{_GMFUNCTION_} :: _sound_ref expected FmodSoundRef", true);
    __FmodSoundRef_encode(_sound_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _min, type: Float64
    if (!is_numeric(_min)) show_error($"{_GMFUNCTION_} :: _min expected number", true);
    buffer_write(__args_buffer, buffer_f64, _min);

    // param: _max, type: Float64
    if (!is_numeric(_max)) show_error($"{_GMFUNCTION_} :: _max expected number", true);
    buffer_write(__args_buffer, buffer_f64, _max);

    var __return_value__ = __fmod_sound_set_3d_min_max_distance(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodSoundRef} _sound_ref
 * @param {Real} _inside_cone_angle
 * @param {Real} _outside_cone_angle
 * @param {Real} _outside_volume
 * @returns {Real}
 */
function fmod_sound_set_3d_cone_settings(_sound_ref, _inside_cone_angle, _outside_cone_angle, _outside_volume)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _sound_ref, type: struct FmodSoundRef
    if (_sound_ref.__uid != 237087423) show_error($"{_GMFUNCTION_} :: _sound_ref expected FmodSoundRef", true);
    __FmodSoundRef_encode(_sound_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _inside_cone_angle, type: Float64
    if (!is_numeric(_inside_cone_angle)) show_error($"{_GMFUNCTION_} :: _inside_cone_angle expected number", true);
    buffer_write(__args_buffer, buffer_f64, _inside_cone_angle);

    // param: _outside_cone_angle, type: Float64
    if (!is_numeric(_outside_cone_angle)) show_error($"{_GMFUNCTION_} :: _outside_cone_angle expected number", true);
    buffer_write(__args_buffer, buffer_f64, _outside_cone_angle);

    // param: _outside_volume, type: Float64
    if (!is_numeric(_outside_volume)) show_error($"{_GMFUNCTION_} :: _outside_volume expected number", true);
    buffer_write(__args_buffer, buffer_f64, _outside_volume);

    var __return_value__ = __fmod_sound_set_3d_cone_settings(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodSoundRef} _sound_ref
 * @returns {Real}
 */
function fmod_sound_release(_sound_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _sound_ref, type: struct FmodSoundRef
    if (_sound_ref.__uid != 237087423) show_error($"{_GMFUNCTION_} :: _sound_ref expected FmodSoundRef", true);
    __FmodSoundRef_encode(_sound_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_sound_release(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodSoundRef} _sound_ref
 * @returns {Struct.FmodSystemRef}
 */
function fmod_sound_get_system_object(_sound_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _sound_ref, type: struct FmodSoundRef
    if (_sound_ref.__uid != 237087423) show_error($"{_GMFUNCTION_} :: _sound_ref expected FmodSoundRef", true);
    __FmodSoundRef_encode(_sound_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __ret_buffer = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_sound_get_system_object(buffer_get_address(__args_buffer), buffer_tell(__args_buffer), buffer_get_address(__ret_buffer), buffer_get_size(__ret_buffer));

    var __result__ = undefined;
    __result__ = __FmodSystemRef_decode(__ret_buffer, buffer_tell(__ret_buffer));
    return __result__;
}

/**
 * @param {Struct.FmodChannelGroupRef} _channel_group_ref
 * @returns {Real}
 */
function fmod_channel_group_get_num_channels(_channel_group_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _channel_group_ref, type: struct FmodChannelGroupRef
    if (_channel_group_ref.__uid != 1748069326) show_error($"{_GMFUNCTION_} :: _channel_group_ref expected FmodChannelGroupRef", true);
    __FmodChannelGroupRef_encode(_channel_group_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_channel_group_get_num_channels(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodChannelGroupRef} _channel_group_ref
 * @param {Real} _index
 * @returns {Struct.FmodChannelRef}
 */
function fmod_channel_group_get_channel(_channel_group_ref, _index)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _channel_group_ref, type: struct FmodChannelGroupRef
    if (_channel_group_ref.__uid != 1748069326) show_error($"{_GMFUNCTION_} :: _channel_group_ref expected FmodChannelGroupRef", true);
    __FmodChannelGroupRef_encode(_channel_group_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _index, type: Float64
    if (!is_numeric(_index)) show_error($"{_GMFUNCTION_} :: _index expected number", true);
    buffer_write(__args_buffer, buffer_f64, _index);

    var __ret_buffer = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_channel_group_get_channel(buffer_get_address(__args_buffer), buffer_tell(__args_buffer), buffer_get_address(__ret_buffer), buffer_get_size(__ret_buffer));

    var __result__ = undefined;
    __result__ = __FmodChannelRef_decode(__ret_buffer, buffer_tell(__ret_buffer));
    return __result__;
}

/**
 * @param {Struct.FmodChannelGroupRef} _channel_group_ref
 * @param {Struct.FmodChannelGroupRef} _child_channel_group_ref
 * @param {Real} _propagate_dsp_clock
 * @returns {Struct.FmodDSPConnectionRef}
 */
function fmod_channel_group_add_group(_channel_group_ref, _child_channel_group_ref, _propagate_dsp_clock)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _channel_group_ref, type: struct FmodChannelGroupRef
    if (_channel_group_ref.__uid != 1748069326) show_error($"{_GMFUNCTION_} :: _channel_group_ref expected FmodChannelGroupRef", true);
    __FmodChannelGroupRef_encode(_channel_group_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _child_channel_group_ref, type: struct FmodChannelGroupRef
    if (_child_channel_group_ref.__uid != 1748069326) show_error($"{_GMFUNCTION_} :: _child_channel_group_ref expected FmodChannelGroupRef", true);
    __FmodChannelGroupRef_encode(_child_channel_group_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _propagate_dsp_clock, type: Float64
    if (!is_numeric(_propagate_dsp_clock)) show_error($"{_GMFUNCTION_} :: _propagate_dsp_clock expected number", true);
    buffer_write(__args_buffer, buffer_f64, _propagate_dsp_clock);

    var __ret_buffer = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_channel_group_add_group(buffer_get_address(__args_buffer), buffer_tell(__args_buffer), buffer_get_address(__ret_buffer), buffer_get_size(__ret_buffer));

    var __result__ = undefined;
    __result__ = __FmodDSPConnectionRef_decode(__ret_buffer, buffer_tell(__ret_buffer));
    return __result__;
}

/**
 * @param {Struct.FmodChannelGroupRef} _channel_group_ref
 * @returns {Real}
 */
function fmod_channel_group_get_num_groups(_channel_group_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _channel_group_ref, type: struct FmodChannelGroupRef
    if (_channel_group_ref.__uid != 1748069326) show_error($"{_GMFUNCTION_} :: _channel_group_ref expected FmodChannelGroupRef", true);
    __FmodChannelGroupRef_encode(_channel_group_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_channel_group_get_num_groups(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodChannelGroupRef} _channel_group_ref
 * @param {Real} _group_index
 * @returns {Struct.FmodChannelGroupRef}
 */
function fmod_channel_group_get_group(_channel_group_ref, _group_index)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _channel_group_ref, type: struct FmodChannelGroupRef
    if (_channel_group_ref.__uid != 1748069326) show_error($"{_GMFUNCTION_} :: _channel_group_ref expected FmodChannelGroupRef", true);
    __FmodChannelGroupRef_encode(_channel_group_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _group_index, type: Float64
    if (!is_numeric(_group_index)) show_error($"{_GMFUNCTION_} :: _group_index expected number", true);
    buffer_write(__args_buffer, buffer_f64, _group_index);

    var __ret_buffer = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_channel_group_get_group(buffer_get_address(__args_buffer), buffer_tell(__args_buffer), buffer_get_address(__ret_buffer), buffer_get_size(__ret_buffer));

    var __result__ = undefined;
    __result__ = __FmodChannelGroupRef_decode(__ret_buffer, buffer_tell(__ret_buffer));
    return __result__;
}

/**
 * @param {Struct.FmodChannelGroupRef} _channel_group_ref
 * @returns {Struct.FmodChannelGroupRef}
 */
function fmod_channel_group_get_parent_group(_channel_group_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _channel_group_ref, type: struct FmodChannelGroupRef
    if (_channel_group_ref.__uid != 1748069326) show_error($"{_GMFUNCTION_} :: _channel_group_ref expected FmodChannelGroupRef", true);
    __FmodChannelGroupRef_encode(_channel_group_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __ret_buffer = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_channel_group_get_parent_group(buffer_get_address(__args_buffer), buffer_tell(__args_buffer), buffer_get_address(__ret_buffer), buffer_get_size(__ret_buffer));

    var __result__ = undefined;
    __result__ = __FmodChannelGroupRef_decode(__ret_buffer, buffer_tell(__ret_buffer));
    return __result__;
}

/**
 * @param {Struct.FmodChannelGroupRef} _channel_group_ref
 * @returns {String}
 */
function fmod_channel_group_get_name(_channel_group_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _channel_group_ref, type: struct FmodChannelGroupRef
    if (_channel_group_ref.__uid != 1748069326) show_error($"{_GMFUNCTION_} :: _channel_group_ref expected FmodChannelGroupRef", true);
    __FmodChannelGroupRef_encode(_channel_group_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_channel_group_get_name(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodChannelGroupRef} _channel_group_ref
 * @returns {Real}
 */
function fmod_channel_group_release(_channel_group_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _channel_group_ref, type: struct FmodChannelGroupRef
    if (_channel_group_ref.__uid != 1748069326) show_error($"{_GMFUNCTION_} :: _channel_group_ref expected FmodChannelGroupRef", true);
    __FmodChannelGroupRef_encode(_channel_group_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_channel_group_release(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodChannelGroupRef} _channel_group_ref
 * @returns {Struct.FmodSystemRef}
 */
function fmod_channel_group_get_system_object(_channel_group_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _channel_group_ref, type: struct FmodChannelGroupRef
    if (_channel_group_ref.__uid != 1748069326) show_error($"{_GMFUNCTION_} :: _channel_group_ref expected FmodChannelGroupRef", true);
    __FmodChannelGroupRef_encode(_channel_group_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __ret_buffer = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_channel_group_get_system_object(buffer_get_address(__args_buffer), buffer_tell(__args_buffer), buffer_get_address(__ret_buffer), buffer_get_size(__ret_buffer));

    var __result__ = undefined;
    __result__ = __FmodSystemRef_decode(__ret_buffer, buffer_tell(__ret_buffer));
    return __result__;
}

/**
 * @param {Struct.FmodSoundGroupRef} _sound_group_ref
 * @param {Real} _max_audible
 * @returns {Real}
 */
function fmod_sound_group_set_max_audible(_sound_group_ref, _max_audible)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _sound_group_ref, type: struct FmodSoundGroupRef
    if (_sound_group_ref.__uid != 1515681958) show_error($"{_GMFUNCTION_} :: _sound_group_ref expected FmodSoundGroupRef", true);
    __FmodSoundGroupRef_encode(_sound_group_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _max_audible, type: Float64
    if (!is_numeric(_max_audible)) show_error($"{_GMFUNCTION_} :: _max_audible expected number", true);
    buffer_write(__args_buffer, buffer_f64, _max_audible);

    var __return_value__ = __fmod_sound_group_set_max_audible(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodSoundGroupRef} _sound_group_ref
 * @returns {Real}
 */
function fmod_sound_group_get_max_audible(_sound_group_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _sound_group_ref, type: struct FmodSoundGroupRef
    if (_sound_group_ref.__uid != 1515681958) show_error($"{_GMFUNCTION_} :: _sound_group_ref expected FmodSoundGroupRef", true);
    __FmodSoundGroupRef_encode(_sound_group_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_sound_group_get_max_audible(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodSoundGroupRef} _sound_group_ref
 * @param {Real} _behavior
 * @returns {Real}
 */
function fmod_sound_group_set_max_audible_behavior(_sound_group_ref, _behavior)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _sound_group_ref, type: struct FmodSoundGroupRef
    if (_sound_group_ref.__uid != 1515681958) show_error($"{_GMFUNCTION_} :: _sound_group_ref expected FmodSoundGroupRef", true);
    __FmodSoundGroupRef_encode(_sound_group_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _behavior, type: Float64
    if (!is_numeric(_behavior)) show_error($"{_GMFUNCTION_} :: _behavior expected number", true);
    buffer_write(__args_buffer, buffer_f64, _behavior);

    var __return_value__ = __fmod_sound_group_set_max_audible_behavior(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodSoundGroupRef} _sound_group_ref
 * @returns {Real}
 */
function fmod_sound_group_get_max_audible_behavior(_sound_group_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _sound_group_ref, type: struct FmodSoundGroupRef
    if (_sound_group_ref.__uid != 1515681958) show_error($"{_GMFUNCTION_} :: _sound_group_ref expected FmodSoundGroupRef", true);
    __FmodSoundGroupRef_encode(_sound_group_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_sound_group_get_max_audible_behavior(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodSoundGroupRef} _sound_group_ref
 * @param {Real} _speed
 * @returns {Real}
 */
function fmod_sound_group_set_mute_fade_speed(_sound_group_ref, _speed)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _sound_group_ref, type: struct FmodSoundGroupRef
    if (_sound_group_ref.__uid != 1515681958) show_error($"{_GMFUNCTION_} :: _sound_group_ref expected FmodSoundGroupRef", true);
    __FmodSoundGroupRef_encode(_sound_group_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _speed, type: Float64
    if (!is_numeric(_speed)) show_error($"{_GMFUNCTION_} :: _speed expected number", true);
    buffer_write(__args_buffer, buffer_f64, _speed);

    var __return_value__ = __fmod_sound_group_set_mute_fade_speed(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodSoundGroupRef} _sound_group_ref
 * @returns {Real}
 */
function fmod_sound_group_get_mute_fade_speed(_sound_group_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _sound_group_ref, type: struct FmodSoundGroupRef
    if (_sound_group_ref.__uid != 1515681958) show_error($"{_GMFUNCTION_} :: _sound_group_ref expected FmodSoundGroupRef", true);
    __FmodSoundGroupRef_encode(_sound_group_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_sound_group_get_mute_fade_speed(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodSoundGroupRef} _sound_group_ref
 * @param {Real} _volume
 * @returns {Real}
 */
function fmod_sound_group_set_volume(_sound_group_ref, _volume)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _sound_group_ref, type: struct FmodSoundGroupRef
    if (_sound_group_ref.__uid != 1515681958) show_error($"{_GMFUNCTION_} :: _sound_group_ref expected FmodSoundGroupRef", true);
    __FmodSoundGroupRef_encode(_sound_group_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _volume, type: Float64
    if (!is_numeric(_volume)) show_error($"{_GMFUNCTION_} :: _volume expected number", true);
    buffer_write(__args_buffer, buffer_f64, _volume);

    var __return_value__ = __fmod_sound_group_set_volume(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodSoundGroupRef} _sound_group_ref
 * @returns {Real}
 */
function fmod_sound_group_get_volume(_sound_group_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _sound_group_ref, type: struct FmodSoundGroupRef
    if (_sound_group_ref.__uid != 1515681958) show_error($"{_GMFUNCTION_} :: _sound_group_ref expected FmodSoundGroupRef", true);
    __FmodSoundGroupRef_encode(_sound_group_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_sound_group_get_volume(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodSoundGroupRef} _sound_group_ref
 * @returns {Real}
 */
function fmod_sound_group_get_num_sounds(_sound_group_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _sound_group_ref, type: struct FmodSoundGroupRef
    if (_sound_group_ref.__uid != 1515681958) show_error($"{_GMFUNCTION_} :: _sound_group_ref expected FmodSoundGroupRef", true);
    __FmodSoundGroupRef_encode(_sound_group_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_sound_group_get_num_sounds(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodSoundGroupRef} _sound_group_ref
 * @param {Real} _sound_index
 * @returns {Struct.FmodSoundRef}
 */
function fmod_sound_group_get_sound(_sound_group_ref, _sound_index)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _sound_group_ref, type: struct FmodSoundGroupRef
    if (_sound_group_ref.__uid != 1515681958) show_error($"{_GMFUNCTION_} :: _sound_group_ref expected FmodSoundGroupRef", true);
    __FmodSoundGroupRef_encode(_sound_group_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _sound_index, type: Float64
    if (!is_numeric(_sound_index)) show_error($"{_GMFUNCTION_} :: _sound_index expected number", true);
    buffer_write(__args_buffer, buffer_f64, _sound_index);

    var __ret_buffer = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_sound_group_get_sound(buffer_get_address(__args_buffer), buffer_tell(__args_buffer), buffer_get_address(__ret_buffer), buffer_get_size(__ret_buffer));

    var __result__ = undefined;
    __result__ = __FmodSoundRef_decode(__ret_buffer, buffer_tell(__ret_buffer));
    return __result__;
}

/**
 * @param {Struct.FmodSoundGroupRef} _sound_group_ref
 * @returns {Real}
 */
function fmod_sound_group_get_num_playing(_sound_group_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _sound_group_ref, type: struct FmodSoundGroupRef
    if (_sound_group_ref.__uid != 1515681958) show_error($"{_GMFUNCTION_} :: _sound_group_ref expected FmodSoundGroupRef", true);
    __FmodSoundGroupRef_encode(_sound_group_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_sound_group_get_num_playing(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodSoundGroupRef} _sound_group_ref
 * @returns {Real}
 */
function fmod_sound_group_stop(_sound_group_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _sound_group_ref, type: struct FmodSoundGroupRef
    if (_sound_group_ref.__uid != 1515681958) show_error($"{_GMFUNCTION_} :: _sound_group_ref expected FmodSoundGroupRef", true);
    __FmodSoundGroupRef_encode(_sound_group_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_sound_group_stop(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodSoundGroupRef} _sound_group_ref
 * @returns {String}
 */
function fmod_sound_group_get_name(_sound_group_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _sound_group_ref, type: struct FmodSoundGroupRef
    if (_sound_group_ref.__uid != 1515681958) show_error($"{_GMFUNCTION_} :: _sound_group_ref expected FmodSoundGroupRef", true);
    __FmodSoundGroupRef_encode(_sound_group_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_sound_group_get_name(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodSoundGroupRef} _sound_group_ref
 * @returns {Real}
 */
function fmod_sound_group_release(_sound_group_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _sound_group_ref, type: struct FmodSoundGroupRef
    if (_sound_group_ref.__uid != 1515681958) show_error($"{_GMFUNCTION_} :: _sound_group_ref expected FmodSoundGroupRef", true);
    __FmodSoundGroupRef_encode(_sound_group_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_sound_group_release(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodSoundGroupRef} _sound_group_ref
 * @returns {Struct.FmodSystemRef}
 */
function fmod_sound_group_get_system_object(_sound_group_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _sound_group_ref, type: struct FmodSoundGroupRef
    if (_sound_group_ref.__uid != 1515681958) show_error($"{_GMFUNCTION_} :: _sound_group_ref expected FmodSoundGroupRef", true);
    __FmodSoundGroupRef_encode(_sound_group_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __ret_buffer = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_sound_group_get_system_object(buffer_get_address(__args_buffer), buffer_tell(__args_buffer), buffer_get_address(__ret_buffer), buffer_get_size(__ret_buffer));

    var __result__ = undefined;
    __result__ = __FmodSystemRef_decode(__ret_buffer, buffer_tell(__ret_buffer));
    return __result__;
}

/**
 * @param {Struct.FmodReverb3DRef} _reverb_3d_ref
 * @param {Real} _active
 * @returns {Real}
 */
function fmod_reverb_3d_set_active(_reverb_3d_ref, _active)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _reverb_3d_ref, type: struct FmodReverb3DRef
    if (_reverb_3d_ref.__uid != 1101904757) show_error($"{_GMFUNCTION_} :: _reverb_3d_ref expected FmodReverb3DRef", true);
    __FmodReverb3DRef_encode(_reverb_3d_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _active, type: Float64
    if (!is_numeric(_active)) show_error($"{_GMFUNCTION_} :: _active expected number", true);
    buffer_write(__args_buffer, buffer_f64, _active);

    var __return_value__ = __fmod_reverb_3d_set_active(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodReverb3DRef} _reverb_3d_ref
 * @returns {Real}
 */
function fmod_reverb_3d_get_active(_reverb_3d_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _reverb_3d_ref, type: struct FmodReverb3DRef
    if (_reverb_3d_ref.__uid != 1101904757) show_error($"{_GMFUNCTION_} :: _reverb_3d_ref expected FmodReverb3DRef", true);
    __FmodReverb3DRef_encode(_reverb_3d_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_reverb_3d_get_active(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodReverb3DRef} _reverb_3d_ref
 * @param {Real} _decay_time
 * @param {Real} _early_delay
 * @param {Real} _late_delay
 * @param {Real} _hf_reference
 * @param {Real} _hf_decay_ratio
 * @param {Real} _diffusion
 * @param {Real} _density
 * @param {Real} _low_shelf_frequency
 * @param {Real} _low_shelf_gain
 * @param {Real} _high_cut
 * @param {Real} _early_late_mix
 * @param {Real} _wet_level
 * @returns {Real}
 */
function fmod_reverb_3d_set_properties(_reverb_3d_ref, _decay_time, _early_delay, _late_delay, _hf_reference, _hf_decay_ratio, _diffusion, _density, _low_shelf_frequency, _low_shelf_gain, _high_cut, _early_late_mix, _wet_level)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _reverb_3d_ref, type: struct FmodReverb3DRef
    if (_reverb_3d_ref.__uid != 1101904757) show_error($"{_GMFUNCTION_} :: _reverb_3d_ref expected FmodReverb3DRef", true);
    __FmodReverb3DRef_encode(_reverb_3d_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _decay_time, type: Float64
    if (!is_numeric(_decay_time)) show_error($"{_GMFUNCTION_} :: _decay_time expected number", true);
    buffer_write(__args_buffer, buffer_f64, _decay_time);

    // param: _early_delay, type: Float64
    if (!is_numeric(_early_delay)) show_error($"{_GMFUNCTION_} :: _early_delay expected number", true);
    buffer_write(__args_buffer, buffer_f64, _early_delay);

    // param: _late_delay, type: Float64
    if (!is_numeric(_late_delay)) show_error($"{_GMFUNCTION_} :: _late_delay expected number", true);
    buffer_write(__args_buffer, buffer_f64, _late_delay);

    // param: _hf_reference, type: Float64
    if (!is_numeric(_hf_reference)) show_error($"{_GMFUNCTION_} :: _hf_reference expected number", true);
    buffer_write(__args_buffer, buffer_f64, _hf_reference);

    // param: _hf_decay_ratio, type: Float64
    if (!is_numeric(_hf_decay_ratio)) show_error($"{_GMFUNCTION_} :: _hf_decay_ratio expected number", true);
    buffer_write(__args_buffer, buffer_f64, _hf_decay_ratio);

    // param: _diffusion, type: Float64
    if (!is_numeric(_diffusion)) show_error($"{_GMFUNCTION_} :: _diffusion expected number", true);
    buffer_write(__args_buffer, buffer_f64, _diffusion);

    // param: _density, type: Float64
    if (!is_numeric(_density)) show_error($"{_GMFUNCTION_} :: _density expected number", true);
    buffer_write(__args_buffer, buffer_f64, _density);

    // param: _low_shelf_frequency, type: Float64
    if (!is_numeric(_low_shelf_frequency)) show_error($"{_GMFUNCTION_} :: _low_shelf_frequency expected number", true);
    buffer_write(__args_buffer, buffer_f64, _low_shelf_frequency);

    // param: _low_shelf_gain, type: Float64
    if (!is_numeric(_low_shelf_gain)) show_error($"{_GMFUNCTION_} :: _low_shelf_gain expected number", true);
    buffer_write(__args_buffer, buffer_f64, _low_shelf_gain);

    // param: _high_cut, type: Float64
    if (!is_numeric(_high_cut)) show_error($"{_GMFUNCTION_} :: _high_cut expected number", true);
    buffer_write(__args_buffer, buffer_f64, _high_cut);

    // param: _early_late_mix, type: Float64
    if (!is_numeric(_early_late_mix)) show_error($"{_GMFUNCTION_} :: _early_late_mix expected number", true);
    buffer_write(__args_buffer, buffer_f64, _early_late_mix);

    // param: _wet_level, type: Float64
    if (!is_numeric(_wet_level)) show_error($"{_GMFUNCTION_} :: _wet_level expected number", true);
    buffer_write(__args_buffer, buffer_f64, _wet_level);

    var __return_value__ = __fmod_reverb_3d_set_properties(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodReverb3DRef} _reverb_3d_ref
 * @returns {Real}
 */
function fmod_reverb_3d_release(_reverb_3d_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _reverb_3d_ref, type: struct FmodReverb3DRef
    if (_reverb_3d_ref.__uid != 1101904757) show_error($"{_GMFUNCTION_} :: _reverb_3d_ref expected FmodReverb3DRef", true);
    __FmodReverb3DRef_encode(_reverb_3d_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_reverb_3d_release(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

// Skipping function fmod_channel_control_is_playing (no wrapper is required)


// Skipping function fmod_channel_control_stop (no wrapper is required)


// Skipping function fmod_channel_control_set_paused (no wrapper is required)


// Skipping function fmod_channel_control_get_paused (no wrapper is required)


// Skipping function fmod_channel_control_set_mode (no wrapper is required)


// Skipping function fmod_channel_control_get_mode (no wrapper is required)


// Skipping function fmod_channel_control_set_pitch (no wrapper is required)


// Skipping function fmod_channel_control_get_pitch (no wrapper is required)


// Skipping function fmod_channel_control_get_audibility (no wrapper is required)


// Skipping function fmod_channel_control_set_volume (no wrapper is required)


// Skipping function fmod_channel_control_get_volume (no wrapper is required)


// Skipping function fmod_channel_control_set_volume_ramp (no wrapper is required)


// Skipping function fmod_channel_control_get_volume_ramp (no wrapper is required)


// Skipping function fmod_channel_control_set_mute (no wrapper is required)


// Skipping function fmod_channel_control_get_mute (no wrapper is required)


// Skipping function fmod_channel_control_set_3d_doppler_level (no wrapper is required)


// Skipping function fmod_channel_control_get_3d_doppler_level (no wrapper is required)


// Skipping function fmod_channel_control_set_3d_level (no wrapper is required)


// Skipping function fmod_channel_control_get_3d_level (no wrapper is required)


// Skipping function fmod_channel_control_set_3d_min_max_distance (no wrapper is required)


// Skipping function fmod_channel_control_set_3d_cone_settings (no wrapper is required)


// Skipping function fmod_channel_control_set_3d_occlusion (no wrapper is required)


// Skipping function fmod_channel_control_set_3d_spread (no wrapper is required)


// Skipping function fmod_channel_control_get_3d_spread (no wrapper is required)


// Skipping function fmod_channel_control_set_3d_distance_filter (no wrapper is required)


// Skipping function fmod_channel_control_set_pan (no wrapper is required)


// Skipping function fmod_channel_control_set_mix_levels_output (no wrapper is required)


// Skipping function fmod_channel_control_set_reverb_properties (no wrapper is required)


// Skipping function fmod_channel_control_get_reverb_properties (no wrapper is required)


// Skipping function fmod_channel_control_set_low_pass_gain (no wrapper is required)


// Skipping function fmod_channel_control_get_low_pass_gain (no wrapper is required)


/**
 * @param {Real} _channel_control_ref
 * @param {Real} _dsp_chain_offset
 * @param {Struct.FmodDSPRef} _dsp_ref
 * @returns {Real}
 */
function fmod_channel_control_add_dsp(_channel_control_ref, _dsp_chain_offset, _dsp_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: Float64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer, buffer_f64, _channel_control_ref);

    // param: _dsp_chain_offset, type: Float64
    if (!is_numeric(_dsp_chain_offset)) show_error($"{_GMFUNCTION_} :: _dsp_chain_offset expected number", true);
    buffer_write(__args_buffer, buffer_f64, _dsp_chain_offset);

    // param: _dsp_ref, type: struct FmodDSPRef
    if (_dsp_ref.__uid != 4021659635) show_error($"{_GMFUNCTION_} :: _dsp_ref expected FmodDSPRef", true);
    __FmodDSPRef_encode(_dsp_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_channel_control_add_dsp(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Real} _channel_control_ref
 * @param {Struct.FmodDSPRef} _dsp_ref
 * @returns {Real}
 */
function fmod_channel_control_remove_dsp(_channel_control_ref, _dsp_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: Float64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer, buffer_f64, _channel_control_ref);

    // param: _dsp_ref, type: struct FmodDSPRef
    if (_dsp_ref.__uid != 4021659635) show_error($"{_GMFUNCTION_} :: _dsp_ref expected FmodDSPRef", true);
    __FmodDSPRef_encode(_dsp_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_channel_control_remove_dsp(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

// Skipping function fmod_channel_control_get_num_dsps (no wrapper is required)


/**
 * @param {Real} _channel_control_ref
 * @param {Real} _index
 * @returns {Struct.FmodDSPRef}
 */
function fmod_channel_control_get_dsp(_channel_control_ref, _index)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __ret_buffer = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_channel_control_get_dsp(_channel_control_ref, _index, buffer_get_address(__ret_buffer), buffer_get_size(__ret_buffer));

    var __result__ = undefined;
    __result__ = __FmodDSPRef_decode(__ret_buffer, buffer_tell(__ret_buffer));
    return __result__;
}

/**
 * @param {Real} _channel_control_ref
 * @param {Struct.FmodDSPRef} _dsp_ref
 * @param {Real} _chain_index
 * @returns {Real}
 */
function fmod_channel_control_set_dsp_index(_channel_control_ref, _dsp_ref, _chain_index)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: Float64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer, buffer_f64, _channel_control_ref);

    // param: _dsp_ref, type: struct FmodDSPRef
    if (_dsp_ref.__uid != 4021659635) show_error($"{_GMFUNCTION_} :: _dsp_ref expected FmodDSPRef", true);
    __FmodDSPRef_encode(_dsp_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _chain_index, type: Float64
    if (!is_numeric(_chain_index)) show_error($"{_GMFUNCTION_} :: _chain_index expected number", true);
    buffer_write(__args_buffer, buffer_f64, _chain_index);

    var __return_value__ = __fmod_channel_control_set_dsp_index(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Real} _channel_control_ref
 * @param {Struct.FmodDSPRef} _dsp_ref
 * @returns {Real}
 */
function fmod_channel_control_get_dsp_index(_channel_control_ref, _dsp_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: Float64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer, buffer_f64, _channel_control_ref);

    // param: _dsp_ref, type: struct FmodDSPRef
    if (_dsp_ref.__uid != 4021659635) show_error($"{_GMFUNCTION_} :: _dsp_ref expected FmodDSPRef", true);
    __FmodDSPRef_encode(_dsp_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_channel_control_get_dsp_index(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Real} _channel_control_ref
 * @returns {Struct.FmodSystemRef}
 */
function fmod_channel_control_get_system_object(_channel_control_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __ret_buffer = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_channel_control_get_system_object(_channel_control_ref, buffer_get_address(__ret_buffer), buffer_get_size(__ret_buffer));

    var __result__ = undefined;
    __result__ = __FmodSystemRef_decode(__ret_buffer, buffer_tell(__ret_buffer));
    return __result__;
}

/**
 * @param {Struct.FmodDSPRef} _dsp_ref
 * @param {Struct.FmodDSPRef} _dsp_input_ref
 * @param {Real} _dsp_connection_type
 * @returns {Struct.FmodDSPConnectionRef}
 */
function fmod_dsp_add_input(_dsp_ref, _dsp_input_ref, _dsp_connection_type)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _dsp_ref, type: struct FmodDSPRef
    if (_dsp_ref.__uid != 4021659635) show_error($"{_GMFUNCTION_} :: _dsp_ref expected FmodDSPRef", true);
    __FmodDSPRef_encode(_dsp_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _dsp_input_ref, type: struct FmodDSPRef
    if (_dsp_input_ref.__uid != 4021659635) show_error($"{_GMFUNCTION_} :: _dsp_input_ref expected FmodDSPRef", true);
    __FmodDSPRef_encode(_dsp_input_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _dsp_connection_type, type: Float64
    if (!is_numeric(_dsp_connection_type)) show_error($"{_GMFUNCTION_} :: _dsp_connection_type expected number", true);
    buffer_write(__args_buffer, buffer_f64, _dsp_connection_type);

    var __ret_buffer = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_dsp_add_input(buffer_get_address(__args_buffer), buffer_tell(__args_buffer), buffer_get_address(__ret_buffer), buffer_get_size(__ret_buffer));

    var __result__ = undefined;
    __result__ = __FmodDSPConnectionRef_decode(__ret_buffer, buffer_tell(__ret_buffer));
    return __result__;
}

/**
 * @param {Struct.FmodDSPRef} _dsp_ref
 * @returns {Real}
 */
function fmod_dsp_get_num_inputs(_dsp_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _dsp_ref, type: struct FmodDSPRef
    if (_dsp_ref.__uid != 4021659635) show_error($"{_GMFUNCTION_} :: _dsp_ref expected FmodDSPRef", true);
    __FmodDSPRef_encode(_dsp_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_dsp_get_num_inputs(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodDSPRef} _dsp_ref
 * @returns {Real}
 */
function fmod_dsp_get_num_outputs(_dsp_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _dsp_ref, type: struct FmodDSPRef
    if (_dsp_ref.__uid != 4021659635) show_error($"{_GMFUNCTION_} :: _dsp_ref expected FmodDSPRef", true);
    __FmodDSPRef_encode(_dsp_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_dsp_get_num_outputs(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodDSPRef} _dsp_ref
 * @param {Real} _inputs
 * @param {Real} _outputs
 * @returns {Real}
 */
function fmod_dsp_disconnect_all(_dsp_ref, _inputs, _outputs)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _dsp_ref, type: struct FmodDSPRef
    if (_dsp_ref.__uid != 4021659635) show_error($"{_GMFUNCTION_} :: _dsp_ref expected FmodDSPRef", true);
    __FmodDSPRef_encode(_dsp_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _inputs, type: Float64
    if (!is_numeric(_inputs)) show_error($"{_GMFUNCTION_} :: _inputs expected number", true);
    buffer_write(__args_buffer, buffer_f64, _inputs);

    // param: _outputs, type: Float64
    if (!is_numeric(_outputs)) show_error($"{_GMFUNCTION_} :: _outputs expected number", true);
    buffer_write(__args_buffer, buffer_f64, _outputs);

    var __return_value__ = __fmod_dsp_disconnect_all(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodDSPRef} _dsp_ref
 * @returns {Real}
 */
function fmod_dsp_get_num_parameters(_dsp_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _dsp_ref, type: struct FmodDSPRef
    if (_dsp_ref.__uid != 4021659635) show_error($"{_GMFUNCTION_} :: _dsp_ref expected FmodDSPRef", true);
    __FmodDSPRef_encode(_dsp_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_dsp_get_num_parameters(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodDSPRef} _dsp_ref
 * @param {Real} _index
 * @param {Real} _value
 * @returns {Real}
 */
function fmod_dsp_set_parameter_float(_dsp_ref, _index, _value)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _dsp_ref, type: struct FmodDSPRef
    if (_dsp_ref.__uid != 4021659635) show_error($"{_GMFUNCTION_} :: _dsp_ref expected FmodDSPRef", true);
    __FmodDSPRef_encode(_dsp_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _index, type: Float64
    if (!is_numeric(_index)) show_error($"{_GMFUNCTION_} :: _index expected number", true);
    buffer_write(__args_buffer, buffer_f64, _index);

    // param: _value, type: Float64
    if (!is_numeric(_value)) show_error($"{_GMFUNCTION_} :: _value expected number", true);
    buffer_write(__args_buffer, buffer_f64, _value);

    var __return_value__ = __fmod_dsp_set_parameter_float(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodDSPRef} _dsp_ref
 * @param {Real} _index
 * @returns {Real}
 */
function fmod_dsp_get_parameter_float(_dsp_ref, _index)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _dsp_ref, type: struct FmodDSPRef
    if (_dsp_ref.__uid != 4021659635) show_error($"{_GMFUNCTION_} :: _dsp_ref expected FmodDSPRef", true);
    __FmodDSPRef_encode(_dsp_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _index, type: Float64
    if (!is_numeric(_index)) show_error($"{_GMFUNCTION_} :: _index expected number", true);
    buffer_write(__args_buffer, buffer_f64, _index);

    var __return_value__ = __fmod_dsp_get_parameter_float(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodDSPRef} _dsp_ref
 * @param {Real} _index
 * @param {Real} _value
 * @returns {Real}
 */
function fmod_dsp_set_parameter_int(_dsp_ref, _index, _value)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _dsp_ref, type: struct FmodDSPRef
    if (_dsp_ref.__uid != 4021659635) show_error($"{_GMFUNCTION_} :: _dsp_ref expected FmodDSPRef", true);
    __FmodDSPRef_encode(_dsp_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _index, type: Float64
    if (!is_numeric(_index)) show_error($"{_GMFUNCTION_} :: _index expected number", true);
    buffer_write(__args_buffer, buffer_f64, _index);

    // param: _value, type: Float64
    if (!is_numeric(_value)) show_error($"{_GMFUNCTION_} :: _value expected number", true);
    buffer_write(__args_buffer, buffer_f64, _value);

    var __return_value__ = __fmod_dsp_set_parameter_int(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodDSPRef} _dsp_ref
 * @param {Real} _index
 * @returns {Real}
 */
function fmod_dsp_get_parameter_int(_dsp_ref, _index)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _dsp_ref, type: struct FmodDSPRef
    if (_dsp_ref.__uid != 4021659635) show_error($"{_GMFUNCTION_} :: _dsp_ref expected FmodDSPRef", true);
    __FmodDSPRef_encode(_dsp_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _index, type: Float64
    if (!is_numeric(_index)) show_error($"{_GMFUNCTION_} :: _index expected number", true);
    buffer_write(__args_buffer, buffer_f64, _index);

    var __return_value__ = __fmod_dsp_get_parameter_int(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodDSPRef} _dsp_ref
 * @param {Real} _index
 * @param {Real} _value
 * @returns {Real}
 */
function fmod_dsp_set_parameter_bool(_dsp_ref, _index, _value)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _dsp_ref, type: struct FmodDSPRef
    if (_dsp_ref.__uid != 4021659635) show_error($"{_GMFUNCTION_} :: _dsp_ref expected FmodDSPRef", true);
    __FmodDSPRef_encode(_dsp_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _index, type: Float64
    if (!is_numeric(_index)) show_error($"{_GMFUNCTION_} :: _index expected number", true);
    buffer_write(__args_buffer, buffer_f64, _index);

    // param: _value, type: Float64
    if (!is_numeric(_value)) show_error($"{_GMFUNCTION_} :: _value expected number", true);
    buffer_write(__args_buffer, buffer_f64, _value);

    var __return_value__ = __fmod_dsp_set_parameter_bool(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodDSPRef} _dsp_ref
 * @param {Real} _index
 * @returns {Real}
 */
function fmod_dsp_get_parameter_bool(_dsp_ref, _index)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _dsp_ref, type: struct FmodDSPRef
    if (_dsp_ref.__uid != 4021659635) show_error($"{_GMFUNCTION_} :: _dsp_ref expected FmodDSPRef", true);
    __FmodDSPRef_encode(_dsp_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _index, type: Float64
    if (!is_numeric(_index)) show_error($"{_GMFUNCTION_} :: _index expected number", true);
    buffer_write(__args_buffer, buffer_f64, _index);

    var __return_value__ = __fmod_dsp_get_parameter_bool(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodDSPRef} _dsp_ref
 * @returns {Real}
 */
function fmod_dsp_release(_dsp_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _dsp_ref, type: struct FmodDSPRef
    if (_dsp_ref.__uid != 4021659635) show_error($"{_GMFUNCTION_} :: _dsp_ref expected FmodDSPRef", true);
    __FmodDSPRef_encode(_dsp_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_dsp_release(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodDSPRef} _dsp_ref
 * @returns {Struct.FmodSystemRef}
 */
function fmod_dsp_get_system_object(_dsp_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _dsp_ref, type: struct FmodDSPRef
    if (_dsp_ref.__uid != 4021659635) show_error($"{_GMFUNCTION_} :: _dsp_ref expected FmodDSPRef", true);
    __FmodDSPRef_encode(_dsp_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __ret_buffer = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_dsp_get_system_object(buffer_get_address(__args_buffer), buffer_tell(__args_buffer), buffer_get_address(__ret_buffer), buffer_get_size(__ret_buffer));

    var __result__ = undefined;
    __result__ = __FmodSystemRef_decode(__ret_buffer, buffer_tell(__ret_buffer));
    return __result__;
}

/**
 * @param {Struct.FmodGeometryRef} _geometry_ref
 * @param {Real} _polygon_index
 * @param {Real} _direct_occlusion
 * @param {Real} _reverb_occlusion
 * @param {Real} _double_sided
 * @returns {Real}
 */
function fmod_geometry_set_polygon_attributes(_geometry_ref, _polygon_index, _direct_occlusion, _reverb_occlusion, _double_sided)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _geometry_ref, type: struct FmodGeometryRef
    if (_geometry_ref.__uid != 55360464) show_error($"{_GMFUNCTION_} :: _geometry_ref expected FmodGeometryRef", true);
    __FmodGeometryRef_encode(_geometry_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _polygon_index, type: Float64
    if (!is_numeric(_polygon_index)) show_error($"{_GMFUNCTION_} :: _polygon_index expected number", true);
    buffer_write(__args_buffer, buffer_f64, _polygon_index);

    // param: _direct_occlusion, type: Float64
    if (!is_numeric(_direct_occlusion)) show_error($"{_GMFUNCTION_} :: _direct_occlusion expected number", true);
    buffer_write(__args_buffer, buffer_f64, _direct_occlusion);

    // param: _reverb_occlusion, type: Float64
    if (!is_numeric(_reverb_occlusion)) show_error($"{_GMFUNCTION_} :: _reverb_occlusion expected number", true);
    buffer_write(__args_buffer, buffer_f64, _reverb_occlusion);

    // param: _double_sided, type: Float64
    if (!is_numeric(_double_sided)) show_error($"{_GMFUNCTION_} :: _double_sided expected number", true);
    buffer_write(__args_buffer, buffer_f64, _double_sided);

    var __return_value__ = __fmod_geometry_set_polygon_attributes(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodGeometryRef} _geometry_ref
 * @param {Real} _polygon_index
 * @returns {Real}
 */
function fmod_geometry_get_polygon_num_vertices(_geometry_ref, _polygon_index)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _geometry_ref, type: struct FmodGeometryRef
    if (_geometry_ref.__uid != 55360464) show_error($"{_GMFUNCTION_} :: _geometry_ref expected FmodGeometryRef", true);
    __FmodGeometryRef_encode(_geometry_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _polygon_index, type: Float64
    if (!is_numeric(_polygon_index)) show_error($"{_GMFUNCTION_} :: _polygon_index expected number", true);
    buffer_write(__args_buffer, buffer_f64, _polygon_index);

    var __return_value__ = __fmod_geometry_get_polygon_num_vertices(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodGeometryRef} _geometry_ref
 * @param {Real} _x
 * @param {Real} _y
 * @param {Real} _z
 * @returns {Real}
 */
function fmod_geometry_set_position(_geometry_ref, _x, _y, _z)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _geometry_ref, type: struct FmodGeometryRef
    if (_geometry_ref.__uid != 55360464) show_error($"{_GMFUNCTION_} :: _geometry_ref expected FmodGeometryRef", true);
    __FmodGeometryRef_encode(_geometry_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _x, type: Float64
    if (!is_numeric(_x)) show_error($"{_GMFUNCTION_} :: _x expected number", true);
    buffer_write(__args_buffer, buffer_f64, _x);

    // param: _y, type: Float64
    if (!is_numeric(_y)) show_error($"{_GMFUNCTION_} :: _y expected number", true);
    buffer_write(__args_buffer, buffer_f64, _y);

    // param: _z, type: Float64
    if (!is_numeric(_z)) show_error($"{_GMFUNCTION_} :: _z expected number", true);
    buffer_write(__args_buffer, buffer_f64, _z);

    var __return_value__ = __fmod_geometry_set_position(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodGeometryRef} _geometry_ref
 * @param {Real} _forward_x
 * @param {Real} _forward_y
 * @param {Real} _forward_z
 * @param {Real} _up_x
 * @param {Real} _up_y
 * @param {Real} _up_z
 * @returns {Real}
 */
function fmod_geometry_set_rotation(_geometry_ref, _forward_x, _forward_y, _forward_z, _up_x, _up_y, _up_z)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _geometry_ref, type: struct FmodGeometryRef
    if (_geometry_ref.__uid != 55360464) show_error($"{_GMFUNCTION_} :: _geometry_ref expected FmodGeometryRef", true);
    __FmodGeometryRef_encode(_geometry_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _forward_x, type: Float64
    if (!is_numeric(_forward_x)) show_error($"{_GMFUNCTION_} :: _forward_x expected number", true);
    buffer_write(__args_buffer, buffer_f64, _forward_x);

    // param: _forward_y, type: Float64
    if (!is_numeric(_forward_y)) show_error($"{_GMFUNCTION_} :: _forward_y expected number", true);
    buffer_write(__args_buffer, buffer_f64, _forward_y);

    // param: _forward_z, type: Float64
    if (!is_numeric(_forward_z)) show_error($"{_GMFUNCTION_} :: _forward_z expected number", true);
    buffer_write(__args_buffer, buffer_f64, _forward_z);

    // param: _up_x, type: Float64
    if (!is_numeric(_up_x)) show_error($"{_GMFUNCTION_} :: _up_x expected number", true);
    buffer_write(__args_buffer, buffer_f64, _up_x);

    // param: _up_y, type: Float64
    if (!is_numeric(_up_y)) show_error($"{_GMFUNCTION_} :: _up_y expected number", true);
    buffer_write(__args_buffer, buffer_f64, _up_y);

    // param: _up_z, type: Float64
    if (!is_numeric(_up_z)) show_error($"{_GMFUNCTION_} :: _up_z expected number", true);
    buffer_write(__args_buffer, buffer_f64, _up_z);

    var __return_value__ = __fmod_geometry_set_rotation(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodGeometryRef} _geometry_ref
 * @param {Real} _scale_x
 * @param {Real} _scale_y
 * @param {Real} _scale_z
 * @returns {Real}
 */
function fmod_geometry_set_scale(_geometry_ref, _scale_x, _scale_y, _scale_z)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _geometry_ref, type: struct FmodGeometryRef
    if (_geometry_ref.__uid != 55360464) show_error($"{_GMFUNCTION_} :: _geometry_ref expected FmodGeometryRef", true);
    __FmodGeometryRef_encode(_geometry_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _scale_x, type: Float64
    if (!is_numeric(_scale_x)) show_error($"{_GMFUNCTION_} :: _scale_x expected number", true);
    buffer_write(__args_buffer, buffer_f64, _scale_x);

    // param: _scale_y, type: Float64
    if (!is_numeric(_scale_y)) show_error($"{_GMFUNCTION_} :: _scale_y expected number", true);
    buffer_write(__args_buffer, buffer_f64, _scale_y);

    // param: _scale_z, type: Float64
    if (!is_numeric(_scale_z)) show_error($"{_GMFUNCTION_} :: _scale_z expected number", true);
    buffer_write(__args_buffer, buffer_f64, _scale_z);

    var __return_value__ = __fmod_geometry_set_scale(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodGeometryRef} _geometry_ref
 * @param {String} _filename
 * @returns {Real}
 */
function fmod_geometry_save(_geometry_ref, _filename)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _geometry_ref, type: struct FmodGeometryRef
    if (_geometry_ref.__uid != 55360464) show_error($"{_GMFUNCTION_} :: _geometry_ref expected FmodGeometryRef", true);
    __FmodGeometryRef_encode(_geometry_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _filename, type: String
    if (!is_string(_filename)) show_error($"{_GMFUNCTION_} :: _filename expected string", true);
    buffer_write(__args_buffer, buffer_u32, string_byte_length(_filename));
    buffer_write(__args_buffer, buffer_string, _filename);

    var __return_value__ = __fmod_geometry_save(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodGeometryRef} _geometry_ref
 * @returns {Real}
 */
function fmod_geometry_release(_geometry_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _geometry_ref, type: struct FmodGeometryRef
    if (_geometry_ref.__uid != 55360464) show_error($"{_GMFUNCTION_} :: _geometry_ref expected FmodGeometryRef", true);
    __FmodGeometryRef_encode(_geometry_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_geometry_release(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @returns {Struct.FmodStudioSystemRef}
 */
function fmod_studio_system_create()
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __ret_buffer = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_system_create(buffer_get_address(__ret_buffer), buffer_get_size(__ret_buffer));

    var __result__ = undefined;
    __result__ = __FmodStudioSystemRef_decode(__ret_buffer, buffer_tell(__ret_buffer));
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
 * @returns {Struct.FmodStudioBankRef}
 */
function fmod_studio_system_load_bank_file(_filename, _flags)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __ret_buffer = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_system_load_bank_file(_filename, _flags, buffer_get_address(__ret_buffer), buffer_get_size(__ret_buffer));

    var __result__ = undefined;
    if (buffer_read(__ret_buffer, buffer_bool))
    {
        __result__ = __FmodStudioBankRef_decode(__ret_buffer, buffer_tell(__ret_buffer));
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
 * @returns {Struct.FmodStudioBankRef}
 */
function fmod_studio_system_load_bank_memory(_data, _flags)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __ret_buffer = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_system_load_bank_memory(_data, _flags, buffer_get_address(__ret_buffer), buffer_get_size(__ret_buffer));

    var __result__ = undefined;
    if (buffer_read(__ret_buffer, buffer_bool))
    {
        __result__ = __FmodStudioBankRef_decode(__ret_buffer, buffer_tell(__ret_buffer));
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
 * @returns {Struct.FmodStudioBankRef}
 */
function fmod_studio_system_get_bank_at(_index)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __ret_buffer = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_system_get_bank_at(_index, buffer_get_address(__ret_buffer), buffer_get_size(__ret_buffer));

    var __result__ = undefined;
    if (buffer_read(__ret_buffer, buffer_bool))
    {
        __result__ = __FmodStudioBankRef_decode(__ret_buffer, buffer_tell(__ret_buffer));
    }
    else
    {
        __result__ = undefined;
    }
    return __result__;
}

/**
 * @param {String} _path
 * @returns {Struct.FmodStudioBankRef}
 */
function fmod_studio_system_get_bank(_path)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __ret_buffer = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_system_get_bank(_path, buffer_get_address(__ret_buffer), buffer_get_size(__ret_buffer));

    var __result__ = undefined;
    if (buffer_read(__ret_buffer, buffer_bool))
    {
        __result__ = __FmodStudioBankRef_decode(__ret_buffer, buffer_tell(__ret_buffer));
    }
    else
    {
        __result__ = undefined;
    }
    return __result__;
}

/**
 * @param {String} _path
 * @returns {Struct.FmodStudioEventDescriptionRef}
 */
function fmod_studio_system_get_event(_path)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __ret_buffer = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_system_get_event(_path, buffer_get_address(__ret_buffer), buffer_get_size(__ret_buffer));

    var __result__ = undefined;
    if (buffer_read(__ret_buffer, buffer_bool))
    {
        __result__ = __FmodStudioEventDescriptionRef_decode(__ret_buffer, buffer_tell(__ret_buffer));
    }
    else
    {
        __result__ = undefined;
    }
    return __result__;
}

/**
 * @param {String} _path
 * @returns {Struct.FmodStudioEventInstanceRef}
 */
function fmod_studio_system_create_event_instance(_path)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __ret_buffer = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_system_create_event_instance(_path, buffer_get_address(__ret_buffer), buffer_get_size(__ret_buffer));

    var __result__ = undefined;
    if (buffer_read(__ret_buffer, buffer_bool))
    {
        __result__ = __FmodStudioEventInstanceRef_decode(__ret_buffer, buffer_tell(__ret_buffer));
    }
    else
    {
        __result__ = undefined;
    }
    return __result__;
}

/**
 * @param {String} _path
 * @returns {Struct.FmodStudioBusRef}
 */
function fmod_studio_system_get_bus(_path)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __ret_buffer = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_system_get_bus(_path, buffer_get_address(__ret_buffer), buffer_get_size(__ret_buffer));

    var __result__ = undefined;
    if (buffer_read(__ret_buffer, buffer_bool))
    {
        __result__ = __FmodStudioBusRef_decode(__ret_buffer, buffer_tell(__ret_buffer));
    }
    else
    {
        __result__ = undefined;
    }
    return __result__;
}

/**
 * @returns {Struct.FmodStudioBusRef}
 */
function fmod_studio_system_get_master_bus()
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __ret_buffer = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_system_get_master_bus(buffer_get_address(__ret_buffer), buffer_get_size(__ret_buffer));

    var __result__ = undefined;
    if (buffer_read(__ret_buffer, buffer_bool))
    {
        __result__ = __FmodStudioBusRef_decode(__ret_buffer, buffer_tell(__ret_buffer));
    }
    else
    {
        __result__ = undefined;
    }
    return __result__;
}

/**
 * @param {String} _path
 * @returns {Struct.FmodStudioVCARef}
 */
function fmod_studio_system_get_vca(_path)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __ret_buffer = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_system_get_vca(_path, buffer_get_address(__ret_buffer), buffer_get_size(__ret_buffer));

    var __result__ = undefined;
    if (buffer_read(__ret_buffer, buffer_bool))
    {
        __result__ = __FmodStudioVCARef_decode(__ret_buffer, buffer_tell(__ret_buffer));
    }
    else
    {
        __result__ = undefined;
    }
    return __result__;
}

// Skipping function fmod_studio_system_set_listener_attributes (no wrapper is required)


// Skipping function fmod_studio_system_set_listener_weight (no wrapper is required)


// Skipping function fmod_studio_system_set_parameter_by_name (no wrapper is required)


// Skipping function fmod_studio_system_get_parameter_by_name (no wrapper is required)


/**
 * @returns {Struct.FmodSystemRef}
 */
function fmod_studio_system_get_core_system()
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __ret_buffer = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_system_get_core_system(buffer_get_address(__ret_buffer), buffer_get_size(__ret_buffer));

    var __result__ = undefined;
    __result__ = __FmodSystemRef_decode(__ret_buffer, buffer_tell(__ret_buffer));
    return __result__;
}

/**
 * @param {Struct.FmodStudioBankRef} _bank_ref
 * @returns {Real}
 */
function fmod_studio_bank_unload(_bank_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _bank_ref, type: struct FmodStudioBankRef
    if (_bank_ref.__uid != 2085290352) show_error($"{_GMFUNCTION_} :: _bank_ref expected FmodStudioBankRef", true);
    __FmodStudioBankRef_encode(_bank_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_studio_bank_unload(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodStudioBankRef} _bank_ref
 * @returns {Real}
 */
function fmod_studio_bank_get_loading_state(_bank_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _bank_ref, type: struct FmodStudioBankRef
    if (_bank_ref.__uid != 2085290352) show_error($"{_GMFUNCTION_} :: _bank_ref expected FmodStudioBankRef", true);
    __FmodStudioBankRef_encode(_bank_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_studio_bank_get_loading_state(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodStudioBankRef} _bank_ref
 * @returns {Real}
 */
function fmod_studio_bank_get_sample_loading_state(_bank_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _bank_ref, type: struct FmodStudioBankRef
    if (_bank_ref.__uid != 2085290352) show_error($"{_GMFUNCTION_} :: _bank_ref expected FmodStudioBankRef", true);
    __FmodStudioBankRef_encode(_bank_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_studio_bank_get_sample_loading_state(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodStudioBankRef} _bank_ref
 * @returns {String}
 */
function fmod_studio_bank_get_path(_bank_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _bank_ref, type: struct FmodStudioBankRef
    if (_bank_ref.__uid != 2085290352) show_error($"{_GMFUNCTION_} :: _bank_ref expected FmodStudioBankRef", true);
    __FmodStudioBankRef_encode(_bank_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_studio_bank_get_path(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodStudioBankRef} _bank_ref
 * @returns {Struct.FmodStudioSystemRef}
 */
function fmod_studio_bank_get_parent_studio_system(_bank_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _bank_ref, type: struct FmodStudioBankRef
    if (_bank_ref.__uid != 2085290352) show_error($"{_GMFUNCTION_} :: _bank_ref expected FmodStudioBankRef", true);
    __FmodStudioBankRef_encode(_bank_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __ret_buffer = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_bank_get_parent_studio_system(buffer_get_address(__args_buffer), buffer_tell(__args_buffer), buffer_get_address(__ret_buffer), buffer_get_size(__ret_buffer));

    var __result__ = undefined;
    if (buffer_read(__ret_buffer, buffer_bool))
    {
        __result__ = __FmodStudioSystemRef_decode(__ret_buffer, buffer_tell(__ret_buffer));
    }
    else
    {
        __result__ = undefined;
    }
    return __result__;
}

/**
 * @param {Struct.FmodStudioBankRef} _bank_ref
 * @returns {Real}
 */
function fmod_studio_bank_get_event_count(_bank_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _bank_ref, type: struct FmodStudioBankRef
    if (_bank_ref.__uid != 2085290352) show_error($"{_GMFUNCTION_} :: _bank_ref expected FmodStudioBankRef", true);
    __FmodStudioBankRef_encode(_bank_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_studio_bank_get_event_count(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodStudioBankRef} _bank_ref
 * @param {Real} _index
 * @returns {Struct.FmodStudioEventDescriptionRef}
 */
function fmod_studio_bank_get_event_at(_bank_ref, _index)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _bank_ref, type: struct FmodStudioBankRef
    if (_bank_ref.__uid != 2085290352) show_error($"{_GMFUNCTION_} :: _bank_ref expected FmodStudioBankRef", true);
    __FmodStudioBankRef_encode(_bank_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _index, type: Float64
    if (!is_numeric(_index)) show_error($"{_GMFUNCTION_} :: _index expected number", true);
    buffer_write(__args_buffer, buffer_f64, _index);

    var __ret_buffer = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_bank_get_event_at(buffer_get_address(__args_buffer), buffer_tell(__args_buffer), buffer_get_address(__ret_buffer), buffer_get_size(__ret_buffer));

    var __result__ = undefined;
    if (buffer_read(__ret_buffer, buffer_bool))
    {
        __result__ = __FmodStudioEventDescriptionRef_decode(__ret_buffer, buffer_tell(__ret_buffer));
    }
    else
    {
        __result__ = undefined;
    }
    return __result__;
}

/**
 * @param {Struct.FmodStudioBankRef} _bank_ref
 * @returns {Real}
 */
function fmod_studio_bank_get_bus_count(_bank_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _bank_ref, type: struct FmodStudioBankRef
    if (_bank_ref.__uid != 2085290352) show_error($"{_GMFUNCTION_} :: _bank_ref expected FmodStudioBankRef", true);
    __FmodStudioBankRef_encode(_bank_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_studio_bank_get_bus_count(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodStudioBankRef} _bank_ref
 * @param {Real} _index
 * @returns {Struct.FmodStudioBusRef}
 */
function fmod_studio_bank_get_bus_at(_bank_ref, _index)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _bank_ref, type: struct FmodStudioBankRef
    if (_bank_ref.__uid != 2085290352) show_error($"{_GMFUNCTION_} :: _bank_ref expected FmodStudioBankRef", true);
    __FmodStudioBankRef_encode(_bank_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _index, type: Float64
    if (!is_numeric(_index)) show_error($"{_GMFUNCTION_} :: _index expected number", true);
    buffer_write(__args_buffer, buffer_f64, _index);

    var __ret_buffer = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_bank_get_bus_at(buffer_get_address(__args_buffer), buffer_tell(__args_buffer), buffer_get_address(__ret_buffer), buffer_get_size(__ret_buffer));

    var __result__ = undefined;
    if (buffer_read(__ret_buffer, buffer_bool))
    {
        __result__ = __FmodStudioBusRef_decode(__ret_buffer, buffer_tell(__ret_buffer));
    }
    else
    {
        __result__ = undefined;
    }
    return __result__;
}

/**
 * @param {Struct.FmodStudioBankRef} _bank_ref
 * @returns {Real}
 */
function fmod_studio_bank_get_vca_count(_bank_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _bank_ref, type: struct FmodStudioBankRef
    if (_bank_ref.__uid != 2085290352) show_error($"{_GMFUNCTION_} :: _bank_ref expected FmodStudioBankRef", true);
    __FmodStudioBankRef_encode(_bank_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_studio_bank_get_vca_count(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodStudioBankRef} _bank_ref
 * @param {Real} _index
 * @returns {Struct.FmodStudioVCARef}
 */
function fmod_studio_bank_get_vca_at(_bank_ref, _index)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _bank_ref, type: struct FmodStudioBankRef
    if (_bank_ref.__uid != 2085290352) show_error($"{_GMFUNCTION_} :: _bank_ref expected FmodStudioBankRef", true);
    __FmodStudioBankRef_encode(_bank_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _index, type: Float64
    if (!is_numeric(_index)) show_error($"{_GMFUNCTION_} :: _index expected number", true);
    buffer_write(__args_buffer, buffer_f64, _index);

    var __ret_buffer = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_bank_get_vca_at(buffer_get_address(__args_buffer), buffer_tell(__args_buffer), buffer_get_address(__ret_buffer), buffer_get_size(__ret_buffer));

    var __result__ = undefined;
    if (buffer_read(__ret_buffer, buffer_bool))
    {
        __result__ = __FmodStudioVCARef_decode(__ret_buffer, buffer_tell(__ret_buffer));
    }
    else
    {
        __result__ = undefined;
    }
    return __result__;
}

/**
 * @param {Struct.FmodStudioBankRef} _bank_ref
 * @returns {Real}
 */
function fmod_studio_bank_get_string_count(_bank_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _bank_ref, type: struct FmodStudioBankRef
    if (_bank_ref.__uid != 2085290352) show_error($"{_GMFUNCTION_} :: _bank_ref expected FmodStudioBankRef", true);
    __FmodStudioBankRef_encode(_bank_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_studio_bank_get_string_count(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodStudioEventDescriptionRef} _event_desc_ref
 * @returns {String}
 */
function fmod_studio_event_description_get_path(_event_desc_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _event_desc_ref, type: struct FmodStudioEventDescriptionRef
    if (_event_desc_ref.__uid != 2708661012) show_error($"{_GMFUNCTION_} :: _event_desc_ref expected FmodStudioEventDescriptionRef", true);
    __FmodStudioEventDescriptionRef_encode(_event_desc_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_studio_event_description_get_path(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodStudioEventDescriptionRef} _event_desc_ref
 * @returns {Struct.FmodStudioEventInstanceRef}
 */
function fmod_studio_event_description_create_instance(_event_desc_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _event_desc_ref, type: struct FmodStudioEventDescriptionRef
    if (_event_desc_ref.__uid != 2708661012) show_error($"{_GMFUNCTION_} :: _event_desc_ref expected FmodStudioEventDescriptionRef", true);
    __FmodStudioEventDescriptionRef_encode(_event_desc_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __ret_buffer = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_event_description_create_instance(buffer_get_address(__args_buffer), buffer_tell(__args_buffer), buffer_get_address(__ret_buffer), buffer_get_size(__ret_buffer));

    var __result__ = undefined;
    if (buffer_read(__ret_buffer, buffer_bool))
    {
        __result__ = __FmodStudioEventInstanceRef_decode(__ret_buffer, buffer_tell(__ret_buffer));
    }
    else
    {
        __result__ = undefined;
    }
    return __result__;
}

/**
 * @param {Struct.FmodStudioEventDescriptionRef} _event_desc_ref
 * @returns {Real}
 */
function fmod_studio_event_description_get_instance_count(_event_desc_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _event_desc_ref, type: struct FmodStudioEventDescriptionRef
    if (_event_desc_ref.__uid != 2708661012) show_error($"{_GMFUNCTION_} :: _event_desc_ref expected FmodStudioEventDescriptionRef", true);
    __FmodStudioEventDescriptionRef_encode(_event_desc_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_studio_event_description_get_instance_count(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodStudioEventDescriptionRef} _event_desc_ref
 * @param {Real} _index
 * @returns {Struct.FmodStudioEventInstanceRef}
 */
function fmod_studio_event_description_get_instance_at(_event_desc_ref, _index)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _event_desc_ref, type: struct FmodStudioEventDescriptionRef
    if (_event_desc_ref.__uid != 2708661012) show_error($"{_GMFUNCTION_} :: _event_desc_ref expected FmodStudioEventDescriptionRef", true);
    __FmodStudioEventDescriptionRef_encode(_event_desc_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _index, type: Float64
    if (!is_numeric(_index)) show_error($"{_GMFUNCTION_} :: _index expected number", true);
    buffer_write(__args_buffer, buffer_f64, _index);

    var __ret_buffer = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_event_description_get_instance_at(buffer_get_address(__args_buffer), buffer_tell(__args_buffer), buffer_get_address(__ret_buffer), buffer_get_size(__ret_buffer));

    var __result__ = undefined;
    if (buffer_read(__ret_buffer, buffer_bool))
    {
        __result__ = __FmodStudioEventInstanceRef_decode(__ret_buffer, buffer_tell(__ret_buffer));
    }
    else
    {
        __result__ = undefined;
    }
    return __result__;
}

/**
 * @param {Struct.FmodStudioEventDescriptionRef} _event_desc_ref
 * @returns {Real}
 */
function fmod_studio_event_description_is_snapshot(_event_desc_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _event_desc_ref, type: struct FmodStudioEventDescriptionRef
    if (_event_desc_ref.__uid != 2708661012) show_error($"{_GMFUNCTION_} :: _event_desc_ref expected FmodStudioEventDescriptionRef", true);
    __FmodStudioEventDescriptionRef_encode(_event_desc_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_studio_event_description_is_snapshot(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodStudioEventDescriptionRef} _event_desc_ref
 * @returns {Real}
 */
function fmod_studio_event_description_is_one_shot(_event_desc_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _event_desc_ref, type: struct FmodStudioEventDescriptionRef
    if (_event_desc_ref.__uid != 2708661012) show_error($"{_GMFUNCTION_} :: _event_desc_ref expected FmodStudioEventDescriptionRef", true);
    __FmodStudioEventDescriptionRef_encode(_event_desc_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_studio_event_description_is_one_shot(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodStudioEventDescriptionRef} _event_desc_ref
 * @returns {Real}
 */
function fmod_studio_event_description_has_sustain_point(_event_desc_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _event_desc_ref, type: struct FmodStudioEventDescriptionRef
    if (_event_desc_ref.__uid != 2708661012) show_error($"{_GMFUNCTION_} :: _event_desc_ref expected FmodStudioEventDescriptionRef", true);
    __FmodStudioEventDescriptionRef_encode(_event_desc_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_studio_event_description_has_sustain_point(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodStudioEventDescriptionRef} _event_desc_ref
 * @returns {Real}
 */
function fmod_studio_event_description_get_length(_event_desc_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _event_desc_ref, type: struct FmodStudioEventDescriptionRef
    if (_event_desc_ref.__uid != 2708661012) show_error($"{_GMFUNCTION_} :: _event_desc_ref expected FmodStudioEventDescriptionRef", true);
    __FmodStudioEventDescriptionRef_encode(_event_desc_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_studio_event_description_get_length(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodStudioEventDescriptionRef} _event_desc_ref
 * @returns {Real}
 */
function fmod_studio_event_description_get_parameter_count(_event_desc_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _event_desc_ref, type: struct FmodStudioEventDescriptionRef
    if (_event_desc_ref.__uid != 2708661012) show_error($"{_GMFUNCTION_} :: _event_desc_ref expected FmodStudioEventDescriptionRef", true);
    __FmodStudioEventDescriptionRef_encode(_event_desc_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_studio_event_description_get_parameter_count(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodStudioEventDescriptionRef} _event_desc_ref
 * @returns {Real}
 */
function fmod_studio_event_description_release_all_instances(_event_desc_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _event_desc_ref, type: struct FmodStudioEventDescriptionRef
    if (_event_desc_ref.__uid != 2708661012) show_error($"{_GMFUNCTION_} :: _event_desc_ref expected FmodStudioEventDescriptionRef", true);
    __FmodStudioEventDescriptionRef_encode(_event_desc_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_studio_event_description_release_all_instances(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodStudioEventInstanceRef} _instance_ref
 * @returns {Real}
 */
function fmod_studio_event_instance_start(_instance_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _instance_ref, type: struct FmodStudioEventInstanceRef
    if (_instance_ref.__uid != 1079537513) show_error($"{_GMFUNCTION_} :: _instance_ref expected FmodStudioEventInstanceRef", true);
    __FmodStudioEventInstanceRef_encode(_instance_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_studio_event_instance_start(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodStudioEventInstanceRef} _instance_ref
 * @param {Real} _stop_mode
 * @returns {Real}
 */
function fmod_studio_event_instance_stop(_instance_ref, _stop_mode)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _instance_ref, type: struct FmodStudioEventInstanceRef
    if (_instance_ref.__uid != 1079537513) show_error($"{_GMFUNCTION_} :: _instance_ref expected FmodStudioEventInstanceRef", true);
    __FmodStudioEventInstanceRef_encode(_instance_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _stop_mode, type: Float64
    if (!is_numeric(_stop_mode)) show_error($"{_GMFUNCTION_} :: _stop_mode expected number", true);
    buffer_write(__args_buffer, buffer_f64, _stop_mode);

    var __return_value__ = __fmod_studio_event_instance_stop(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodStudioEventInstanceRef} _instance_ref
 * @returns {Real}
 */
function fmod_studio_event_instance_get_playback_state(_instance_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _instance_ref, type: struct FmodStudioEventInstanceRef
    if (_instance_ref.__uid != 1079537513) show_error($"{_GMFUNCTION_} :: _instance_ref expected FmodStudioEventInstanceRef", true);
    __FmodStudioEventInstanceRef_encode(_instance_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_studio_event_instance_get_playback_state(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodStudioEventInstanceRef} _instance_ref
 * @returns {Real}
 */
function fmod_studio_event_instance_get_paused(_instance_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _instance_ref, type: struct FmodStudioEventInstanceRef
    if (_instance_ref.__uid != 1079537513) show_error($"{_GMFUNCTION_} :: _instance_ref expected FmodStudioEventInstanceRef", true);
    __FmodStudioEventInstanceRef_encode(_instance_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_studio_event_instance_get_paused(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodStudioEventInstanceRef} _instance_ref
 * @param {Real} _paused
 * @returns {Real}
 */
function fmod_studio_event_instance_set_paused(_instance_ref, _paused)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _instance_ref, type: struct FmodStudioEventInstanceRef
    if (_instance_ref.__uid != 1079537513) show_error($"{_GMFUNCTION_} :: _instance_ref expected FmodStudioEventInstanceRef", true);
    __FmodStudioEventInstanceRef_encode(_instance_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _paused, type: Float64
    if (!is_numeric(_paused)) show_error($"{_GMFUNCTION_} :: _paused expected number", true);
    buffer_write(__args_buffer, buffer_f64, _paused);

    var __return_value__ = __fmod_studio_event_instance_set_paused(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodStudioEventInstanceRef} _instance_ref
 * @returns {Real}
 */
function fmod_studio_event_instance_get_timeline_position(_instance_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _instance_ref, type: struct FmodStudioEventInstanceRef
    if (_instance_ref.__uid != 1079537513) show_error($"{_GMFUNCTION_} :: _instance_ref expected FmodStudioEventInstanceRef", true);
    __FmodStudioEventInstanceRef_encode(_instance_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_studio_event_instance_get_timeline_position(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodStudioEventInstanceRef} _instance_ref
 * @param {Real} _position
 * @returns {Real}
 */
function fmod_studio_event_instance_set_timeline_position(_instance_ref, _position)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _instance_ref, type: struct FmodStudioEventInstanceRef
    if (_instance_ref.__uid != 1079537513) show_error($"{_GMFUNCTION_} :: _instance_ref expected FmodStudioEventInstanceRef", true);
    __FmodStudioEventInstanceRef_encode(_instance_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _position, type: Float64
    if (!is_numeric(_position)) show_error($"{_GMFUNCTION_} :: _position expected number", true);
    buffer_write(__args_buffer, buffer_f64, _position);

    var __return_value__ = __fmod_studio_event_instance_set_timeline_position(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodStudioEventInstanceRef} _instance_ref
 * @returns {Real}
 */
function fmod_studio_event_instance_get_volume(_instance_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _instance_ref, type: struct FmodStudioEventInstanceRef
    if (_instance_ref.__uid != 1079537513) show_error($"{_GMFUNCTION_} :: _instance_ref expected FmodStudioEventInstanceRef", true);
    __FmodStudioEventInstanceRef_encode(_instance_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_studio_event_instance_get_volume(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodStudioEventInstanceRef} _instance_ref
 * @param {Real} _volume
 * @returns {Real}
 */
function fmod_studio_event_instance_set_volume(_instance_ref, _volume)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _instance_ref, type: struct FmodStudioEventInstanceRef
    if (_instance_ref.__uid != 1079537513) show_error($"{_GMFUNCTION_} :: _instance_ref expected FmodStudioEventInstanceRef", true);
    __FmodStudioEventInstanceRef_encode(_instance_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _volume, type: Float64
    if (!is_numeric(_volume)) show_error($"{_GMFUNCTION_} :: _volume expected number", true);
    buffer_write(__args_buffer, buffer_f64, _volume);

    var __return_value__ = __fmod_studio_event_instance_set_volume(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodStudioEventInstanceRef} _instance_ref
 * @returns {Real}
 */
function fmod_studio_event_instance_get_pitch(_instance_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _instance_ref, type: struct FmodStudioEventInstanceRef
    if (_instance_ref.__uid != 1079537513) show_error($"{_GMFUNCTION_} :: _instance_ref expected FmodStudioEventInstanceRef", true);
    __FmodStudioEventInstanceRef_encode(_instance_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_studio_event_instance_get_pitch(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodStudioEventInstanceRef} _instance_ref
 * @param {Real} _pitch
 * @returns {Real}
 */
function fmod_studio_event_instance_set_pitch(_instance_ref, _pitch)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _instance_ref, type: struct FmodStudioEventInstanceRef
    if (_instance_ref.__uid != 1079537513) show_error($"{_GMFUNCTION_} :: _instance_ref expected FmodStudioEventInstanceRef", true);
    __FmodStudioEventInstanceRef_encode(_instance_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _pitch, type: Float64
    if (!is_numeric(_pitch)) show_error($"{_GMFUNCTION_} :: _pitch expected number", true);
    buffer_write(__args_buffer, buffer_f64, _pitch);

    var __return_value__ = __fmod_studio_event_instance_set_pitch(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodStudioEventInstanceRef} _instance_ref
 * @param {String} _name
 * @param {Real} _value
 * @returns {Real}
 */
function fmod_studio_event_instance_set_parameter_by_name(_instance_ref, _name, _value)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _instance_ref, type: struct FmodStudioEventInstanceRef
    if (_instance_ref.__uid != 1079537513) show_error($"{_GMFUNCTION_} :: _instance_ref expected FmodStudioEventInstanceRef", true);
    __FmodStudioEventInstanceRef_encode(_instance_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _name, type: String
    if (!is_string(_name)) show_error($"{_GMFUNCTION_} :: _name expected string", true);
    buffer_write(__args_buffer, buffer_u32, string_byte_length(_name));
    buffer_write(__args_buffer, buffer_string, _name);

    // param: _value, type: Float64
    if (!is_numeric(_value)) show_error($"{_GMFUNCTION_} :: _value expected number", true);
    buffer_write(__args_buffer, buffer_f64, _value);

    var __return_value__ = __fmod_studio_event_instance_set_parameter_by_name(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodStudioEventInstanceRef} _instance_ref
 * @param {String} _name
 * @returns {Real}
 */
function fmod_studio_event_instance_get_parameter_by_name(_instance_ref, _name)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _instance_ref, type: struct FmodStudioEventInstanceRef
    if (_instance_ref.__uid != 1079537513) show_error($"{_GMFUNCTION_} :: _instance_ref expected FmodStudioEventInstanceRef", true);
    __FmodStudioEventInstanceRef_encode(_instance_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _name, type: String
    if (!is_string(_name)) show_error($"{_GMFUNCTION_} :: _name expected string", true);
    buffer_write(__args_buffer, buffer_u32, string_byte_length(_name));
    buffer_write(__args_buffer, buffer_string, _name);

    var __return_value__ = __fmod_studio_event_instance_get_parameter_by_name(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodStudioEventInstanceRef} _instance_ref
 * @returns {Real}
 */
function fmod_studio_event_instance_get_parameter_count(_instance_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _instance_ref, type: struct FmodStudioEventInstanceRef
    if (_instance_ref.__uid != 1079537513) show_error($"{_GMFUNCTION_} :: _instance_ref expected FmodStudioEventInstanceRef", true);
    __FmodStudioEventInstanceRef_encode(_instance_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_studio_event_instance_get_parameter_count(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodStudioEventInstanceRef} _instance_ref
 * @param {Real} _x
 * @param {Real} _y
 * @param {Real} _z
 * @returns {Real}
 */
function fmod_studio_event_instance_set_3d_attributes(_instance_ref, _x, _y, _z)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _instance_ref, type: struct FmodStudioEventInstanceRef
    if (_instance_ref.__uid != 1079537513) show_error($"{_GMFUNCTION_} :: _instance_ref expected FmodStudioEventInstanceRef", true);
    __FmodStudioEventInstanceRef_encode(_instance_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _x, type: Float64
    if (!is_numeric(_x)) show_error($"{_GMFUNCTION_} :: _x expected number", true);
    buffer_write(__args_buffer, buffer_f64, _x);

    // param: _y, type: Float64
    if (!is_numeric(_y)) show_error($"{_GMFUNCTION_} :: _y expected number", true);
    buffer_write(__args_buffer, buffer_f64, _y);

    // param: _z, type: Float64
    if (!is_numeric(_z)) show_error($"{_GMFUNCTION_} :: _z expected number", true);
    buffer_write(__args_buffer, buffer_f64, _z);

    var __return_value__ = __fmod_studio_event_instance_set_3d_attributes(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodStudioEventInstanceRef} _instance_ref
 * @returns {Struct.FmodStudioEventDescriptionRef}
 */
function fmod_studio_event_instance_get_description(_instance_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _instance_ref, type: struct FmodStudioEventInstanceRef
    if (_instance_ref.__uid != 1079537513) show_error($"{_GMFUNCTION_} :: _instance_ref expected FmodStudioEventInstanceRef", true);
    __FmodStudioEventInstanceRef_encode(_instance_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __ret_buffer = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_event_instance_get_description(buffer_get_address(__args_buffer), buffer_tell(__args_buffer), buffer_get_address(__ret_buffer), buffer_get_size(__ret_buffer));

    var __result__ = undefined;
    if (buffer_read(__ret_buffer, buffer_bool))
    {
        __result__ = __FmodStudioEventDescriptionRef_decode(__ret_buffer, buffer_tell(__ret_buffer));
    }
    else
    {
        __result__ = undefined;
    }
    return __result__;
}

/**
 * @param {Struct.FmodStudioEventInstanceRef} _instance_ref
 * @returns {Real}
 */
function fmod_studio_event_instance_release(_instance_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _instance_ref, type: struct FmodStudioEventInstanceRef
    if (_instance_ref.__uid != 1079537513) show_error($"{_GMFUNCTION_} :: _instance_ref expected FmodStudioEventInstanceRef", true);
    __FmodStudioEventInstanceRef_encode(_instance_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_studio_event_instance_release(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodStudioBusRef} _bus_ref
 * @returns {String}
 */
function fmod_studio_bus_get_path(_bus_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _bus_ref, type: struct FmodStudioBusRef
    if (_bus_ref.__uid != 1572912022) show_error($"{_GMFUNCTION_} :: _bus_ref expected FmodStudioBusRef", true);
    __FmodStudioBusRef_encode(_bus_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_studio_bus_get_path(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodStudioBusRef} _bus_ref
 * @returns {Real}
 */
function fmod_studio_bus_get_volume(_bus_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _bus_ref, type: struct FmodStudioBusRef
    if (_bus_ref.__uid != 1572912022) show_error($"{_GMFUNCTION_} :: _bus_ref expected FmodStudioBusRef", true);
    __FmodStudioBusRef_encode(_bus_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_studio_bus_get_volume(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodStudioBusRef} _bus_ref
 * @param {Real} _volume
 * @returns {Real}
 */
function fmod_studio_bus_set_volume(_bus_ref, _volume)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _bus_ref, type: struct FmodStudioBusRef
    if (_bus_ref.__uid != 1572912022) show_error($"{_GMFUNCTION_} :: _bus_ref expected FmodStudioBusRef", true);
    __FmodStudioBusRef_encode(_bus_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _volume, type: Float64
    if (!is_numeric(_volume)) show_error($"{_GMFUNCTION_} :: _volume expected number", true);
    buffer_write(__args_buffer, buffer_f64, _volume);

    var __return_value__ = __fmod_studio_bus_set_volume(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodStudioBusRef} _bus_ref
 * @returns {Real}
 */
function fmod_studio_bus_get_paused(_bus_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _bus_ref, type: struct FmodStudioBusRef
    if (_bus_ref.__uid != 1572912022) show_error($"{_GMFUNCTION_} :: _bus_ref expected FmodStudioBusRef", true);
    __FmodStudioBusRef_encode(_bus_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_studio_bus_get_paused(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodStudioBusRef} _bus_ref
 * @param {Real} _paused
 * @returns {Real}
 */
function fmod_studio_bus_set_paused(_bus_ref, _paused)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _bus_ref, type: struct FmodStudioBusRef
    if (_bus_ref.__uid != 1572912022) show_error($"{_GMFUNCTION_} :: _bus_ref expected FmodStudioBusRef", true);
    __FmodStudioBusRef_encode(_bus_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _paused, type: Float64
    if (!is_numeric(_paused)) show_error($"{_GMFUNCTION_} :: _paused expected number", true);
    buffer_write(__args_buffer, buffer_f64, _paused);

    var __return_value__ = __fmod_studio_bus_set_paused(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodStudioBusRef} _bus_ref
 * @param {Real} _stop_mode
 * @returns {Real}
 */
function fmod_studio_bus_stop_all_events(_bus_ref, _stop_mode)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _bus_ref, type: struct FmodStudioBusRef
    if (_bus_ref.__uid != 1572912022) show_error($"{_GMFUNCTION_} :: _bus_ref expected FmodStudioBusRef", true);
    __FmodStudioBusRef_encode(_bus_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _stop_mode, type: Float64
    if (!is_numeric(_stop_mode)) show_error($"{_GMFUNCTION_} :: _stop_mode expected number", true);
    buffer_write(__args_buffer, buffer_f64, _stop_mode);

    var __return_value__ = __fmod_studio_bus_stop_all_events(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @returns {Struct.FmodStudioBusRef}
 */
function fmod_studio_bus_get_master_bus()
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __ret_buffer = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_studio_bus_get_master_bus(buffer_get_address(__ret_buffer), buffer_get_size(__ret_buffer));

    var __result__ = undefined;
    if (buffer_read(__ret_buffer, buffer_bool))
    {
        __result__ = __FmodStudioBusRef_decode(__ret_buffer, buffer_tell(__ret_buffer));
    }
    else
    {
        __result__ = undefined;
    }
    return __result__;
}

/**
 * @param {Struct.FmodStudioVCARef} _vca_ref
 * @returns {String}
 */
function fmod_studio_vca_get_path(_vca_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _vca_ref, type: struct FmodStudioVCARef
    if (_vca_ref.__uid != 706235938) show_error($"{_GMFUNCTION_} :: _vca_ref expected FmodStudioVCARef", true);
    __FmodStudioVCARef_encode(_vca_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_studio_vca_get_path(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodStudioVCARef} _vca_ref
 * @returns {Real}
 */
function fmod_studio_vca_get_volume(_vca_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _vca_ref, type: struct FmodStudioVCARef
    if (_vca_ref.__uid != 706235938) show_error($"{_GMFUNCTION_} :: _vca_ref expected FmodStudioVCARef", true);
    __FmodStudioVCARef_encode(_vca_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_studio_vca_get_volume(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodStudioVCARef} _vca_ref
 * @param {Real} _volume
 * @returns {Real}
 */
function fmod_studio_vca_set_volume(_vca_ref, _volume)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _vca_ref, type: struct FmodStudioVCARef
    if (_vca_ref.__uid != 706235938) show_error($"{_GMFUNCTION_} :: _vca_ref expected FmodStudioVCARef", true);
    __FmodStudioVCARef_encode(_vca_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _volume, type: Float64
    if (!is_numeric(_volume)) show_error($"{_GMFUNCTION_} :: _volume expected number", true);
    buffer_write(__args_buffer, buffer_f64, _volume);

    var __return_value__ = __fmod_studio_vca_set_volume(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodStudioCommandReplayRef} _replay_ref
 * @returns {Real}
 */
function fmod_studio_command_replay_get_playback_state(_replay_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _replay_ref, type: struct FmodStudioCommandReplayRef
    if (_replay_ref.__uid != 1846997058) show_error($"{_GMFUNCTION_} :: _replay_ref expected FmodStudioCommandReplayRef", true);
    __FmodStudioCommandReplayRef_encode(_replay_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_studio_command_replay_get_playback_state(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodStudioCommandReplayRef} _replay_ref
 * @returns {Real}
 */
function fmod_studio_command_replay_get_current_command(_replay_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _replay_ref, type: struct FmodStudioCommandReplayRef
    if (_replay_ref.__uid != 1846997058) show_error($"{_GMFUNCTION_} :: _replay_ref expected FmodStudioCommandReplayRef", true);
    __FmodStudioCommandReplayRef_encode(_replay_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_studio_command_replay_get_current_command(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodStudioCommandReplayRef} _replay_ref
 * @returns {Real}
 */
function fmod_studio_command_replay_release(_replay_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _replay_ref, type: struct FmodStudioCommandReplayRef
    if (_replay_ref.__uid != 1846997058) show_error($"{_GMFUNCTION_} :: _replay_ref expected FmodStudioCommandReplayRef", true);
    __FmodStudioCommandReplayRef_encode(_replay_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_studio_command_replay_release(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodStudioCommandReplayRef} _replay_ref
 * @param {Function} _callback
 * @returns {Real}
 */
function fmod_studio_command_replay_set_frame_callback(_replay_ref, _callback)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __dispatcher__ = __GMFMOD_get_dispatcher();

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _replay_ref, type: struct FmodStudioCommandReplayRef
    if (_replay_ref.__uid != 1846997058) show_error($"{_GMFUNCTION_} :: _replay_ref expected FmodStudioCommandReplayRef", true);
    __FmodStudioCommandReplayRef_encode(_replay_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _callback, type: optional<Function>
    if (is_undefined(_callback))
    {
        buffer_write(__args_buffer, buffer_bool, false);
    }
    else
    {
        buffer_write(__args_buffer, buffer_bool, true);
        if (!is_callable(_callback)) show_error($"{_GMFUNCTION_} :: _callback expected callable type", true);
        var _callback_handle = __ext_core_function_register(_callback, __dispatcher__);
        buffer_write(__args_buffer, buffer_u64, _callback_handle);
    }

    var __return_value__ = __fmod_studio_command_replay_set_frame_callback(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodStudioCommandReplayRef} _replay_ref
 * @param {Function} _callback
 * @returns {Real}
 */
function fmod_studio_command_replay_set_create_instance_callback(_replay_ref, _callback)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __dispatcher__ = __GMFMOD_get_dispatcher();

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _replay_ref, type: struct FmodStudioCommandReplayRef
    if (_replay_ref.__uid != 1846997058) show_error($"{_GMFUNCTION_} :: _replay_ref expected FmodStudioCommandReplayRef", true);
    __FmodStudioCommandReplayRef_encode(_replay_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _callback, type: optional<Function>
    if (is_undefined(_callback))
    {
        buffer_write(__args_buffer, buffer_bool, false);
    }
    else
    {
        buffer_write(__args_buffer, buffer_bool, true);
        if (!is_callable(_callback)) show_error($"{_GMFUNCTION_} :: _callback expected callable type", true);
        var _callback_handle = __ext_core_function_register(_callback, __dispatcher__);
        buffer_write(__args_buffer, buffer_u64, _callback_handle);
    }

    var __return_value__ = __fmod_studio_command_replay_set_create_instance_callback(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodStudioCommandReplayRef} _replay_ref
 * @param {Function} _callback
 * @returns {Real}
 */
function fmod_studio_command_replay_set_load_bank_callback(_replay_ref, _callback)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __dispatcher__ = __GMFMOD_get_dispatcher();

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _replay_ref, type: struct FmodStudioCommandReplayRef
    if (_replay_ref.__uid != 1846997058) show_error($"{_GMFUNCTION_} :: _replay_ref expected FmodStudioCommandReplayRef", true);
    __FmodStudioCommandReplayRef_encode(_replay_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _callback, type: optional<Function>
    if (is_undefined(_callback))
    {
        buffer_write(__args_buffer, buffer_bool, false);
    }
    else
    {
        buffer_write(__args_buffer, buffer_bool, true);
        if (!is_callable(_callback)) show_error($"{_GMFUNCTION_} :: _callback expected callable type", true);
        var _callback_handle = __ext_core_function_register(_callback, __dispatcher__);
        buffer_write(__args_buffer, buffer_u64, _callback_handle);
    }

    var __return_value__ = __fmod_studio_command_replay_set_load_bank_callback(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/// @ignore
function __GMFMOD_get_decoders()
{
    static __decoders__ = [
        __FmodChannelRef_decode,
        __FmodChannelGroupRef_decode,
        __FmodSoundRef_decode,
        __FmodSystemRef_decode,
        __FmodDSPConnectionRef_decode,
        __FmodSoundGroupRef_decode,
        __FmodReverb3DRef_decode,
        __FmodDSPRef_decode,
        __FmodGeometryRef_decode,
        __FmodStudioSystemRef_decode,
        __FmodStudioBankRef_decode,
        __FmodStudioBusRef_decode,
        __FmodStudioEventInstanceRef_decode,
        __FmodStudioEventDescriptionRef_decode,
        __FmodStudioVCARef_decode,
        __FmodStudioCommandReplayRef_decode
    ];
    return __decoders__;
}
/// @ignore
function __GMFMOD_get_dispatcher()
{
    static __dispatcher__ = new __GMNativeFunctionDispatcher(__GMFMOD_invocation_handler, __GMFMOD_get_decoders());
    return __dispatcher__;
}
/// @ignore
function __GMFMOD_is_available()
{
    static __available__ = extension_exists("GMFMOD");
    return __available__;
}
