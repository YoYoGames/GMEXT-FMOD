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

enum FmodInitFlags
{
    Normal = 0,
    StreamFromUpdate = 1,
    MixFromUpdate = 2,
    RightHanded3D = 4,
    ClipOutput = 8,
    ChannelLowpass = 256,
    ChannelDistanceFilter = 512,
    ProfileEnable = 65536,
    Vol0BecomesVirtual = 131072,
    GeometryUseClosest = 262144,
    PreferDolbyDownmix = 524288,
    ThreadUnsafe = 1048576,
    ProfileMeterAll = 2097152,
    MemoryTracking = 4194304
}

enum FmodMode
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
    Unknown = 0,
    Mixer = 1,
    Oscillator = 2,
    LowPass = 3,
    ItLowPass = 4,
    HighPass = 5,
    Echo = 6,
    Fader = 7,
    Flange = 8,
    Distortion = 9,
    Normalize = 10,
    Limiter = 11,
    ParamEq = 12,
    PitchShift = 13,
    Chorus = 14,
    ItEcho = 15,
    Compressor = 16,
    SfxReverb = 17,
    LowPassSimple = 18,
    Delay = 19,
    Tremolo = 20,
    Send = 21,
    Return = 22,
    HighPassSimple = 23,
    Pan = 24,
    ThreeEq = 25,
    FFT = 26,
    LoudnessMeter = 27,
    ConvolutionReverb = 28,
    ChannelMix = 29,
    Transceiver = 30,
    ObjectPan = 31,
    MultibandEq = 32,
    MultibandDynamics = 33
}

enum FmodDspConnectionType
{
    Standard = 0,
    Sidechain = 1,
    Send = 2,
    SendSidechain = 3
}

enum FmodDspLowPass
{
    Cutoff = 0,
    Resonance = 1
}

enum FmodDspHighPass
{
    Cutoff = 0,
    Resonance = 1
}

enum FmodDspItLowPass
{
    Cutoff = 0,
    Resonance = 1
}

enum FmodDspEcho
{
    Delay = 0,
    Feedback = 1,
    DryLevel = 2,
    WetLevel = 3,
    DelayChangeMode = 4
}

enum FmodDspEchoDelayChangeMode
{
    Fade = 0,
    Lerp = 1,
    None = 2
}

enum FmodDspFlange
{
    Mix = 0,
    Depth = 1,
    Rate = 2
}

enum FmodDspDistortion
{
    Level = 0
}

enum FmodDspNormalize
{
    FadeTime = 0,
    Threshold = 1,
    MaxAmplitude = 2
}

enum FmodDspLimiter
{
    ReleaseTime = 0,
    Ceiling = 1,
    MaximizerGain = 2,
    Mode = 3
}

enum FmodDspParamEq
{
    Center = 0,
    Bandwidth = 1,
    Gain = 2
}

enum FmodDspPitchShift
{
    Pitch = 0,
    FftSize = 1,
    Overlap = 2,
    MaxChannels = 3
}

enum FmodDspChorus
{
    Mix = 0,
    Rate = 1,
    Depth = 2
}

enum FmodDspMultibandEq
{
    AFilter = 0,
    AFrequency = 1,
    AQ = 2,
    AGain = 3,
    BFilter = 4,
    BFrequency = 5,
    BQ = 6,
    BGain = 7,
    CFilter = 8,
    CFrequency = 9,
    CQ = 10,
    CGain = 11,
    DFilter = 12,
    DFrequency = 13,
    DQ = 14,
    DGain = 15,
    EFilter = 16,
    EFrequency = 17,
    EQ = 18,
    EGain = 19
}

enum FmodDspMultibandEqFilterType
{
    Disabled = 0,
    Lowpass12db = 1,
    Lowpass24db = 2,
    Lowpass48db = 3,
    Highpass12db = 4,
    Highpass24db = 5,
    Highpass48db = 6,
    Lowshelf = 7,
    Highshelf = 8,
    Peaking = 9,
    Bandpass = 10,
    Notch = 11,
    Allpass = 12,
    Lowpass6db = 13,
    Highpass6db = 14
}

enum FmodDspChannelMix
{
    OutputGrouping = 0,
    GainCh0 = 1,
    GainCh1 = 2,
    GainCh2 = 3,
    GainCh3 = 4,
    GainCh4 = 5,
    GainCh5 = 6,
    GainCh6 = 7,
    GainCh7 = 8,
    GainCh8 = 9,
    GainCh9 = 10,
    GainCh10 = 11,
    GainCh11 = 12,
    GainCh12 = 13,
    GainCh13 = 14,
    GainCh14 = 15,
    GainCh15 = 16,
    GainCh16 = 17,
    GainCh17 = 18,
    GainCh18 = 19,
    GainCh19 = 20,
    GainCh20 = 21,
    GainCh21 = 22,
    GainCh22 = 23,
    GainCh23 = 24,
    GainCh24 = 25,
    GainCh25 = 26,
    GainCh26 = 27,
    GainCh27 = 28,
    GainCh28 = 29,
    GainCh29 = 30,
    GainCh30 = 31,
    GainCh31 = 32,
    OutputCh0 = 33,
    OutputCh1 = 34,
    OutputCh2 = 35,
    OutputCh3 = 36,
    OutputCh4 = 37,
    OutputCh5 = 38,
    OutputCh6 = 39,
    OutputCh7 = 40,
    OutputCh8 = 41,
    OutputCh9 = 42,
    OutputCh10 = 43,
    OutputCh11 = 44,
    OutputCh12 = 45,
    OutputCh13 = 46,
    OutputCh14 = 47,
    OutputCh15 = 48,
    OutputCh16 = 49,
    OutputCh17 = 50,
    OutputCh18 = 51,
    OutputCh19 = 52,
    OutputCh20 = 53,
    OutputCh21 = 54,
    OutputCh22 = 55,
    OutputCh23 = 56,
    OutputCh24 = 57,
    OutputCh25 = 58,
    OutputCh26 = 59,
    OutputCh27 = 60,
    OutputCh28 = 61,
    OutputCh29 = 62,
    OutputCh30 = 63,
    OutputCh31 = 64
}

enum FmodDspChannelMixOutput
{
    Default = 0,
    AllMono = 1,
    AllStereo = 2,
    AllQuad = 3,
    All5Point1 = 4,
    All7Point1 = 5,
    AllLfe = 6,
    All7Point1Point4 = 7
}

enum FmodDspTransceiver
{
    Transmit = 0,
    Gain = 1,
    Channel = 2,
    TransmitSpeakerMode = 3
}

enum FmodDspTransceiverSpeakerMode
{
    Auto = -1,
    Mono = 0,
    Stereo = 1,
    Surround = 2
}

enum FmodDspCompressor
{
    Threshold = 0,
    Ratio = 1,
    Attack = 2,
    Release = 3,
    GainMakeup = 4,
    UseSidechain = 5,
    Linked = 6
}

enum FmodDspFft
{
    WindowSize = 0,
    WindowType = 1,
    BandStartFreq = 2,
    BandStopFreq = 3,
    SpectrumData = 4,
    Rms = 5,
    SpectralCentroid = 6,
    ImmediateMode = 7,
    Downmix = 8,
    Channel = 9
}

enum FmodDspFftWindowType
{
    Rect = 0,
    Triangle = 1,
    Hamming = 2,
    Hanning = 3,
    Blackman = 4,
    BlackmanHarris = 5
}

enum FmodDspOscillator
{
    Type = 0,
    Rate = 1
}

enum FmodDspOscillatorType
{
    Sine = 0,
    Square = 1,
    Sawup = 2,
    Sawdown = 3,
    Triangle = 4,
    Noise = 5
}

enum FmodDspConvolution
{
    Ir = 0,
    Wet = 1,
    Dry = 2,
    Linked = 3
}

enum FmodDspFader
{
    Gain = 0,
    OverallGain = 1
}

enum FmodDspMultibandDynamics
{
    LowerFrequency = 0,
    UpperFrequency = 1,
    Linked = 2,
    UseSidechain = 3,
    AMode = 4,
    AGain = 5,
    AThreshold = 6,
    ARatio = 7,
    AAttack = 8,
    ARelease = 9,
    AGainMakeup = 10,
    AResponseData = 11,
    BMode = 12,
    BGain = 13,
    BThreshold = 14,
    BRatio = 15,
    BAttack = 16,
    BRelease = 17,
    BGainMakeup = 18,
    BResponseData = 19,
    CMode = 20,
    CGain = 21,
    CThreshold = 22,
    CRatio = 23,
    CAttack = 24,
    CRelease = 25,
    CGainMakeup = 26,
    CResponseData = 27
}

enum FmodDspMultibandDynamicsModeType
{
    Disabled = 0,
    CompressUp = 1,
    CompressDown = 2,
    ExpandUp = 3,
    ExpandDown = 4
}

enum FmodDspItEcho
{
    WetDryMix = 0,
    Feedback = 1,
    LeftDelay = 2,
    RightDelay = 3,
    PanDelay = 4
}

enum FmodDspSfxReverb
{
    DecayTime = 0,
    EarlyDelay = 1,
    LateDelay = 2,
    HfReference = 3,
    HfDecayRatio = 4,
    Diffusion = 5,
    Density = 6,
    LowShelfFrequency = 7,
    LowShelfGain = 8,
    HighCut = 9,
    EarlyLateMix = 10,
    WetLevel = 11,
    DryLevel = 12
}

enum FmodDspLowPassSimple
{
    Cutoff = 0
}

enum FmodDspHighPassSimple
{
    Cutoff = 0
}

enum FmodDspDelay
{
    Ch0 = 0,
    Ch1 = 1,
    Ch2 = 2,
    Ch3 = 3,
    Ch4 = 4,
    Ch5 = 5,
    Ch6 = 6,
    Ch7 = 7,
    Ch8 = 8,
    Ch9 = 9,
    Ch10 = 10,
    Ch11 = 11,
    Ch12 = 12,
    Ch13 = 13,
    Ch14 = 14,
    Ch15 = 15,
    MaxDelay = 16
}

enum FmodDspTremolo
{
    Frequency = 0,
    Depth = 1,
    Shape = 2,
    Skew = 3,
    Duty = 4,
    Square = 5,
    Phase = 6,
    Spread = 7
}

enum FmodDspSend
{
    ReturnId = 0,
    Level = 1
}

enum FmodDspReturn
{
    Id = 0,
    InputSpeakerMode = 1
}

enum FmodDspPan
{
    Mode = 0,
    _2dStereoPosition = 1,
    _2dDirection = 2,
    _2dExtent = 3,
    _2dRotation = 4,
    _2dLfeLevel = 5,
    _2dStereoMode = 6,
    _2dStereoSeparation = 7,
    _2dStereoAxis = 8,
    EnabledSpeakers = 9,
    _3dPosition = 10,
    _3dRolloff = 11,
    _3dMinDistance = 12,
    _3dMaxDistance = 13,
    _3dExtentMode = 14,
    _3dSoundSize = 15,
    _3dMinExtent = 16,
    _3dPanBlend = 17,
    LfeUpmixEnabled = 18,
    OverallGain = 19,
    SurroundSpeakerMode = 20,
    _2dHeightBlend = 21,
    AttenuationRange = 22,
    OverrideRange = 23
}

enum FmodDspPanModeType
{
    Mono = 0,
    Stereo = 1,
    Surround = 2
}

enum FmodDspPan2dStereoModeType
{
    Distributed = 0,
    Discrete = 1
}

enum FmodDspPan3dRolloffType
{
    LinearSquared = 0,
    Linear = 1,
    Inverse = 2,
    InverseTapered = 3,
    Custom = 4
}

enum FmodDspPan3dExtentModeType
{
    Auto = 0,
    User = 1,
    Off = 2
}

enum FmodDspObjectPan
{
    _3dPosition = 0,
    _3dRolloff = 1,
    _3dMinDistance = 2,
    _3dMaxDistance = 3,
    _3dExtentMode = 4,
    _3dSoundSize = 5,
    _3dMinExtent = 6,
    OverallGain = 7,
    OutputGain = 8,
    AttenuationRange = 9,
    OverrideRange = 10
}

enum FmodDspThreeEq
{
    LowGain = 0,
    MidGain = 1,
    HighGain = 2,
    LowCrossover = 3,
    HighCrossover = 4,
    CrossoverSlope = 5
}

enum FmodDspThreeEqCrossoverSlopeType
{
    _12db = 0,
    _24db = 1,
    _48db = 2
}

enum FmodDspFftDownmixType
{
    None = 0,
    Mono = 1
}

enum FmodDspLoudnessMeter
{
    State = 0,
    Weighting = 1,
    Info = 2
}

enum FmodDspLoudnessMeterStateType
{
    ResetIntegrated = -3,
    ResetMaxPeak = -2,
    ResetAll = -1,
    Paused = 0,
    Analyzing = 1
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
    _7Point1Point4 = 8
}

enum FmodDriverState
{
    Connected = 1,
    Default = 2
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
    DisplayTimestamps = 65536,
    DisplayLineNumbers = 131072,
    DisplayThread = 262144
}

enum FmodDebugMode
{
    Tty = 0,
    File = 1,
    Callback = 2
}

enum FmodSoundType
{
    Unknown = 0,
    Aiff = 1,
    Asf = 2,
    Dls = 3,
    Flac = 4,
    Fsb = 5,
    It = 6,
    Midi = 7,
    Mod = 8,
    Mpeg = 9,
    OggVorbis = 10,
    Playlist = 11,
    Raw = 12,
    S3m = 13,
    User = 14,
    Wav = 15,
    Xm = 16,
    Xma = 17,
    AudioQueue = 18,
    At9 = 19,
    Vorbis = 20,
    MediaFoundation = 21,
    MediaCodec = 22,
    Fadpcm = 23,
    Opus = 24
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
    AudioWorklet = 19,
    Phase = 20,
    OhAudio = 21
}

enum FmodChannelControlDspIndex
{
    Head = -1,
    Fader = -2,
    Tail = -3
}

enum FmodOpenState
{
    Ready = 0,
    Loading = 1,
    Error = 2,
    Connecting = 3,
    Buffering = 4,
    Seeking = 5,
    Playing = 6,
    SetPosition = 7,
    Max = 8
}

enum FmodTagType
{
    Unknown = 0,
    Id3v1 = 1,
    Id3v2 = 2,
    VorbisComment = 3,
    ShoutCast = 4,
    IceCast = 5,
    Asf = 6,
    Midi = 7,
    Playlist = 8,
    Fmod = 9,
    User = 10
}

enum FmodTagDataType
{
    Binary = 0,
    Int = 1,
    Float = 2,
    String = 3,
    StringUtf16 = 4,
    StringUtf16Be = 5,
    StringUtf8 = 6
}

// #####################################################################
// # Constructors
// #####################################################################

/**
 * @returns {Struct.FmodSoundDefaults}
 */
function FmodSoundDefaults() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 3627656448;

    self.frequency = undefined;
    self.priority = undefined;

}

/**
 * @returns {Struct.FmodLoopPoints}
 */
function FmodLoopPoints() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 461444910;

    self.loop_start = undefined;
    self.loop_end = undefined;

}

/**
 * @returns {Struct.FmodSoundMinMaxDistance}
 */
function FmodSoundMinMaxDistance() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 2123847383;

    self.min_distance = undefined;
    self.max_distance = undefined;

}

/**
 * @returns {Struct.FmodConeSettings}
 */
function FmodConeSettings() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 1299505293;

    self.inside_cone_angle = undefined;
    self.outside_cone_angle = undefined;
    self.outside_volume = undefined;

}

/**
 * @returns {Struct.FmodSystem3DSettings}
 */
function FmodSystem3DSettings() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 2923096268;

    self.doppler_scale = undefined;
    self.distance_factor = undefined;
    self.rolloff_scale = undefined;

}

/**
 * @returns {Struct.FmodVec3}
 */
function FmodVec3() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 266577632;

    self.x = undefined;
    self.y = undefined;
    self.z = undefined;

}

/**
 * @returns {Struct.FmodSyncPointInfo}
 */
function FmodSyncPointInfo() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 2703225654;

    self.name = undefined;
    self.offset = undefined;

}

/**
 * @returns {Struct.FmodRecordDriverInfo}
 */
function FmodRecordDriverInfo() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 920558908;

    self.name = undefined;
    self.speaker_mode = undefined;
    self.speaker_mode_channels = undefined;
    self.sample_rate = undefined;
    self.state = undefined;

}

/**
 * @returns {Struct.FmodDSPMixMatrix}
 */
function FmodDSPMixMatrix() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 47636445;

    self.out_channels = undefined;
    self.in_channels = undefined;
    self.matrix = undefined;

}

/**
 * @returns {Struct.FmodDSPChannelFormat}
 */
function FmodDSPChannelFormat() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 4082622682;

    self.channel_mask = undefined;
    self.num_channels = undefined;

}

/**
 * @returns {Struct.FmodDSPMeteringInfo}
 */
function FmodDSPMeteringInfo() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 125554541;

    self.num_samples_analysed = undefined;

}

/**
 * @returns {Struct.FmodDSPMeteringEnabled}
 */
function FmodDSPMeteringEnabled() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 27335014;

    self.input_enabled = undefined;
    self.output_enabled = undefined;

}

/**
 * @returns {Struct.FmodDSPParameterInfo}
 */
function FmodDSPParameterInfo() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 3192645597;

    self.name = undefined;
    self.label = undefined;
    self.description = undefined;

}

/**
 * @returns {Struct.FmodDSPWetDryMix}
 */
function FmodDSPWetDryMix() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 2411303503;

    self.prewet = undefined;
    self.postwet = undefined;
    self.dry = undefined;

}

/**
 * @returns {Struct.FmodDSPInfo}
 */
function FmodDSPInfo() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 1355784450;

    self.name = undefined;
    self.version = undefined;
    self.channels = undefined;
    self.configwidth = undefined;
    self.configheight = undefined;

}

/**
 * @returns {Struct.FmodDSPCPUUsage}
 */
function FmodDSPCPUUsage() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 1533955139;

    self.exclusive = undefined;
    self.inclusive = undefined;

}

/**
 * @returns {Struct.FmodMinMaxDistance}
 */
function FmodMinMaxDistance() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 3358574130;

    self.min_distance = undefined;
    self.max_distance = undefined;

}

/**
 * @returns {Struct.FmodSyncPoint}
 */
function FmodSyncPoint() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 3645350566;

    self.offset = undefined;
    self.name = undefined;

}

/**
 * @returns {Struct.FmodDSPBufferSize}
 */
function FmodDSPBufferSize() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 3160526429;

    self.buff_size = undefined;
    self.num_buffers = undefined;

}

/**
 * @returns {Struct.FmodSoftwareFormat}
 */
function FmodSoftwareFormat() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 3280319589;

    self.sample_rate = undefined;
    self.speaker_mode = undefined;
    self.num_raw_speakers = undefined;

}

/**
 * @returns {Struct.FmodDriverInfo}
 */
function FmodDriverInfo() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 859640589;

    self.name = undefined;
    self.speaker_mode = undefined;
    self.sample_rate = undefined;
    self.speaker_mode_channels = undefined;

}

/**
 * @returns {Struct.FmodDelay}
 */
function FmodDelay() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 2364308294;

    self.dspclock_start = undefined;
    self.dspclock_end = undefined;
    self.stop_channels = undefined;

}

/**
 * @returns {Struct.FmodDSPClock}
 */
function FmodDSPClock() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 3054443060;

    self.dspclock = undefined;
    self.parent_clock = undefined;

}

/**
 * @returns {Struct.FmodSoundOpenState}
 */
function FmodSoundOpenState() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 2354326131;

    self.open_state = undefined;
    self.percent_buffered = undefined;
    self.starving = undefined;
    self.disk_busy = undefined;

}

/**
 * @returns {Struct.FmodSoundTag}
 */
function FmodSoundTag() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 1677482862;

    self.type = undefined;
    self.datatype = undefined;
    self.name = undefined;
    self.data = undefined;
    self.datalen = undefined;
    self.updated = undefined;

}

/**
 * @returns {Struct.FmodFadePoint}
 */
function FmodFadePoint() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 2116764085;

    self.dsp_clock = undefined;
    self.volume = undefined;

}

/**
 * @returns {Struct.FmodDistanceFilter}
 */
function FmodDistanceFilter() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 2335130946;

    self.custom = undefined;
    self.custom_level = undefined;
    self.center_freq = undefined;

}

/**
 * @returns {Struct.FmodOcclusion}
 */
function FmodOcclusion() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 486169080;

    self.direct = undefined;
    self.reverb = undefined;

}

/**
 * @returns {Struct.FmodGeometryMaxPolygons}
 */
function FmodGeometryMaxPolygons() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 3530004540;

    self.max_polygons = undefined;
    self.max_vertices = undefined;

}

/**
 * @returns {Struct.FmodPolygonAttributes}
 */
function FmodPolygonAttributes() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 1182127786;

    self.direct_occlusion = undefined;
    self.reverb_occlusion = undefined;
    self.double_sided = undefined;

}

/**
 * @returns {Struct.FmodReverbProperties}
 */
function FmodReverbProperties() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 577376478;

    self.decay_time = undefined;
    self.early_delay = undefined;
    self.late_delay = undefined;
    self.hf_reference = undefined;
    self.hf_decay_ratio = undefined;
    self.diffusion = undefined;
    self.density = undefined;
    self.low_shelf_frequency = undefined;
    self.low_shelf_gain = undefined;
    self.high_cut = undefined;
    self.early_late_mix = undefined;
    self.wet_level = undefined;

}

/**
 * @returns {Struct.FmodSoundLockLengths}
 */
function FmodSoundLockLengths() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 2854784358;

    self.length1 = undefined;
    self.length2 = undefined;

}

/**
 * @returns {Struct.FmodMemoryStats}
 */
function FmodMemoryStats() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 4239582691;

    self.current_alloced = undefined;
    self.max_alloced = undefined;

}

/**
 * @returns {Struct.FmodAdvancedSettings}
 */
function FmodAdvancedSettings() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 1682729748;

    self.max_mpeg_codecs = undefined;
    self.max_adpcm_codecs = undefined;
    self.max_xma_codecs = undefined;
    self.max_vorbis_codecs = undefined;
    self.max_at9_codecs = undefined;
    self.max_fadpcm_codecs = undefined;
    self.max_pcm_codecs = undefined;
    self.asio_num_channels = undefined;
    self.vol0_virtualvol = undefined;
    self.default_decode_buffer_size = undefined;
    self.profile_port = undefined;
    self.geometry_max_fade_time = undefined;
    self.distance_filter_center_freq = undefined;
    self.reverb3d_instance = undefined;
    self.dsp_buffer_pool_size = undefined;
    self.resampler_method = undefined;
    self.random_seed = undefined;
    self.max_convolution_threads = undefined;
    self.max_opus_codecs = undefined;

}

/**
 * @returns {Struct.FmodSpeakerPosition}
 */
function FmodSpeakerPosition() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 620126607;

    self.x = undefined;
    self.y = undefined;
    self.active = undefined;

}

/**
 * @returns {Struct.FmodCPUUsage}
 */
function FmodCPUUsage() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 2899274370;

    self.dsp = undefined;
    self.stream = undefined;
    self.geometry = undefined;
    self.update = undefined;
    self.convolution1 = undefined;
    self.convolution2 = undefined;

}

/**
 * @returns {Struct.FmodFileUsage}
 */
function FmodFileUsage() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 818733756;

    self.sample_bytes_read = undefined;
    self.stream_bytes_read = undefined;
    self.other_bytes_read = undefined;

}

/**
 * @returns {Struct.FmodStreamBufferSize}
 */
function FmodStreamBufferSize() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 1976399636;

    self.file_buffer_size = undefined;
    self.file_buffer_size_type = undefined;

}

/**
 * @returns {Struct.FmodCreateSoundExInfo}
 */
function FmodCreateSoundExInfo() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 506452871;

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
 * @returns {Struct.FmodListener3DAttributes}
 */
function FmodListener3DAttributes() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 42654001;

    self.position = undefined;
    self.velocity = undefined;
    self.forward = undefined;
    self.up = undefined;

}

/**
 * @returns {Struct.FmodChannelControl3DAttributes}
 */
function FmodChannelControl3DAttributes() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 2963893429;

    self.position = undefined;
    self.velocity = undefined;

}

/**
 * @returns {Struct.FmodGeometryRotation}
 */
function FmodGeometryRotation() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 96951905;

    self.forward = undefined;
    self.up = undefined;

}

/**
 * @returns {Struct.FmodReverb3DAttributes}
 */
function FmodReverb3DAttributes() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 1847445409;

    self.position = undefined;
    self.min_distance = undefined;
    self.max_distance = undefined;

}

// #####################################################################
// # Codecs
// #####################################################################

/**
 * @func __FmodSoundDefaults_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodSoundDefaults} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodSoundDefaults_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: frequency, type: Float64
        if (!is_numeric(self.frequency)) show_error($"{_where} :: self.frequency expected number", true);
        buffer_write(_buffer, buffer_f64, self.frequency);

        // field: priority, type: Float64
        if (!is_numeric(self.priority)) show_error($"{_where} :: self.priority expected number", true);
        buffer_write(_buffer, buffer_f64, self.priority);

    }
}

/**
 * @func __FmodSoundDefaults_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodSoundDefaults}
 * @ignore
 */
function __FmodSoundDefaults_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodSoundDefaults();
    with (_inst)
    {
        // field: frequency, type: Float64
        self.frequency = buffer_read(_buffer, buffer_f64);

        // field: priority, type: Float64
        self.priority = buffer_read(_buffer, buffer_f64);

    }

    return _inst;
}

/**
 * @func __FmodLoopPoints_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodLoopPoints} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodLoopPoints_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: loop_start, type: Float64
        if (!is_numeric(self.loop_start)) show_error($"{_where} :: self.loop_start expected number", true);
        buffer_write(_buffer, buffer_f64, self.loop_start);

        // field: loop_end, type: Float64
        if (!is_numeric(self.loop_end)) show_error($"{_where} :: self.loop_end expected number", true);
        buffer_write(_buffer, buffer_f64, self.loop_end);

    }
}

/**
 * @func __FmodLoopPoints_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodLoopPoints}
 * @ignore
 */
function __FmodLoopPoints_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodLoopPoints();
    with (_inst)
    {
        // field: loop_start, type: Float64
        self.loop_start = buffer_read(_buffer, buffer_f64);

        // field: loop_end, type: Float64
        self.loop_end = buffer_read(_buffer, buffer_f64);

    }

    return _inst;
}

/**
 * @func __FmodSoundMinMaxDistance_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodSoundMinMaxDistance} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodSoundMinMaxDistance_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
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
 * @func __FmodSoundMinMaxDistance_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodSoundMinMaxDistance}
 * @ignore
 */
function __FmodSoundMinMaxDistance_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodSoundMinMaxDistance();
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
 * @func __FmodConeSettings_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodConeSettings} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodConeSettings_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: inside_cone_angle, type: Float64
        if (!is_numeric(self.inside_cone_angle)) show_error($"{_where} :: self.inside_cone_angle expected number", true);
        buffer_write(_buffer, buffer_f64, self.inside_cone_angle);

        // field: outside_cone_angle, type: Float64
        if (!is_numeric(self.outside_cone_angle)) show_error($"{_where} :: self.outside_cone_angle expected number", true);
        buffer_write(_buffer, buffer_f64, self.outside_cone_angle);

        // field: outside_volume, type: Float64
        if (!is_numeric(self.outside_volume)) show_error($"{_where} :: self.outside_volume expected number", true);
        buffer_write(_buffer, buffer_f64, self.outside_volume);

    }
}

/**
 * @func __FmodConeSettings_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodConeSettings}
 * @ignore
 */
function __FmodConeSettings_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodConeSettings();
    with (_inst)
    {
        // field: inside_cone_angle, type: Float64
        self.inside_cone_angle = buffer_read(_buffer, buffer_f64);

        // field: outside_cone_angle, type: Float64
        self.outside_cone_angle = buffer_read(_buffer, buffer_f64);

        // field: outside_volume, type: Float64
        self.outside_volume = buffer_read(_buffer, buffer_f64);

    }

    return _inst;
}

/**
 * @func __FmodSystem3DSettings_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodSystem3DSettings} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodSystem3DSettings_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: doppler_scale, type: Float64
        if (!is_numeric(self.doppler_scale)) show_error($"{_where} :: self.doppler_scale expected number", true);
        buffer_write(_buffer, buffer_f64, self.doppler_scale);

        // field: distance_factor, type: Float64
        if (!is_numeric(self.distance_factor)) show_error($"{_where} :: self.distance_factor expected number", true);
        buffer_write(_buffer, buffer_f64, self.distance_factor);

        // field: rolloff_scale, type: Float64
        if (!is_numeric(self.rolloff_scale)) show_error($"{_where} :: self.rolloff_scale expected number", true);
        buffer_write(_buffer, buffer_f64, self.rolloff_scale);

    }
}

/**
 * @func __FmodSystem3DSettings_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodSystem3DSettings}
 * @ignore
 */
function __FmodSystem3DSettings_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodSystem3DSettings();
    with (_inst)
    {
        // field: doppler_scale, type: Float64
        self.doppler_scale = buffer_read(_buffer, buffer_f64);

        // field: distance_factor, type: Float64
        self.distance_factor = buffer_read(_buffer, buffer_f64);

        // field: rolloff_scale, type: Float64
        self.rolloff_scale = buffer_read(_buffer, buffer_f64);

    }

    return _inst;
}

/**
 * @func __FmodVec3_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodVec3} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodVec3_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
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
 * @func __FmodVec3_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodVec3}
 * @ignore
 */
function __FmodVec3_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodVec3();
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
 * @func __FmodSyncPointInfo_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodSyncPointInfo} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodSyncPointInfo_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: name, type: String
        if (!is_string(self.name)) show_error($"{_where} :: self.name expected string", true);
        buffer_write(_buffer, buffer_u32, string_byte_length(self.name));
        buffer_write(_buffer, buffer_string, self.name);

        // field: offset, type: Float64
        if (!is_numeric(self.offset)) show_error($"{_where} :: self.offset expected number", true);
        buffer_write(_buffer, buffer_f64, self.offset);

    }
}

/**
 * @func __FmodSyncPointInfo_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodSyncPointInfo}
 * @ignore
 */
function __FmodSyncPointInfo_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodSyncPointInfo();
    with (_inst)
    {
        // field: name, type: String
        buffer_read(_buffer, buffer_u32);
        self.name = buffer_read(_buffer, buffer_string);

        // field: offset, type: Float64
        self.offset = buffer_read(_buffer, buffer_f64);

    }

    return _inst;
}

/**
 * @func __FmodRecordDriverInfo_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodRecordDriverInfo} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodRecordDriverInfo_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: name, type: String
        if (!is_string(self.name)) show_error($"{_where} :: self.name expected string", true);
        buffer_write(_buffer, buffer_u32, string_byte_length(self.name));
        buffer_write(_buffer, buffer_string, self.name);

        // field: speaker_mode, type: enum FmodSpeakerMode

        if (!is_numeric(self.speaker_mode)) show_error($"{_where} :: self.speaker_mode expected number", true);
        buffer_write(_buffer, buffer_u64, self.speaker_mode);

        // field: speaker_mode_channels, type: Float64
        if (!is_numeric(self.speaker_mode_channels)) show_error($"{_where} :: self.speaker_mode_channels expected number", true);
        buffer_write(_buffer, buffer_f64, self.speaker_mode_channels);

        // field: sample_rate, type: Float64
        if (!is_numeric(self.sample_rate)) show_error($"{_where} :: self.sample_rate expected number", true);
        buffer_write(_buffer, buffer_f64, self.sample_rate);

        // field: state, type: enum FmodDriverState

        if (!is_numeric(self.state)) show_error($"{_where} :: self.state expected number", true);
        buffer_write(_buffer, buffer_u64, self.state);

    }
}

/**
 * @func __FmodRecordDriverInfo_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodRecordDriverInfo}
 * @ignore
 */
function __FmodRecordDriverInfo_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodRecordDriverInfo();
    with (_inst)
    {
        // field: name, type: String
        buffer_read(_buffer, buffer_u32);
        self.name = buffer_read(_buffer, buffer_string);

        // field: speaker_mode, type: enum FmodSpeakerMode
        self.speaker_mode = buffer_read(_buffer, buffer_u64);

        // field: speaker_mode_channels, type: Float64
        self.speaker_mode_channels = buffer_read(_buffer, buffer_f64);

        // field: sample_rate, type: Float64
        self.sample_rate = buffer_read(_buffer, buffer_f64);

        // field: state, type: enum FmodDriverState
        self.state = buffer_read(_buffer, buffer_u64);

    }

    return _inst;
}

/**
 * @func __FmodDSPMixMatrix_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodDSPMixMatrix} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodDSPMixMatrix_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: out_channels, type: Float64
        if (!is_numeric(self.out_channels)) show_error($"{_where} :: self.out_channels expected number", true);
        buffer_write(_buffer, buffer_f64, self.out_channels);

        // field: in_channels, type: Float64
        if (!is_numeric(self.in_channels)) show_error($"{_where} :: self.in_channels expected number", true);
        buffer_write(_buffer, buffer_f64, self.in_channels);

        // field: matrix, type: Float64
        if (!is_numeric(self.matrix)) show_error($"{_where} :: self.matrix expected number", true);
        buffer_write(_buffer, buffer_f64, self.matrix);

    }
}

/**
 * @func __FmodDSPMixMatrix_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodDSPMixMatrix}
 * @ignore
 */
function __FmodDSPMixMatrix_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodDSPMixMatrix();
    with (_inst)
    {
        // field: out_channels, type: Float64
        self.out_channels = buffer_read(_buffer, buffer_f64);

        // field: in_channels, type: Float64
        self.in_channels = buffer_read(_buffer, buffer_f64);

        // field: matrix, type: Float64
        self.matrix = buffer_read(_buffer, buffer_f64);

    }

    return _inst;
}

/**
 * @func __FmodDSPChannelFormat_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodDSPChannelFormat} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodDSPChannelFormat_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: channel_mask, type: Float64
        if (!is_numeric(self.channel_mask)) show_error($"{_where} :: self.channel_mask expected number", true);
        buffer_write(_buffer, buffer_f64, self.channel_mask);

        // field: num_channels, type: Float64
        if (!is_numeric(self.num_channels)) show_error($"{_where} :: self.num_channels expected number", true);
        buffer_write(_buffer, buffer_f64, self.num_channels);

    }
}

/**
 * @func __FmodDSPChannelFormat_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodDSPChannelFormat}
 * @ignore
 */
function __FmodDSPChannelFormat_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodDSPChannelFormat();
    with (_inst)
    {
        // field: channel_mask, type: Float64
        self.channel_mask = buffer_read(_buffer, buffer_f64);

        // field: num_channels, type: Float64
        self.num_channels = buffer_read(_buffer, buffer_f64);

    }

    return _inst;
}

/**
 * @func __FmodDSPMeteringInfo_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodDSPMeteringInfo} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodDSPMeteringInfo_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: num_samples_analysed, type: Float64
        if (!is_numeric(self.num_samples_analysed)) show_error($"{_where} :: self.num_samples_analysed expected number", true);
        buffer_write(_buffer, buffer_f64, self.num_samples_analysed);

    }
}

/**
 * @func __FmodDSPMeteringInfo_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodDSPMeteringInfo}
 * @ignore
 */
function __FmodDSPMeteringInfo_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodDSPMeteringInfo();
    with (_inst)
    {
        // field: num_samples_analysed, type: Float64
        self.num_samples_analysed = buffer_read(_buffer, buffer_f64);

    }

    return _inst;
}

/**
 * @func __FmodDSPMeteringEnabled_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodDSPMeteringEnabled} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodDSPMeteringEnabled_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: input_enabled, type: Float64
        if (!is_numeric(self.input_enabled)) show_error($"{_where} :: self.input_enabled expected number", true);
        buffer_write(_buffer, buffer_f64, self.input_enabled);

        // field: output_enabled, type: Float64
        if (!is_numeric(self.output_enabled)) show_error($"{_where} :: self.output_enabled expected number", true);
        buffer_write(_buffer, buffer_f64, self.output_enabled);

    }
}

/**
 * @func __FmodDSPMeteringEnabled_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodDSPMeteringEnabled}
 * @ignore
 */
function __FmodDSPMeteringEnabled_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodDSPMeteringEnabled();
    with (_inst)
    {
        // field: input_enabled, type: Float64
        self.input_enabled = buffer_read(_buffer, buffer_f64);

        // field: output_enabled, type: Float64
        self.output_enabled = buffer_read(_buffer, buffer_f64);

    }

    return _inst;
}

/**
 * @func __FmodDSPParameterInfo_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodDSPParameterInfo} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodDSPParameterInfo_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: name, type: String
        if (!is_string(self.name)) show_error($"{_where} :: self.name expected string", true);
        buffer_write(_buffer, buffer_u32, string_byte_length(self.name));
        buffer_write(_buffer, buffer_string, self.name);

        // field: label, type: String
        if (!is_string(self.label)) show_error($"{_where} :: self.label expected string", true);
        buffer_write(_buffer, buffer_u32, string_byte_length(self.label));
        buffer_write(_buffer, buffer_string, self.label);

        // field: description, type: String
        if (!is_string(self.description)) show_error($"{_where} :: self.description expected string", true);
        buffer_write(_buffer, buffer_u32, string_byte_length(self.description));
        buffer_write(_buffer, buffer_string, self.description);

    }
}

/**
 * @func __FmodDSPParameterInfo_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodDSPParameterInfo}
 * @ignore
 */
function __FmodDSPParameterInfo_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodDSPParameterInfo();
    with (_inst)
    {
        // field: name, type: String
        buffer_read(_buffer, buffer_u32);
        self.name = buffer_read(_buffer, buffer_string);

        // field: label, type: String
        buffer_read(_buffer, buffer_u32);
        self.label = buffer_read(_buffer, buffer_string);

        // field: description, type: String
        buffer_read(_buffer, buffer_u32);
        self.description = buffer_read(_buffer, buffer_string);

    }

    return _inst;
}

/**
 * @func __FmodDSPWetDryMix_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodDSPWetDryMix} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodDSPWetDryMix_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: prewet, type: Float64
        if (!is_numeric(self.prewet)) show_error($"{_where} :: self.prewet expected number", true);
        buffer_write(_buffer, buffer_f64, self.prewet);

        // field: postwet, type: Float64
        if (!is_numeric(self.postwet)) show_error($"{_where} :: self.postwet expected number", true);
        buffer_write(_buffer, buffer_f64, self.postwet);

        // field: dry, type: Float64
        if (!is_numeric(self.dry)) show_error($"{_where} :: self.dry expected number", true);
        buffer_write(_buffer, buffer_f64, self.dry);

    }
}

/**
 * @func __FmodDSPWetDryMix_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodDSPWetDryMix}
 * @ignore
 */
function __FmodDSPWetDryMix_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodDSPWetDryMix();
    with (_inst)
    {
        // field: prewet, type: Float64
        self.prewet = buffer_read(_buffer, buffer_f64);

        // field: postwet, type: Float64
        self.postwet = buffer_read(_buffer, buffer_f64);

        // field: dry, type: Float64
        self.dry = buffer_read(_buffer, buffer_f64);

    }

    return _inst;
}

/**
 * @func __FmodDSPInfo_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodDSPInfo} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodDSPInfo_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: name, type: String
        if (!is_string(self.name)) show_error($"{_where} :: self.name expected string", true);
        buffer_write(_buffer, buffer_u32, string_byte_length(self.name));
        buffer_write(_buffer, buffer_string, self.name);

        // field: version, type: Float64
        if (!is_numeric(self.version)) show_error($"{_where} :: self.version expected number", true);
        buffer_write(_buffer, buffer_f64, self.version);

        // field: channels, type: Float64
        if (!is_numeric(self.channels)) show_error($"{_where} :: self.channels expected number", true);
        buffer_write(_buffer, buffer_f64, self.channels);

        // field: configwidth, type: Float64
        if (!is_numeric(self.configwidth)) show_error($"{_where} :: self.configwidth expected number", true);
        buffer_write(_buffer, buffer_f64, self.configwidth);

        // field: configheight, type: Float64
        if (!is_numeric(self.configheight)) show_error($"{_where} :: self.configheight expected number", true);
        buffer_write(_buffer, buffer_f64, self.configheight);

    }
}

/**
 * @func __FmodDSPInfo_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodDSPInfo}
 * @ignore
 */
function __FmodDSPInfo_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodDSPInfo();
    with (_inst)
    {
        // field: name, type: String
        buffer_read(_buffer, buffer_u32);
        self.name = buffer_read(_buffer, buffer_string);

        // field: version, type: Float64
        self.version = buffer_read(_buffer, buffer_f64);

        // field: channels, type: Float64
        self.channels = buffer_read(_buffer, buffer_f64);

        // field: configwidth, type: Float64
        self.configwidth = buffer_read(_buffer, buffer_f64);

        // field: configheight, type: Float64
        self.configheight = buffer_read(_buffer, buffer_f64);

    }

    return _inst;
}

/**
 * @func __FmodDSPCPUUsage_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodDSPCPUUsage} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodDSPCPUUsage_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
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
 * @func __FmodDSPCPUUsage_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodDSPCPUUsage}
 * @ignore
 */
function __FmodDSPCPUUsage_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodDSPCPUUsage();
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
 * @func __FmodMinMaxDistance_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodMinMaxDistance} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodMinMaxDistance_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
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
 * @func __FmodMinMaxDistance_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodMinMaxDistance}
 * @ignore
 */
function __FmodMinMaxDistance_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodMinMaxDistance();
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
 * @func __FmodSyncPoint_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodSyncPoint} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodSyncPoint_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: offset, type: Float64
        if (!is_numeric(self.offset)) show_error($"{_where} :: self.offset expected number", true);
        buffer_write(_buffer, buffer_f64, self.offset);

        // field: name, type: String
        if (!is_string(self.name)) show_error($"{_where} :: self.name expected string", true);
        buffer_write(_buffer, buffer_u32, string_byte_length(self.name));
        buffer_write(_buffer, buffer_string, self.name);

    }
}

/**
 * @func __FmodSyncPoint_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodSyncPoint}
 * @ignore
 */
function __FmodSyncPoint_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodSyncPoint();
    with (_inst)
    {
        // field: offset, type: Float64
        self.offset = buffer_read(_buffer, buffer_f64);

        // field: name, type: String
        buffer_read(_buffer, buffer_u32);
        self.name = buffer_read(_buffer, buffer_string);

    }

    return _inst;
}

/**
 * @func __FmodDSPBufferSize_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodDSPBufferSize} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodDSPBufferSize_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: buff_size, type: Float64
        if (!is_numeric(self.buff_size)) show_error($"{_where} :: self.buff_size expected number", true);
        buffer_write(_buffer, buffer_f64, self.buff_size);

        // field: num_buffers, type: Float64
        if (!is_numeric(self.num_buffers)) show_error($"{_where} :: self.num_buffers expected number", true);
        buffer_write(_buffer, buffer_f64, self.num_buffers);

    }
}

/**
 * @func __FmodDSPBufferSize_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodDSPBufferSize}
 * @ignore
 */
function __FmodDSPBufferSize_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodDSPBufferSize();
    with (_inst)
    {
        // field: buff_size, type: Float64
        self.buff_size = buffer_read(_buffer, buffer_f64);

        // field: num_buffers, type: Float64
        self.num_buffers = buffer_read(_buffer, buffer_f64);

    }

    return _inst;
}

/**
 * @func __FmodSoftwareFormat_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodSoftwareFormat} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodSoftwareFormat_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: sample_rate, type: Float64
        if (!is_numeric(self.sample_rate)) show_error($"{_where} :: self.sample_rate expected number", true);
        buffer_write(_buffer, buffer_f64, self.sample_rate);

        // field: speaker_mode, type: enum FmodSpeakerMode

        if (!is_numeric(self.speaker_mode)) show_error($"{_where} :: self.speaker_mode expected number", true);
        buffer_write(_buffer, buffer_u64, self.speaker_mode);

        // field: num_raw_speakers, type: Float64
        if (!is_numeric(self.num_raw_speakers)) show_error($"{_where} :: self.num_raw_speakers expected number", true);
        buffer_write(_buffer, buffer_f64, self.num_raw_speakers);

    }
}

/**
 * @func __FmodSoftwareFormat_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodSoftwareFormat}
 * @ignore
 */
function __FmodSoftwareFormat_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodSoftwareFormat();
    with (_inst)
    {
        // field: sample_rate, type: Float64
        self.sample_rate = buffer_read(_buffer, buffer_f64);

        // field: speaker_mode, type: enum FmodSpeakerMode
        self.speaker_mode = buffer_read(_buffer, buffer_u64);

        // field: num_raw_speakers, type: Float64
        self.num_raw_speakers = buffer_read(_buffer, buffer_f64);

    }

    return _inst;
}

/**
 * @func __FmodDriverInfo_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodDriverInfo} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodDriverInfo_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: name, type: String
        if (!is_string(self.name)) show_error($"{_where} :: self.name expected string", true);
        buffer_write(_buffer, buffer_u32, string_byte_length(self.name));
        buffer_write(_buffer, buffer_string, self.name);

        // field: speaker_mode, type: enum FmodSpeakerMode

        if (!is_numeric(self.speaker_mode)) show_error($"{_where} :: self.speaker_mode expected number", true);
        buffer_write(_buffer, buffer_u64, self.speaker_mode);

        // field: sample_rate, type: Float64
        if (!is_numeric(self.sample_rate)) show_error($"{_where} :: self.sample_rate expected number", true);
        buffer_write(_buffer, buffer_f64, self.sample_rate);

        // field: speaker_mode_channels, type: Float64
        if (!is_numeric(self.speaker_mode_channels)) show_error($"{_where} :: self.speaker_mode_channels expected number", true);
        buffer_write(_buffer, buffer_f64, self.speaker_mode_channels);

    }
}

/**
 * @func __FmodDriverInfo_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodDriverInfo}
 * @ignore
 */
function __FmodDriverInfo_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodDriverInfo();
    with (_inst)
    {
        // field: name, type: String
        buffer_read(_buffer, buffer_u32);
        self.name = buffer_read(_buffer, buffer_string);

        // field: speaker_mode, type: enum FmodSpeakerMode
        self.speaker_mode = buffer_read(_buffer, buffer_u64);

        // field: sample_rate, type: Float64
        self.sample_rate = buffer_read(_buffer, buffer_f64);

        // field: speaker_mode_channels, type: Float64
        self.speaker_mode_channels = buffer_read(_buffer, buffer_f64);

    }

    return _inst;
}

/**
 * @func __FmodDelay_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodDelay} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodDelay_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: dspclock_start, type: Float64
        if (!is_numeric(self.dspclock_start)) show_error($"{_where} :: self.dspclock_start expected number", true);
        buffer_write(_buffer, buffer_f64, self.dspclock_start);

        // field: dspclock_end, type: Float64
        if (!is_numeric(self.dspclock_end)) show_error($"{_where} :: self.dspclock_end expected number", true);
        buffer_write(_buffer, buffer_f64, self.dspclock_end);

        // field: stop_channels, type: Float64
        if (!is_numeric(self.stop_channels)) show_error($"{_where} :: self.stop_channels expected number", true);
        buffer_write(_buffer, buffer_f64, self.stop_channels);

    }
}

/**
 * @func __FmodDelay_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodDelay}
 * @ignore
 */
function __FmodDelay_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodDelay();
    with (_inst)
    {
        // field: dspclock_start, type: Float64
        self.dspclock_start = buffer_read(_buffer, buffer_f64);

        // field: dspclock_end, type: Float64
        self.dspclock_end = buffer_read(_buffer, buffer_f64);

        // field: stop_channels, type: Float64
        self.stop_channels = buffer_read(_buffer, buffer_f64);

    }

    return _inst;
}

/**
 * @func __FmodDSPClock_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodDSPClock} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodDSPClock_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: dspclock, type: Float64
        if (!is_numeric(self.dspclock)) show_error($"{_where} :: self.dspclock expected number", true);
        buffer_write(_buffer, buffer_f64, self.dspclock);

        // field: parent_clock, type: Float64
        if (!is_numeric(self.parent_clock)) show_error($"{_where} :: self.parent_clock expected number", true);
        buffer_write(_buffer, buffer_f64, self.parent_clock);

    }
}

/**
 * @func __FmodDSPClock_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodDSPClock}
 * @ignore
 */
function __FmodDSPClock_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodDSPClock();
    with (_inst)
    {
        // field: dspclock, type: Float64
        self.dspclock = buffer_read(_buffer, buffer_f64);

        // field: parent_clock, type: Float64
        self.parent_clock = buffer_read(_buffer, buffer_f64);

    }

    return _inst;
}

/**
 * @func __FmodSoundOpenState_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodSoundOpenState} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodSoundOpenState_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: open_state, type: enum FmodOpenState

        if (!is_numeric(self.open_state)) show_error($"{_where} :: self.open_state expected number", true);
        buffer_write(_buffer, buffer_u64, self.open_state);

        // field: percent_buffered, type: Float64
        if (!is_numeric(self.percent_buffered)) show_error($"{_where} :: self.percent_buffered expected number", true);
        buffer_write(_buffer, buffer_f64, self.percent_buffered);

        // field: starving, type: Float64
        if (!is_numeric(self.starving)) show_error($"{_where} :: self.starving expected number", true);
        buffer_write(_buffer, buffer_f64, self.starving);

        // field: disk_busy, type: Float64
        if (!is_numeric(self.disk_busy)) show_error($"{_where} :: self.disk_busy expected number", true);
        buffer_write(_buffer, buffer_f64, self.disk_busy);

    }
}

/**
 * @func __FmodSoundOpenState_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodSoundOpenState}
 * @ignore
 */
function __FmodSoundOpenState_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodSoundOpenState();
    with (_inst)
    {
        // field: open_state, type: enum FmodOpenState
        self.open_state = buffer_read(_buffer, buffer_u64);

        // field: percent_buffered, type: Float64
        self.percent_buffered = buffer_read(_buffer, buffer_f64);

        // field: starving, type: Float64
        self.starving = buffer_read(_buffer, buffer_f64);

        // field: disk_busy, type: Float64
        self.disk_busy = buffer_read(_buffer, buffer_f64);

    }

    return _inst;
}

/**
 * @func __FmodSoundTag_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodSoundTag} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodSoundTag_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: type, type: enum FmodTagType

        if (!is_numeric(self.type)) show_error($"{_where} :: self.type expected number", true);
        buffer_write(_buffer, buffer_u64, self.type);

        // field: datatype, type: enum FmodTagDataType

        if (!is_numeric(self.datatype)) show_error($"{_where} :: self.datatype expected number", true);
        buffer_write(_buffer, buffer_u64, self.datatype);

        // field: name, type: String
        if (!is_string(self.name)) show_error($"{_where} :: self.name expected string", true);
        buffer_write(_buffer, buffer_u32, string_byte_length(self.name));
        buffer_write(_buffer, buffer_string, self.name);

        // field: data, type: String
        if (!is_string(self.data)) show_error($"{_where} :: self.data expected string", true);
        buffer_write(_buffer, buffer_u32, string_byte_length(self.data));
        buffer_write(_buffer, buffer_string, self.data);

        // field: datalen, type: Float64
        if (!is_numeric(self.datalen)) show_error($"{_where} :: self.datalen expected number", true);
        buffer_write(_buffer, buffer_f64, self.datalen);

        // field: updated, type: Float64
        if (!is_numeric(self.updated)) show_error($"{_where} :: self.updated expected number", true);
        buffer_write(_buffer, buffer_f64, self.updated);

    }
}

/**
 * @func __FmodSoundTag_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodSoundTag}
 * @ignore
 */
function __FmodSoundTag_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodSoundTag();
    with (_inst)
    {
        // field: type, type: enum FmodTagType
        self.type = buffer_read(_buffer, buffer_u64);

        // field: datatype, type: enum FmodTagDataType
        self.datatype = buffer_read(_buffer, buffer_u64);

        // field: name, type: String
        buffer_read(_buffer, buffer_u32);
        self.name = buffer_read(_buffer, buffer_string);

        // field: data, type: String
        buffer_read(_buffer, buffer_u32);
        self.data = buffer_read(_buffer, buffer_string);

        // field: datalen, type: Float64
        self.datalen = buffer_read(_buffer, buffer_f64);

        // field: updated, type: Float64
        self.updated = buffer_read(_buffer, buffer_f64);

    }

    return _inst;
}

/**
 * @func __FmodFadePoint_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodFadePoint} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodFadePoint_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: dsp_clock, type: Float64
        if (!is_numeric(self.dsp_clock)) show_error($"{_where} :: self.dsp_clock expected number", true);
        buffer_write(_buffer, buffer_f64, self.dsp_clock);

        // field: volume, type: Float64
        if (!is_numeric(self.volume)) show_error($"{_where} :: self.volume expected number", true);
        buffer_write(_buffer, buffer_f64, self.volume);

    }
}

/**
 * @func __FmodFadePoint_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodFadePoint}
 * @ignore
 */
function __FmodFadePoint_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodFadePoint();
    with (_inst)
    {
        // field: dsp_clock, type: Float64
        self.dsp_clock = buffer_read(_buffer, buffer_f64);

        // field: volume, type: Float64
        self.volume = buffer_read(_buffer, buffer_f64);

    }

    return _inst;
}

/**
 * @func __FmodDistanceFilter_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodDistanceFilter} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodDistanceFilter_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: custom, type: Float64
        if (!is_numeric(self.custom)) show_error($"{_where} :: self.custom expected number", true);
        buffer_write(_buffer, buffer_f64, self.custom);

        // field: custom_level, type: Float64
        if (!is_numeric(self.custom_level)) show_error($"{_where} :: self.custom_level expected number", true);
        buffer_write(_buffer, buffer_f64, self.custom_level);

        // field: center_freq, type: Float64
        if (!is_numeric(self.center_freq)) show_error($"{_where} :: self.center_freq expected number", true);
        buffer_write(_buffer, buffer_f64, self.center_freq);

    }
}

/**
 * @func __FmodDistanceFilter_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodDistanceFilter}
 * @ignore
 */
function __FmodDistanceFilter_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodDistanceFilter();
    with (_inst)
    {
        // field: custom, type: Float64
        self.custom = buffer_read(_buffer, buffer_f64);

        // field: custom_level, type: Float64
        self.custom_level = buffer_read(_buffer, buffer_f64);

        // field: center_freq, type: Float64
        self.center_freq = buffer_read(_buffer, buffer_f64);

    }

    return _inst;
}

/**
 * @func __FmodOcclusion_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodOcclusion} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodOcclusion_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: direct, type: Float64
        if (!is_numeric(self.direct)) show_error($"{_where} :: self.direct expected number", true);
        buffer_write(_buffer, buffer_f64, self.direct);

        // field: reverb, type: Float64
        if (!is_numeric(self.reverb)) show_error($"{_where} :: self.reverb expected number", true);
        buffer_write(_buffer, buffer_f64, self.reverb);

    }
}

/**
 * @func __FmodOcclusion_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodOcclusion}
 * @ignore
 */
function __FmodOcclusion_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodOcclusion();
    with (_inst)
    {
        // field: direct, type: Float64
        self.direct = buffer_read(_buffer, buffer_f64);

        // field: reverb, type: Float64
        self.reverb = buffer_read(_buffer, buffer_f64);

    }

    return _inst;
}

/**
 * @func __FmodGeometryMaxPolygons_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodGeometryMaxPolygons} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodGeometryMaxPolygons_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: max_polygons, type: Float64
        if (!is_numeric(self.max_polygons)) show_error($"{_where} :: self.max_polygons expected number", true);
        buffer_write(_buffer, buffer_f64, self.max_polygons);

        // field: max_vertices, type: Float64
        if (!is_numeric(self.max_vertices)) show_error($"{_where} :: self.max_vertices expected number", true);
        buffer_write(_buffer, buffer_f64, self.max_vertices);

    }
}

/**
 * @func __FmodGeometryMaxPolygons_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodGeometryMaxPolygons}
 * @ignore
 */
function __FmodGeometryMaxPolygons_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodGeometryMaxPolygons();
    with (_inst)
    {
        // field: max_polygons, type: Float64
        self.max_polygons = buffer_read(_buffer, buffer_f64);

        // field: max_vertices, type: Float64
        self.max_vertices = buffer_read(_buffer, buffer_f64);

    }

    return _inst;
}

/**
 * @func __FmodPolygonAttributes_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodPolygonAttributes} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodPolygonAttributes_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: direct_occlusion, type: Float64
        if (!is_numeric(self.direct_occlusion)) show_error($"{_where} :: self.direct_occlusion expected number", true);
        buffer_write(_buffer, buffer_f64, self.direct_occlusion);

        // field: reverb_occlusion, type: Float64
        if (!is_numeric(self.reverb_occlusion)) show_error($"{_where} :: self.reverb_occlusion expected number", true);
        buffer_write(_buffer, buffer_f64, self.reverb_occlusion);

        // field: double_sided, type: Float64
        if (!is_numeric(self.double_sided)) show_error($"{_where} :: self.double_sided expected number", true);
        buffer_write(_buffer, buffer_f64, self.double_sided);

    }
}

/**
 * @func __FmodPolygonAttributes_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodPolygonAttributes}
 * @ignore
 */
function __FmodPolygonAttributes_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodPolygonAttributes();
    with (_inst)
    {
        // field: direct_occlusion, type: Float64
        self.direct_occlusion = buffer_read(_buffer, buffer_f64);

        // field: reverb_occlusion, type: Float64
        self.reverb_occlusion = buffer_read(_buffer, buffer_f64);

        // field: double_sided, type: Float64
        self.double_sided = buffer_read(_buffer, buffer_f64);

    }

    return _inst;
}

/**
 * @func __FmodReverbProperties_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodReverbProperties} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodReverbProperties_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: decay_time, type: Float64
        if (!is_numeric(self.decay_time)) show_error($"{_where} :: self.decay_time expected number", true);
        buffer_write(_buffer, buffer_f64, self.decay_time);

        // field: early_delay, type: Float64
        if (!is_numeric(self.early_delay)) show_error($"{_where} :: self.early_delay expected number", true);
        buffer_write(_buffer, buffer_f64, self.early_delay);

        // field: late_delay, type: Float64
        if (!is_numeric(self.late_delay)) show_error($"{_where} :: self.late_delay expected number", true);
        buffer_write(_buffer, buffer_f64, self.late_delay);

        // field: hf_reference, type: Float64
        if (!is_numeric(self.hf_reference)) show_error($"{_where} :: self.hf_reference expected number", true);
        buffer_write(_buffer, buffer_f64, self.hf_reference);

        // field: hf_decay_ratio, type: Float64
        if (!is_numeric(self.hf_decay_ratio)) show_error($"{_where} :: self.hf_decay_ratio expected number", true);
        buffer_write(_buffer, buffer_f64, self.hf_decay_ratio);

        // field: diffusion, type: Float64
        if (!is_numeric(self.diffusion)) show_error($"{_where} :: self.diffusion expected number", true);
        buffer_write(_buffer, buffer_f64, self.diffusion);

        // field: density, type: Float64
        if (!is_numeric(self.density)) show_error($"{_where} :: self.density expected number", true);
        buffer_write(_buffer, buffer_f64, self.density);

        // field: low_shelf_frequency, type: Float64
        if (!is_numeric(self.low_shelf_frequency)) show_error($"{_where} :: self.low_shelf_frequency expected number", true);
        buffer_write(_buffer, buffer_f64, self.low_shelf_frequency);

        // field: low_shelf_gain, type: Float64
        if (!is_numeric(self.low_shelf_gain)) show_error($"{_where} :: self.low_shelf_gain expected number", true);
        buffer_write(_buffer, buffer_f64, self.low_shelf_gain);

        // field: high_cut, type: Float64
        if (!is_numeric(self.high_cut)) show_error($"{_where} :: self.high_cut expected number", true);
        buffer_write(_buffer, buffer_f64, self.high_cut);

        // field: early_late_mix, type: Float64
        if (!is_numeric(self.early_late_mix)) show_error($"{_where} :: self.early_late_mix expected number", true);
        buffer_write(_buffer, buffer_f64, self.early_late_mix);

        // field: wet_level, type: Float64
        if (!is_numeric(self.wet_level)) show_error($"{_where} :: self.wet_level expected number", true);
        buffer_write(_buffer, buffer_f64, self.wet_level);

    }
}

/**
 * @func __FmodReverbProperties_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodReverbProperties}
 * @ignore
 */
function __FmodReverbProperties_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodReverbProperties();
    with (_inst)
    {
        // field: decay_time, type: Float64
        self.decay_time = buffer_read(_buffer, buffer_f64);

        // field: early_delay, type: Float64
        self.early_delay = buffer_read(_buffer, buffer_f64);

        // field: late_delay, type: Float64
        self.late_delay = buffer_read(_buffer, buffer_f64);

        // field: hf_reference, type: Float64
        self.hf_reference = buffer_read(_buffer, buffer_f64);

        // field: hf_decay_ratio, type: Float64
        self.hf_decay_ratio = buffer_read(_buffer, buffer_f64);

        // field: diffusion, type: Float64
        self.diffusion = buffer_read(_buffer, buffer_f64);

        // field: density, type: Float64
        self.density = buffer_read(_buffer, buffer_f64);

        // field: low_shelf_frequency, type: Float64
        self.low_shelf_frequency = buffer_read(_buffer, buffer_f64);

        // field: low_shelf_gain, type: Float64
        self.low_shelf_gain = buffer_read(_buffer, buffer_f64);

        // field: high_cut, type: Float64
        self.high_cut = buffer_read(_buffer, buffer_f64);

        // field: early_late_mix, type: Float64
        self.early_late_mix = buffer_read(_buffer, buffer_f64);

        // field: wet_level, type: Float64
        self.wet_level = buffer_read(_buffer, buffer_f64);

    }

    return _inst;
}

/**
 * @func __FmodSoundLockLengths_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodSoundLockLengths} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodSoundLockLengths_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: length1, type: Float64
        if (!is_numeric(self.length1)) show_error($"{_where} :: self.length1 expected number", true);
        buffer_write(_buffer, buffer_f64, self.length1);

        // field: length2, type: Float64
        if (!is_numeric(self.length2)) show_error($"{_where} :: self.length2 expected number", true);
        buffer_write(_buffer, buffer_f64, self.length2);

    }
}

/**
 * @func __FmodSoundLockLengths_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodSoundLockLengths}
 * @ignore
 */
function __FmodSoundLockLengths_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodSoundLockLengths();
    with (_inst)
    {
        // field: length1, type: Float64
        self.length1 = buffer_read(_buffer, buffer_f64);

        // field: length2, type: Float64
        self.length2 = buffer_read(_buffer, buffer_f64);

    }

    return _inst;
}

/**
 * @func __FmodMemoryStats_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodMemoryStats} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodMemoryStats_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: current_alloced, type: Float64
        if (!is_numeric(self.current_alloced)) show_error($"{_where} :: self.current_alloced expected number", true);
        buffer_write(_buffer, buffer_f64, self.current_alloced);

        // field: max_alloced, type: Float64
        if (!is_numeric(self.max_alloced)) show_error($"{_where} :: self.max_alloced expected number", true);
        buffer_write(_buffer, buffer_f64, self.max_alloced);

    }
}

/**
 * @func __FmodMemoryStats_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodMemoryStats}
 * @ignore
 */
function __FmodMemoryStats_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodMemoryStats();
    with (_inst)
    {
        // field: current_alloced, type: Float64
        self.current_alloced = buffer_read(_buffer, buffer_f64);

        // field: max_alloced, type: Float64
        self.max_alloced = buffer_read(_buffer, buffer_f64);

    }

    return _inst;
}

/**
 * @func __FmodAdvancedSettings_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodAdvancedSettings} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodAdvancedSettings_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: max_mpeg_codecs, type: Float64
        if (!is_numeric(self.max_mpeg_codecs)) show_error($"{_where} :: self.max_mpeg_codecs expected number", true);
        buffer_write(_buffer, buffer_f64, self.max_mpeg_codecs);

        // field: max_adpcm_codecs, type: Float64
        if (!is_numeric(self.max_adpcm_codecs)) show_error($"{_where} :: self.max_adpcm_codecs expected number", true);
        buffer_write(_buffer, buffer_f64, self.max_adpcm_codecs);

        // field: max_xma_codecs, type: Float64
        if (!is_numeric(self.max_xma_codecs)) show_error($"{_where} :: self.max_xma_codecs expected number", true);
        buffer_write(_buffer, buffer_f64, self.max_xma_codecs);

        // field: max_vorbis_codecs, type: Float64
        if (!is_numeric(self.max_vorbis_codecs)) show_error($"{_where} :: self.max_vorbis_codecs expected number", true);
        buffer_write(_buffer, buffer_f64, self.max_vorbis_codecs);

        // field: max_at9_codecs, type: Float64
        if (!is_numeric(self.max_at9_codecs)) show_error($"{_where} :: self.max_at9_codecs expected number", true);
        buffer_write(_buffer, buffer_f64, self.max_at9_codecs);

        // field: max_fadpcm_codecs, type: Float64
        if (!is_numeric(self.max_fadpcm_codecs)) show_error($"{_where} :: self.max_fadpcm_codecs expected number", true);
        buffer_write(_buffer, buffer_f64, self.max_fadpcm_codecs);

        // field: max_pcm_codecs, type: Float64
        if (!is_numeric(self.max_pcm_codecs)) show_error($"{_where} :: self.max_pcm_codecs expected number", true);
        buffer_write(_buffer, buffer_f64, self.max_pcm_codecs);

        // field: asio_num_channels, type: Float64
        if (!is_numeric(self.asio_num_channels)) show_error($"{_where} :: self.asio_num_channels expected number", true);
        buffer_write(_buffer, buffer_f64, self.asio_num_channels);

        // field: vol0_virtualvol, type: Float64
        if (!is_numeric(self.vol0_virtualvol)) show_error($"{_where} :: self.vol0_virtualvol expected number", true);
        buffer_write(_buffer, buffer_f64, self.vol0_virtualvol);

        // field: default_decode_buffer_size, type: Float64
        if (!is_numeric(self.default_decode_buffer_size)) show_error($"{_where} :: self.default_decode_buffer_size expected number", true);
        buffer_write(_buffer, buffer_f64, self.default_decode_buffer_size);

        // field: profile_port, type: Float64
        if (!is_numeric(self.profile_port)) show_error($"{_where} :: self.profile_port expected number", true);
        buffer_write(_buffer, buffer_f64, self.profile_port);

        // field: geometry_max_fade_time, type: Float64
        if (!is_numeric(self.geometry_max_fade_time)) show_error($"{_where} :: self.geometry_max_fade_time expected number", true);
        buffer_write(_buffer, buffer_f64, self.geometry_max_fade_time);

        // field: distance_filter_center_freq, type: Float64
        if (!is_numeric(self.distance_filter_center_freq)) show_error($"{_where} :: self.distance_filter_center_freq expected number", true);
        buffer_write(_buffer, buffer_f64, self.distance_filter_center_freq);

        // field: reverb3d_instance, type: Float64
        if (!is_numeric(self.reverb3d_instance)) show_error($"{_where} :: self.reverb3d_instance expected number", true);
        buffer_write(_buffer, buffer_f64, self.reverb3d_instance);

        // field: dsp_buffer_pool_size, type: Float64
        if (!is_numeric(self.dsp_buffer_pool_size)) show_error($"{_where} :: self.dsp_buffer_pool_size expected number", true);
        buffer_write(_buffer, buffer_f64, self.dsp_buffer_pool_size);

        // field: resampler_method, type: Float64
        if (!is_numeric(self.resampler_method)) show_error($"{_where} :: self.resampler_method expected number", true);
        buffer_write(_buffer, buffer_f64, self.resampler_method);

        // field: random_seed, type: Float64
        if (!is_numeric(self.random_seed)) show_error($"{_where} :: self.random_seed expected number", true);
        buffer_write(_buffer, buffer_f64, self.random_seed);

        // field: max_convolution_threads, type: Float64
        if (!is_numeric(self.max_convolution_threads)) show_error($"{_where} :: self.max_convolution_threads expected number", true);
        buffer_write(_buffer, buffer_f64, self.max_convolution_threads);

        // field: max_opus_codecs, type: Float64
        if (!is_numeric(self.max_opus_codecs)) show_error($"{_where} :: self.max_opus_codecs expected number", true);
        buffer_write(_buffer, buffer_f64, self.max_opus_codecs);

    }
}

/**
 * @func __FmodAdvancedSettings_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodAdvancedSettings}
 * @ignore
 */
function __FmodAdvancedSettings_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodAdvancedSettings();
    with (_inst)
    {
        // field: max_mpeg_codecs, type: Float64
        self.max_mpeg_codecs = buffer_read(_buffer, buffer_f64);

        // field: max_adpcm_codecs, type: Float64
        self.max_adpcm_codecs = buffer_read(_buffer, buffer_f64);

        // field: max_xma_codecs, type: Float64
        self.max_xma_codecs = buffer_read(_buffer, buffer_f64);

        // field: max_vorbis_codecs, type: Float64
        self.max_vorbis_codecs = buffer_read(_buffer, buffer_f64);

        // field: max_at9_codecs, type: Float64
        self.max_at9_codecs = buffer_read(_buffer, buffer_f64);

        // field: max_fadpcm_codecs, type: Float64
        self.max_fadpcm_codecs = buffer_read(_buffer, buffer_f64);

        // field: max_pcm_codecs, type: Float64
        self.max_pcm_codecs = buffer_read(_buffer, buffer_f64);

        // field: asio_num_channels, type: Float64
        self.asio_num_channels = buffer_read(_buffer, buffer_f64);

        // field: vol0_virtualvol, type: Float64
        self.vol0_virtualvol = buffer_read(_buffer, buffer_f64);

        // field: default_decode_buffer_size, type: Float64
        self.default_decode_buffer_size = buffer_read(_buffer, buffer_f64);

        // field: profile_port, type: Float64
        self.profile_port = buffer_read(_buffer, buffer_f64);

        // field: geometry_max_fade_time, type: Float64
        self.geometry_max_fade_time = buffer_read(_buffer, buffer_f64);

        // field: distance_filter_center_freq, type: Float64
        self.distance_filter_center_freq = buffer_read(_buffer, buffer_f64);

        // field: reverb3d_instance, type: Float64
        self.reverb3d_instance = buffer_read(_buffer, buffer_f64);

        // field: dsp_buffer_pool_size, type: Float64
        self.dsp_buffer_pool_size = buffer_read(_buffer, buffer_f64);

        // field: resampler_method, type: Float64
        self.resampler_method = buffer_read(_buffer, buffer_f64);

        // field: random_seed, type: Float64
        self.random_seed = buffer_read(_buffer, buffer_f64);

        // field: max_convolution_threads, type: Float64
        self.max_convolution_threads = buffer_read(_buffer, buffer_f64);

        // field: max_opus_codecs, type: Float64
        self.max_opus_codecs = buffer_read(_buffer, buffer_f64);

    }

    return _inst;
}

/**
 * @func __FmodSpeakerPosition_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodSpeakerPosition} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodSpeakerPosition_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
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

        // field: active, type: Float64
        if (!is_numeric(self.active)) show_error($"{_where} :: self.active expected number", true);
        buffer_write(_buffer, buffer_f64, self.active);

    }
}

/**
 * @func __FmodSpeakerPosition_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodSpeakerPosition}
 * @ignore
 */
function __FmodSpeakerPosition_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodSpeakerPosition();
    with (_inst)
    {
        // field: x, type: Float64
        self.x = buffer_read(_buffer, buffer_f64);

        // field: y, type: Float64
        self.y = buffer_read(_buffer, buffer_f64);

        // field: active, type: Float64
        self.active = buffer_read(_buffer, buffer_f64);

    }

    return _inst;
}

/**
 * @func __FmodCPUUsage_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodCPUUsage} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodCPUUsage_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
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
 * @func __FmodCPUUsage_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodCPUUsage}
 * @ignore
 */
function __FmodCPUUsage_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodCPUUsage();
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
 * @func __FmodFileUsage_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodFileUsage} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodFileUsage_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: sample_bytes_read, type: Float64
        if (!is_numeric(self.sample_bytes_read)) show_error($"{_where} :: self.sample_bytes_read expected number", true);
        buffer_write(_buffer, buffer_f64, self.sample_bytes_read);

        // field: stream_bytes_read, type: Float64
        if (!is_numeric(self.stream_bytes_read)) show_error($"{_where} :: self.stream_bytes_read expected number", true);
        buffer_write(_buffer, buffer_f64, self.stream_bytes_read);

        // field: other_bytes_read, type: Float64
        if (!is_numeric(self.other_bytes_read)) show_error($"{_where} :: self.other_bytes_read expected number", true);
        buffer_write(_buffer, buffer_f64, self.other_bytes_read);

    }
}

/**
 * @func __FmodFileUsage_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodFileUsage}
 * @ignore
 */
function __FmodFileUsage_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodFileUsage();
    with (_inst)
    {
        // field: sample_bytes_read, type: Float64
        self.sample_bytes_read = buffer_read(_buffer, buffer_f64);

        // field: stream_bytes_read, type: Float64
        self.stream_bytes_read = buffer_read(_buffer, buffer_f64);

        // field: other_bytes_read, type: Float64
        self.other_bytes_read = buffer_read(_buffer, buffer_f64);

    }

    return _inst;
}

/**
 * @func __FmodStreamBufferSize_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodStreamBufferSize} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodStreamBufferSize_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: file_buffer_size, type: Float64
        if (!is_numeric(self.file_buffer_size)) show_error($"{_where} :: self.file_buffer_size expected number", true);
        buffer_write(_buffer, buffer_f64, self.file_buffer_size);

        // field: file_buffer_size_type, type: Float64
        if (!is_numeric(self.file_buffer_size_type)) show_error($"{_where} :: self.file_buffer_size_type expected number", true);
        buffer_write(_buffer, buffer_f64, self.file_buffer_size_type);

    }
}

/**
 * @func __FmodStreamBufferSize_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodStreamBufferSize}
 * @ignore
 */
function __FmodStreamBufferSize_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodStreamBufferSize();
    with (_inst)
    {
        // field: file_buffer_size, type: Float64
        self.file_buffer_size = buffer_read(_buffer, buffer_f64);

        // field: file_buffer_size_type, type: Float64
        self.file_buffer_size_type = buffer_read(_buffer, buffer_f64);

    }

    return _inst;
}

/**
 * @func __FmodCreateSoundExInfo_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodCreateSoundExInfo} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodCreateSoundExInfo_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
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

        // field: format, type: enum FmodSoundFormat

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
 * @func __FmodCreateSoundExInfo_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodCreateSoundExInfo}
 * @ignore
 */
function __FmodCreateSoundExInfo_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodCreateSoundExInfo();
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

        // field: format, type: enum FmodSoundFormat
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
 * @func __FmodListener3DAttributes_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodListener3DAttributes} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodListener3DAttributes_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: position, type: struct FmodVec3
        if (self.position.__uid != 266577632) show_error($"{_where} :: self.position expected FmodVec3", true);
        __FmodVec3_encode(self.position, _buffer, buffer_tell(_buffer), _where);

        // field: velocity, type: struct FmodVec3
        if (self.velocity.__uid != 266577632) show_error($"{_where} :: self.velocity expected FmodVec3", true);
        __FmodVec3_encode(self.velocity, _buffer, buffer_tell(_buffer), _where);

        // field: forward, type: struct FmodVec3
        if (self.forward.__uid != 266577632) show_error($"{_where} :: self.forward expected FmodVec3", true);
        __FmodVec3_encode(self.forward, _buffer, buffer_tell(_buffer), _where);

        // field: up, type: struct FmodVec3
        if (self.up.__uid != 266577632) show_error($"{_where} :: self.up expected FmodVec3", true);
        __FmodVec3_encode(self.up, _buffer, buffer_tell(_buffer), _where);

    }
}

/**
 * @func __FmodListener3DAttributes_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodListener3DAttributes}
 * @ignore
 */
function __FmodListener3DAttributes_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodListener3DAttributes();
    with (_inst)
    {
        // field: position, type: struct FmodVec3
        self.position = __FmodVec3_decode(_buffer, buffer_tell(_buffer));

        // field: velocity, type: struct FmodVec3
        self.velocity = __FmodVec3_decode(_buffer, buffer_tell(_buffer));

        // field: forward, type: struct FmodVec3
        self.forward = __FmodVec3_decode(_buffer, buffer_tell(_buffer));

        // field: up, type: struct FmodVec3
        self.up = __FmodVec3_decode(_buffer, buffer_tell(_buffer));

    }

    return _inst;
}

/**
 * @func __FmodChannelControl3DAttributes_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodChannelControl3DAttributes} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodChannelControl3DAttributes_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: position, type: struct FmodVec3
        if (self.position.__uid != 266577632) show_error($"{_where} :: self.position expected FmodVec3", true);
        __FmodVec3_encode(self.position, _buffer, buffer_tell(_buffer), _where);

        // field: velocity, type: struct FmodVec3
        if (self.velocity.__uid != 266577632) show_error($"{_where} :: self.velocity expected FmodVec3", true);
        __FmodVec3_encode(self.velocity, _buffer, buffer_tell(_buffer), _where);

    }
}

/**
 * @func __FmodChannelControl3DAttributes_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodChannelControl3DAttributes}
 * @ignore
 */
function __FmodChannelControl3DAttributes_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodChannelControl3DAttributes();
    with (_inst)
    {
        // field: position, type: struct FmodVec3
        self.position = __FmodVec3_decode(_buffer, buffer_tell(_buffer));

        // field: velocity, type: struct FmodVec3
        self.velocity = __FmodVec3_decode(_buffer, buffer_tell(_buffer));

    }

    return _inst;
}

/**
 * @func __FmodGeometryRotation_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodGeometryRotation} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodGeometryRotation_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: forward, type: struct FmodVec3
        if (self.forward.__uid != 266577632) show_error($"{_where} :: self.forward expected FmodVec3", true);
        __FmodVec3_encode(self.forward, _buffer, buffer_tell(_buffer), _where);

        // field: up, type: struct FmodVec3
        if (self.up.__uid != 266577632) show_error($"{_where} :: self.up expected FmodVec3", true);
        __FmodVec3_encode(self.up, _buffer, buffer_tell(_buffer), _where);

    }
}

/**
 * @func __FmodGeometryRotation_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodGeometryRotation}
 * @ignore
 */
function __FmodGeometryRotation_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodGeometryRotation();
    with (_inst)
    {
        // field: forward, type: struct FmodVec3
        self.forward = __FmodVec3_decode(_buffer, buffer_tell(_buffer));

        // field: up, type: struct FmodVec3
        self.up = __FmodVec3_decode(_buffer, buffer_tell(_buffer));

    }

    return _inst;
}

/**
 * @func __FmodReverb3DAttributes_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodReverb3DAttributes} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodReverb3DAttributes_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: position, type: struct FmodVec3
        if (self.position.__uid != 266577632) show_error($"{_where} :: self.position expected FmodVec3", true);
        __FmodVec3_encode(self.position, _buffer, buffer_tell(_buffer), _where);

        // field: min_distance, type: Float64
        if (!is_numeric(self.min_distance)) show_error($"{_where} :: self.min_distance expected number", true);
        buffer_write(_buffer, buffer_f64, self.min_distance);

        // field: max_distance, type: Float64
        if (!is_numeric(self.max_distance)) show_error($"{_where} :: self.max_distance expected number", true);
        buffer_write(_buffer, buffer_f64, self.max_distance);

    }
}

/**
 * @func __FmodReverb3DAttributes_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodReverb3DAttributes}
 * @ignore
 */
function __FmodReverb3DAttributes_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodReverb3DAttributes();
    with (_inst)
    {
        // field: position, type: struct FmodVec3
        self.position = __FmodVec3_decode(_buffer, buffer_tell(_buffer));

        // field: min_distance, type: Float64
        self.min_distance = buffer_read(_buffer, buffer_f64);

        // field: max_distance, type: Float64
        self.max_distance = buffer_read(_buffer, buffer_f64);

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

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_last_result(buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = buffer_read(__ret_buffer__, buffer_u64);
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

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _flags, type: enum FmodDebugFlags

    if (!is_numeric(_flags)) show_error($"{_GMFUNCTION_} :: _flags expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _flags);

    // param: _mode, type: enum FmodDebugMode

    if (!is_numeric(_mode)) show_error($"{_GMFUNCTION_} :: _mode expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _mode);

    var __return_value__ = __fmod_debug_initialize(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Enum.FmodResult} _result
 * @returns {String}
 */
function fmod_error_string(_result)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _result, type: enum FmodResult

    if (!is_numeric(_result)) show_error($"{_GMFUNCTION_} :: _result expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _result);

    var __return_value__ = __fmod_error_string(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

// Skipping function fmod_fetch_callbacks (no wrapper is required)


// Skipping function fmod_shutdown (no wrapper is required)


// Skipping function fmod_file_get_disk_busy (no wrapper is required)


// Skipping function fmod_file_set_disk_busy (no wrapper is required)


/**
 * @param {Real} _blocking
 * @returns {Struct.FmodMemoryStats}
 */
function fmod_memory_get_stats(_blocking)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_memory_get_stats(_blocking, buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodMemoryStats_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

// Skipping function fmod_thread_set_attributes (no wrapper is required)


/**
 * @param {Real} _channel_ref
 * @param {Real} _frequency
 * @returns {Real}
 */
function fmod_channel_set_frequency(_channel_ref, _frequency)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_ref, type: UInt64
    if (!is_numeric(_channel_ref)) show_error($"{_GMFUNCTION_} :: _channel_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_ref);

    // param: _frequency, type: Float64
    if (!is_numeric(_frequency)) show_error($"{_GMFUNCTION_} :: _frequency expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _frequency);

    var __return_value__ = __fmod_channel_set_frequency(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_ref
 * @returns {Real}
 */
function fmod_channel_get_frequency(_channel_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_ref, type: UInt64
    if (!is_numeric(_channel_ref)) show_error($"{_GMFUNCTION_} :: _channel_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_ref);

    var __return_value__ = __fmod_channel_get_frequency(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_ref
 * @param {Real} _priority
 * @returns {Real}
 */
function fmod_channel_set_priority(_channel_ref, _priority)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_ref, type: UInt64
    if (!is_numeric(_channel_ref)) show_error($"{_GMFUNCTION_} :: _channel_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_ref);

    // param: _priority, type: Float64
    if (!is_numeric(_priority)) show_error($"{_GMFUNCTION_} :: _priority expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _priority);

    var __return_value__ = __fmod_channel_set_priority(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_ref
 * @returns {Real}
 */
function fmod_channel_get_priority(_channel_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_ref, type: UInt64
    if (!is_numeric(_channel_ref)) show_error($"{_GMFUNCTION_} :: _channel_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_ref);

    var __return_value__ = __fmod_channel_get_priority(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_ref
 * @param {Real} _position
 * @param {Real} _time_unit
 * @returns {Real}
 */
function fmod_channel_set_position(_channel_ref, _position, _time_unit)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_ref, type: UInt64
    if (!is_numeric(_channel_ref)) show_error($"{_GMFUNCTION_} :: _channel_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_ref);

    // param: _position, type: Float64
    if (!is_numeric(_position)) show_error($"{_GMFUNCTION_} :: _position expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _position);

    // param: _time_unit, type: Float64
    if (!is_numeric(_time_unit)) show_error($"{_GMFUNCTION_} :: _time_unit expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _time_unit);

    var __return_value__ = __fmod_channel_set_position(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_ref
 * @param {Real} _time_unit
 * @returns {Real}
 */
function fmod_channel_get_position(_channel_ref, _time_unit)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_ref, type: UInt64
    if (!is_numeric(_channel_ref)) show_error($"{_GMFUNCTION_} :: _channel_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_ref);

    // param: _time_unit, type: Float64
    if (!is_numeric(_time_unit)) show_error($"{_GMFUNCTION_} :: _time_unit expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _time_unit);

    var __return_value__ = __fmod_channel_get_position(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_ref
 * @param {Real} _channel_group_ref
 * @returns {Real}
 */
function fmod_channel_set_channel_group(_channel_ref, _channel_group_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_ref, type: UInt64
    if (!is_numeric(_channel_ref)) show_error($"{_GMFUNCTION_} :: _channel_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_ref);

    // param: _channel_group_ref, type: UInt64
    if (!is_numeric(_channel_group_ref)) show_error($"{_GMFUNCTION_} :: _channel_group_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_group_ref);

    var __return_value__ = __fmod_channel_set_channel_group(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_ref
 * @returns {Real}
 */
function fmod_channel_get_channel_group(_channel_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_ref, type: UInt64
    if (!is_numeric(_channel_ref)) show_error($"{_GMFUNCTION_} :: _channel_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_ref);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_channel_get_channel_group(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = buffer_read(__ret_buffer__, buffer_u64);
    return __result__;
}

/**
 * @param {Real} _channel_ref
 * @param {Real} _loop_count
 * @returns {Real}
 */
function fmod_channel_set_loop_count(_channel_ref, _loop_count)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_ref, type: UInt64
    if (!is_numeric(_channel_ref)) show_error($"{_GMFUNCTION_} :: _channel_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_ref);

    // param: _loop_count, type: Float64
    if (!is_numeric(_loop_count)) show_error($"{_GMFUNCTION_} :: _loop_count expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _loop_count);

    var __return_value__ = __fmod_channel_set_loop_count(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_ref
 * @returns {Real}
 */
function fmod_channel_get_loop_count(_channel_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_ref, type: UInt64
    if (!is_numeric(_channel_ref)) show_error($"{_GMFUNCTION_} :: _channel_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_ref);

    var __return_value__ = __fmod_channel_get_loop_count(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_ref
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

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_ref, type: UInt64
    if (!is_numeric(_channel_ref)) show_error($"{_GMFUNCTION_} :: _channel_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_ref);

    // param: _loop_start, type: Float64
    if (!is_numeric(_loop_start)) show_error($"{_GMFUNCTION_} :: _loop_start expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _loop_start);

    // param: _loop_start_type, type: Float64
    if (!is_numeric(_loop_start_type)) show_error($"{_GMFUNCTION_} :: _loop_start_type expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _loop_start_type);

    // param: _loop_end, type: Float64
    if (!is_numeric(_loop_end)) show_error($"{_GMFUNCTION_} :: _loop_end expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _loop_end);

    // param: _loop_end_type, type: Float64
    if (!is_numeric(_loop_end_type)) show_error($"{_GMFUNCTION_} :: _loop_end_type expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _loop_end_type);

    var __return_value__ = __fmod_channel_set_loop_points(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_ref
 * @param {Real} _start_type
 * @param {Real} _end_type
 * @returns {Struct.FmodLoopPoints}
 */
function fmod_channel_get_loop_points(_channel_ref, _start_type, _end_type)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_ref, type: UInt64
    if (!is_numeric(_channel_ref)) show_error($"{_GMFUNCTION_} :: _channel_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_ref);

    // param: _start_type, type: Float64
    if (!is_numeric(_start_type)) show_error($"{_GMFUNCTION_} :: _start_type expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _start_type);

    // param: _end_type, type: Float64
    if (!is_numeric(_end_type)) show_error($"{_GMFUNCTION_} :: _end_type expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _end_type);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_channel_get_loop_points(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodLoopPoints_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @param {Real} _channel_ref
 * @returns {Real}
 */
function fmod_channel_is_virtual(_channel_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_ref, type: UInt64
    if (!is_numeric(_channel_ref)) show_error($"{_GMFUNCTION_} :: _channel_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_ref);

    var __return_value__ = __fmod_channel_is_virtual(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_ref
 * @returns {Real}
 */
function fmod_channel_get_index(_channel_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_ref, type: UInt64
    if (!is_numeric(_channel_ref)) show_error($"{_GMFUNCTION_} :: _channel_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_ref);

    var __return_value__ = __fmod_channel_get_index(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_ref
 * @returns {Real}
 */
function fmod_channel_get_current_sound(_channel_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_ref, type: UInt64
    if (!is_numeric(_channel_ref)) show_error($"{_GMFUNCTION_} :: _channel_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_ref);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_channel_get_current_sound(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = buffer_read(__ret_buffer__, buffer_u64);
    return __result__;
}

/**
 * @param {Real} _channel_ref
 * @returns {Real}
 */
function fmod_channel_get_system_object(_channel_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_ref, type: UInt64
    if (!is_numeric(_channel_ref)) show_error($"{_GMFUNCTION_} :: _channel_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_ref);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_channel_get_system_object(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = buffer_read(__ret_buffer__, buffer_u64);
    return __result__;
}

/**
 * @returns {Real}
 */
function fmod_system_create()
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_system_create(buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = buffer_read(__ret_buffer__, buffer_u64);
    return __result__;
}

// Skipping function fmod_system_init (no wrapper is required)


/**
 * @param {Real} _system_ref
 * @returns {Real}
 */
function fmod_system_release(_system_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _system_ref, type: UInt64
    if (!is_numeric(_system_ref)) show_error($"{_GMFUNCTION_} :: _system_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _system_ref);

    var __return_value__ = __fmod_system_release(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _system_ref
 * @returns {Real}
 */
function fmod_system_close(_system_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _system_ref, type: UInt64
    if (!is_numeric(_system_ref)) show_error($"{_GMFUNCTION_} :: _system_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _system_ref);

    var __return_value__ = __fmod_system_close(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

// Skipping function fmod_system_update (no wrapper is required)


// Skipping function fmod_system_get_channels_playing (no wrapper is required)


/**
 * @param {Real} _index
 * @returns {Real}
 */
function fmod_system_get_channel(_index)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_system_get_channel(_index, buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = buffer_read(__ret_buffer__, buffer_u64);
    return __result__;
}

/**
 * @returns {Real}
 */
function fmod_system_get_master_channel_group()
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_system_get_master_channel_group(buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = buffer_read(__ret_buffer__, buffer_u64);
    return __result__;
}

/**
 * @param {Enum.FmodOutputType} _output
 * @returns {Real}
 */
function fmod_system_set_output(_output)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _output, type: enum FmodOutputType

    if (!is_numeric(_output)) show_error($"{_GMFUNCTION_} :: _output expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _output);

    var __return_value__ = __fmod_system_set_output(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @returns {Enum.FmodOutputType}
 */
function fmod_system_get_output()
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_system_get_output(buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = buffer_read(__ret_buffer__, buffer_u64);
    return __result__;
}

// Skipping function fmod_system_get_num_drivers (no wrapper is required)


// Skipping function fmod_system_set_driver (no wrapper is required)


// Skipping function fmod_system_get_driver (no wrapper is required)


// Skipping function fmod_system_set_software_channels (no wrapper is required)


// Skipping function fmod_system_get_software_channels (no wrapper is required)


// Skipping function fmod_system_set_3d_settings (no wrapper is required)


/**
 * @returns {Struct.FmodSystem3DSettings}
 */
function fmod_system_get_3d_settings()
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_system_get_3d_settings(buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodSystem3DSettings_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @param {Real} _listener_index
 * @param {Struct.FmodVec3} _position
 * @param {Struct.FmodVec3} _velocity
 * @param {Struct.FmodVec3} _forward
 * @param {Struct.FmodVec3} _up
 * @returns {Real}
 */
function fmod_system_set_3d_listener_attributes(_listener_index, _position, _velocity, _forward, _up)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _listener_index, type: Float64
    if (!is_numeric(_listener_index)) show_error($"{_GMFUNCTION_} :: _listener_index expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _listener_index);

    // param: _position, type: struct FmodVec3
    if (_position.__uid != 266577632) show_error($"{_GMFUNCTION_} :: _position expected FmodVec3", true);
    __FmodVec3_encode(_position, __args_buffer__, buffer_tell(__args_buffer__), _GMFUNCTION_);

    // param: _velocity, type: struct FmodVec3
    if (_velocity.__uid != 266577632) show_error($"{_GMFUNCTION_} :: _velocity expected FmodVec3", true);
    __FmodVec3_encode(_velocity, __args_buffer__, buffer_tell(__args_buffer__), _GMFUNCTION_);

    // param: _forward, type: struct FmodVec3
    if (_forward.__uid != 266577632) show_error($"{_GMFUNCTION_} :: _forward expected FmodVec3", true);
    __FmodVec3_encode(_forward, __args_buffer__, buffer_tell(__args_buffer__), _GMFUNCTION_);

    // param: _up, type: struct FmodVec3
    if (_up.__uid != 266577632) show_error($"{_GMFUNCTION_} :: _up expected FmodVec3", true);
    __FmodVec3_encode(_up, __args_buffer__, buffer_tell(__args_buffer__), _GMFUNCTION_);

    var __return_value__ = __fmod_system_set_3d_listener_attributes(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _listener_index
 * @returns {Struct.FmodListener3DAttributes}
 */
function fmod_system_get_3d_listener_attributes(_listener_index)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_system_get_3d_listener_attributes(_listener_index, buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodListener3DAttributes_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

// Skipping function fmod_system_get_record_num_drivers (no wrapper is required)


/**
 * @param {Real} _record_driver_index
 * @returns {Struct.FmodRecordDriverInfo}
 */
function fmod_system_get_record_driver_info(_record_driver_index)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_system_get_record_driver_info(_record_driver_index, buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodRecordDriverInfo_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

// Skipping function fmod_system_get_record_position (no wrapper is required)


/**
 * @param {Real} _device_index
 * @param {Real} _sound_ref
 * @param {Real} _loop
 * @returns {Real}
 */
function fmod_system_record_start(_device_index, _sound_ref, _loop)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _device_index, type: Float64
    if (!is_numeric(_device_index)) show_error($"{_GMFUNCTION_} :: _device_index expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _device_index);

    // param: _sound_ref, type: UInt64
    if (!is_numeric(_sound_ref)) show_error($"{_GMFUNCTION_} :: _sound_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _sound_ref);

    // param: _loop, type: Float64
    if (!is_numeric(_loop)) show_error($"{_GMFUNCTION_} :: _loop expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _loop);

    var __return_value__ = __fmod_system_record_start(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

// Skipping function fmod_system_record_stop (no wrapper is required)


// Skipping function fmod_system_is_recording (no wrapper is required)


/**
 * @returns {Real}
 */
function fmod_system_create_dsp()
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_system_create_dsp(buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = buffer_read(__ret_buffer__, buffer_u64);
    return __result__;
}

/**
 * @param {Enum.FmodDspType} _dsp_type
 * @returns {Real}
 */
function fmod_system_create_dsp_by_type(_dsp_type)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _dsp_type, type: enum FmodDspType

    if (!is_numeric(_dsp_type)) show_error($"{_GMFUNCTION_} :: _dsp_type expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _dsp_type);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_system_create_dsp_by_type(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = buffer_read(__ret_buffer__, buffer_u64);
    return __result__;
}

/**
 * @returns {Struct.FmodDSPBufferSize}
 */
function fmod_system_get_dsp_buffer_size()
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_system_get_dsp_buffer_size(buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodDSPBufferSize_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

// Skipping function fmod_system_set_dsp_buffer_size (no wrapper is required)


/**
 * @returns {Struct.FmodSoftwareFormat}
 */
function fmod_system_get_software_format()
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_system_get_software_format(buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodSoftwareFormat_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @param {Real} _sample_rate
 * @param {Enum.FmodSpeakerMode} _speaker_mode
 * @param {Real} _num_raw_speakers
 * @returns {Real}
 */
function fmod_system_set_software_format(_sample_rate, _speaker_mode, _num_raw_speakers)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _sample_rate, type: Float64
    if (!is_numeric(_sample_rate)) show_error($"{_GMFUNCTION_} :: _sample_rate expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _sample_rate);

    // param: _speaker_mode, type: enum FmodSpeakerMode

    if (!is_numeric(_speaker_mode)) show_error($"{_GMFUNCTION_} :: _speaker_mode expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _speaker_mode);

    // param: _num_raw_speakers, type: Float64
    if (!is_numeric(_num_raw_speakers)) show_error($"{_GMFUNCTION_} :: _num_raw_speakers expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _num_raw_speakers);

    var __return_value__ = __fmod_system_set_software_format(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

// Skipping function fmod_system_set_stream_buffer_size (no wrapper is required)


/**
 * @param {Real} _driver_id
 * @returns {Struct.FmodDriverInfo}
 */
function fmod_system_get_driver_info(_driver_id)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_system_get_driver_info(_driver_id, buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodDriverInfo_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @param {String} _name
 * @returns {Real}
 */
function fmod_system_create_channel_group(_name)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_system_create_channel_group(_name, buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = buffer_read(__ret_buffer__, buffer_u64);
    return __result__;
}

/**
 * @param {Real} _dsp_ref
 * @param {Real} _channel_group_ref
 * @param {Real} _paused
 * @returns {Real}
 */
function fmod_system_play_dsp(_dsp_ref, _channel_group_ref, _paused)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _dsp_ref, type: UInt64
    if (!is_numeric(_dsp_ref)) show_error($"{_GMFUNCTION_} :: _dsp_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _dsp_ref);

    // param: _channel_group_ref, type: UInt64
    if (!is_numeric(_channel_group_ref)) show_error($"{_GMFUNCTION_} :: _channel_group_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_group_ref);

    // param: _paused, type: Float64
    if (!is_numeric(_paused)) show_error($"{_GMFUNCTION_} :: _paused expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _paused);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_system_play_dsp(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = buffer_read(__ret_buffer__, buffer_u64);
    return __result__;
}

/**
 * @param {Real} _system_ref
 * @returns {Real}
 */
function fmod_system_select(_system_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _system_ref, type: UInt64
    if (!is_numeric(_system_ref)) show_error($"{_GMFUNCTION_} :: _system_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _system_ref);

    var __return_value__ = __fmod_system_select(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _system_ptr
 * @returns {Real}
 */
function fmod_system_adopt(_system_ptr)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _system_ptr, type: UInt64
    if (!is_numeric(_system_ptr)) show_error($"{_GMFUNCTION_} :: _system_ptr expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _system_ptr);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_system_adopt(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = buffer_read(__ret_buffer__, buffer_u64);
    return __result__;
}

// Skipping function fmod_system_count (no wrapper is required)


// Skipping function fmod_system_get_version (no wrapper is required)


/**
 * @returns {Real}
 */
function fmod_system_get_master_sound_group()
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_system_get_master_sound_group(buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = buffer_read(__ret_buffer__, buffer_u64);
    return __result__;
}

/**
 * @returns {Struct.FmodAdvancedSettings}
 */
function fmod_system_get_advanced_settings()
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_system_get_advanced_settings(buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodAdvancedSettings_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @param {Struct.FmodAdvancedSettings} _settings
 * @returns {Real}
 */
function fmod_system_set_advanced_settings(_settings)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _settings, type: struct FmodAdvancedSettings
    if (_settings.__uid != 1682729748) show_error($"{_GMFUNCTION_} :: _settings expected FmodAdvancedSettings", true);
    __FmodAdvancedSettings_encode(_settings, __args_buffer__, buffer_tell(__args_buffer__), _GMFUNCTION_);

    var __return_value__ = __fmod_system_set_advanced_settings(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

// Skipping function fmod_system_get_network_proxy (no wrapper is required)


// Skipping function fmod_system_set_network_proxy (no wrapper is required)


// Skipping function fmod_system_get_network_timeout (no wrapper is required)


// Skipping function fmod_system_set_network_timeout (no wrapper is required)


/**
 * @param {Enum.FmodSpeakerMode} _mode
 * @returns {Real}
 */
function fmod_system_get_speaker_mode_channels(_mode)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _mode, type: enum FmodSpeakerMode

    if (!is_numeric(_mode)) show_error($"{_GMFUNCTION_} :: _mode expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _mode);

    var __return_value__ = __fmod_system_get_speaker_mode_channels(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _speaker
 * @returns {Struct.FmodSpeakerPosition}
 */
function fmod_system_get_speaker_position(_speaker)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_system_get_speaker_position(_speaker, buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodSpeakerPosition_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

// Skipping function fmod_system_set_speaker_position (no wrapper is required)


/**
 * @param {Real} _instance
 * @returns {Struct.FmodReverbProperties}
 */
function fmod_system_get_reverb_properties(_instance)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_system_get_reverb_properties(_instance, buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodReverbProperties_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @param {Real} _instance
 * @param {Struct.FmodReverbProperties} _props
 * @returns {Real}
 */
function fmod_system_set_reverb_properties(_instance, _props)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _instance, type: Float64
    if (!is_numeric(_instance)) show_error($"{_GMFUNCTION_} :: _instance expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _instance);

    // param: _props, type: struct FmodReverbProperties
    if (_props.__uid != 577376478) show_error($"{_GMFUNCTION_} :: _props expected FmodReverbProperties", true);
    __FmodReverbProperties_encode(_props, __args_buffer__, buffer_tell(__args_buffer__), _GMFUNCTION_);

    var __return_value__ = __fmod_system_set_reverb_properties(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Enum.FmodSpeakerMode} _source_speaker_mode
 * @param {Enum.FmodSpeakerMode} _target_speaker_mode
 * @returns {Struct.FmodDSPMixMatrix}
 */
function fmod_system_get_default_mix_matrix(_source_speaker_mode, _target_speaker_mode)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _source_speaker_mode, type: enum FmodSpeakerMode

    if (!is_numeric(_source_speaker_mode)) show_error($"{_GMFUNCTION_} :: _source_speaker_mode expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _source_speaker_mode);

    // param: _target_speaker_mode, type: enum FmodSpeakerMode

    if (!is_numeric(_target_speaker_mode)) show_error($"{_GMFUNCTION_} :: _target_speaker_mode expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _target_speaker_mode);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_system_get_default_mix_matrix(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodDSPMixMatrix_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @returns {Struct.FmodCPUUsage}
 */
function fmod_system_get_cpu_usage()
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_system_get_cpu_usage(buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodCPUUsage_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @returns {Struct.FmodFileUsage}
 */
function fmod_system_get_file_usage()
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_system_get_file_usage(buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodFileUsage_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @returns {Struct.FmodStreamBufferSize}
 */
function fmod_system_get_stream_buffer_size()
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_system_get_stream_buffer_size(buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodStreamBufferSize_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

// Skipping function fmod_system_get_3d_num_listeners (no wrapper is required)


// Skipping function fmod_system_set_3d_num_listeners (no wrapper is required)


// Skipping function fmod_system_set_3d_rolloff_callback (no wrapper is required)


// Skipping function fmod_system_mixer_suspend (no wrapper is required)


// Skipping function fmod_system_mixer_resume (no wrapper is required)


// Skipping function fmod_system_lock_dsp (no wrapper is required)


// Skipping function fmod_system_unlock_dsp (no wrapper is required)


// Skipping function fmod_system_get_user_data (no wrapper is required)


// Skipping function fmod_system_set_user_data (no wrapper is required)


/**
 * @param {Real} _port_type
 * @param {Real} _port_index
 * @param {Real} _channel_group_ref
 * @param {Real} _pass_thru
 * @returns {Real}
 */
function fmod_system_attach_channel_group_to_port(_port_type, _port_index, _channel_group_ref, _pass_thru)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _port_type, type: Float64
    if (!is_numeric(_port_type)) show_error($"{_GMFUNCTION_} :: _port_type expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _port_type);

    // param: _port_index, type: Float64
    if (!is_numeric(_port_index)) show_error($"{_GMFUNCTION_} :: _port_index expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _port_index);

    // param: _channel_group_ref, type: UInt64
    if (!is_numeric(_channel_group_ref)) show_error($"{_GMFUNCTION_} :: _channel_group_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_group_ref);

    // param: _pass_thru, type: Float64
    if (!is_numeric(_pass_thru)) show_error($"{_GMFUNCTION_} :: _pass_thru expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _pass_thru);

    var __return_value__ = __fmod_system_attach_channel_group_to_port(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_group_ref
 * @returns {Real}
 */
function fmod_system_detach_channel_group_from_port(_channel_group_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_group_ref, type: UInt64
    if (!is_numeric(_channel_group_ref)) show_error($"{_GMFUNCTION_} :: _channel_group_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_group_ref);

    var __return_value__ = __fmod_system_detach_channel_group_from_port(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {String} _name
 * @returns {Real}
 */
function fmod_system_create_sound_group(_name)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_system_create_sound_group(_name, buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = buffer_read(__ret_buffer__, buffer_u64);
    return __result__;
}

/**
 * @param {Real} _max_polygons
 * @param {Real} _max_vertices
 * @returns {Real}
 */
function fmod_system_create_geometry(_max_polygons, _max_vertices)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_system_create_geometry(_max_polygons, _max_vertices, buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = buffer_read(__ret_buffer__, buffer_u64);
    return __result__;
}

/**
 * @param {Id.Buffer} _data
 * @param {Real} _data_size
 * @returns {Real}
 */
function fmod_system_load_geometry(_data, _data_size)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _data, type: Buffer
    if (!buffer_exists(_data)) show_error($"{_GMFUNCTION_} :: _data expected Id.Buffer", true);
    __GMFMOD_queue_buffer(buffer_get_address(_data), buffer_get_size(_data));

    // param: _data_size, type: Float64
    if (!is_numeric(_data_size)) show_error($"{_GMFUNCTION_} :: _data_size expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _data_size);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_system_load_geometry(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

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
 * @param {Struct.FmodVec3} _listener
 * @param {Struct.FmodVec3} _source
 * @returns {Struct.FmodOcclusion}
 */
function fmod_system_get_geometry_occlusion(_listener, _source)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _listener, type: struct FmodVec3
    if (_listener.__uid != 266577632) show_error($"{_GMFUNCTION_} :: _listener expected FmodVec3", true);
    __FmodVec3_encode(_listener, __args_buffer__, buffer_tell(__args_buffer__), _GMFUNCTION_);

    // param: _source, type: struct FmodVec3
    if (_source.__uid != 266577632) show_error($"{_GMFUNCTION_} :: _source expected FmodVec3", true);
    __FmodVec3_encode(_source, __args_buffer__, buffer_tell(__args_buffer__), _GMFUNCTION_);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_system_get_geometry_occlusion(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodOcclusion_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

// Skipping function fmod_system_get_geometry_settings (no wrapper is required)


// Skipping function fmod_system_set_geometry_settings (no wrapper is required)


/**
 * @returns {Real}
 */
function fmod_system_create_reverb_3d()
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_system_create_reverb_3d(buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = buffer_read(__ret_buffer__, buffer_u64);
    return __result__;
}

/**
 * @param {String} _name_or_data
 * @param {Real} _mode
 * @returns {Real}
 */
function fmod_system_create_sound(_name_or_data, _mode)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_system_create_sound(_name_or_data, _mode, buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = buffer_read(__ret_buffer__, buffer_u64);
    return __result__;
}

/**
 * @param {String} _name_or_data
 * @param {Real} _mode
 * @param {Struct.FmodCreateSoundExInfo} _ex_info
 * @returns {Real}
 */
function fmod_system_create_sound_ex(_name_or_data, _mode, _ex_info)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _name_or_data, type: String
    if (!is_string(_name_or_data)) show_error($"{_GMFUNCTION_} :: _name_or_data expected string", true);
    buffer_write(__args_buffer__, buffer_u32, string_byte_length(_name_or_data));
    buffer_write(__args_buffer__, buffer_string, _name_or_data);

    // param: _mode, type: Float64
    if (!is_numeric(_mode)) show_error($"{_GMFUNCTION_} :: _mode expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _mode);

    // param: _ex_info, type: struct FmodCreateSoundExInfo
    if (_ex_info.__uid != 506452871) show_error($"{_GMFUNCTION_} :: _ex_info expected FmodCreateSoundExInfo", true);
    __FmodCreateSoundExInfo_encode(_ex_info, __args_buffer__, buffer_tell(__args_buffer__), _GMFUNCTION_);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_system_create_sound_ex(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = buffer_read(__ret_buffer__, buffer_u64);
    return __result__;
}

/**
 * @param {String} _name_or_data
 * @param {Real} _mode
 * @returns {Real}
 */
function fmod_system_create_stream(_name_or_data, _mode)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_system_create_stream(_name_or_data, _mode, buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = buffer_read(__ret_buffer__, buffer_u64);
    return __result__;
}

/**
 * @param {Real} _sound_ref
 * @param {Real} _channel_group_ref
 * @param {Real} _pause
 * @returns {Real}
 */
function fmod_system_play_sound(_sound_ref, _channel_group_ref, _pause)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _sound_ref, type: UInt64
    if (!is_numeric(_sound_ref)) show_error($"{_GMFUNCTION_} :: _sound_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _sound_ref);

    // param: _channel_group_ref, type: UInt64
    if (!is_numeric(_channel_group_ref)) show_error($"{_GMFUNCTION_} :: _channel_group_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_group_ref);

    // param: _pause, type: Float64
    if (!is_numeric(_pause)) show_error($"{_GMFUNCTION_} :: _pause expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _pause);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_system_play_sound(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = buffer_read(__ret_buffer__, buffer_u64);
    return __result__;
}

/**
 * @param {Real} _sound_ref
 * @param {Real} _length_type
 * @returns {Real}
 */
function fmod_sound_get_length(_sound_ref, _length_type)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _sound_ref, type: UInt64
    if (!is_numeric(_sound_ref)) show_error($"{_GMFUNCTION_} :: _sound_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _sound_ref);

    // param: _length_type, type: Float64
    if (!is_numeric(_length_type)) show_error($"{_GMFUNCTION_} :: _length_type expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _length_type);

    var __return_value__ = __fmod_sound_get_length(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _sound_ref
 * @param {Real} _frequency
 * @param {Real} _priority
 * @returns {Real}
 */
function fmod_sound_set_defaults(_sound_ref, _frequency, _priority)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _sound_ref, type: UInt64
    if (!is_numeric(_sound_ref)) show_error($"{_GMFUNCTION_} :: _sound_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _sound_ref);

    // param: _frequency, type: Float64
    if (!is_numeric(_frequency)) show_error($"{_GMFUNCTION_} :: _frequency expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _frequency);

    // param: _priority, type: Float64
    if (!is_numeric(_priority)) show_error($"{_GMFUNCTION_} :: _priority expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _priority);

    var __return_value__ = __fmod_sound_set_defaults(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _sound_ref
 * @param {Real} _mode
 * @returns {Real}
 */
function fmod_sound_set_mode(_sound_ref, _mode)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _sound_ref, type: UInt64
    if (!is_numeric(_sound_ref)) show_error($"{_GMFUNCTION_} :: _sound_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _sound_ref);

    // param: _mode, type: Float64
    if (!is_numeric(_mode)) show_error($"{_GMFUNCTION_} :: _mode expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _mode);

    var __return_value__ = __fmod_sound_set_mode(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _sound_ref
 * @returns {Real}
 */
function fmod_sound_get_mode(_sound_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _sound_ref, type: UInt64
    if (!is_numeric(_sound_ref)) show_error($"{_GMFUNCTION_} :: _sound_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _sound_ref);

    var __return_value__ = __fmod_sound_get_mode(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _sound_ref
 * @returns {Real}
 */
function fmod_sound_get_format(_sound_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _sound_ref, type: UInt64
    if (!is_numeric(_sound_ref)) show_error($"{_GMFUNCTION_} :: _sound_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _sound_ref);

    var __return_value__ = __fmod_sound_get_format(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _sound_ref
 * @returns {String}
 */
function fmod_sound_get_name(_sound_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _sound_ref, type: UInt64
    if (!is_numeric(_sound_ref)) show_error($"{_GMFUNCTION_} :: _sound_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _sound_ref);

    var __return_value__ = __fmod_sound_get_name(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _sound_ref
 * @returns {Struct.FmodSoundDefaults}
 */
function fmod_sound_get_defaults(_sound_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _sound_ref, type: UInt64
    if (!is_numeric(_sound_ref)) show_error($"{_GMFUNCTION_} :: _sound_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _sound_ref);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_sound_get_defaults(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodSoundDefaults_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @param {Real} _sound_ref
 * @param {Real} _count
 * @returns {Real}
 */
function fmod_sound_set_loop_count(_sound_ref, _count)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _sound_ref, type: UInt64
    if (!is_numeric(_sound_ref)) show_error($"{_GMFUNCTION_} :: _sound_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _sound_ref);

    // param: _count, type: Float64
    if (!is_numeric(_count)) show_error($"{_GMFUNCTION_} :: _count expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _count);

    var __return_value__ = __fmod_sound_set_loop_count(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _sound_ref
 * @returns {Real}
 */
function fmod_sound_get_loop_count(_sound_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _sound_ref, type: UInt64
    if (!is_numeric(_sound_ref)) show_error($"{_GMFUNCTION_} :: _sound_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _sound_ref);

    var __return_value__ = __fmod_sound_get_loop_count(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _sound_ref
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

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _sound_ref, type: UInt64
    if (!is_numeric(_sound_ref)) show_error($"{_GMFUNCTION_} :: _sound_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _sound_ref);

    // param: _loop_start, type: Float64
    if (!is_numeric(_loop_start)) show_error($"{_GMFUNCTION_} :: _loop_start expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _loop_start);

    // param: _loop_start_type, type: Float64
    if (!is_numeric(_loop_start_type)) show_error($"{_GMFUNCTION_} :: _loop_start_type expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _loop_start_type);

    // param: _loop_end, type: Float64
    if (!is_numeric(_loop_end)) show_error($"{_GMFUNCTION_} :: _loop_end expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _loop_end);

    // param: _loop_end_type, type: Float64
    if (!is_numeric(_loop_end_type)) show_error($"{_GMFUNCTION_} :: _loop_end_type expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _loop_end_type);

    var __return_value__ = __fmod_sound_set_loop_points(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _sound_ref
 * @param {Real} _start_type
 * @param {Real} _end_type
 * @returns {Struct.FmodLoopPoints}
 */
function fmod_sound_get_loop_points(_sound_ref, _start_type, _end_type)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _sound_ref, type: UInt64
    if (!is_numeric(_sound_ref)) show_error($"{_GMFUNCTION_} :: _sound_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _sound_ref);

    // param: _start_type, type: Float64
    if (!is_numeric(_start_type)) show_error($"{_GMFUNCTION_} :: _start_type expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _start_type);

    // param: _end_type, type: Float64
    if (!is_numeric(_end_type)) show_error($"{_GMFUNCTION_} :: _end_type expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _end_type);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_sound_get_loop_points(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodLoopPoints_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @param {Real} _sound_ref
 * @param {Real} _min
 * @param {Real} _max
 * @returns {Real}
 */
function fmod_sound_set_3d_min_max_distance(_sound_ref, _min, _max)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _sound_ref, type: UInt64
    if (!is_numeric(_sound_ref)) show_error($"{_GMFUNCTION_} :: _sound_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _sound_ref);

    // param: _min, type: Float64
    if (!is_numeric(_min)) show_error($"{_GMFUNCTION_} :: _min expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _min);

    // param: _max, type: Float64
    if (!is_numeric(_max)) show_error($"{_GMFUNCTION_} :: _max expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _max);

    var __return_value__ = __fmod_sound_set_3d_min_max_distance(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _sound_ref
 * @returns {Struct.FmodSoundMinMaxDistance}
 */
function fmod_sound_get_3d_min_max_distance(_sound_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _sound_ref, type: UInt64
    if (!is_numeric(_sound_ref)) show_error($"{_GMFUNCTION_} :: _sound_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _sound_ref);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_sound_get_3d_min_max_distance(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodSoundMinMaxDistance_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @param {Real} _sound_ref
 * @param {Real} _inside_cone_angle
 * @param {Real} _outside_cone_angle
 * @param {Real} _outside_volume
 * @returns {Real}
 */
function fmod_sound_set_3d_cone_settings(_sound_ref, _inside_cone_angle, _outside_cone_angle, _outside_volume)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _sound_ref, type: UInt64
    if (!is_numeric(_sound_ref)) show_error($"{_GMFUNCTION_} :: _sound_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _sound_ref);

    // param: _inside_cone_angle, type: Float64
    if (!is_numeric(_inside_cone_angle)) show_error($"{_GMFUNCTION_} :: _inside_cone_angle expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _inside_cone_angle);

    // param: _outside_cone_angle, type: Float64
    if (!is_numeric(_outside_cone_angle)) show_error($"{_GMFUNCTION_} :: _outside_cone_angle expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _outside_cone_angle);

    // param: _outside_volume, type: Float64
    if (!is_numeric(_outside_volume)) show_error($"{_GMFUNCTION_} :: _outside_volume expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _outside_volume);

    var __return_value__ = __fmod_sound_set_3d_cone_settings(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _sound_ref
 * @returns {Struct.FmodConeSettings}
 */
function fmod_sound_get_3d_cone_settings(_sound_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _sound_ref, type: UInt64
    if (!is_numeric(_sound_ref)) show_error($"{_GMFUNCTION_} :: _sound_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _sound_ref);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_sound_get_3d_cone_settings(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodConeSettings_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @param {Real} _sound_ref
 * @param {Any} _points
 * @param {Real} _num_points
 * @returns {Real}
 */
function fmod_sound_set_3d_custom_rolloff(_sound_ref, _points, _num_points)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _sound_ref, type: UInt64
    if (!is_numeric(_sound_ref)) show_error($"{_GMFUNCTION_} :: _sound_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _sound_ref);

    // param: _points, type: Any

    __ext_core_buffer_marshal_value(__args_buffer__, _points);

    // param: _num_points, type: Float64
    if (!is_numeric(_num_points)) show_error($"{_GMFUNCTION_} :: _num_points expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _num_points);

    var __return_value__ = __fmod_sound_set_3d_custom_rolloff(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _sound_ref
 */
function fmod_sound_get_3d_custom_rolloff(_sound_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _sound_ref, type: UInt64
    if (!is_numeric(_sound_ref)) show_error($"{_GMFUNCTION_} :: _sound_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _sound_ref);

    var __return_value__ = __fmod_sound_get_3d_custom_rolloff(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _sound_ref
 * @returns {Real}
 */
function fmod_sound_get_num_sync_points(_sound_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _sound_ref, type: UInt64
    if (!is_numeric(_sound_ref)) show_error($"{_GMFUNCTION_} :: _sound_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _sound_ref);

    var __return_value__ = __fmod_sound_get_num_sync_points(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _sound_ref
 * @param {Real} _sync_point_index
 * @param {Real} _offset_type
 * @returns {Struct.FmodSyncPointInfo}
 */
function fmod_sound_get_sync_point(_sound_ref, _sync_point_index, _offset_type)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _sound_ref, type: UInt64
    if (!is_numeric(_sound_ref)) show_error($"{_GMFUNCTION_} :: _sound_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _sound_ref);

    // param: _sync_point_index, type: Float64
    if (!is_numeric(_sync_point_index)) show_error($"{_GMFUNCTION_} :: _sync_point_index expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _sync_point_index);

    // param: _offset_type, type: Float64
    if (!is_numeric(_offset_type)) show_error($"{_GMFUNCTION_} :: _offset_type expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _offset_type);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_sound_get_sync_point(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodSyncPointInfo_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @param {Real} _sound_ref
 * @param {Real} _offset
 * @param {Real} _offset_type
 * @param {String} _name
 * @returns {Real}
 */
function fmod_sound_add_sync_point(_sound_ref, _offset, _offset_type, _name)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _sound_ref, type: UInt64
    if (!is_numeric(_sound_ref)) show_error($"{_GMFUNCTION_} :: _sound_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _sound_ref);

    // param: _offset, type: Float64
    if (!is_numeric(_offset)) show_error($"{_GMFUNCTION_} :: _offset expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _offset);

    // param: _offset_type, type: Float64
    if (!is_numeric(_offset_type)) show_error($"{_GMFUNCTION_} :: _offset_type expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _offset_type);

    // param: _name, type: String
    if (!is_string(_name)) show_error($"{_GMFUNCTION_} :: _name expected string", true);
    buffer_write(__args_buffer__, buffer_u32, string_byte_length(_name));
    buffer_write(__args_buffer__, buffer_string, _name);

    var __return_value__ = __fmod_sound_add_sync_point(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _sound_ref
 * @param {Real} _sync_point_index
 * @returns {Real}
 */
function fmod_sound_delete_sync_point(_sound_ref, _sync_point_index)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _sound_ref, type: UInt64
    if (!is_numeric(_sound_ref)) show_error($"{_GMFUNCTION_} :: _sound_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _sound_ref);

    // param: _sync_point_index, type: Float64
    if (!is_numeric(_sync_point_index)) show_error($"{_GMFUNCTION_} :: _sync_point_index expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _sync_point_index);

    var __return_value__ = __fmod_sound_delete_sync_point(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _sound_ref
 * @returns {Real}
 */
function fmod_sound_get_music_num_channels(_sound_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _sound_ref, type: UInt64
    if (!is_numeric(_sound_ref)) show_error($"{_GMFUNCTION_} :: _sound_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _sound_ref);

    var __return_value__ = __fmod_sound_get_music_num_channels(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _sound_ref
 * @param {Real} _channel_index
 * @param {Real} _volume
 * @returns {Real}
 */
function fmod_sound_set_music_channel_volume(_sound_ref, _channel_index, _volume)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _sound_ref, type: UInt64
    if (!is_numeric(_sound_ref)) show_error($"{_GMFUNCTION_} :: _sound_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _sound_ref);

    // param: _channel_index, type: Float64
    if (!is_numeric(_channel_index)) show_error($"{_GMFUNCTION_} :: _channel_index expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _channel_index);

    // param: _volume, type: Float64
    if (!is_numeric(_volume)) show_error($"{_GMFUNCTION_} :: _volume expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _volume);

    var __return_value__ = __fmod_sound_set_music_channel_volume(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _sound_ref
 * @param {Real} _channel_index
 * @returns {Real}
 */
function fmod_sound_get_music_channel_volume(_sound_ref, _channel_index)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _sound_ref, type: UInt64
    if (!is_numeric(_sound_ref)) show_error($"{_GMFUNCTION_} :: _sound_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _sound_ref);

    // param: _channel_index, type: Float64
    if (!is_numeric(_channel_index)) show_error($"{_GMFUNCTION_} :: _channel_index expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _channel_index);

    var __return_value__ = __fmod_sound_get_music_channel_volume(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _sound_ref
 * @param {Real} _speed
 * @returns {Real}
 */
function fmod_sound_set_music_speed(_sound_ref, _speed)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _sound_ref, type: UInt64
    if (!is_numeric(_sound_ref)) show_error($"{_GMFUNCTION_} :: _sound_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _sound_ref);

    // param: _speed, type: Float64
    if (!is_numeric(_speed)) show_error($"{_GMFUNCTION_} :: _speed expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _speed);

    var __return_value__ = __fmod_sound_set_music_speed(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _sound_ref
 * @returns {Real}
 */
function fmod_sound_get_music_speed(_sound_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _sound_ref, type: UInt64
    if (!is_numeric(_sound_ref)) show_error($"{_GMFUNCTION_} :: _sound_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _sound_ref);

    var __return_value__ = __fmod_sound_get_music_speed(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _sound_ref
 * @param {Real} _sound_group_ref
 * @returns {Real}
 */
function fmod_sound_set_sound_group(_sound_ref, _sound_group_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _sound_ref, type: UInt64
    if (!is_numeric(_sound_ref)) show_error($"{_GMFUNCTION_} :: _sound_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _sound_ref);

    // param: _sound_group_ref, type: UInt64
    if (!is_numeric(_sound_group_ref)) show_error($"{_GMFUNCTION_} :: _sound_group_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _sound_group_ref);

    var __return_value__ = __fmod_sound_set_sound_group(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _sound_ref
 * @returns {Real}
 */
function fmod_sound_get_sound_group(_sound_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _sound_ref, type: UInt64
    if (!is_numeric(_sound_ref)) show_error($"{_GMFUNCTION_} :: _sound_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _sound_ref);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_sound_get_sound_group(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = buffer_read(__ret_buffer__, buffer_u64);
    return __result__;
}

/**
 * @param {Real} _sound_ref
 * @param {Real} _user_data
 * @returns {Real}
 */
function fmod_sound_set_user_data(_sound_ref, _user_data)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _sound_ref, type: UInt64
    if (!is_numeric(_sound_ref)) show_error($"{_GMFUNCTION_} :: _sound_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _sound_ref);

    // param: _user_data, type: Float64
    if (!is_numeric(_user_data)) show_error($"{_GMFUNCTION_} :: _user_data expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _user_data);

    var __return_value__ = __fmod_sound_set_user_data(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _sound_ref
 * @returns {Real}
 */
function fmod_sound_get_user_data(_sound_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _sound_ref, type: UInt64
    if (!is_numeric(_sound_ref)) show_error($"{_GMFUNCTION_} :: _sound_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _sound_ref);

    var __return_value__ = __fmod_sound_get_user_data(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _sound_ref
 * @returns {Real}
 */
function fmod_sound_release(_sound_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _sound_ref, type: UInt64
    if (!is_numeric(_sound_ref)) show_error($"{_GMFUNCTION_} :: _sound_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _sound_ref);

    var __return_value__ = __fmod_sound_release(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _sound_ref
 * @returns {Real}
 */
function fmod_sound_get_system_object(_sound_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _sound_ref, type: UInt64
    if (!is_numeric(_sound_ref)) show_error($"{_GMFUNCTION_} :: _sound_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _sound_ref);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_sound_get_system_object(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = buffer_read(__ret_buffer__, buffer_u64);
    return __result__;
}

/**
 * @param {Real} _sound_ref
 * @returns {Struct.FmodSoundOpenState}
 */
function fmod_sound_get_open_state(_sound_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _sound_ref, type: UInt64
    if (!is_numeric(_sound_ref)) show_error($"{_GMFUNCTION_} :: _sound_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _sound_ref);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_sound_get_open_state(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodSoundOpenState_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @param {Real} _sound_ref
 * @returns {Real}
 */
function fmod_sound_get_num_tags(_sound_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _sound_ref, type: UInt64
    if (!is_numeric(_sound_ref)) show_error($"{_GMFUNCTION_} :: _sound_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _sound_ref);

    var __return_value__ = __fmod_sound_get_num_tags(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _sound_ref
 * @param {String} _name
 * @param {Real} _index
 * @returns {Struct.FmodSoundTag}
 */
function fmod_sound_get_tag(_sound_ref, _name, _index)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _sound_ref, type: UInt64
    if (!is_numeric(_sound_ref)) show_error($"{_GMFUNCTION_} :: _sound_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _sound_ref);

    // param: _name, type: String
    if (!is_string(_name)) show_error($"{_GMFUNCTION_} :: _name expected string", true);
    buffer_write(__args_buffer__, buffer_u32, string_byte_length(_name));
    buffer_write(__args_buffer__, buffer_string, _name);

    // param: _index, type: Float64
    if (!is_numeric(_index)) show_error($"{_GMFUNCTION_} :: _index expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _index);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_sound_get_tag(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodSoundTag_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @param {Real} _sound_ref
 * @returns {Real}
 */
function fmod_sound_get_num_sub_sounds(_sound_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _sound_ref, type: UInt64
    if (!is_numeric(_sound_ref)) show_error($"{_GMFUNCTION_} :: _sound_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _sound_ref);

    var __return_value__ = __fmod_sound_get_num_sub_sounds(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _sound_ref
 * @param {Real} _index
 * @returns {Real}
 */
function fmod_sound_get_sub_sound(_sound_ref, _index)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _sound_ref, type: UInt64
    if (!is_numeric(_sound_ref)) show_error($"{_GMFUNCTION_} :: _sound_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _sound_ref);

    // param: _index, type: Float64
    if (!is_numeric(_index)) show_error($"{_GMFUNCTION_} :: _index expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _index);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_sound_get_sub_sound(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = buffer_read(__ret_buffer__, buffer_u64);
    return __result__;
}

/**
 * @param {Real} _sound_ref
 * @returns {Real}
 */
function fmod_sound_get_sub_sound_parent(_sound_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _sound_ref, type: UInt64
    if (!is_numeric(_sound_ref)) show_error($"{_GMFUNCTION_} :: _sound_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _sound_ref);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_sound_get_sub_sound_parent(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

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
 * @param {Real} _sound_ref
 * @param {Id.Buffer} _data
 * @param {Real} _length
 * @returns {Real}
 */
function fmod_sound_read_data(_sound_ref, _data, _length)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _sound_ref, type: UInt64
    if (!is_numeric(_sound_ref)) show_error($"{_GMFUNCTION_} :: _sound_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _sound_ref);

    // param: _data, type: Buffer
    if (!buffer_exists(_data)) show_error($"{_GMFUNCTION_} :: _data expected Id.Buffer", true);
    __GMFMOD_queue_buffer(buffer_get_address(_data), buffer_get_size(_data));

    // param: _length, type: Float64
    if (!is_numeric(_length)) show_error($"{_GMFUNCTION_} :: _length expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _length);

    var __return_value__ = __fmod_sound_read_data(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _sound_ref
 * @param {Real} _pcm
 * @returns {Real}
 */
function fmod_sound_seek_data(_sound_ref, _pcm)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _sound_ref, type: UInt64
    if (!is_numeric(_sound_ref)) show_error($"{_GMFUNCTION_} :: _sound_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _sound_ref);

    // param: _pcm, type: Float64
    if (!is_numeric(_pcm)) show_error($"{_GMFUNCTION_} :: _pcm expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _pcm);

    var __return_value__ = __fmod_sound_seek_data(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _sound_ref
 * @param {Real} _offset
 * @param {Real} _length
 * @param {Id.Buffer} _buffer1
 * @param {Id.Buffer} _buffer2
 * @returns {Struct.FmodSoundLockLengths}
 */
function fmod_sound_lock(_sound_ref, _offset, _length, _buffer1, _buffer2)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _sound_ref, type: UInt64
    if (!is_numeric(_sound_ref)) show_error($"{_GMFUNCTION_} :: _sound_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _sound_ref);

    // param: _offset, type: Float64
    if (!is_numeric(_offset)) show_error($"{_GMFUNCTION_} :: _offset expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _offset);

    // param: _length, type: Float64
    if (!is_numeric(_length)) show_error($"{_GMFUNCTION_} :: _length expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _length);

    // param: _buffer1, type: Buffer
    if (!buffer_exists(_buffer1)) show_error($"{_GMFUNCTION_} :: _buffer1 expected Id.Buffer", true);
    __GMFMOD_queue_buffer(buffer_get_address(_buffer1), buffer_get_size(_buffer1));

    // param: _buffer2, type: Buffer
    if (!buffer_exists(_buffer2)) show_error($"{_GMFUNCTION_} :: _buffer2 expected Id.Buffer", true);
    __GMFMOD_queue_buffer(buffer_get_address(_buffer2), buffer_get_size(_buffer2));

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_sound_lock(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodSoundLockLengths_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @param {Real} _sound_ref
 * @param {Id.Buffer} _buffer1
 * @param {Id.Buffer} _buffer2
 * @param {Real} _length1
 * @param {Real} _length2
 * @returns {Real}
 */
function fmod_sound_unlock(_sound_ref, _buffer1, _buffer2, _length1, _length2)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _sound_ref, type: UInt64
    if (!is_numeric(_sound_ref)) show_error($"{_GMFUNCTION_} :: _sound_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _sound_ref);

    // param: _buffer1, type: Buffer
    if (!buffer_exists(_buffer1)) show_error($"{_GMFUNCTION_} :: _buffer1 expected Id.Buffer", true);
    __GMFMOD_queue_buffer(buffer_get_address(_buffer1), buffer_get_size(_buffer1));

    // param: _buffer2, type: Buffer
    if (!buffer_exists(_buffer2)) show_error($"{_GMFUNCTION_} :: _buffer2 expected Id.Buffer", true);
    __GMFMOD_queue_buffer(buffer_get_address(_buffer2), buffer_get_size(_buffer2));

    // param: _length1, type: Float64
    if (!is_numeric(_length1)) show_error($"{_GMFUNCTION_} :: _length1 expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _length1);

    // param: _length2, type: Float64
    if (!is_numeric(_length2)) show_error($"{_GMFUNCTION_} :: _length2 expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _length2);

    var __return_value__ = __fmod_sound_unlock(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_group_ref
 * @returns {Real}
 */
function fmod_channel_group_get_num_channels(_channel_group_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_group_ref, type: UInt64
    if (!is_numeric(_channel_group_ref)) show_error($"{_GMFUNCTION_} :: _channel_group_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_group_ref);

    var __return_value__ = __fmod_channel_group_get_num_channels(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_group_ref
 * @param {Real} _index
 * @returns {Real}
 */
function fmod_channel_group_get_channel(_channel_group_ref, _index)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_group_ref, type: UInt64
    if (!is_numeric(_channel_group_ref)) show_error($"{_GMFUNCTION_} :: _channel_group_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_group_ref);

    // param: _index, type: Float64
    if (!is_numeric(_index)) show_error($"{_GMFUNCTION_} :: _index expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _index);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_channel_group_get_channel(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = buffer_read(__ret_buffer__, buffer_u64);
    return __result__;
}

/**
 * @param {Real} _channel_group_ref
 * @param {Real} _child_channel_group_ref
 * @param {Real} _propagate_dsp_clock
 * @returns {Real}
 */
function fmod_channel_group_add_group(_channel_group_ref, _child_channel_group_ref, _propagate_dsp_clock)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_group_ref, type: UInt64
    if (!is_numeric(_channel_group_ref)) show_error($"{_GMFUNCTION_} :: _channel_group_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_group_ref);

    // param: _child_channel_group_ref, type: UInt64
    if (!is_numeric(_child_channel_group_ref)) show_error($"{_GMFUNCTION_} :: _child_channel_group_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _child_channel_group_ref);

    // param: _propagate_dsp_clock, type: Float64
    if (!is_numeric(_propagate_dsp_clock)) show_error($"{_GMFUNCTION_} :: _propagate_dsp_clock expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _propagate_dsp_clock);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_channel_group_add_group(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = buffer_read(__ret_buffer__, buffer_u64);
    return __result__;
}

/**
 * @param {Real} _channel_group_ref
 * @returns {Real}
 */
function fmod_channel_group_get_num_groups(_channel_group_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_group_ref, type: UInt64
    if (!is_numeric(_channel_group_ref)) show_error($"{_GMFUNCTION_} :: _channel_group_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_group_ref);

    var __return_value__ = __fmod_channel_group_get_num_groups(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_group_ref
 * @param {Real} _group_index
 * @returns {Real}
 */
function fmod_channel_group_get_group(_channel_group_ref, _group_index)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_group_ref, type: UInt64
    if (!is_numeric(_channel_group_ref)) show_error($"{_GMFUNCTION_} :: _channel_group_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_group_ref);

    // param: _group_index, type: Float64
    if (!is_numeric(_group_index)) show_error($"{_GMFUNCTION_} :: _group_index expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _group_index);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_channel_group_get_group(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = buffer_read(__ret_buffer__, buffer_u64);
    return __result__;
}

/**
 * @param {Real} _channel_group_ref
 * @returns {Real}
 */
function fmod_channel_group_get_parent_group(_channel_group_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_group_ref, type: UInt64
    if (!is_numeric(_channel_group_ref)) show_error($"{_GMFUNCTION_} :: _channel_group_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_group_ref);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_channel_group_get_parent_group(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = buffer_read(__ret_buffer__, buffer_u64);
    return __result__;
}

/**
 * @param {Real} _channel_group_ref
 * @returns {String}
 */
function fmod_channel_group_get_name(_channel_group_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_group_ref, type: UInt64
    if (!is_numeric(_channel_group_ref)) show_error($"{_GMFUNCTION_} :: _channel_group_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_group_ref);

    var __return_value__ = __fmod_channel_group_get_name(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_group_ref
 * @returns {Real}
 */
function fmod_channel_group_release(_channel_group_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_group_ref, type: UInt64
    if (!is_numeric(_channel_group_ref)) show_error($"{_GMFUNCTION_} :: _channel_group_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_group_ref);

    var __return_value__ = __fmod_channel_group_release(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_group_ref
 * @returns {Real}
 */
function fmod_channel_group_get_system_object(_channel_group_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_group_ref, type: UInt64
    if (!is_numeric(_channel_group_ref)) show_error($"{_GMFUNCTION_} :: _channel_group_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_group_ref);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_channel_group_get_system_object(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = buffer_read(__ret_buffer__, buffer_u64);
    return __result__;
}

/**
 * @param {Real} _sound_group_ref
 * @param {Real} _max_audible
 * @returns {Real}
 */
function fmod_sound_group_set_max_audible(_sound_group_ref, _max_audible)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _sound_group_ref, type: UInt64
    if (!is_numeric(_sound_group_ref)) show_error($"{_GMFUNCTION_} :: _sound_group_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _sound_group_ref);

    // param: _max_audible, type: Float64
    if (!is_numeric(_max_audible)) show_error($"{_GMFUNCTION_} :: _max_audible expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _max_audible);

    var __return_value__ = __fmod_sound_group_set_max_audible(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _sound_group_ref
 * @returns {Real}
 */
function fmod_sound_group_get_max_audible(_sound_group_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _sound_group_ref, type: UInt64
    if (!is_numeric(_sound_group_ref)) show_error($"{_GMFUNCTION_} :: _sound_group_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _sound_group_ref);

    var __return_value__ = __fmod_sound_group_get_max_audible(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _sound_group_ref
 * @param {Real} _behavior
 * @returns {Real}
 */
function fmod_sound_group_set_max_audible_behavior(_sound_group_ref, _behavior)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _sound_group_ref, type: UInt64
    if (!is_numeric(_sound_group_ref)) show_error($"{_GMFUNCTION_} :: _sound_group_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _sound_group_ref);

    // param: _behavior, type: Float64
    if (!is_numeric(_behavior)) show_error($"{_GMFUNCTION_} :: _behavior expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _behavior);

    var __return_value__ = __fmod_sound_group_set_max_audible_behavior(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _sound_group_ref
 * @returns {Real}
 */
function fmod_sound_group_get_max_audible_behavior(_sound_group_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _sound_group_ref, type: UInt64
    if (!is_numeric(_sound_group_ref)) show_error($"{_GMFUNCTION_} :: _sound_group_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _sound_group_ref);

    var __return_value__ = __fmod_sound_group_get_max_audible_behavior(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _sound_group_ref
 * @param {Real} _speed
 * @returns {Real}
 */
function fmod_sound_group_set_mute_fade_speed(_sound_group_ref, _speed)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _sound_group_ref, type: UInt64
    if (!is_numeric(_sound_group_ref)) show_error($"{_GMFUNCTION_} :: _sound_group_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _sound_group_ref);

    // param: _speed, type: Float64
    if (!is_numeric(_speed)) show_error($"{_GMFUNCTION_} :: _speed expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _speed);

    var __return_value__ = __fmod_sound_group_set_mute_fade_speed(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _sound_group_ref
 * @returns {Real}
 */
function fmod_sound_group_get_mute_fade_speed(_sound_group_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _sound_group_ref, type: UInt64
    if (!is_numeric(_sound_group_ref)) show_error($"{_GMFUNCTION_} :: _sound_group_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _sound_group_ref);

    var __return_value__ = __fmod_sound_group_get_mute_fade_speed(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _sound_group_ref
 * @param {Real} _volume
 * @returns {Real}
 */
function fmod_sound_group_set_volume(_sound_group_ref, _volume)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _sound_group_ref, type: UInt64
    if (!is_numeric(_sound_group_ref)) show_error($"{_GMFUNCTION_} :: _sound_group_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _sound_group_ref);

    // param: _volume, type: Float64
    if (!is_numeric(_volume)) show_error($"{_GMFUNCTION_} :: _volume expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _volume);

    var __return_value__ = __fmod_sound_group_set_volume(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _sound_group_ref
 * @returns {Real}
 */
function fmod_sound_group_get_volume(_sound_group_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _sound_group_ref, type: UInt64
    if (!is_numeric(_sound_group_ref)) show_error($"{_GMFUNCTION_} :: _sound_group_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _sound_group_ref);

    var __return_value__ = __fmod_sound_group_get_volume(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _sound_group_ref
 * @returns {Real}
 */
function fmod_sound_group_get_num_sounds(_sound_group_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _sound_group_ref, type: UInt64
    if (!is_numeric(_sound_group_ref)) show_error($"{_GMFUNCTION_} :: _sound_group_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _sound_group_ref);

    var __return_value__ = __fmod_sound_group_get_num_sounds(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _sound_group_ref
 * @param {Real} _sound_index
 * @returns {Real}
 */
function fmod_sound_group_get_sound(_sound_group_ref, _sound_index)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _sound_group_ref, type: UInt64
    if (!is_numeric(_sound_group_ref)) show_error($"{_GMFUNCTION_} :: _sound_group_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _sound_group_ref);

    // param: _sound_index, type: Float64
    if (!is_numeric(_sound_index)) show_error($"{_GMFUNCTION_} :: _sound_index expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _sound_index);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_sound_group_get_sound(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = buffer_read(__ret_buffer__, buffer_u64);
    return __result__;
}

/**
 * @param {Real} _sound_group_ref
 * @returns {Real}
 */
function fmod_sound_group_get_num_playing(_sound_group_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _sound_group_ref, type: UInt64
    if (!is_numeric(_sound_group_ref)) show_error($"{_GMFUNCTION_} :: _sound_group_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _sound_group_ref);

    var __return_value__ = __fmod_sound_group_get_num_playing(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _sound_group_ref
 * @returns {Real}
 */
function fmod_sound_group_stop(_sound_group_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _sound_group_ref, type: UInt64
    if (!is_numeric(_sound_group_ref)) show_error($"{_GMFUNCTION_} :: _sound_group_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _sound_group_ref);

    var __return_value__ = __fmod_sound_group_stop(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _sound_group_ref
 * @param {Real} _user_data
 * @returns {Real}
 */
function fmod_sound_group_set_user_data(_sound_group_ref, _user_data)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _sound_group_ref, type: UInt64
    if (!is_numeric(_sound_group_ref)) show_error($"{_GMFUNCTION_} :: _sound_group_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _sound_group_ref);

    // param: _user_data, type: Float64
    if (!is_numeric(_user_data)) show_error($"{_GMFUNCTION_} :: _user_data expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _user_data);

    var __return_value__ = __fmod_sound_group_set_user_data(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _sound_group_ref
 * @returns {Real}
 */
function fmod_sound_group_get_user_data(_sound_group_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _sound_group_ref, type: UInt64
    if (!is_numeric(_sound_group_ref)) show_error($"{_GMFUNCTION_} :: _sound_group_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _sound_group_ref);

    var __return_value__ = __fmod_sound_group_get_user_data(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _sound_group_ref
 * @returns {String}
 */
function fmod_sound_group_get_name(_sound_group_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _sound_group_ref, type: UInt64
    if (!is_numeric(_sound_group_ref)) show_error($"{_GMFUNCTION_} :: _sound_group_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _sound_group_ref);

    var __return_value__ = __fmod_sound_group_get_name(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _sound_group_ref
 * @returns {Real}
 */
function fmod_sound_group_release(_sound_group_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _sound_group_ref, type: UInt64
    if (!is_numeric(_sound_group_ref)) show_error($"{_GMFUNCTION_} :: _sound_group_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _sound_group_ref);

    var __return_value__ = __fmod_sound_group_release(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _sound_group_ref
 * @returns {Real}
 */
function fmod_sound_group_get_system_object(_sound_group_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _sound_group_ref, type: UInt64
    if (!is_numeric(_sound_group_ref)) show_error($"{_GMFUNCTION_} :: _sound_group_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _sound_group_ref);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_sound_group_get_system_object(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = buffer_read(__ret_buffer__, buffer_u64);
    return __result__;
}

/**
 * @param {Real} _reverb_3d_ref
 * @param {Real} _active
 * @returns {Real}
 */
function fmod_reverb_3d_set_active(_reverb_3d_ref, _active)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _reverb_3d_ref, type: UInt64
    if (!is_numeric(_reverb_3d_ref)) show_error($"{_GMFUNCTION_} :: _reverb_3d_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _reverb_3d_ref);

    // param: _active, type: Float64
    if (!is_numeric(_active)) show_error($"{_GMFUNCTION_} :: _active expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _active);

    var __return_value__ = __fmod_reverb_3d_set_active(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _reverb_3d_ref
 * @returns {Real}
 */
function fmod_reverb_3d_get_active(_reverb_3d_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _reverb_3d_ref, type: UInt64
    if (!is_numeric(_reverb_3d_ref)) show_error($"{_GMFUNCTION_} :: _reverb_3d_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _reverb_3d_ref);

    var __return_value__ = __fmod_reverb_3d_get_active(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _reverb_3d_ref
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

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _reverb_3d_ref, type: UInt64
    if (!is_numeric(_reverb_3d_ref)) show_error($"{_GMFUNCTION_} :: _reverb_3d_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _reverb_3d_ref);

    // param: _decay_time, type: Float64
    if (!is_numeric(_decay_time)) show_error($"{_GMFUNCTION_} :: _decay_time expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _decay_time);

    // param: _early_delay, type: Float64
    if (!is_numeric(_early_delay)) show_error($"{_GMFUNCTION_} :: _early_delay expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _early_delay);

    // param: _late_delay, type: Float64
    if (!is_numeric(_late_delay)) show_error($"{_GMFUNCTION_} :: _late_delay expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _late_delay);

    // param: _hf_reference, type: Float64
    if (!is_numeric(_hf_reference)) show_error($"{_GMFUNCTION_} :: _hf_reference expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _hf_reference);

    // param: _hf_decay_ratio, type: Float64
    if (!is_numeric(_hf_decay_ratio)) show_error($"{_GMFUNCTION_} :: _hf_decay_ratio expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _hf_decay_ratio);

    // param: _diffusion, type: Float64
    if (!is_numeric(_diffusion)) show_error($"{_GMFUNCTION_} :: _diffusion expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _diffusion);

    // param: _density, type: Float64
    if (!is_numeric(_density)) show_error($"{_GMFUNCTION_} :: _density expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _density);

    // param: _low_shelf_frequency, type: Float64
    if (!is_numeric(_low_shelf_frequency)) show_error($"{_GMFUNCTION_} :: _low_shelf_frequency expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _low_shelf_frequency);

    // param: _low_shelf_gain, type: Float64
    if (!is_numeric(_low_shelf_gain)) show_error($"{_GMFUNCTION_} :: _low_shelf_gain expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _low_shelf_gain);

    // param: _high_cut, type: Float64
    if (!is_numeric(_high_cut)) show_error($"{_GMFUNCTION_} :: _high_cut expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _high_cut);

    // param: _early_late_mix, type: Float64
    if (!is_numeric(_early_late_mix)) show_error($"{_GMFUNCTION_} :: _early_late_mix expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _early_late_mix);

    // param: _wet_level, type: Float64
    if (!is_numeric(_wet_level)) show_error($"{_GMFUNCTION_} :: _wet_level expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _wet_level);

    var __return_value__ = __fmod_reverb_3d_set_properties(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _reverb_3d_ref
 * @returns {Struct.FmodReverbProperties}
 */
function fmod_reverb_3d_get_properties(_reverb_3d_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _reverb_3d_ref, type: UInt64
    if (!is_numeric(_reverb_3d_ref)) show_error($"{_GMFUNCTION_} :: _reverb_3d_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _reverb_3d_ref);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_reverb_3d_get_properties(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodReverbProperties_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @param {Real} _reverb_3d_ref
 * @param {Struct.FmodVec3} _position
 * @param {Real} _min_distance
 * @param {Real} _max_distance
 * @returns {Real}
 */
function fmod_reverb_3d_set_3d_attributes(_reverb_3d_ref, _position, _min_distance, _max_distance)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _reverb_3d_ref, type: UInt64
    if (!is_numeric(_reverb_3d_ref)) show_error($"{_GMFUNCTION_} :: _reverb_3d_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _reverb_3d_ref);

    // param: _position, type: struct FmodVec3
    if (_position.__uid != 266577632) show_error($"{_GMFUNCTION_} :: _position expected FmodVec3", true);
    __FmodVec3_encode(_position, __args_buffer__, buffer_tell(__args_buffer__), _GMFUNCTION_);

    // param: _min_distance, type: Float64
    if (!is_numeric(_min_distance)) show_error($"{_GMFUNCTION_} :: _min_distance expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _min_distance);

    // param: _max_distance, type: Float64
    if (!is_numeric(_max_distance)) show_error($"{_GMFUNCTION_} :: _max_distance expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _max_distance);

    var __return_value__ = __fmod_reverb_3d_set_3d_attributes(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _reverb_3d_ref
 * @returns {Struct.FmodReverb3DAttributes}
 */
function fmod_reverb_3d_get_3d_attributes(_reverb_3d_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _reverb_3d_ref, type: UInt64
    if (!is_numeric(_reverb_3d_ref)) show_error($"{_GMFUNCTION_} :: _reverb_3d_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _reverb_3d_ref);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_reverb_3d_get_3d_attributes(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodReverb3DAttributes_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @param {Real} _reverb_3d_ref
 * @param {Real} _user_data
 * @returns {Real}
 */
function fmod_reverb_3d_set_user_data(_reverb_3d_ref, _user_data)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _reverb_3d_ref, type: UInt64
    if (!is_numeric(_reverb_3d_ref)) show_error($"{_GMFUNCTION_} :: _reverb_3d_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _reverb_3d_ref);

    // param: _user_data, type: Float64
    if (!is_numeric(_user_data)) show_error($"{_GMFUNCTION_} :: _user_data expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _user_data);

    var __return_value__ = __fmod_reverb_3d_set_user_data(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _reverb_3d_ref
 * @returns {Real}
 */
function fmod_reverb_3d_get_user_data(_reverb_3d_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _reverb_3d_ref, type: UInt64
    if (!is_numeric(_reverb_3d_ref)) show_error($"{_GMFUNCTION_} :: _reverb_3d_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _reverb_3d_ref);

    var __return_value__ = __fmod_reverb_3d_get_user_data(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _reverb_3d_ref
 * @returns {Real}
 */
function fmod_reverb_3d_release(_reverb_3d_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _reverb_3d_ref, type: UInt64
    if (!is_numeric(_reverb_3d_ref)) show_error($"{_GMFUNCTION_} :: _reverb_3d_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _reverb_3d_ref);

    var __return_value__ = __fmod_reverb_3d_release(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_control_ref
 * @param {Real} _dsp_clock
 * @param {Real} _volume
 * @returns {Real}
 */
function fmod_channel_control_add_fade_point(_channel_control_ref, _dsp_clock, _volume)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: UInt64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_control_ref);

    // param: _dsp_clock, type: Float64
    if (!is_numeric(_dsp_clock)) show_error($"{_GMFUNCTION_} :: _dsp_clock expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _dsp_clock);

    // param: _volume, type: Float64
    if (!is_numeric(_volume)) show_error($"{_GMFUNCTION_} :: _volume expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _volume);

    var __return_value__ = __fmod_channel_control_add_fade_point(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_control_ref
 * @param {Real} _dsp_clock_start
 * @param {Real} _dsp_clock_end
 * @returns {Real}
 */
function fmod_channel_control_remove_fade_points(_channel_control_ref, _dsp_clock_start, _dsp_clock_end)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: UInt64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_control_ref);

    // param: _dsp_clock_start, type: Float64
    if (!is_numeric(_dsp_clock_start)) show_error($"{_GMFUNCTION_} :: _dsp_clock_start expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _dsp_clock_start);

    // param: _dsp_clock_end, type: Float64
    if (!is_numeric(_dsp_clock_end)) show_error($"{_GMFUNCTION_} :: _dsp_clock_end expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _dsp_clock_end);

    var __return_value__ = __fmod_channel_control_remove_fade_points(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_control_ref
 * @param {Real} _dsp_clock
 * @param {Real} _volume
 * @returns {Real}
 */
function fmod_channel_control_set_fade_point_ramp(_channel_control_ref, _dsp_clock, _volume)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: UInt64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_control_ref);

    // param: _dsp_clock, type: Float64
    if (!is_numeric(_dsp_clock)) show_error($"{_GMFUNCTION_} :: _dsp_clock expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _dsp_clock);

    // param: _volume, type: Float64
    if (!is_numeric(_volume)) show_error($"{_GMFUNCTION_} :: _volume expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _volume);

    var __return_value__ = __fmod_channel_control_set_fade_point_ramp(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_control_ref
 * @returns {Real}
 */
function fmod_channel_control_get_fade_point_count(_channel_control_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: UInt64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_control_ref);

    var __return_value__ = __fmod_channel_control_get_fade_point_count(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_control_ref
 * @param {Real} _index
 * @returns {Struct.FmodFadePoint}
 */
function fmod_channel_control_get_fade_point_at(_channel_control_ref, _index)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: UInt64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_control_ref);

    // param: _index, type: Float64
    if (!is_numeric(_index)) show_error($"{_GMFUNCTION_} :: _index expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _index);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_channel_control_get_fade_point_at(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodFadePoint_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @param {Real} _channel_control_ref
 * @returns {Real}
 */
function fmod_channel_control_is_playing(_channel_control_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: UInt64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_control_ref);

    var __return_value__ = __fmod_channel_control_is_playing(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_control_ref
 * @returns {Real}
 */
function fmod_channel_control_stop(_channel_control_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: UInt64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_control_ref);

    var __return_value__ = __fmod_channel_control_stop(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_control_ref
 * @param {Real} _paused
 * @returns {Real}
 */
function fmod_channel_control_set_paused(_channel_control_ref, _paused)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: UInt64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_control_ref);

    // param: _paused, type: Float64
    if (!is_numeric(_paused)) show_error($"{_GMFUNCTION_} :: _paused expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _paused);

    var __return_value__ = __fmod_channel_control_set_paused(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_control_ref
 * @returns {Real}
 */
function fmod_channel_control_get_paused(_channel_control_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: UInt64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_control_ref);

    var __return_value__ = __fmod_channel_control_get_paused(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_control_ref
 * @param {Real} _mode
 * @returns {Real}
 */
function fmod_channel_control_set_mode(_channel_control_ref, _mode)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: UInt64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_control_ref);

    // param: _mode, type: Float64
    if (!is_numeric(_mode)) show_error($"{_GMFUNCTION_} :: _mode expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _mode);

    var __return_value__ = __fmod_channel_control_set_mode(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_control_ref
 * @returns {Real}
 */
function fmod_channel_control_get_mode(_channel_control_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: UInt64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_control_ref);

    var __return_value__ = __fmod_channel_control_get_mode(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_control_ref
 * @param {Real} _pitch
 * @returns {Real}
 */
function fmod_channel_control_set_pitch(_channel_control_ref, _pitch)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: UInt64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_control_ref);

    // param: _pitch, type: Float64
    if (!is_numeric(_pitch)) show_error($"{_GMFUNCTION_} :: _pitch expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _pitch);

    var __return_value__ = __fmod_channel_control_set_pitch(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_control_ref
 * @returns {Real}
 */
function fmod_channel_control_get_pitch(_channel_control_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: UInt64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_control_ref);

    var __return_value__ = __fmod_channel_control_get_pitch(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_control_ref
 * @returns {Real}
 */
function fmod_channel_control_get_audibility(_channel_control_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: UInt64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_control_ref);

    var __return_value__ = __fmod_channel_control_get_audibility(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_control_ref
 * @param {Real} _volume
 * @returns {Real}
 */
function fmod_channel_control_set_volume(_channel_control_ref, _volume)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: UInt64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_control_ref);

    // param: _volume, type: Float64
    if (!is_numeric(_volume)) show_error($"{_GMFUNCTION_} :: _volume expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _volume);

    var __return_value__ = __fmod_channel_control_set_volume(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_control_ref
 * @returns {Real}
 */
function fmod_channel_control_get_volume(_channel_control_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: UInt64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_control_ref);

    var __return_value__ = __fmod_channel_control_get_volume(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_control_ref
 * @param {Real} _ramp
 * @returns {Real}
 */
function fmod_channel_control_set_volume_ramp(_channel_control_ref, _ramp)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: UInt64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_control_ref);

    // param: _ramp, type: Float64
    if (!is_numeric(_ramp)) show_error($"{_GMFUNCTION_} :: _ramp expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _ramp);

    var __return_value__ = __fmod_channel_control_set_volume_ramp(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_control_ref
 * @returns {Real}
 */
function fmod_channel_control_get_volume_ramp(_channel_control_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: UInt64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_control_ref);

    var __return_value__ = __fmod_channel_control_get_volume_ramp(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_control_ref
 * @param {Real} _mute
 * @returns {Real}
 */
function fmod_channel_control_set_mute(_channel_control_ref, _mute)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: UInt64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_control_ref);

    // param: _mute, type: Float64
    if (!is_numeric(_mute)) show_error($"{_GMFUNCTION_} :: _mute expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _mute);

    var __return_value__ = __fmod_channel_control_set_mute(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_control_ref
 * @returns {Real}
 */
function fmod_channel_control_get_mute(_channel_control_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: UInt64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_control_ref);

    var __return_value__ = __fmod_channel_control_get_mute(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_control_ref
 * @param {Real} _level
 * @returns {Real}
 */
function fmod_channel_control_set_3d_doppler_level(_channel_control_ref, _level)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: UInt64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_control_ref);

    // param: _level, type: Float64
    if (!is_numeric(_level)) show_error($"{_GMFUNCTION_} :: _level expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _level);

    var __return_value__ = __fmod_channel_control_set_3d_doppler_level(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_control_ref
 * @returns {Real}
 */
function fmod_channel_control_get_3d_doppler_level(_channel_control_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: UInt64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_control_ref);

    var __return_value__ = __fmod_channel_control_get_3d_doppler_level(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_control_ref
 * @param {Real} _level
 * @returns {Real}
 */
function fmod_channel_control_set_3d_level(_channel_control_ref, _level)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: UInt64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_control_ref);

    // param: _level, type: Float64
    if (!is_numeric(_level)) show_error($"{_GMFUNCTION_} :: _level expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _level);

    var __return_value__ = __fmod_channel_control_set_3d_level(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_control_ref
 * @returns {Real}
 */
function fmod_channel_control_get_3d_level(_channel_control_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: UInt64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_control_ref);

    var __return_value__ = __fmod_channel_control_get_3d_level(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_control_ref
 * @param {Real} _min_dist
 * @param {Real} _max_dist
 * @returns {Real}
 */
function fmod_channel_control_set_3d_min_max_distance(_channel_control_ref, _min_dist, _max_dist)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: UInt64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_control_ref);

    // param: _min_dist, type: Float64
    if (!is_numeric(_min_dist)) show_error($"{_GMFUNCTION_} :: _min_dist expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _min_dist);

    // param: _max_dist, type: Float64
    if (!is_numeric(_max_dist)) show_error($"{_GMFUNCTION_} :: _max_dist expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _max_dist);

    var __return_value__ = __fmod_channel_control_set_3d_min_max_distance(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_control_ref
 * @returns {Struct.FmodMinMaxDistance}
 */
function fmod_channel_control_get_3d_min_max_distance(_channel_control_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: UInt64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_control_ref);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_channel_control_get_3d_min_max_distance(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodMinMaxDistance_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @param {Real} _channel_control_ref
 * @param {Real} _inside_cone_angle
 * @param {Real} _outside_cone_angle
 * @param {Real} _outside_volume
 * @returns {Real}
 */
function fmod_channel_control_set_3d_cone_settings(_channel_control_ref, _inside_cone_angle, _outside_cone_angle, _outside_volume)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: UInt64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_control_ref);

    // param: _inside_cone_angle, type: Float64
    if (!is_numeric(_inside_cone_angle)) show_error($"{_GMFUNCTION_} :: _inside_cone_angle expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _inside_cone_angle);

    // param: _outside_cone_angle, type: Float64
    if (!is_numeric(_outside_cone_angle)) show_error($"{_GMFUNCTION_} :: _outside_cone_angle expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _outside_cone_angle);

    // param: _outside_volume, type: Float64
    if (!is_numeric(_outside_volume)) show_error($"{_GMFUNCTION_} :: _outside_volume expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _outside_volume);

    var __return_value__ = __fmod_channel_control_set_3d_cone_settings(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_control_ref
 * @returns {Struct.FmodConeSettings}
 */
function fmod_channel_control_get_3d_cone_settings(_channel_control_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: UInt64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_control_ref);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_channel_control_get_3d_cone_settings(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodConeSettings_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @param {Real} _channel_control_ref
 * @param {Struct.FmodVec3} _orientation
 * @returns {Real}
 */
function fmod_channel_control_set_3d_cone_orientation(_channel_control_ref, _orientation)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: UInt64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_control_ref);

    // param: _orientation, type: struct FmodVec3
    if (_orientation.__uid != 266577632) show_error($"{_GMFUNCTION_} :: _orientation expected FmodVec3", true);
    __FmodVec3_encode(_orientation, __args_buffer__, buffer_tell(__args_buffer__), _GMFUNCTION_);

    var __return_value__ = __fmod_channel_control_set_3d_cone_orientation(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_control_ref
 * @returns {Struct.FmodVec3}
 */
function fmod_channel_control_get_3d_cone_orientation(_channel_control_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: UInt64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_control_ref);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_channel_control_get_3d_cone_orientation(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodVec3_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @param {Real} _channel_control_ref
 * @param {Real} _direct_occlusion
 * @param {Real} _reverb_occlusion
 * @returns {Real}
 */
function fmod_channel_control_set_3d_occlusion(_channel_control_ref, _direct_occlusion, _reverb_occlusion)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: UInt64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_control_ref);

    // param: _direct_occlusion, type: Float64
    if (!is_numeric(_direct_occlusion)) show_error($"{_GMFUNCTION_} :: _direct_occlusion expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _direct_occlusion);

    // param: _reverb_occlusion, type: Float64
    if (!is_numeric(_reverb_occlusion)) show_error($"{_GMFUNCTION_} :: _reverb_occlusion expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _reverb_occlusion);

    var __return_value__ = __fmod_channel_control_set_3d_occlusion(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_control_ref
 * @returns {Struct.FmodOcclusion}
 */
function fmod_channel_control_get_3d_occlusion(_channel_control_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: UInt64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_control_ref);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_channel_control_get_3d_occlusion(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodOcclusion_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @param {Real} _channel_control_ref
 * @param {Struct.FmodVec3} _position
 * @param {Struct.FmodVec3} _velocity
 * @returns {Real}
 */
function fmod_channel_control_set_3d_attributes(_channel_control_ref, _position, _velocity)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: UInt64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_control_ref);

    // param: _position, type: struct FmodVec3
    if (_position.__uid != 266577632) show_error($"{_GMFUNCTION_} :: _position expected FmodVec3", true);
    __FmodVec3_encode(_position, __args_buffer__, buffer_tell(__args_buffer__), _GMFUNCTION_);

    // param: _velocity, type: struct FmodVec3
    if (_velocity.__uid != 266577632) show_error($"{_GMFUNCTION_} :: _velocity expected FmodVec3", true);
    __FmodVec3_encode(_velocity, __args_buffer__, buffer_tell(__args_buffer__), _GMFUNCTION_);

    var __return_value__ = __fmod_channel_control_set_3d_attributes(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_control_ref
 * @returns {Struct.FmodChannelControl3DAttributes}
 */
function fmod_channel_control_get_3d_attributes(_channel_control_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: UInt64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_control_ref);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_channel_control_get_3d_attributes(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodChannelControl3DAttributes_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @param {Real} _channel_control_ref
 * @param {Real} _angle
 * @returns {Real}
 */
function fmod_channel_control_set_3d_spread(_channel_control_ref, _angle)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: UInt64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_control_ref);

    // param: _angle, type: Float64
    if (!is_numeric(_angle)) show_error($"{_GMFUNCTION_} :: _angle expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _angle);

    var __return_value__ = __fmod_channel_control_set_3d_spread(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_control_ref
 * @returns {Real}
 */
function fmod_channel_control_get_3d_spread(_channel_control_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: UInt64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_control_ref);

    var __return_value__ = __fmod_channel_control_get_3d_spread(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_control_ref
 * @param {Real} _custom
 * @param {Real} _custom_level
 * @param {Real} _center_freq
 * @returns {Real}
 */
function fmod_channel_control_set_3d_distance_filter(_channel_control_ref, _custom, _custom_level, _center_freq)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: UInt64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_control_ref);

    // param: _custom, type: Float64
    if (!is_numeric(_custom)) show_error($"{_GMFUNCTION_} :: _custom expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _custom);

    // param: _custom_level, type: Float64
    if (!is_numeric(_custom_level)) show_error($"{_GMFUNCTION_} :: _custom_level expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _custom_level);

    // param: _center_freq, type: Float64
    if (!is_numeric(_center_freq)) show_error($"{_GMFUNCTION_} :: _center_freq expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _center_freq);

    var __return_value__ = __fmod_channel_control_set_3d_distance_filter(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_control_ref
 * @returns {Struct.FmodDistanceFilter}
 */
function fmod_channel_control_get_3d_distance_filter(_channel_control_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: UInt64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_control_ref);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_channel_control_get_3d_distance_filter(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodDistanceFilter_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @param {Real} _channel_control_ref
 * @param {Any} _points
 * @param {Real} _num_points
 * @returns {Real}
 */
function fmod_channel_control_set_3d_custom_rolloff(_channel_control_ref, _points, _num_points)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: UInt64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_control_ref);

    // param: _points, type: Any

    __ext_core_buffer_marshal_value(__args_buffer__, _points);

    // param: _num_points, type: Float64
    if (!is_numeric(_num_points)) show_error($"{_GMFUNCTION_} :: _num_points expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _num_points);

    var __return_value__ = __fmod_channel_control_set_3d_custom_rolloff(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_control_ref
 * @returns {Real}
 */
function fmod_channel_control_get_3d_custom_rolloff_count(_channel_control_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: UInt64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_control_ref);

    var __return_value__ = __fmod_channel_control_get_3d_custom_rolloff_count(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_control_ref
 * @param {Real} _index
 * @returns {Struct.FmodVec3}
 */
function fmod_channel_control_get_3d_custom_rolloff_at(_channel_control_ref, _index)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: UInt64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_control_ref);

    // param: _index, type: Float64
    if (!is_numeric(_index)) show_error($"{_GMFUNCTION_} :: _index expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _index);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_channel_control_get_3d_custom_rolloff_at(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodVec3_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @param {Real} _channel_control_ref
 * @param {Real} _pan
 * @returns {Real}
 */
function fmod_channel_control_set_pan(_channel_control_ref, _pan)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: UInt64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_control_ref);

    // param: _pan, type: Float64
    if (!is_numeric(_pan)) show_error($"{_GMFUNCTION_} :: _pan expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _pan);

    var __return_value__ = __fmod_channel_control_set_pan(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_control_ref
 * @param {Real} _front_left
 * @param {Real} _front_right
 * @param {Real} _center
 * @param {Real} _lfe
 * @param {Real} _surround_left
 * @param {Real} _surround_right
 * @param {Real} _back_left
 * @param {Real} _back_right
 * @returns {Real}
 */
function fmod_channel_control_set_mix_levels_output(_channel_control_ref, _front_left, _front_right, _center, _lfe, _surround_left, _surround_right, _back_left, _back_right)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: UInt64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_control_ref);

    // param: _front_left, type: Float64
    if (!is_numeric(_front_left)) show_error($"{_GMFUNCTION_} :: _front_left expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _front_left);

    // param: _front_right, type: Float64
    if (!is_numeric(_front_right)) show_error($"{_GMFUNCTION_} :: _front_right expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _front_right);

    // param: _center, type: Float64
    if (!is_numeric(_center)) show_error($"{_GMFUNCTION_} :: _center expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _center);

    // param: _lfe, type: Float64
    if (!is_numeric(_lfe)) show_error($"{_GMFUNCTION_} :: _lfe expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _lfe);

    // param: _surround_left, type: Float64
    if (!is_numeric(_surround_left)) show_error($"{_GMFUNCTION_} :: _surround_left expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _surround_left);

    // param: _surround_right, type: Float64
    if (!is_numeric(_surround_right)) show_error($"{_GMFUNCTION_} :: _surround_right expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _surround_right);

    // param: _back_left, type: Float64
    if (!is_numeric(_back_left)) show_error($"{_GMFUNCTION_} :: _back_left expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _back_left);

    // param: _back_right, type: Float64
    if (!is_numeric(_back_right)) show_error($"{_GMFUNCTION_} :: _back_right expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _back_right);

    var __return_value__ = __fmod_channel_control_set_mix_levels_output(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_control_ref
 * @param {Real} _levels
 * @param {Real} _num_levels
 * @returns {Real}
 */
function fmod_channel_control_set_mix_levels_input(_channel_control_ref, _levels, _num_levels)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: UInt64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_control_ref);

    // param: _levels, type: Float64
    if (!is_numeric(_levels)) show_error($"{_GMFUNCTION_} :: _levels expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _levels);

    // param: _num_levels, type: Float64
    if (!is_numeric(_num_levels)) show_error($"{_GMFUNCTION_} :: _num_levels expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _num_levels);

    var __return_value__ = __fmod_channel_control_set_mix_levels_input(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_control_ref
 * @param {Real} _matrix
 * @param {Real} _out_channels
 * @param {Real} _in_channels
 * @param {Real} _in_channel_hop
 * @returns {Real}
 */
function fmod_channel_control_set_mix_matrix(_channel_control_ref, _matrix, _out_channels, _in_channels, _in_channel_hop)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: UInt64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_control_ref);

    // param: _matrix, type: Float64
    if (!is_numeric(_matrix)) show_error($"{_GMFUNCTION_} :: _matrix expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _matrix);

    // param: _out_channels, type: Float64
    if (!is_numeric(_out_channels)) show_error($"{_GMFUNCTION_} :: _out_channels expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _out_channels);

    // param: _in_channels, type: Float64
    if (!is_numeric(_in_channels)) show_error($"{_GMFUNCTION_} :: _in_channels expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _in_channels);

    // param: _in_channel_hop, type: Float64
    if (!is_numeric(_in_channel_hop)) show_error($"{_GMFUNCTION_} :: _in_channel_hop expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _in_channel_hop);

    var __return_value__ = __fmod_channel_control_set_mix_matrix(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_control_ref
 * @param {Real} _in_channel_hop
 * @returns {Struct.FmodDSPMixMatrix}
 */
function fmod_channel_control_get_mix_matrix(_channel_control_ref, _in_channel_hop)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: UInt64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_control_ref);

    // param: _in_channel_hop, type: Float64
    if (!is_numeric(_in_channel_hop)) show_error($"{_GMFUNCTION_} :: _in_channel_hop expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _in_channel_hop);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_channel_control_get_mix_matrix(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodDSPMixMatrix_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @param {Real} _channel_control_ref
 * @param {Real} _reverb_instance
 * @param {Real} _wet
 * @returns {Real}
 */
function fmod_channel_control_set_reverb_properties(_channel_control_ref, _reverb_instance, _wet)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: UInt64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_control_ref);

    // param: _reverb_instance, type: Float64
    if (!is_numeric(_reverb_instance)) show_error($"{_GMFUNCTION_} :: _reverb_instance expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _reverb_instance);

    // param: _wet, type: Float64
    if (!is_numeric(_wet)) show_error($"{_GMFUNCTION_} :: _wet expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _wet);

    var __return_value__ = __fmod_channel_control_set_reverb_properties(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_control_ref
 * @param {Real} _reverb_instance
 * @returns {Real}
 */
function fmod_channel_control_get_reverb_properties(_channel_control_ref, _reverb_instance)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: UInt64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_control_ref);

    // param: _reverb_instance, type: Float64
    if (!is_numeric(_reverb_instance)) show_error($"{_GMFUNCTION_} :: _reverb_instance expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _reverb_instance);

    var __return_value__ = __fmod_channel_control_get_reverb_properties(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_control_ref
 * @param {Real} _gain
 * @returns {Real}
 */
function fmod_channel_control_set_low_pass_gain(_channel_control_ref, _gain)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: UInt64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_control_ref);

    // param: _gain, type: Float64
    if (!is_numeric(_gain)) show_error($"{_GMFUNCTION_} :: _gain expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _gain);

    var __return_value__ = __fmod_channel_control_set_low_pass_gain(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_control_ref
 * @returns {Real}
 */
function fmod_channel_control_get_low_pass_gain(_channel_control_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: UInt64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_control_ref);

    var __return_value__ = __fmod_channel_control_get_low_pass_gain(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_control_ref
 * @param {Real} _dsp_chain_offset
 * @param {Real} _dsp_ref
 * @returns {Real}
 */
function fmod_channel_control_add_dsp(_channel_control_ref, _dsp_chain_offset, _dsp_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: UInt64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_control_ref);

    // param: _dsp_chain_offset, type: Float64
    if (!is_numeric(_dsp_chain_offset)) show_error($"{_GMFUNCTION_} :: _dsp_chain_offset expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _dsp_chain_offset);

    // param: _dsp_ref, type: UInt64
    if (!is_numeric(_dsp_ref)) show_error($"{_GMFUNCTION_} :: _dsp_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _dsp_ref);

    var __return_value__ = __fmod_channel_control_add_dsp(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_control_ref
 * @param {Real} _dsp_ref
 * @returns {Real}
 */
function fmod_channel_control_remove_dsp(_channel_control_ref, _dsp_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: UInt64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_control_ref);

    // param: _dsp_ref, type: UInt64
    if (!is_numeric(_dsp_ref)) show_error($"{_GMFUNCTION_} :: _dsp_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _dsp_ref);

    var __return_value__ = __fmod_channel_control_remove_dsp(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_control_ref
 * @returns {Real}
 */
function fmod_channel_control_get_num_dsps(_channel_control_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: UInt64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_control_ref);

    var __return_value__ = __fmod_channel_control_get_num_dsps(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_control_ref
 * @param {Real} _index
 * @returns {Real}
 */
function fmod_channel_control_get_dsp(_channel_control_ref, _index)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: UInt64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_control_ref);

    // param: _index, type: Float64
    if (!is_numeric(_index)) show_error($"{_GMFUNCTION_} :: _index expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _index);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_channel_control_get_dsp(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = buffer_read(__ret_buffer__, buffer_u64);
    return __result__;
}

/**
 * @param {Real} _channel_control_ref
 * @param {Real} _dsp_ref
 * @param {Real} _chain_index
 * @returns {Real}
 */
function fmod_channel_control_set_dsp_index(_channel_control_ref, _dsp_ref, _chain_index)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: UInt64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_control_ref);

    // param: _dsp_ref, type: UInt64
    if (!is_numeric(_dsp_ref)) show_error($"{_GMFUNCTION_} :: _dsp_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _dsp_ref);

    // param: _chain_index, type: Float64
    if (!is_numeric(_chain_index)) show_error($"{_GMFUNCTION_} :: _chain_index expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _chain_index);

    var __return_value__ = __fmod_channel_control_set_dsp_index(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_control_ref
 * @param {Real} _dsp_ref
 * @returns {Real}
 */
function fmod_channel_control_get_dsp_index(_channel_control_ref, _dsp_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: UInt64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_control_ref);

    // param: _dsp_ref, type: UInt64
    if (!is_numeric(_dsp_ref)) show_error($"{_GMFUNCTION_} :: _dsp_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _dsp_ref);

    var __return_value__ = __fmod_channel_control_get_dsp_index(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_control_ref
 * @param {Real} _user_data
 * @returns {Real}
 */
function fmod_channel_control_set_user_data(_channel_control_ref, _user_data)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: UInt64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_control_ref);

    // param: _user_data, type: Float64
    if (!is_numeric(_user_data)) show_error($"{_GMFUNCTION_} :: _user_data expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _user_data);

    var __return_value__ = __fmod_channel_control_set_user_data(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_control_ref
 * @returns {Real}
 */
function fmod_channel_control_get_user_data(_channel_control_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: UInt64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_control_ref);

    var __return_value__ = __fmod_channel_control_get_user_data(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_control_ref
 * @returns {Real}
 */
function fmod_channel_control_get_system_object(_channel_control_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_control_ref, type: UInt64
    if (!is_numeric(_channel_control_ref)) show_error($"{_GMFUNCTION_} :: _channel_control_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_control_ref);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_channel_control_get_system_object(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = buffer_read(__ret_buffer__, buffer_u64);
    return __result__;
}

/**
 * @param {Real} _channel_ref
 * @returns {Struct.FmodDelay}
 */
function fmod_channel_control_get_delay(_channel_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_ref, type: UInt64
    if (!is_numeric(_channel_ref)) show_error($"{_GMFUNCTION_} :: _channel_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_ref);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_channel_control_get_delay(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodDelay_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @param {Real} _channel_ref
 * @param {Real} _dspclock_start
 * @param {Real} _dspclock_end
 * @param {Real} _stop_channels
 * @returns {Real}
 */
function fmod_channel_control_set_delay(_channel_ref, _dspclock_start, _dspclock_end, _stop_channels)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_ref, type: UInt64
    if (!is_numeric(_channel_ref)) show_error($"{_GMFUNCTION_} :: _channel_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_ref);

    // param: _dspclock_start, type: Float64
    if (!is_numeric(_dspclock_start)) show_error($"{_GMFUNCTION_} :: _dspclock_start expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _dspclock_start);

    // param: _dspclock_end, type: Float64
    if (!is_numeric(_dspclock_end)) show_error($"{_GMFUNCTION_} :: _dspclock_end expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _dspclock_end);

    // param: _stop_channels, type: Float64
    if (!is_numeric(_stop_channels)) show_error($"{_GMFUNCTION_} :: _stop_channels expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _stop_channels);

    var __return_value__ = __fmod_channel_control_set_delay(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _channel_ref
 * @returns {Struct.FmodDSPClock}
 */
function fmod_channel_control_get_dsp_clock(_channel_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_ref, type: UInt64
    if (!is_numeric(_channel_ref)) show_error($"{_GMFUNCTION_} :: _channel_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_ref);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_channel_control_get_dsp_clock(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodDSPClock_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @param {Real} _channel_ref
 * @param {Function} _callback
 * @returns {Real}
 */
function fmod_channel_control_set_callback(_channel_ref, _callback)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __dispatcher__ = __GMFMOD_get_dispatcher();

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _channel_ref, type: UInt64
    if (!is_numeric(_channel_ref)) show_error($"{_GMFUNCTION_} :: _channel_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _channel_ref);

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

    var __return_value__ = __fmod_channel_control_set_callback(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _dsp_ref
 * @param {Real} _dsp_input_ref
 * @param {Real} _dsp_connection_type
 * @returns {Real}
 */
function fmod_dsp_add_input(_dsp_ref, _dsp_input_ref, _dsp_connection_type)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _dsp_ref, type: UInt64
    if (!is_numeric(_dsp_ref)) show_error($"{_GMFUNCTION_} :: _dsp_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _dsp_ref);

    // param: _dsp_input_ref, type: UInt64
    if (!is_numeric(_dsp_input_ref)) show_error($"{_GMFUNCTION_} :: _dsp_input_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _dsp_input_ref);

    // param: _dsp_connection_type, type: Float64
    if (!is_numeric(_dsp_connection_type)) show_error($"{_GMFUNCTION_} :: _dsp_connection_type expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _dsp_connection_type);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_dsp_add_input(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = buffer_read(__ret_buffer__, buffer_u64);
    return __result__;
}

/**
 * @param {Real} _dsp_ref
 * @returns {Real}
 */
function fmod_dsp_get_num_inputs(_dsp_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _dsp_ref, type: UInt64
    if (!is_numeric(_dsp_ref)) show_error($"{_GMFUNCTION_} :: _dsp_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _dsp_ref);

    var __return_value__ = __fmod_dsp_get_num_inputs(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _dsp_ref
 * @returns {Real}
 */
function fmod_dsp_get_num_outputs(_dsp_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _dsp_ref, type: UInt64
    if (!is_numeric(_dsp_ref)) show_error($"{_GMFUNCTION_} :: _dsp_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _dsp_ref);

    var __return_value__ = __fmod_dsp_get_num_outputs(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _dsp_ref
 * @param {Real} _inputs
 * @param {Real} _outputs
 * @returns {Real}
 */
function fmod_dsp_disconnect_all(_dsp_ref, _inputs, _outputs)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _dsp_ref, type: UInt64
    if (!is_numeric(_dsp_ref)) show_error($"{_GMFUNCTION_} :: _dsp_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _dsp_ref);

    // param: _inputs, type: Float64
    if (!is_numeric(_inputs)) show_error($"{_GMFUNCTION_} :: _inputs expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _inputs);

    // param: _outputs, type: Float64
    if (!is_numeric(_outputs)) show_error($"{_GMFUNCTION_} :: _outputs expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _outputs);

    var __return_value__ = __fmod_dsp_disconnect_all(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _dsp_ref
 * @returns {Real}
 */
function fmod_dsp_get_num_parameters(_dsp_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _dsp_ref, type: UInt64
    if (!is_numeric(_dsp_ref)) show_error($"{_GMFUNCTION_} :: _dsp_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _dsp_ref);

    var __return_value__ = __fmod_dsp_get_num_parameters(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _dsp_ref
 * @param {Real} _index
 * @param {Real} _value
 */
function fmod_dsp_set_parameter_float(_dsp_ref, _index, _value)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _dsp_ref, type: UInt64
    if (!is_numeric(_dsp_ref)) show_error($"{_GMFUNCTION_} :: _dsp_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _dsp_ref);

    // param: _index, type: Float64
    if (!is_numeric(_index)) show_error($"{_GMFUNCTION_} :: _index expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _index);

    // param: _value, type: Float64
    if (!is_numeric(_value)) show_error($"{_GMFUNCTION_} :: _value expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _value);

    var __return_value__ = __fmod_dsp_set_parameter_float(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _dsp_ref
 * @param {Real} _index
 * @returns {Real}
 */
function fmod_dsp_get_parameter_float(_dsp_ref, _index)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _dsp_ref, type: UInt64
    if (!is_numeric(_dsp_ref)) show_error($"{_GMFUNCTION_} :: _dsp_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _dsp_ref);

    // param: _index, type: Float64
    if (!is_numeric(_index)) show_error($"{_GMFUNCTION_} :: _index expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _index);

    var __return_value__ = __fmod_dsp_get_parameter_float(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _dsp_ref
 * @param {Real} _index
 * @param {Real} _value
 */
function fmod_dsp_set_parameter_int(_dsp_ref, _index, _value)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _dsp_ref, type: UInt64
    if (!is_numeric(_dsp_ref)) show_error($"{_GMFUNCTION_} :: _dsp_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _dsp_ref);

    // param: _index, type: Float64
    if (!is_numeric(_index)) show_error($"{_GMFUNCTION_} :: _index expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _index);

    // param: _value, type: Float64
    if (!is_numeric(_value)) show_error($"{_GMFUNCTION_} :: _value expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _value);

    var __return_value__ = __fmod_dsp_set_parameter_int(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _dsp_ref
 * @param {Real} _index
 * @returns {Real}
 */
function fmod_dsp_get_parameter_int(_dsp_ref, _index)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _dsp_ref, type: UInt64
    if (!is_numeric(_dsp_ref)) show_error($"{_GMFUNCTION_} :: _dsp_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _dsp_ref);

    // param: _index, type: Float64
    if (!is_numeric(_index)) show_error($"{_GMFUNCTION_} :: _index expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _index);

    var __return_value__ = __fmod_dsp_get_parameter_int(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _dsp_ref
 * @param {Real} _index
 * @param {Real} _value
 */
function fmod_dsp_set_parameter_bool(_dsp_ref, _index, _value)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _dsp_ref, type: UInt64
    if (!is_numeric(_dsp_ref)) show_error($"{_GMFUNCTION_} :: _dsp_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _dsp_ref);

    // param: _index, type: Float64
    if (!is_numeric(_index)) show_error($"{_GMFUNCTION_} :: _index expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _index);

    // param: _value, type: Float64
    if (!is_numeric(_value)) show_error($"{_GMFUNCTION_} :: _value expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _value);

    var __return_value__ = __fmod_dsp_set_parameter_bool(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _dsp_ref
 * @param {Real} _index
 * @returns {Real}
 */
function fmod_dsp_get_parameter_bool(_dsp_ref, _index)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _dsp_ref, type: UInt64
    if (!is_numeric(_dsp_ref)) show_error($"{_GMFUNCTION_} :: _dsp_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _dsp_ref);

    // param: _index, type: Float64
    if (!is_numeric(_index)) show_error($"{_GMFUNCTION_} :: _index expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _index);

    var __return_value__ = __fmod_dsp_get_parameter_bool(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _dsp_ref
 */
function fmod_dsp_release(_dsp_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _dsp_ref, type: UInt64
    if (!is_numeric(_dsp_ref)) show_error($"{_GMFUNCTION_} :: _dsp_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _dsp_ref);

    var __return_value__ = __fmod_dsp_release(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _dsp_ref
 * @returns {Real}
 */
function fmod_dsp_get_system_object(_dsp_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _dsp_ref, type: UInt64
    if (!is_numeric(_dsp_ref)) show_error($"{_GMFUNCTION_} :: _dsp_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _dsp_ref);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_dsp_get_system_object(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = buffer_read(__ret_buffer__, buffer_u64);
    return __result__;
}

/**
 * @param {Real} _dsp_ref
 * @param {Real} _index
 * @returns {Real}
 */
function fmod_dsp_get_input(_dsp_ref, _index)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _dsp_ref, type: UInt64
    if (!is_numeric(_dsp_ref)) show_error($"{_GMFUNCTION_} :: _dsp_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _dsp_ref);

    // param: _index, type: Float64
    if (!is_numeric(_index)) show_error($"{_GMFUNCTION_} :: _index expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _index);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_dsp_get_input(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = buffer_read(__ret_buffer__, buffer_u64);
    return __result__;
}

/**
 * @param {Real} _dsp_ref
 * @param {Real} _index
 * @returns {Real}
 */
function fmod_dsp_get_output(_dsp_ref, _index)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _dsp_ref, type: UInt64
    if (!is_numeric(_dsp_ref)) show_error($"{_GMFUNCTION_} :: _dsp_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _dsp_ref);

    // param: _index, type: Float64
    if (!is_numeric(_index)) show_error($"{_GMFUNCTION_} :: _index expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _index);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_dsp_get_output(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = buffer_read(__ret_buffer__, buffer_u64);
    return __result__;
}

/**
 * @param {Real} _dsp_ref
 * @param {Real} _target_dsp
 */
function fmod_dsp_disconnect_from(_dsp_ref, _target_dsp)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _dsp_ref, type: UInt64
    if (!is_numeric(_dsp_ref)) show_error($"{_GMFUNCTION_} :: _dsp_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _dsp_ref);

    // param: _target_dsp, type: UInt64
    if (!is_numeric(_target_dsp)) show_error($"{_GMFUNCTION_} :: _target_dsp expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _target_dsp);

    var __return_value__ = __fmod_dsp_disconnect_from(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _dsp_ref
 * @param {Real} _data_type
 * @returns {Real}
 */
function fmod_dsp_get_data_parameter_index(_dsp_ref, _data_type)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _dsp_ref, type: UInt64
    if (!is_numeric(_dsp_ref)) show_error($"{_GMFUNCTION_} :: _dsp_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _dsp_ref);

    // param: _data_type, type: Float64
    if (!is_numeric(_data_type)) show_error($"{_GMFUNCTION_} :: _data_type expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _data_type);

    var __return_value__ = __fmod_dsp_get_data_parameter_index(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _dsp_ref
 * @param {Real} _index
 * @param {Id.Buffer} _buffer
 * @param {Real} _length
 */
function fmod_dsp_set_parameter_data(_dsp_ref, _index, _buffer, _length)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _dsp_ref, type: UInt64
    if (!is_numeric(_dsp_ref)) show_error($"{_GMFUNCTION_} :: _dsp_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _dsp_ref);

    // param: _index, type: Float64
    if (!is_numeric(_index)) show_error($"{_GMFUNCTION_} :: _index expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _index);

    // param: _buffer, type: Buffer
    if (!buffer_exists(_buffer)) show_error($"{_GMFUNCTION_} :: _buffer expected Id.Buffer", true);
    __GMFMOD_queue_buffer(buffer_get_address(_buffer), buffer_get_size(_buffer));

    // param: _length, type: Float64
    if (!is_numeric(_length)) show_error($"{_GMFUNCTION_} :: _length expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _length);

    var __return_value__ = __fmod_dsp_set_parameter_data(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _dsp_ref
 * @param {Real} _index
 * @param {Id.Buffer} _buffer
 * @param {Real} _length
 * @returns {Real}
 */
function fmod_dsp_get_parameter_data(_dsp_ref, _index, _buffer, _length)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _dsp_ref, type: UInt64
    if (!is_numeric(_dsp_ref)) show_error($"{_GMFUNCTION_} :: _dsp_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _dsp_ref);

    // param: _index, type: Float64
    if (!is_numeric(_index)) show_error($"{_GMFUNCTION_} :: _index expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _index);

    // param: _buffer, type: Buffer
    if (!buffer_exists(_buffer)) show_error($"{_GMFUNCTION_} :: _buffer expected Id.Buffer", true);
    __GMFMOD_queue_buffer(buffer_get_address(_buffer), buffer_get_size(_buffer));

    // param: _length, type: Float64
    if (!is_numeric(_length)) show_error($"{_GMFUNCTION_} :: _length expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _length);

    var __return_value__ = __fmod_dsp_get_parameter_data(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _dsp_ref
 * @param {Real} _index
 * @returns {Struct.FmodDSPParameterInfo}
 */
function fmod_dsp_get_parameter_info(_dsp_ref, _index)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _dsp_ref, type: UInt64
    if (!is_numeric(_dsp_ref)) show_error($"{_GMFUNCTION_} :: _dsp_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _dsp_ref);

    // param: _index, type: Float64
    if (!is_numeric(_index)) show_error($"{_GMFUNCTION_} :: _index expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _index);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_dsp_get_parameter_info(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodDSPParameterInfo_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @param {Real} _dsp_ref
 * @param {Real} _channel_mask
 * @param {Real} _num_channels
 */
function fmod_dsp_set_channel_format(_dsp_ref, _channel_mask, _num_channels)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _dsp_ref, type: UInt64
    if (!is_numeric(_dsp_ref)) show_error($"{_GMFUNCTION_} :: _dsp_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _dsp_ref);

    // param: _channel_mask, type: Float64
    if (!is_numeric(_channel_mask)) show_error($"{_GMFUNCTION_} :: _channel_mask expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _channel_mask);

    // param: _num_channels, type: Float64
    if (!is_numeric(_num_channels)) show_error($"{_GMFUNCTION_} :: _num_channels expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _num_channels);

    var __return_value__ = __fmod_dsp_set_channel_format(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _dsp_ref
 * @returns {Struct.FmodDSPChannelFormat}
 */
function fmod_dsp_get_channel_format(_dsp_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _dsp_ref, type: UInt64
    if (!is_numeric(_dsp_ref)) show_error($"{_GMFUNCTION_} :: _dsp_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _dsp_ref);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_dsp_get_channel_format(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodDSPChannelFormat_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @param {Real} _dsp_ref
 * @returns {Struct.FmodDSPChannelFormat}
 */
function fmod_dsp_get_output_channel_format(_dsp_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _dsp_ref, type: UInt64
    if (!is_numeric(_dsp_ref)) show_error($"{_GMFUNCTION_} :: _dsp_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _dsp_ref);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_dsp_get_output_channel_format(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodDSPChannelFormat_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @param {Real} _dsp_ref
 * @returns {Struct.FmodDSPMeteringInfo}
 */
function fmod_dsp_get_metering_info(_dsp_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _dsp_ref, type: UInt64
    if (!is_numeric(_dsp_ref)) show_error($"{_GMFUNCTION_} :: _dsp_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _dsp_ref);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_dsp_get_metering_info(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodDSPMeteringInfo_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @param {Real} _dsp_ref
 * @param {Real} _input_enabled
 * @param {Real} _output_enabled
 */
function fmod_dsp_set_metering_enabled(_dsp_ref, _input_enabled, _output_enabled)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _dsp_ref, type: UInt64
    if (!is_numeric(_dsp_ref)) show_error($"{_GMFUNCTION_} :: _dsp_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _dsp_ref);

    // param: _input_enabled, type: Float64
    if (!is_numeric(_input_enabled)) show_error($"{_GMFUNCTION_} :: _input_enabled expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _input_enabled);

    // param: _output_enabled, type: Float64
    if (!is_numeric(_output_enabled)) show_error($"{_GMFUNCTION_} :: _output_enabled expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _output_enabled);

    var __return_value__ = __fmod_dsp_set_metering_enabled(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _dsp_ref
 * @returns {Struct.FmodDSPMeteringEnabled}
 */
function fmod_dsp_get_metering_enabled(_dsp_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _dsp_ref, type: UInt64
    if (!is_numeric(_dsp_ref)) show_error($"{_GMFUNCTION_} :: _dsp_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _dsp_ref);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_dsp_get_metering_enabled(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodDSPMeteringEnabled_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @param {Real} _dsp_ref
 * @param {Real} _active
 */
function fmod_dsp_set_active(_dsp_ref, _active)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _dsp_ref, type: UInt64
    if (!is_numeric(_dsp_ref)) show_error($"{_GMFUNCTION_} :: _dsp_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _dsp_ref);

    // param: _active, type: Float64
    if (!is_numeric(_active)) show_error($"{_GMFUNCTION_} :: _active expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _active);

    var __return_value__ = __fmod_dsp_set_active(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _dsp_ref
 * @returns {Real}
 */
function fmod_dsp_get_active(_dsp_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _dsp_ref, type: UInt64
    if (!is_numeric(_dsp_ref)) show_error($"{_GMFUNCTION_} :: _dsp_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _dsp_ref);

    var __return_value__ = __fmod_dsp_get_active(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _dsp_ref
 * @param {Real} _bypass
 */
function fmod_dsp_set_bypass(_dsp_ref, _bypass)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _dsp_ref, type: UInt64
    if (!is_numeric(_dsp_ref)) show_error($"{_GMFUNCTION_} :: _dsp_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _dsp_ref);

    // param: _bypass, type: Float64
    if (!is_numeric(_bypass)) show_error($"{_GMFUNCTION_} :: _bypass expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _bypass);

    var __return_value__ = __fmod_dsp_set_bypass(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _dsp_ref
 * @returns {Real}
 */
function fmod_dsp_get_bypass(_dsp_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _dsp_ref, type: UInt64
    if (!is_numeric(_dsp_ref)) show_error($"{_GMFUNCTION_} :: _dsp_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _dsp_ref);

    var __return_value__ = __fmod_dsp_get_bypass(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _dsp_ref
 * @param {Real} _prewet
 * @param {Real} _postwet
 * @param {Real} _dry
 */
function fmod_dsp_set_wet_dry_mix(_dsp_ref, _prewet, _postwet, _dry)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _dsp_ref, type: UInt64
    if (!is_numeric(_dsp_ref)) show_error($"{_GMFUNCTION_} :: _dsp_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _dsp_ref);

    // param: _prewet, type: Float64
    if (!is_numeric(_prewet)) show_error($"{_GMFUNCTION_} :: _prewet expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _prewet);

    // param: _postwet, type: Float64
    if (!is_numeric(_postwet)) show_error($"{_GMFUNCTION_} :: _postwet expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _postwet);

    // param: _dry, type: Float64
    if (!is_numeric(_dry)) show_error($"{_GMFUNCTION_} :: _dry expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _dry);

    var __return_value__ = __fmod_dsp_set_wet_dry_mix(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _dsp_ref
 * @returns {Struct.FmodDSPWetDryMix}
 */
function fmod_dsp_get_wet_dry_mix(_dsp_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _dsp_ref, type: UInt64
    if (!is_numeric(_dsp_ref)) show_error($"{_GMFUNCTION_} :: _dsp_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _dsp_ref);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_dsp_get_wet_dry_mix(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodDSPWetDryMix_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @param {Real} _dsp_ref
 * @returns {Real}
 */
function fmod_dsp_get_idle(_dsp_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _dsp_ref, type: UInt64
    if (!is_numeric(_dsp_ref)) show_error($"{_GMFUNCTION_} :: _dsp_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _dsp_ref);

    var __return_value__ = __fmod_dsp_get_idle(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _dsp_ref
 */
function fmod_dsp_reset(_dsp_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _dsp_ref, type: UInt64
    if (!is_numeric(_dsp_ref)) show_error($"{_GMFUNCTION_} :: _dsp_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _dsp_ref);

    var __return_value__ = __fmod_dsp_reset(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _dsp_ref
 * @returns {Real}
 */
function fmod_dsp_get_type(_dsp_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _dsp_ref, type: UInt64
    if (!is_numeric(_dsp_ref)) show_error($"{_GMFUNCTION_} :: _dsp_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _dsp_ref);

    var __return_value__ = __fmod_dsp_get_type(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _dsp_ref
 * @returns {Struct.FmodDSPInfo}
 */
function fmod_dsp_get_info(_dsp_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _dsp_ref, type: UInt64
    if (!is_numeric(_dsp_ref)) show_error($"{_GMFUNCTION_} :: _dsp_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _dsp_ref);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_dsp_get_info(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodDSPInfo_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @param {Real} _dsp_ref
 * @returns {Struct.FmodDSPCPUUsage}
 */
function fmod_dsp_get_cpu_usage(_dsp_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _dsp_ref, type: UInt64
    if (!is_numeric(_dsp_ref)) show_error($"{_GMFUNCTION_} :: _dsp_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _dsp_ref);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_dsp_get_cpu_usage(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodDSPCPUUsage_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @param {Real} _dsp_ref
 * @param {Real} _user_data
 * @returns {Real}
 */
function fmod_dsp_set_user_data(_dsp_ref, _user_data)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _dsp_ref, type: UInt64
    if (!is_numeric(_dsp_ref)) show_error($"{_GMFUNCTION_} :: _dsp_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _dsp_ref);

    // param: _user_data, type: Float64
    if (!is_numeric(_user_data)) show_error($"{_GMFUNCTION_} :: _user_data expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _user_data);

    var __return_value__ = __fmod_dsp_set_user_data(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _dsp_ref
 * @returns {Real}
 */
function fmod_dsp_get_user_data(_dsp_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _dsp_ref, type: UInt64
    if (!is_numeric(_dsp_ref)) show_error($"{_GMFUNCTION_} :: _dsp_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _dsp_ref);

    var __return_value__ = __fmod_dsp_get_user_data(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _dsp_ref
 * @param {Function} _callback
 * @returns {Real}
 */
function fmod_dsp_set_callback(_dsp_ref, _callback)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __dispatcher__ = __GMFMOD_get_dispatcher();

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _dsp_ref, type: UInt64
    if (!is_numeric(_dsp_ref)) show_error($"{_GMFUNCTION_} :: _dsp_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _dsp_ref);

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

    var __return_value__ = __fmod_dsp_set_callback(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _connection_ref
 * @param {Real} _volume
 * @returns {Real}
 */
function fmod_dsp_connection_set_mix(_connection_ref, _volume)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _connection_ref, type: UInt64
    if (!is_numeric(_connection_ref)) show_error($"{_GMFUNCTION_} :: _connection_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _connection_ref);

    // param: _volume, type: Float64
    if (!is_numeric(_volume)) show_error($"{_GMFUNCTION_} :: _volume expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _volume);

    var __return_value__ = __fmod_dsp_connection_set_mix(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _connection_ref
 * @returns {Real}
 */
function fmod_dsp_connection_get_mix(_connection_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _connection_ref, type: UInt64
    if (!is_numeric(_connection_ref)) show_error($"{_GMFUNCTION_} :: _connection_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _connection_ref);

    var __return_value__ = __fmod_dsp_connection_get_mix(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _connection_ref
 * @param {Real} _matrix
 * @param {Real} _out_channels
 * @param {Real} _in_channels
 * @param {Real} _in_channel_hop
 * @returns {Real}
 */
function fmod_dsp_connection_set_mix_matrix(_connection_ref, _matrix, _out_channels, _in_channels, _in_channel_hop)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _connection_ref, type: UInt64
    if (!is_numeric(_connection_ref)) show_error($"{_GMFUNCTION_} :: _connection_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _connection_ref);

    // param: _matrix, type: Float64
    if (!is_numeric(_matrix)) show_error($"{_GMFUNCTION_} :: _matrix expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _matrix);

    // param: _out_channels, type: Float64
    if (!is_numeric(_out_channels)) show_error($"{_GMFUNCTION_} :: _out_channels expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _out_channels);

    // param: _in_channels, type: Float64
    if (!is_numeric(_in_channels)) show_error($"{_GMFUNCTION_} :: _in_channels expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _in_channels);

    // param: _in_channel_hop, type: Float64
    if (!is_numeric(_in_channel_hop)) show_error($"{_GMFUNCTION_} :: _in_channel_hop expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _in_channel_hop);

    var __return_value__ = __fmod_dsp_connection_set_mix_matrix(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _connection_ref
 * @param {Real} _in_channel_hop
 * @returns {Struct.FmodDSPMixMatrix}
 */
function fmod_dsp_connection_get_mix_matrix(_connection_ref, _in_channel_hop)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _connection_ref, type: UInt64
    if (!is_numeric(_connection_ref)) show_error($"{_GMFUNCTION_} :: _connection_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _connection_ref);

    // param: _in_channel_hop, type: Float64
    if (!is_numeric(_in_channel_hop)) show_error($"{_GMFUNCTION_} :: _in_channel_hop expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _in_channel_hop);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_dsp_connection_get_mix_matrix(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodDSPMixMatrix_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @param {Real} _connection_ref
 * @returns {Real}
 */
function fmod_dsp_connection_get_input(_connection_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _connection_ref, type: UInt64
    if (!is_numeric(_connection_ref)) show_error($"{_GMFUNCTION_} :: _connection_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _connection_ref);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_dsp_connection_get_input(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = buffer_read(__ret_buffer__, buffer_u64);
    return __result__;
}

/**
 * @param {Real} _connection_ref
 * @returns {Real}
 */
function fmod_dsp_connection_get_output(_connection_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _connection_ref, type: UInt64
    if (!is_numeric(_connection_ref)) show_error($"{_GMFUNCTION_} :: _connection_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _connection_ref);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_dsp_connection_get_output(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = buffer_read(__ret_buffer__, buffer_u64);
    return __result__;
}

/**
 * @param {Real} _connection_ref
 * @returns {Real}
 */
function fmod_dsp_connection_get_type(_connection_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _connection_ref, type: UInt64
    if (!is_numeric(_connection_ref)) show_error($"{_GMFUNCTION_} :: _connection_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _connection_ref);

    var __return_value__ = __fmod_dsp_connection_get_type(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _connection_ref
 * @param {Real} _user_data
 * @returns {Real}
 */
function fmod_dsp_connection_set_user_data(_connection_ref, _user_data)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _connection_ref, type: UInt64
    if (!is_numeric(_connection_ref)) show_error($"{_GMFUNCTION_} :: _connection_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _connection_ref);

    // param: _user_data, type: Float64
    if (!is_numeric(_user_data)) show_error($"{_GMFUNCTION_} :: _user_data expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _user_data);

    var __return_value__ = __fmod_dsp_connection_set_user_data(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _connection_ref
 * @returns {Real}
 */
function fmod_dsp_connection_get_user_data(_connection_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _connection_ref, type: UInt64
    if (!is_numeric(_connection_ref)) show_error($"{_GMFUNCTION_} :: _connection_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _connection_ref);

    var __return_value__ = __fmod_dsp_connection_get_user_data(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _geometry_ref
 * @param {Real} _direct_occlusion
 * @param {Real} _reverb_occlusion
 * @param {Real} _double_sided
 * @param {Real} _num_vertices
 * @param {Id.Buffer} _vertices
 * @returns {Real}
 */
function fmod_geometry_add_polygon(_geometry_ref, _direct_occlusion, _reverb_occlusion, _double_sided, _num_vertices, _vertices)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _geometry_ref, type: UInt64
    if (!is_numeric(_geometry_ref)) show_error($"{_GMFUNCTION_} :: _geometry_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _geometry_ref);

    // param: _direct_occlusion, type: Float64
    if (!is_numeric(_direct_occlusion)) show_error($"{_GMFUNCTION_} :: _direct_occlusion expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _direct_occlusion);

    // param: _reverb_occlusion, type: Float64
    if (!is_numeric(_reverb_occlusion)) show_error($"{_GMFUNCTION_} :: _reverb_occlusion expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _reverb_occlusion);

    // param: _double_sided, type: Float64
    if (!is_numeric(_double_sided)) show_error($"{_GMFUNCTION_} :: _double_sided expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _double_sided);

    // param: _num_vertices, type: Float64
    if (!is_numeric(_num_vertices)) show_error($"{_GMFUNCTION_} :: _num_vertices expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _num_vertices);

    // param: _vertices, type: Buffer
    if (!buffer_exists(_vertices)) show_error($"{_GMFUNCTION_} :: _vertices expected Id.Buffer", true);
    __GMFMOD_queue_buffer(buffer_get_address(_vertices), buffer_get_size(_vertices));

    var __return_value__ = __fmod_geometry_add_polygon(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _geometry_ref
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

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _geometry_ref, type: UInt64
    if (!is_numeric(_geometry_ref)) show_error($"{_GMFUNCTION_} :: _geometry_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _geometry_ref);

    // param: _polygon_index, type: Float64
    if (!is_numeric(_polygon_index)) show_error($"{_GMFUNCTION_} :: _polygon_index expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _polygon_index);

    // param: _direct_occlusion, type: Float64
    if (!is_numeric(_direct_occlusion)) show_error($"{_GMFUNCTION_} :: _direct_occlusion expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _direct_occlusion);

    // param: _reverb_occlusion, type: Float64
    if (!is_numeric(_reverb_occlusion)) show_error($"{_GMFUNCTION_} :: _reverb_occlusion expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _reverb_occlusion);

    // param: _double_sided, type: Float64
    if (!is_numeric(_double_sided)) show_error($"{_GMFUNCTION_} :: _double_sided expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _double_sided);

    var __return_value__ = __fmod_geometry_set_polygon_attributes(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _geometry_ref
 * @param {Real} _polygon_index
 * @returns {Struct.FmodPolygonAttributes}
 */
function fmod_geometry_get_polygon_attributes(_geometry_ref, _polygon_index)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _geometry_ref, type: UInt64
    if (!is_numeric(_geometry_ref)) show_error($"{_GMFUNCTION_} :: _geometry_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _geometry_ref);

    // param: _polygon_index, type: Float64
    if (!is_numeric(_polygon_index)) show_error($"{_GMFUNCTION_} :: _polygon_index expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _polygon_index);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_geometry_get_polygon_attributes(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodPolygonAttributes_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @param {Real} _geometry_ref
 * @param {Real} _polygon_index
 * @returns {Real}
 */
function fmod_geometry_get_polygon_num_vertices(_geometry_ref, _polygon_index)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _geometry_ref, type: UInt64
    if (!is_numeric(_geometry_ref)) show_error($"{_GMFUNCTION_} :: _geometry_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _geometry_ref);

    // param: _polygon_index, type: Float64
    if (!is_numeric(_polygon_index)) show_error($"{_GMFUNCTION_} :: _polygon_index expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _polygon_index);

    var __return_value__ = __fmod_geometry_get_polygon_num_vertices(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _geometry_ref
 * @param {Real} _polygon_index
 * @param {Real} _vertex_index
 * @param {Struct.FmodVec3} _vertex
 * @returns {Real}
 */
function fmod_geometry_set_polygon_vertex(_geometry_ref, _polygon_index, _vertex_index, _vertex)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _geometry_ref, type: UInt64
    if (!is_numeric(_geometry_ref)) show_error($"{_GMFUNCTION_} :: _geometry_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _geometry_ref);

    // param: _polygon_index, type: Float64
    if (!is_numeric(_polygon_index)) show_error($"{_GMFUNCTION_} :: _polygon_index expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _polygon_index);

    // param: _vertex_index, type: Float64
    if (!is_numeric(_vertex_index)) show_error($"{_GMFUNCTION_} :: _vertex_index expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _vertex_index);

    // param: _vertex, type: struct FmodVec3
    if (_vertex.__uid != 266577632) show_error($"{_GMFUNCTION_} :: _vertex expected FmodVec3", true);
    __FmodVec3_encode(_vertex, __args_buffer__, buffer_tell(__args_buffer__), _GMFUNCTION_);

    var __return_value__ = __fmod_geometry_set_polygon_vertex(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _geometry_ref
 * @param {Real} _polygon_index
 * @param {Real} _vertex_index
 * @returns {Struct.FmodVec3}
 */
function fmod_geometry_get_polygon_vertex(_geometry_ref, _polygon_index, _vertex_index)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _geometry_ref, type: UInt64
    if (!is_numeric(_geometry_ref)) show_error($"{_GMFUNCTION_} :: _geometry_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _geometry_ref);

    // param: _polygon_index, type: Float64
    if (!is_numeric(_polygon_index)) show_error($"{_GMFUNCTION_} :: _polygon_index expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _polygon_index);

    // param: _vertex_index, type: Float64
    if (!is_numeric(_vertex_index)) show_error($"{_GMFUNCTION_} :: _vertex_index expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _vertex_index);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_geometry_get_polygon_vertex(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodVec3_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @param {Real} _geometry_ref
 * @returns {Real}
 */
function fmod_geometry_get_num_polygons(_geometry_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _geometry_ref, type: UInt64
    if (!is_numeric(_geometry_ref)) show_error($"{_GMFUNCTION_} :: _geometry_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _geometry_ref);

    var __return_value__ = __fmod_geometry_get_num_polygons(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _geometry_ref
 * @returns {Struct.FmodGeometryMaxPolygons}
 */
function fmod_geometry_get_max_polygons(_geometry_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _geometry_ref, type: UInt64
    if (!is_numeric(_geometry_ref)) show_error($"{_GMFUNCTION_} :: _geometry_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _geometry_ref);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_geometry_get_max_polygons(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodGeometryMaxPolygons_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @param {Real} _geometry_ref
 * @param {Real} _x
 * @param {Real} _y
 * @param {Real} _z
 * @returns {Real}
 */
function fmod_geometry_set_position(_geometry_ref, _x, _y, _z)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _geometry_ref, type: UInt64
    if (!is_numeric(_geometry_ref)) show_error($"{_GMFUNCTION_} :: _geometry_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _geometry_ref);

    // param: _x, type: Float64
    if (!is_numeric(_x)) show_error($"{_GMFUNCTION_} :: _x expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _x);

    // param: _y, type: Float64
    if (!is_numeric(_y)) show_error($"{_GMFUNCTION_} :: _y expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _y);

    // param: _z, type: Float64
    if (!is_numeric(_z)) show_error($"{_GMFUNCTION_} :: _z expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _z);

    var __return_value__ = __fmod_geometry_set_position(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _geometry_ref
 * @returns {Struct.FmodVec3}
 */
function fmod_geometry_get_position(_geometry_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _geometry_ref, type: UInt64
    if (!is_numeric(_geometry_ref)) show_error($"{_GMFUNCTION_} :: _geometry_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _geometry_ref);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_geometry_get_position(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodVec3_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @param {Real} _geometry_ref
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

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _geometry_ref, type: UInt64
    if (!is_numeric(_geometry_ref)) show_error($"{_GMFUNCTION_} :: _geometry_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _geometry_ref);

    // param: _forward_x, type: Float64
    if (!is_numeric(_forward_x)) show_error($"{_GMFUNCTION_} :: _forward_x expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _forward_x);

    // param: _forward_y, type: Float64
    if (!is_numeric(_forward_y)) show_error($"{_GMFUNCTION_} :: _forward_y expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _forward_y);

    // param: _forward_z, type: Float64
    if (!is_numeric(_forward_z)) show_error($"{_GMFUNCTION_} :: _forward_z expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _forward_z);

    // param: _up_x, type: Float64
    if (!is_numeric(_up_x)) show_error($"{_GMFUNCTION_} :: _up_x expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _up_x);

    // param: _up_y, type: Float64
    if (!is_numeric(_up_y)) show_error($"{_GMFUNCTION_} :: _up_y expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _up_y);

    // param: _up_z, type: Float64
    if (!is_numeric(_up_z)) show_error($"{_GMFUNCTION_} :: _up_z expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _up_z);

    var __return_value__ = __fmod_geometry_set_rotation(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _geometry_ref
 * @returns {Struct.FmodGeometryRotation}
 */
function fmod_geometry_get_rotation(_geometry_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _geometry_ref, type: UInt64
    if (!is_numeric(_geometry_ref)) show_error($"{_GMFUNCTION_} :: _geometry_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _geometry_ref);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_geometry_get_rotation(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodGeometryRotation_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @param {Real} _geometry_ref
 * @param {Real} _scale_x
 * @param {Real} _scale_y
 * @param {Real} _scale_z
 * @returns {Real}
 */
function fmod_geometry_set_scale(_geometry_ref, _scale_x, _scale_y, _scale_z)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _geometry_ref, type: UInt64
    if (!is_numeric(_geometry_ref)) show_error($"{_GMFUNCTION_} :: _geometry_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _geometry_ref);

    // param: _scale_x, type: Float64
    if (!is_numeric(_scale_x)) show_error($"{_GMFUNCTION_} :: _scale_x expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _scale_x);

    // param: _scale_y, type: Float64
    if (!is_numeric(_scale_y)) show_error($"{_GMFUNCTION_} :: _scale_y expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _scale_y);

    // param: _scale_z, type: Float64
    if (!is_numeric(_scale_z)) show_error($"{_GMFUNCTION_} :: _scale_z expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _scale_z);

    var __return_value__ = __fmod_geometry_set_scale(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _geometry_ref
 * @returns {Struct.FmodVec3}
 */
function fmod_geometry_get_scale(_geometry_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _geometry_ref, type: UInt64
    if (!is_numeric(_geometry_ref)) show_error($"{_GMFUNCTION_} :: _geometry_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _geometry_ref);

    var __ret_buffer__ = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_geometry_get_scale(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__), buffer_get_address(__ret_buffer__), buffer_get_size(__ret_buffer__));

    var __result__ = undefined;
    __result__ = __FmodVec3_decode(__ret_buffer__, buffer_tell(__ret_buffer__));
    return __result__;
}

/**
 * @param {Real} _geometry_ref
 * @param {Real} _user_data
 * @returns {Real}
 */
function fmod_geometry_set_user_data(_geometry_ref, _user_data)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _geometry_ref, type: UInt64
    if (!is_numeric(_geometry_ref)) show_error($"{_GMFUNCTION_} :: _geometry_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _geometry_ref);

    // param: _user_data, type: Float64
    if (!is_numeric(_user_data)) show_error($"{_GMFUNCTION_} :: _user_data expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _user_data);

    var __return_value__ = __fmod_geometry_set_user_data(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _geometry_ref
 * @returns {Real}
 */
function fmod_geometry_get_user_data(_geometry_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _geometry_ref, type: UInt64
    if (!is_numeric(_geometry_ref)) show_error($"{_GMFUNCTION_} :: _geometry_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _geometry_ref);

    var __return_value__ = __fmod_geometry_get_user_data(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _geometry_ref
 * @returns {Real}
 */
function fmod_geometry_get_active(_geometry_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _geometry_ref, type: UInt64
    if (!is_numeric(_geometry_ref)) show_error($"{_GMFUNCTION_} :: _geometry_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _geometry_ref);

    var __return_value__ = __fmod_geometry_get_active(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _geometry_ref
 * @param {Real} _active
 * @returns {Real}
 */
function fmod_geometry_set_active(_geometry_ref, _active)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _geometry_ref, type: UInt64
    if (!is_numeric(_geometry_ref)) show_error($"{_GMFUNCTION_} :: _geometry_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _geometry_ref);

    // param: _active, type: Float64
    if (!is_numeric(_active)) show_error($"{_GMFUNCTION_} :: _active expected number", true);
    buffer_write(__args_buffer__, buffer_f64, _active);

    var __return_value__ = __fmod_geometry_set_active(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _geometry_ref
 * @param {String} _filename
 * @returns {Real}
 */
function fmod_geometry_save(_geometry_ref, _filename)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _geometry_ref, type: UInt64
    if (!is_numeric(_geometry_ref)) show_error($"{_GMFUNCTION_} :: _geometry_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _geometry_ref);

    // param: _filename, type: String
    if (!is_string(_filename)) show_error($"{_GMFUNCTION_} :: _filename expected string", true);
    buffer_write(__args_buffer__, buffer_u32, string_byte_length(_filename));
    buffer_write(__args_buffer__, buffer_string, _filename);

    var __return_value__ = __fmod_geometry_save(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/**
 * @param {Real} _geometry_ref
 * @returns {Real}
 */
function fmod_geometry_release(_geometry_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer__ = __ext_core_get_args_buffer();

    // param: _geometry_ref, type: UInt64
    if (!is_numeric(_geometry_ref)) show_error($"{_GMFUNCTION_} :: _geometry_ref expected number", true);
    buffer_write(__args_buffer__, buffer_u64, _geometry_ref);

    var __return_value__ = __fmod_geometry_release(buffer_get_address(__args_buffer__), buffer_tell(__args_buffer__));

    return __return_value__;
}

/// @ignore
function __GMFMOD_get_decoders()
{
    static __decoders__ = [
        __FmodSoundDefaults_decode,
        __FmodLoopPoints_decode,
        __FmodSoundMinMaxDistance_decode,
        __FmodConeSettings_decode,
        __FmodSystem3DSettings_decode,
        __FmodVec3_decode,
        __FmodSyncPointInfo_decode,
        __FmodRecordDriverInfo_decode,
        __FmodDSPMixMatrix_decode,
        __FmodDSPChannelFormat_decode,
        __FmodDSPMeteringInfo_decode,
        __FmodDSPMeteringEnabled_decode,
        __FmodDSPParameterInfo_decode,
        __FmodDSPWetDryMix_decode,
        __FmodDSPInfo_decode,
        __FmodDSPCPUUsage_decode,
        __FmodMinMaxDistance_decode,
        __FmodSyncPoint_decode,
        __FmodDSPBufferSize_decode,
        __FmodSoftwareFormat_decode,
        __FmodDriverInfo_decode,
        __FmodDelay_decode,
        __FmodDSPClock_decode,
        __FmodSoundOpenState_decode,
        __FmodSoundTag_decode,
        __FmodFadePoint_decode,
        __FmodDistanceFilter_decode,
        __FmodOcclusion_decode,
        __FmodGeometryMaxPolygons_decode,
        __FmodPolygonAttributes_decode,
        __FmodReverbProperties_decode,
        __FmodSoundLockLengths_decode,
        __FmodMemoryStats_decode,
        __FmodAdvancedSettings_decode,
        __FmodSpeakerPosition_decode,
        __FmodCPUUsage_decode,
        __FmodFileUsage_decode,
        __FmodStreamBufferSize_decode,
        __FmodCreateSoundExInfo_decode,
        __FmodListener3DAttributes_decode,
        __FmodChannelControl3DAttributes_decode,
        __FmodGeometryRotation_decode,
        __FmodReverb3DAttributes_decode
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
// #####################################################################
// # Exports
// #####################################################################

#export FmodResult, FmodInitFlags, FmodMode, FmodTimeUnit, FmodDspType, FmodDspConnectionType, FmodDspLowPass, FmodDspHighPass, FmodDspItLowPass, FmodDspEcho, FmodDspEchoDelayChangeMode, FmodDspFlange, FmodDspDistortion, FmodDspNormalize, FmodDspLimiter, FmodDspParamEq, FmodDspPitchShift, FmodDspChorus, FmodDspMultibandEq, FmodDspMultibandEqFilterType, FmodDspChannelMix, FmodDspChannelMixOutput, FmodDspTransceiver, FmodDspTransceiverSpeakerMode, FmodDspCompressor, FmodDspFft, FmodDspFftWindowType, FmodDspOscillator, FmodDspOscillatorType, FmodDspConvolution, FmodDspFader, FmodDspMultibandDynamics, FmodDspMultibandDynamicsModeType, FmodDspItEcho, FmodDspSfxReverb, FmodDspLowPassSimple, FmodDspHighPassSimple, FmodDspDelay, FmodDspTremolo, FmodDspSend, FmodDspReturn, FmodDspPan, FmodDspPanModeType, FmodDspPan2dStereoModeType, FmodDspPan3dRolloffType, FmodDspPan3dExtentModeType, FmodDspObjectPan, FmodDspThreeEq, FmodDspThreeEqCrossoverSlopeType, FmodDspFftDownmixType, FmodDspLoudnessMeter, FmodDspLoudnessMeterStateType, FmodSpeakerMode, FmodDriverState, FmodDebugFlags, FmodDebugMode, FmodSoundType, FmodSoundFormat, FmodOutputType, FmodChannelControlDspIndex, FmodOpenState, FmodTagType, FmodTagDataType, FmodSoundDefaults, FmodLoopPoints, FmodSoundMinMaxDistance, FmodConeSettings, FmodSystem3DSettings, FmodVec3, FmodSyncPointInfo, FmodRecordDriverInfo, FmodDSPMixMatrix, FmodDSPChannelFormat, FmodDSPMeteringInfo, FmodDSPMeteringEnabled, FmodDSPParameterInfo, FmodDSPWetDryMix, FmodDSPInfo, FmodDSPCPUUsage, FmodMinMaxDistance, FmodSyncPoint, FmodDSPBufferSize, FmodSoftwareFormat, FmodDriverInfo, FmodDelay, FmodDSPClock, FmodSoundOpenState, FmodSoundTag, FmodFadePoint, FmodDistanceFilter, FmodOcclusion, FmodGeometryMaxPolygons, FmodPolygonAttributes, FmodReverbProperties, FmodSoundLockLengths, FmodMemoryStats, FmodAdvancedSettings, FmodSpeakerPosition, FmodCPUUsage, FmodFileUsage, FmodStreamBufferSize, FmodCreateSoundExInfo, FmodListener3DAttributes, FmodChannelControl3DAttributes, FmodGeometryRotation, FmodReverb3DAttributes, fmod_last_result, fmod_debug_initialize, fmod_error_string, fmod_memory_get_stats, fmod_channel_set_frequency, fmod_channel_get_frequency, fmod_channel_set_priority, fmod_channel_get_priority, fmod_channel_set_position, fmod_channel_get_position, fmod_channel_set_channel_group, fmod_channel_get_channel_group, fmod_channel_set_loop_count, fmod_channel_get_loop_count, fmod_channel_set_loop_points, fmod_channel_get_loop_points, fmod_channel_is_virtual, fmod_channel_get_index, fmod_channel_get_current_sound, fmod_channel_get_system_object, fmod_system_create, fmod_system_release, fmod_system_close, fmod_system_get_channel, fmod_system_get_master_channel_group, fmod_system_set_output, fmod_system_get_output, fmod_system_get_3d_settings, fmod_system_set_3d_listener_attributes, fmod_system_get_3d_listener_attributes, fmod_system_get_record_driver_info, fmod_system_record_start, fmod_system_create_dsp, fmod_system_create_dsp_by_type, fmod_system_get_dsp_buffer_size, fmod_system_get_software_format, fmod_system_set_software_format, fmod_system_get_driver_info, fmod_system_create_channel_group, fmod_system_play_dsp, fmod_system_select, fmod_system_adopt, fmod_system_get_master_sound_group, fmod_system_get_advanced_settings, fmod_system_set_advanced_settings, fmod_system_get_speaker_mode_channels, fmod_system_get_speaker_position, fmod_system_get_reverb_properties, fmod_system_set_reverb_properties, fmod_system_get_default_mix_matrix, fmod_system_get_cpu_usage, fmod_system_get_file_usage, fmod_system_get_stream_buffer_size, fmod_system_attach_channel_group_to_port, fmod_system_detach_channel_group_from_port, fmod_system_create_sound_group, fmod_system_create_geometry, fmod_system_load_geometry, fmod_system_get_geometry_occlusion, fmod_system_create_reverb_3d, fmod_system_create_sound, fmod_system_create_sound_ex, fmod_system_create_stream, fmod_system_play_sound, fmod_sound_get_length, fmod_sound_set_defaults, fmod_sound_set_mode, fmod_sound_get_mode, fmod_sound_get_format, fmod_sound_get_name, fmod_sound_get_defaults, fmod_sound_set_loop_count, fmod_sound_get_loop_count, fmod_sound_set_loop_points, fmod_sound_get_loop_points, fmod_sound_set_3d_min_max_distance, fmod_sound_get_3d_min_max_distance, fmod_sound_set_3d_cone_settings, fmod_sound_get_3d_cone_settings, fmod_sound_set_3d_custom_rolloff, fmod_sound_get_3d_custom_rolloff, fmod_sound_get_num_sync_points, fmod_sound_get_sync_point, fmod_sound_add_sync_point, fmod_sound_delete_sync_point, fmod_sound_get_music_num_channels, fmod_sound_set_music_channel_volume, fmod_sound_get_music_channel_volume, fmod_sound_set_music_speed, fmod_sound_get_music_speed, fmod_sound_set_sound_group, fmod_sound_get_sound_group, fmod_sound_set_user_data, fmod_sound_get_user_data, fmod_sound_release, fmod_sound_get_system_object, fmod_sound_get_open_state, fmod_sound_get_num_tags, fmod_sound_get_tag, fmod_sound_get_num_sub_sounds, fmod_sound_get_sub_sound, fmod_sound_get_sub_sound_parent, fmod_sound_read_data, fmod_sound_seek_data, fmod_sound_lock, fmod_sound_unlock, fmod_channel_group_get_num_channels, fmod_channel_group_get_channel, fmod_channel_group_add_group, fmod_channel_group_get_num_groups, fmod_channel_group_get_group, fmod_channel_group_get_parent_group, fmod_channel_group_get_name, fmod_channel_group_release, fmod_channel_group_get_system_object, fmod_sound_group_set_max_audible, fmod_sound_group_get_max_audible, fmod_sound_group_set_max_audible_behavior, fmod_sound_group_get_max_audible_behavior, fmod_sound_group_set_mute_fade_speed, fmod_sound_group_get_mute_fade_speed, fmod_sound_group_set_volume, fmod_sound_group_get_volume, fmod_sound_group_get_num_sounds, fmod_sound_group_get_sound, fmod_sound_group_get_num_playing, fmod_sound_group_stop, fmod_sound_group_set_user_data, fmod_sound_group_get_user_data, fmod_sound_group_get_name, fmod_sound_group_release, fmod_sound_group_get_system_object, fmod_reverb_3d_set_active, fmod_reverb_3d_get_active, fmod_reverb_3d_set_properties, fmod_reverb_3d_get_properties, fmod_reverb_3d_set_3d_attributes, fmod_reverb_3d_get_3d_attributes, fmod_reverb_3d_set_user_data, fmod_reverb_3d_get_user_data, fmod_reverb_3d_release, fmod_channel_control_add_fade_point, fmod_channel_control_remove_fade_points, fmod_channel_control_set_fade_point_ramp, fmod_channel_control_get_fade_point_count, fmod_channel_control_get_fade_point_at, fmod_channel_control_is_playing, fmod_channel_control_stop, fmod_channel_control_set_paused, fmod_channel_control_get_paused, fmod_channel_control_set_mode, fmod_channel_control_get_mode, fmod_channel_control_set_pitch, fmod_channel_control_get_pitch, fmod_channel_control_get_audibility, fmod_channel_control_set_volume, fmod_channel_control_get_volume, fmod_channel_control_set_volume_ramp, fmod_channel_control_get_volume_ramp, fmod_channel_control_set_mute, fmod_channel_control_get_mute, fmod_channel_control_set_3d_doppler_level, fmod_channel_control_get_3d_doppler_level, fmod_channel_control_set_3d_level, fmod_channel_control_get_3d_level, fmod_channel_control_set_3d_min_max_distance, fmod_channel_control_get_3d_min_max_distance, fmod_channel_control_set_3d_cone_settings, fmod_channel_control_get_3d_cone_settings, fmod_channel_control_set_3d_cone_orientation, fmod_channel_control_get_3d_cone_orientation, fmod_channel_control_set_3d_occlusion, fmod_channel_control_get_3d_occlusion, fmod_channel_control_set_3d_attributes, fmod_channel_control_get_3d_attributes, fmod_channel_control_set_3d_spread, fmod_channel_control_get_3d_spread, fmod_channel_control_set_3d_distance_filter, fmod_channel_control_get_3d_distance_filter, fmod_channel_control_set_3d_custom_rolloff, fmod_channel_control_get_3d_custom_rolloff_count, fmod_channel_control_get_3d_custom_rolloff_at, fmod_channel_control_set_pan, fmod_channel_control_set_mix_levels_output, fmod_channel_control_set_mix_levels_input, fmod_channel_control_set_mix_matrix, fmod_channel_control_get_mix_matrix, fmod_channel_control_set_reverb_properties, fmod_channel_control_get_reverb_properties, fmod_channel_control_set_low_pass_gain, fmod_channel_control_get_low_pass_gain, fmod_channel_control_add_dsp, fmod_channel_control_remove_dsp, fmod_channel_control_get_num_dsps, fmod_channel_control_get_dsp, fmod_channel_control_set_dsp_index, fmod_channel_control_get_dsp_index, fmod_channel_control_set_user_data, fmod_channel_control_get_user_data, fmod_channel_control_get_system_object, fmod_channel_control_get_delay, fmod_channel_control_set_delay, fmod_channel_control_get_dsp_clock, fmod_channel_control_set_callback, fmod_dsp_add_input, fmod_dsp_get_num_inputs, fmod_dsp_get_num_outputs, fmod_dsp_disconnect_all, fmod_dsp_get_num_parameters, fmod_dsp_set_parameter_float, fmod_dsp_get_parameter_float, fmod_dsp_set_parameter_int, fmod_dsp_get_parameter_int, fmod_dsp_set_parameter_bool, fmod_dsp_get_parameter_bool, fmod_dsp_release, fmod_dsp_get_system_object, fmod_dsp_get_input, fmod_dsp_get_output, fmod_dsp_disconnect_from, fmod_dsp_get_data_parameter_index, fmod_dsp_set_parameter_data, fmod_dsp_get_parameter_data, fmod_dsp_get_parameter_info, fmod_dsp_set_channel_format, fmod_dsp_get_channel_format, fmod_dsp_get_output_channel_format, fmod_dsp_get_metering_info, fmod_dsp_set_metering_enabled, fmod_dsp_get_metering_enabled, fmod_dsp_set_active, fmod_dsp_get_active, fmod_dsp_set_bypass, fmod_dsp_get_bypass, fmod_dsp_set_wet_dry_mix, fmod_dsp_get_wet_dry_mix, fmod_dsp_get_idle, fmod_dsp_reset, fmod_dsp_get_type, fmod_dsp_get_info, fmod_dsp_get_cpu_usage, fmod_dsp_set_user_data, fmod_dsp_get_user_data, fmod_dsp_set_callback, fmod_dsp_connection_set_mix, fmod_dsp_connection_get_mix, fmod_dsp_connection_set_mix_matrix, fmod_dsp_connection_get_mix_matrix, fmod_dsp_connection_get_input, fmod_dsp_connection_get_output, fmod_dsp_connection_get_type, fmod_dsp_connection_set_user_data, fmod_dsp_connection_get_user_data, fmod_geometry_add_polygon, fmod_geometry_set_polygon_attributes, fmod_geometry_get_polygon_attributes, fmod_geometry_get_polygon_num_vertices, fmod_geometry_set_polygon_vertex, fmod_geometry_get_polygon_vertex, fmod_geometry_get_num_polygons, fmod_geometry_get_max_polygons, fmod_geometry_set_position, fmod_geometry_get_position, fmod_geometry_set_rotation, fmod_geometry_get_rotation, fmod_geometry_set_scale, fmod_geometry_get_scale, fmod_geometry_set_user_data, fmod_geometry_get_user_data, fmod_geometry_get_active, fmod_geometry_set_active, fmod_geometry_save, fmod_geometry_release
