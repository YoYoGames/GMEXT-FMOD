// ##### extgen :: Auto-generated file do not edit!! #####

#pragma once
#include <cstdint>
#include <string_view>
#include <vector>
#include <array>
#include <optional>
#include "core/GMExtWire.h"

namespace gm_consts
{
}


namespace gm_enums
{
    enum class FmodResult : std::int64_t
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
    };

    enum class FmodInitFlags : std::int64_t
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
    };

    enum class FmodStudioInitFlags : std::int64_t
    {
        Normal = 0,
        LiveUpdate = 1,
        AllowMissingPlugins = 2,
        SynchronousUpdate = 4,
        DeferredCallbacks = 8,
        LoadFromUpdate = 16,
        MemoryTracking = 32
    };

    enum class FmodMode : std::int64_t
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
    };

    enum class FmodTimeUnit : std::int64_t
    {
        Ms = 1,
        Pcm = 2,
        PcmBytes = 4,
        RawBytes = 8,
        PcmFraction = 16,
        ModOrder = 256,
        ModRow = 512,
        ModPattern = 1024
    };

    enum class FmodDspType : std::int64_t
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
        VstPlugin = 15,
        WinampPlugin = 16,
        ItEcho = 17,
        Compressor = 18,
        SfxReverb = 19,
        LowPassSimple = 20,
        Delay = 21,
        Tremolo = 22,
        LadspaPlugin = 23,
        Send = 24,
        Return = 25,
        HighPassSimple = 26,
        Pan = 27,
        ThreeEq = 28,
        FFT = 29,
        LoudnessMeter = 30,
        EnvelopeFollower = 31,
        ConvolutionReverb = 32,
        ChannelMix = 33,
        Transceiver = 34,
        ObjectPan = 35,
        MultibandEq = 36
    };

    enum class FmodDspConnectionType : std::int64_t
    {
        Standard = 0,
        Sidechain = 1,
        Send = 2,
        SendSidechain = 3
    };

    enum class FmodDspLowPass : std::int64_t
    {
        Cutoff = 0,
        Resonance = 1
    };

    enum class FmodDspHighPass : std::int64_t
    {
        Cutoff = 0,
        Resonance = 1
    };

    enum class FmodDspItLowPass : std::int64_t
    {
        Cutoff = 0,
        Resonance = 1
    };

    enum class FmodDspEcho : std::int64_t
    {
        Delay = 0,
        Feedback = 1,
        DryLevel = 2,
        WetLevel = 3
    };

    enum class FmodDspFlange : std::int64_t
    {
        Mix = 0,
        Depth = 1,
        Rate = 2
    };

    enum class FmodDspDistortion : std::int64_t
    {
        Level = 0
    };

    enum class FmodDspNormalize : std::int64_t
    {
        FadeTime = 0,
        Threshold = 1,
        MaxAmplitude = 2
    };

    enum class FmodDspLimiter : std::int64_t
    {
        ReleaseTime = 0,
        Ceiling = 1,
        MaximizerGain = 2,
        Mode = 3
    };

    enum class FmodDspParamEq : std::int64_t
    {
        Center = 0,
        Bandwidth = 1,
        Gain = 2
    };

    enum class FmodDspPitchShift : std::int64_t
    {
        Pitch = 0,
        FftSize = 1,
        Overlap = 2,
        MaxChannels = 3
    };

    enum class FmodDspChorus : std::int64_t
    {
        Mix = 0,
        Rate = 1,
        Depth = 2
    };

    enum class FmodDspMultibandEq : std::int64_t
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
    };

    enum class FmodDspMultibandEqFilterType : std::int64_t
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
        Allpass = 12
    };

    enum class FmodDspChannelMix : std::int64_t
    {
        OutputGain = 0,
        OutputGainCh0 = 1,
        OutputGainCh1 = 2,
        OutputGainCh2 = 3,
        OutputGainCh3 = 4,
        OutputGainCh4 = 5,
        OutputGainCh5 = 6,
        OutputGainCh6 = 7,
        OutputGainCh7 = 8
    };

    enum class FmodDspTransceiver : std::int64_t
    {
        TransmitFreq = 0,
        ReceiveFreq = 1
    };

    enum class FmodDspCompDynEq : std::int64_t
    {
        Threshold = 0,
        Ratio = 1,
        Attack = 2,
        Release = 3,
        GainMakeup = 4,
        UseSidechain = 5,
        Linked = 6
    };

    enum class FmodDspFft : std::int64_t
    {
        WindowSize = 0,
        WindowType = 1,
        SpectrumData = 2,
        DominantFreq = 3
    };

    enum class FmodDspFftWindowType : std::int64_t
    {
        Rect = 0,
        Triangle = 1,
        Hamming = 2,
        Hanning = 3,
        Blackman = 4,
        BlackmanHarris = 5
    };

    enum class FmodDspOscillator : std::int64_t
    {
        Type = 0,
        Rate = 1
    };

    enum class FmodDspOscillatorType : std::int64_t
    {
        Sine = 0,
        Square = 1,
        Sawup = 2,
        Sawdown = 3,
        Triangle = 4,
        Noise = 5
    };

    enum class FmodDspConvolution : std::int64_t
    {
        Ir = 0,
        Wet = 1,
        Dry = 2,
        Linked = 3
    };

    enum class FmodSpeakerMode : std::int64_t
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
    };

    enum class FmodDebugFlags : std::int64_t
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
    };

    enum class FmodDebugMode : std::int64_t
    {
        Tty = 0,
        File = 1,
        Callback = 2
    };

    enum class FmodSoundType : std::int64_t
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
    };

    enum class FmodSoundFormat : std::int64_t
    {
        None = 0,
        Pcm8 = 1,
        Pcm16 = 2,
        Pcm24 = 3,
        Pcm32 = 4,
        PcmFloat = 5,
        BitStream = 6
    };

    enum class FmodOutputType : std::int64_t
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
    };

    enum class FmodStudioLoadingState : std::int64_t
    {
        Unloading = 0,
        Unloaded = 1,
        Loading = 2,
        Loaded = 3,
        Error = 4
    };

    enum class FmodStudioPlaybackState : std::int64_t
    {
        Playing = 0,
        Sustaining = 1,
        Stopped = 2,
        Starting = 3,
        Stopping = 4
    };

    enum class FmodStudioStopMode : std::int64_t
    {
        AllowFadeOut = 0,
        Immediate = 1
    };

    enum class FmodStudioEventProperty : std::int64_t
    {
        ChannelPriority = 0,
        ScheduleDelay = 1,
        ScheduleLookAhead = 2,
        MinimumDistance = 3,
        MaximumDistance = 4,
        CoolDown = 5
    };

    enum class FmodStudioParameterFlags : std::int64_t
    {
        ReadOnly = 1,
        Automatic = 2,
        Global = 4,
        Discrete = 8,
        Labeled = 16
    };

    enum class FmodStudioUserPropertyType : std::int64_t
    {
        Integer = 0,
        Boolean = 1,
        Float = 2,
        String = 3
    };

    enum class FmodChannelControlDspIndex : std::int64_t
    {
        Head = -1,
        Fader = -2,
        Tail = -3
    };

    enum class FmodOpenState : std::int64_t
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
    };

    enum class FmodTagType : std::int64_t
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
    };

    enum class FmodTagDataType : std::int64_t
    {
        Binary = 0,
        Int = 1,
        Float = 2,
        String = 3,
        StringUtf16 = 4,
        StringUtf16Be = 5,
        StringUtf8 = 6
    };

    enum class FmodStudioLoadBankFlags : std::int64_t
    {
        Normal = 0,
        NonBlocking = 1,
        DecompressSamples = 2,
        Unencrypted = 4
    };

    enum class FmodStudioCommandCaptureFlags : std::int64_t
    {
        Normal = 0,
        FileFlush = 1,
        SkipInitialState = 2
    };

    enum class FmodStudioCommandReplayFlags : std::int64_t
    {
        Normal = 0,
        SkipCleanup = 1,
        FastForward = 2,
        SkipBankLoad = 4
    };

    enum class FmodStudioEventCallbackType : std::int64_t
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
    };

}


namespace gm_structs
{
    struct FmodSoundDefaults;
    struct FmodLoopPoints;
    struct FmodSoundMinMaxDistance;
    struct FmodConeSettings;
    struct FmodSystem3DSettings;
    struct FmodVec3;
    struct FmodSyncPointInfo;
    struct FmodRecordDriverInfo;
    struct FmodDSPMixMatrix;
    struct FmodDSPChannelFormat;
    struct FmodDSPMeteringInfo;
    struct FmodDSPMeteringEnabled;
    struct FmodDSPParameterInfo;
    struct FmodDSPWetDryMix;
    struct FmodDSPInfo;
    struct FmodDSPCPUUsage;
    struct FmodMinMaxDistance;
    struct FmodSyncPoint;
    struct FmodDSPBufferSize;
    struct FmodSoftwareFormat;
    struct FmodDriverInfo;
    struct FmodDelay;
    struct FmodDSPClock;
    struct FmodSoundOpenState;
    struct FmodSoundTag;
    struct FmodStudioParameterDescription;
    struct FmodListener3DAttributes;
    struct FmodChannelControl3DAttributes;

    struct FmodSoundDefaults
    {
        double frequency;
        double priority;
    };

    struct FmodLoopPoints
    {
        double loop_start;
        double loop_end;
    };

    struct FmodSoundMinMaxDistance
    {
        double min_distance;
        double max_distance;
    };

    struct FmodConeSettings
    {
        double inside_cone_angle;
        double outside_cone_angle;
        double outside_volume;
    };

    struct FmodSystem3DSettings
    {
        double doppler_scale;
        double distance_factor;
        double rolloff_scale;
    };

    struct FmodVec3
    {
        double x;
        double y;
        double z;
    };

    struct FmodSyncPointInfo
    {
        std::string name;
        double offset;
    };

    struct FmodRecordDriverInfo
    {
        std::string name;
        double speaker_mode;
        double sample_rate;
    };

    struct FmodDSPMixMatrix
    {
        double out_channels;
        double in_channels;
        double matrix;
    };

    struct FmodDSPChannelFormat
    {
        double channel_mask;
        double num_channels;
    };

    struct FmodDSPMeteringInfo
    {
        double num_samples_analysed;
    };

    struct FmodDSPMeteringEnabled
    {
        double input_enabled;
        double output_enabled;
    };

    struct FmodDSPParameterInfo
    {
        std::string name;
        std::string label;
        std::string description;
    };

    struct FmodDSPWetDryMix
    {
        double prewet;
        double postwet;
        double dry;
    };

    struct FmodDSPInfo
    {
        std::string name;
        double version;
        double channels;
        double configwidth;
        double configheight;
    };

    struct FmodDSPCPUUsage
    {
        double exclusive;
        double inclusive;
    };

    struct FmodMinMaxDistance
    {
        double min_distance;
        double max_distance;
    };

    struct FmodSyncPoint
    {
        double offset;
        std::string name;
    };

    struct FmodDSPBufferSize
    {
        double buff_size;
        double num_buffers;
    };

    struct FmodSoftwareFormat
    {
        double sample_rate;
        gm_enums::FmodSpeakerMode speaker_mode;
        double num_raw_speakers;
    };

    struct FmodDriverInfo
    {
        std::string name;
        gm_enums::FmodSpeakerMode speaker_mode;
        double sample_rate;
        double speaker_mode_channels;
    };

    struct FmodDelay
    {
        double dspclock_start;
        double dspclock_end;
        double stop_channels;
    };

    struct FmodDSPClock
    {
        double dspclock;
        double parent_clock;
    };

    struct FmodSoundOpenState
    {
        gm_enums::FmodOpenState open_state;
        double percent_buffered;
        double starving;
        double disk_busy;
    };

    struct FmodSoundTag
    {
        gm_enums::FmodTagType type;
        gm_enums::FmodTagDataType datatype;
        std::string name;
        std::string data;
        double datalen;
        double updated;
    };

    struct FmodStudioParameterDescription
    {
        std::string name;
        double id_data1;
        double id_data2;
        double minimum;
        double maximum;
        double defaultvalue;
        gm_enums::FmodStudioUserPropertyType type;
        gm_enums::FmodStudioParameterFlags flags;
    };

    struct FmodListener3DAttributes
    {
        gm_structs::FmodVec3 position;
        gm_structs::FmodVec3 velocity;
        gm_structs::FmodVec3 forward;
        gm_structs::FmodVec3 up;
    };

    struct FmodChannelControl3DAttributes
    {
        gm_structs::FmodVec3 position;
        gm_structs::FmodVec3 velocity;
    };

}

namespace gm::wire::codec
{
    template<>
    inline void writeValue<gm_structs::FmodSoundDefaults>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodSoundDefaults& obj)
    {
        gm::wire::codec::writeValue(_buf, obj.frequency);
        gm::wire::codec::writeValue(_buf, obj.priority);
    }

    template<>
    inline gm_structs::FmodSoundDefaults readValue<gm_structs::FmodSoundDefaults>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodSoundDefaults obj;
        obj.frequency = gm::wire::codec::readValue<double>(_buf);
        obj.priority = gm::wire::codec::readValue<double>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodLoopPoints>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodLoopPoints& obj)
    {
        gm::wire::codec::writeValue(_buf, obj.loop_start);
        gm::wire::codec::writeValue(_buf, obj.loop_end);
    }

    template<>
    inline gm_structs::FmodLoopPoints readValue<gm_structs::FmodLoopPoints>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodLoopPoints obj;
        obj.loop_start = gm::wire::codec::readValue<double>(_buf);
        obj.loop_end = gm::wire::codec::readValue<double>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodSoundMinMaxDistance>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodSoundMinMaxDistance& obj)
    {
        gm::wire::codec::writeValue(_buf, obj.min_distance);
        gm::wire::codec::writeValue(_buf, obj.max_distance);
    }

    template<>
    inline gm_structs::FmodSoundMinMaxDistance readValue<gm_structs::FmodSoundMinMaxDistance>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodSoundMinMaxDistance obj;
        obj.min_distance = gm::wire::codec::readValue<double>(_buf);
        obj.max_distance = gm::wire::codec::readValue<double>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodConeSettings>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodConeSettings& obj)
    {
        gm::wire::codec::writeValue(_buf, obj.inside_cone_angle);
        gm::wire::codec::writeValue(_buf, obj.outside_cone_angle);
        gm::wire::codec::writeValue(_buf, obj.outside_volume);
    }

    template<>
    inline gm_structs::FmodConeSettings readValue<gm_structs::FmodConeSettings>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodConeSettings obj;
        obj.inside_cone_angle = gm::wire::codec::readValue<double>(_buf);
        obj.outside_cone_angle = gm::wire::codec::readValue<double>(_buf);
        obj.outside_volume = gm::wire::codec::readValue<double>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodSystem3DSettings>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodSystem3DSettings& obj)
    {
        gm::wire::codec::writeValue(_buf, obj.doppler_scale);
        gm::wire::codec::writeValue(_buf, obj.distance_factor);
        gm::wire::codec::writeValue(_buf, obj.rolloff_scale);
    }

    template<>
    inline gm_structs::FmodSystem3DSettings readValue<gm_structs::FmodSystem3DSettings>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodSystem3DSettings obj;
        obj.doppler_scale = gm::wire::codec::readValue<double>(_buf);
        obj.distance_factor = gm::wire::codec::readValue<double>(_buf);
        obj.rolloff_scale = gm::wire::codec::readValue<double>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodVec3>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodVec3& obj)
    {
        gm::wire::codec::writeValue(_buf, obj.x);
        gm::wire::codec::writeValue(_buf, obj.y);
        gm::wire::codec::writeValue(_buf, obj.z);
    }

    template<>
    inline gm_structs::FmodVec3 readValue<gm_structs::FmodVec3>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodVec3 obj;
        obj.x = gm::wire::codec::readValue<double>(_buf);
        obj.y = gm::wire::codec::readValue<double>(_buf);
        obj.z = gm::wire::codec::readValue<double>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodSyncPointInfo>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodSyncPointInfo& obj)
    {
        gm::wire::codec::writeValue(_buf, obj.name);
        gm::wire::codec::writeValue(_buf, obj.offset);
    }

    template<>
    inline gm_structs::FmodSyncPointInfo readValue<gm_structs::FmodSyncPointInfo>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodSyncPointInfo obj;
        obj.name = gm::wire::codec::readValue<std::string>(_buf);
        obj.offset = gm::wire::codec::readValue<double>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodRecordDriverInfo>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodRecordDriverInfo& obj)
    {
        gm::wire::codec::writeValue(_buf, obj.name);
        gm::wire::codec::writeValue(_buf, obj.speaker_mode);
        gm::wire::codec::writeValue(_buf, obj.sample_rate);
    }

    template<>
    inline gm_structs::FmodRecordDriverInfo readValue<gm_structs::FmodRecordDriverInfo>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodRecordDriverInfo obj;
        obj.name = gm::wire::codec::readValue<std::string>(_buf);
        obj.speaker_mode = gm::wire::codec::readValue<double>(_buf);
        obj.sample_rate = gm::wire::codec::readValue<double>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodDSPMixMatrix>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodDSPMixMatrix& obj)
    {
        gm::wire::codec::writeValue(_buf, obj.out_channels);
        gm::wire::codec::writeValue(_buf, obj.in_channels);
        gm::wire::codec::writeValue(_buf, obj.matrix);
    }

    template<>
    inline gm_structs::FmodDSPMixMatrix readValue<gm_structs::FmodDSPMixMatrix>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodDSPMixMatrix obj;
        obj.out_channels = gm::wire::codec::readValue<double>(_buf);
        obj.in_channels = gm::wire::codec::readValue<double>(_buf);
        obj.matrix = gm::wire::codec::readValue<double>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodDSPChannelFormat>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodDSPChannelFormat& obj)
    {
        gm::wire::codec::writeValue(_buf, obj.channel_mask);
        gm::wire::codec::writeValue(_buf, obj.num_channels);
    }

    template<>
    inline gm_structs::FmodDSPChannelFormat readValue<gm_structs::FmodDSPChannelFormat>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodDSPChannelFormat obj;
        obj.channel_mask = gm::wire::codec::readValue<double>(_buf);
        obj.num_channels = gm::wire::codec::readValue<double>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodDSPMeteringInfo>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodDSPMeteringInfo& obj)
    {
        gm::wire::codec::writeValue(_buf, obj.num_samples_analysed);
    }

    template<>
    inline gm_structs::FmodDSPMeteringInfo readValue<gm_structs::FmodDSPMeteringInfo>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodDSPMeteringInfo obj;
        obj.num_samples_analysed = gm::wire::codec::readValue<double>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodDSPMeteringEnabled>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodDSPMeteringEnabled& obj)
    {
        gm::wire::codec::writeValue(_buf, obj.input_enabled);
        gm::wire::codec::writeValue(_buf, obj.output_enabled);
    }

    template<>
    inline gm_structs::FmodDSPMeteringEnabled readValue<gm_structs::FmodDSPMeteringEnabled>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodDSPMeteringEnabled obj;
        obj.input_enabled = gm::wire::codec::readValue<double>(_buf);
        obj.output_enabled = gm::wire::codec::readValue<double>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodDSPParameterInfo>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodDSPParameterInfo& obj)
    {
        gm::wire::codec::writeValue(_buf, obj.name);
        gm::wire::codec::writeValue(_buf, obj.label);
        gm::wire::codec::writeValue(_buf, obj.description);
    }

    template<>
    inline gm_structs::FmodDSPParameterInfo readValue<gm_structs::FmodDSPParameterInfo>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodDSPParameterInfo obj;
        obj.name = gm::wire::codec::readValue<std::string>(_buf);
        obj.label = gm::wire::codec::readValue<std::string>(_buf);
        obj.description = gm::wire::codec::readValue<std::string>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodDSPWetDryMix>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodDSPWetDryMix& obj)
    {
        gm::wire::codec::writeValue(_buf, obj.prewet);
        gm::wire::codec::writeValue(_buf, obj.postwet);
        gm::wire::codec::writeValue(_buf, obj.dry);
    }

    template<>
    inline gm_structs::FmodDSPWetDryMix readValue<gm_structs::FmodDSPWetDryMix>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodDSPWetDryMix obj;
        obj.prewet = gm::wire::codec::readValue<double>(_buf);
        obj.postwet = gm::wire::codec::readValue<double>(_buf);
        obj.dry = gm::wire::codec::readValue<double>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodDSPInfo>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodDSPInfo& obj)
    {
        gm::wire::codec::writeValue(_buf, obj.name);
        gm::wire::codec::writeValue(_buf, obj.version);
        gm::wire::codec::writeValue(_buf, obj.channels);
        gm::wire::codec::writeValue(_buf, obj.configwidth);
        gm::wire::codec::writeValue(_buf, obj.configheight);
    }

    template<>
    inline gm_structs::FmodDSPInfo readValue<gm_structs::FmodDSPInfo>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodDSPInfo obj;
        obj.name = gm::wire::codec::readValue<std::string>(_buf);
        obj.version = gm::wire::codec::readValue<double>(_buf);
        obj.channels = gm::wire::codec::readValue<double>(_buf);
        obj.configwidth = gm::wire::codec::readValue<double>(_buf);
        obj.configheight = gm::wire::codec::readValue<double>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodDSPCPUUsage>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodDSPCPUUsage& obj)
    {
        gm::wire::codec::writeValue(_buf, obj.exclusive);
        gm::wire::codec::writeValue(_buf, obj.inclusive);
    }

    template<>
    inline gm_structs::FmodDSPCPUUsage readValue<gm_structs::FmodDSPCPUUsage>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodDSPCPUUsage obj;
        obj.exclusive = gm::wire::codec::readValue<double>(_buf);
        obj.inclusive = gm::wire::codec::readValue<double>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodMinMaxDistance>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodMinMaxDistance& obj)
    {
        gm::wire::codec::writeValue(_buf, obj.min_distance);
        gm::wire::codec::writeValue(_buf, obj.max_distance);
    }

    template<>
    inline gm_structs::FmodMinMaxDistance readValue<gm_structs::FmodMinMaxDistance>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodMinMaxDistance obj;
        obj.min_distance = gm::wire::codec::readValue<double>(_buf);
        obj.max_distance = gm::wire::codec::readValue<double>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodSyncPoint>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodSyncPoint& obj)
    {
        gm::wire::codec::writeValue(_buf, obj.offset);
        gm::wire::codec::writeValue(_buf, obj.name);
    }

    template<>
    inline gm_structs::FmodSyncPoint readValue<gm_structs::FmodSyncPoint>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodSyncPoint obj;
        obj.offset = gm::wire::codec::readValue<double>(_buf);
        obj.name = gm::wire::codec::readValue<std::string>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodDSPBufferSize>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodDSPBufferSize& obj)
    {
        gm::wire::codec::writeValue(_buf, obj.buff_size);
        gm::wire::codec::writeValue(_buf, obj.num_buffers);
    }

    template<>
    inline gm_structs::FmodDSPBufferSize readValue<gm_structs::FmodDSPBufferSize>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodDSPBufferSize obj;
        obj.buff_size = gm::wire::codec::readValue<double>(_buf);
        obj.num_buffers = gm::wire::codec::readValue<double>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodSoftwareFormat>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodSoftwareFormat& obj)
    {
        gm::wire::codec::writeValue(_buf, obj.sample_rate);
        gm::wire::codec::writeValue(_buf, obj.speaker_mode);
        gm::wire::codec::writeValue(_buf, obj.num_raw_speakers);
    }

    template<>
    inline gm_structs::FmodSoftwareFormat readValue<gm_structs::FmodSoftwareFormat>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodSoftwareFormat obj;
        obj.sample_rate = gm::wire::codec::readValue<double>(_buf);
        obj.speaker_mode = gm::wire::codec::readValue<gm_enums::FmodSpeakerMode>(_buf);
        obj.num_raw_speakers = gm::wire::codec::readValue<double>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodDriverInfo>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodDriverInfo& obj)
    {
        gm::wire::codec::writeValue(_buf, obj.name);
        gm::wire::codec::writeValue(_buf, obj.speaker_mode);
        gm::wire::codec::writeValue(_buf, obj.sample_rate);
        gm::wire::codec::writeValue(_buf, obj.speaker_mode_channels);
    }

    template<>
    inline gm_structs::FmodDriverInfo readValue<gm_structs::FmodDriverInfo>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodDriverInfo obj;
        obj.name = gm::wire::codec::readValue<std::string>(_buf);
        obj.speaker_mode = gm::wire::codec::readValue<gm_enums::FmodSpeakerMode>(_buf);
        obj.sample_rate = gm::wire::codec::readValue<double>(_buf);
        obj.speaker_mode_channels = gm::wire::codec::readValue<double>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodDelay>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodDelay& obj)
    {
        gm::wire::codec::writeValue(_buf, obj.dspclock_start);
        gm::wire::codec::writeValue(_buf, obj.dspclock_end);
        gm::wire::codec::writeValue(_buf, obj.stop_channels);
    }

    template<>
    inline gm_structs::FmodDelay readValue<gm_structs::FmodDelay>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodDelay obj;
        obj.dspclock_start = gm::wire::codec::readValue<double>(_buf);
        obj.dspclock_end = gm::wire::codec::readValue<double>(_buf);
        obj.stop_channels = gm::wire::codec::readValue<double>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodDSPClock>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodDSPClock& obj)
    {
        gm::wire::codec::writeValue(_buf, obj.dspclock);
        gm::wire::codec::writeValue(_buf, obj.parent_clock);
    }

    template<>
    inline gm_structs::FmodDSPClock readValue<gm_structs::FmodDSPClock>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodDSPClock obj;
        obj.dspclock = gm::wire::codec::readValue<double>(_buf);
        obj.parent_clock = gm::wire::codec::readValue<double>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodSoundOpenState>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodSoundOpenState& obj)
    {
        gm::wire::codec::writeValue(_buf, obj.open_state);
        gm::wire::codec::writeValue(_buf, obj.percent_buffered);
        gm::wire::codec::writeValue(_buf, obj.starving);
        gm::wire::codec::writeValue(_buf, obj.disk_busy);
    }

    template<>
    inline gm_structs::FmodSoundOpenState readValue<gm_structs::FmodSoundOpenState>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodSoundOpenState obj;
        obj.open_state = gm::wire::codec::readValue<gm_enums::FmodOpenState>(_buf);
        obj.percent_buffered = gm::wire::codec::readValue<double>(_buf);
        obj.starving = gm::wire::codec::readValue<double>(_buf);
        obj.disk_busy = gm::wire::codec::readValue<double>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodSoundTag>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodSoundTag& obj)
    {
        gm::wire::codec::writeValue(_buf, obj.type);
        gm::wire::codec::writeValue(_buf, obj.datatype);
        gm::wire::codec::writeValue(_buf, obj.name);
        gm::wire::codec::writeValue(_buf, obj.data);
        gm::wire::codec::writeValue(_buf, obj.datalen);
        gm::wire::codec::writeValue(_buf, obj.updated);
    }

    template<>
    inline gm_structs::FmodSoundTag readValue<gm_structs::FmodSoundTag>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodSoundTag obj;
        obj.type = gm::wire::codec::readValue<gm_enums::FmodTagType>(_buf);
        obj.datatype = gm::wire::codec::readValue<gm_enums::FmodTagDataType>(_buf);
        obj.name = gm::wire::codec::readValue<std::string>(_buf);
        obj.data = gm::wire::codec::readValue<std::string>(_buf);
        obj.datalen = gm::wire::codec::readValue<double>(_buf);
        obj.updated = gm::wire::codec::readValue<double>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodStudioParameterDescription>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodStudioParameterDescription& obj)
    {
        gm::wire::codec::writeValue(_buf, obj.name);
        gm::wire::codec::writeValue(_buf, obj.id_data1);
        gm::wire::codec::writeValue(_buf, obj.id_data2);
        gm::wire::codec::writeValue(_buf, obj.minimum);
        gm::wire::codec::writeValue(_buf, obj.maximum);
        gm::wire::codec::writeValue(_buf, obj.defaultvalue);
        gm::wire::codec::writeValue(_buf, obj.type);
        gm::wire::codec::writeValue(_buf, obj.flags);
    }

    template<>
    inline gm_structs::FmodStudioParameterDescription readValue<gm_structs::FmodStudioParameterDescription>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodStudioParameterDescription obj;
        obj.name = gm::wire::codec::readValue<std::string>(_buf);
        obj.id_data1 = gm::wire::codec::readValue<double>(_buf);
        obj.id_data2 = gm::wire::codec::readValue<double>(_buf);
        obj.minimum = gm::wire::codec::readValue<double>(_buf);
        obj.maximum = gm::wire::codec::readValue<double>(_buf);
        obj.defaultvalue = gm::wire::codec::readValue<double>(_buf);
        obj.type = gm::wire::codec::readValue<gm_enums::FmodStudioUserPropertyType>(_buf);
        obj.flags = gm::wire::codec::readValue<gm_enums::FmodStudioParameterFlags>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodListener3DAttributes>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodListener3DAttributes& obj)
    {
        gm::wire::codec::writeValue(_buf, obj.position);
        gm::wire::codec::writeValue(_buf, obj.velocity);
        gm::wire::codec::writeValue(_buf, obj.forward);
        gm::wire::codec::writeValue(_buf, obj.up);
    }

    template<>
    inline gm_structs::FmodListener3DAttributes readValue<gm_structs::FmodListener3DAttributes>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodListener3DAttributes obj;
        obj.position = gm::wire::codec::readValue<gm_structs::FmodVec3>(_buf);
        obj.velocity = gm::wire::codec::readValue<gm_structs::FmodVec3>(_buf);
        obj.forward = gm::wire::codec::readValue<gm_structs::FmodVec3>(_buf);
        obj.up = gm::wire::codec::readValue<gm_structs::FmodVec3>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodChannelControl3DAttributes>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodChannelControl3DAttributes& obj)
    {
        gm::wire::codec::writeValue(_buf, obj.position);
        gm::wire::codec::writeValue(_buf, obj.velocity);
    }

    template<>
    inline gm_structs::FmodChannelControl3DAttributes readValue<gm_structs::FmodChannelControl3DAttributes>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodChannelControl3DAttributes obj;
        obj.position = gm::wire::codec::readValue<gm_structs::FmodVec3>(_buf);
        obj.velocity = gm::wire::codec::readValue<gm_structs::FmodVec3>(_buf);
        return obj;
    }

}

namespace gm::wire::details
{
    template<>
    struct gm_struct_traits<gm_structs::FmodSoundDefaults>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 0;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodLoopPoints>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 1;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodSoundMinMaxDistance>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 2;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodConeSettings>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 3;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodSystem3DSettings>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 4;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodVec3>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 5;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodSyncPointInfo>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 6;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodRecordDriverInfo>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 7;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodDSPMixMatrix>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 8;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodDSPChannelFormat>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 9;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodDSPMeteringInfo>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 10;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodDSPMeteringEnabled>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 11;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodDSPParameterInfo>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 12;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodDSPWetDryMix>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 13;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodDSPInfo>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 14;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodDSPCPUUsage>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 15;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodMinMaxDistance>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 16;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodSyncPoint>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 17;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodDSPBufferSize>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 18;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodSoftwareFormat>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 19;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodDriverInfo>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 20;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodDelay>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 21;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodDSPClock>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 22;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodSoundOpenState>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 23;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodSoundTag>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 24;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodStudioParameterDescription>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 25;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodListener3DAttributes>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 26;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodChannelControl3DAttributes>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 27;
    };

}

gm_enums::FmodResult fmod_last_result();
void fmod_debug_initialize(gm_enums::FmodDebugFlags flags, gm_enums::FmodDebugMode mode);
std::string fmod_path_bundle(std::string_view filename);
std::string fmod_path_user(std::string_view filename);
std::string fmod_error_string(gm_enums::FmodResult result);
double fmod_channel_set_frequency(std::uint64_t channel_ref, double frequency);
double fmod_channel_get_frequency(std::uint64_t channel_ref);
double fmod_channel_set_priority(std::uint64_t channel_ref, double priority);
double fmod_channel_get_priority(std::uint64_t channel_ref);
double fmod_channel_set_position(std::uint64_t channel_ref, double position, double time_unit);
double fmod_channel_get_position(std::uint64_t channel_ref, double time_unit);
double fmod_channel_set_channel_group(std::uint64_t channel_ref, std::uint64_t channel_group_ref);
std::uint64_t fmod_channel_get_channel_group(std::uint64_t channel_ref);
double fmod_channel_set_loop_count(std::uint64_t channel_ref, double loop_count);
double fmod_channel_get_loop_count(std::uint64_t channel_ref);
double fmod_channel_set_loop_points(std::uint64_t channel_ref, double loop_start, double loop_start_type, double loop_end, double loop_end_type);
double fmod_channel_is_virtual(std::uint64_t channel_ref);
double fmod_channel_get_index(std::uint64_t channel_ref);
std::uint64_t fmod_channel_get_current_sound(std::uint64_t channel_ref);
std::uint64_t fmod_channel_get_system_object(std::uint64_t channel_ref);
std::uint64_t fmod_system_create();
double fmod_system_init(double max_channels, double flags);
double fmod_system_release(std::uint64_t system_ref);
double fmod_system_close(std::uint64_t system_ref);
double fmod_system_update();
double fmod_system_get_channels_playing();
std::uint64_t fmod_system_get_channel(double index);
std::uint64_t fmod_system_get_master_channel_group();
double fmod_system_set_output(double output);
double fmod_system_get_output();
double fmod_system_get_num_drivers();
double fmod_system_set_driver(double driver);
double fmod_system_get_driver();
double fmod_system_set_software_channels(double software_channels);
double fmod_system_get_software_channels();
double fmod_system_set_3d_settings(double doppler_scale, double distance_factor, double rolloff_scale);
gm_structs::FmodSystem3DSettings fmod_system_get_3d_settings();
double fmod_system_set_3d_listener_attributes(double listener_index, const gm_structs::FmodVec3& position, const gm_structs::FmodVec3& velocity, const gm_structs::FmodVec3& forward, const gm_structs::FmodVec3& up);
gm_structs::FmodListener3DAttributes fmod_system_get_3d_listener_attributes(double listener_index);
double fmod_system_get_record_num_drivers();
gm_structs::FmodRecordDriverInfo fmod_system_get_record_driver_info(double record_driver_index);
double fmod_system_get_record_position(double device_index);
double fmod_system_record_start(double device_index, std::uint64_t sound_ref, double loop);
double fmod_system_record_stop(double device_index);
double fmod_system_is_recording(double device_index);
std::uint64_t fmod_system_create_dsp();
std::uint64_t fmod_system_create_dsp_by_type(gm_enums::FmodDspType dsp_type);
gm_structs::FmodDSPBufferSize fmod_system_get_dsp_buffer_size();
double fmod_system_set_dsp_buffer_size(double buff_size, double num_buffers);
gm_structs::FmodSoftwareFormat fmod_system_get_software_format();
double fmod_system_set_software_format(double sample_rate, gm_enums::FmodSpeakerMode speaker_mode, double num_raw_speakers);
double fmod_system_set_stream_buffer_size(double file_buffer_size, double file_buffer_size_type);
gm_structs::FmodDriverInfo fmod_system_get_driver_info(double driver_id);
std::uint64_t fmod_system_create_channel_group(std::string_view name);
std::uint64_t fmod_system_play_dsp(std::uint64_t dsp_ref, std::uint64_t channel_group_ref, double paused);
double fmod_system_select(std::uint64_t system_ref);
std::uint64_t fmod_system_create_sound(std::string_view name_or_data, double mode);
std::uint64_t fmod_system_create_stream(std::string_view name_or_data, double mode);
std::uint64_t fmod_system_play_sound(std::uint64_t sound_ref, std::uint64_t channel_group_ref, double pause);
double fmod_sound_get_length(std::uint64_t sound_ref, double length_type);
double fmod_sound_set_defaults(std::uint64_t sound_ref, double frequency, double priority);
double fmod_sound_set_mode(std::uint64_t sound_ref, double mode);
double fmod_sound_get_mode(std::uint64_t sound_ref);
double fmod_sound_get_format(std::uint64_t sound_ref);
std::string fmod_sound_get_name(std::uint64_t sound_ref);
gm_structs::FmodSoundDefaults fmod_sound_get_defaults(std::uint64_t sound_ref);
double fmod_sound_set_loop_count(std::uint64_t sound_ref, double count);
double fmod_sound_get_loop_count(std::uint64_t sound_ref);
double fmod_sound_set_loop_points(std::uint64_t sound_ref, double loop_start, double loop_start_type, double loop_end, double loop_end_type);
gm_structs::FmodLoopPoints fmod_sound_get_loop_points(std::uint64_t sound_ref, double start_type, double end_type);
double fmod_sound_set_3d_min_max_distance(std::uint64_t sound_ref, double min, double max);
gm_structs::FmodSoundMinMaxDistance fmod_sound_get_3d_min_max_distance(std::uint64_t sound_ref);
double fmod_sound_set_3d_cone_settings(std::uint64_t sound_ref, double inside_cone_angle, double outside_cone_angle, double outside_volume);
gm_structs::FmodConeSettings fmod_sound_get_3d_cone_settings(std::uint64_t sound_ref);
double fmod_sound_set_3d_custom_rolloff(std::uint64_t sound_ref, const gm::wire::GMValue& points, double num_points);
void fmod_sound_get_3d_custom_rolloff(std::uint64_t sound_ref);
double fmod_sound_get_num_sync_points(std::uint64_t sound_ref);
gm_structs::FmodSyncPointInfo fmod_sound_get_sync_point(std::uint64_t sound_ref, double sync_point_index, double offset_type);
double fmod_sound_add_sync_point(std::uint64_t sound_ref, double offset, double offset_type, std::string_view name);
double fmod_sound_delete_sync_point(std::uint64_t sound_ref, double sync_point_index);
double fmod_sound_get_music_num_channels(std::uint64_t sound_ref);
double fmod_sound_set_music_channel_volume(std::uint64_t sound_ref, double channel_index, double volume);
double fmod_sound_get_music_channel_volume(std::uint64_t sound_ref, double channel_index);
double fmod_sound_set_music_speed(std::uint64_t sound_ref, double speed);
double fmod_sound_get_music_speed(std::uint64_t sound_ref);
double fmod_sound_set_sound_group(std::uint64_t sound_ref, std::uint64_t sound_group_ref);
std::uint64_t fmod_sound_get_sound_group(std::uint64_t sound_ref);
double fmod_sound_release(std::uint64_t sound_ref);
std::uint64_t fmod_sound_get_system_object(std::uint64_t sound_ref);
gm_structs::FmodSoundOpenState fmod_sound_get_open_state(std::uint64_t sound_ref);
gm_structs::FmodSoundTag fmod_sound_get_tag(std::uint64_t sound_ref, std::string_view name, double index);
double fmod_sound_get_num_sub_sounds(std::uint64_t sound_ref);
std::uint64_t fmod_sound_get_sub_sound(std::uint64_t sound_ref, double index);
double fmod_sound_read_data(std::uint64_t sound_ref, gm::wire::GMBuffer data, double length);
double fmod_channel_group_get_num_channels(std::uint64_t channel_group_ref);
std::uint64_t fmod_channel_group_get_channel(std::uint64_t channel_group_ref, double index);
std::uint64_t fmod_channel_group_add_group(std::uint64_t channel_group_ref, std::uint64_t child_channel_group_ref, double propagate_dsp_clock);
double fmod_channel_group_get_num_groups(std::uint64_t channel_group_ref);
std::uint64_t fmod_channel_group_get_group(std::uint64_t channel_group_ref, double group_index);
std::uint64_t fmod_channel_group_get_parent_group(std::uint64_t channel_group_ref);
std::string fmod_channel_group_get_name(std::uint64_t channel_group_ref);
double fmod_channel_group_release(std::uint64_t channel_group_ref);
std::uint64_t fmod_channel_group_get_system_object(std::uint64_t channel_group_ref);
double fmod_sound_group_set_max_audible(std::uint64_t sound_group_ref, double max_audible);
double fmod_sound_group_get_max_audible(std::uint64_t sound_group_ref);
double fmod_sound_group_set_max_audible_behavior(std::uint64_t sound_group_ref, double behavior);
double fmod_sound_group_get_max_audible_behavior(std::uint64_t sound_group_ref);
double fmod_sound_group_set_mute_fade_speed(std::uint64_t sound_group_ref, double speed);
double fmod_sound_group_get_mute_fade_speed(std::uint64_t sound_group_ref);
double fmod_sound_group_set_volume(std::uint64_t sound_group_ref, double volume);
double fmod_sound_group_get_volume(std::uint64_t sound_group_ref);
double fmod_sound_group_get_num_sounds(std::uint64_t sound_group_ref);
std::uint64_t fmod_sound_group_get_sound(std::uint64_t sound_group_ref, double sound_index);
double fmod_sound_group_get_num_playing(std::uint64_t sound_group_ref);
double fmod_sound_group_stop(std::uint64_t sound_group_ref);
std::string fmod_sound_group_get_name(std::uint64_t sound_group_ref);
double fmod_sound_group_release(std::uint64_t sound_group_ref);
std::uint64_t fmod_sound_group_get_system_object(std::uint64_t sound_group_ref);
double fmod_reverb_3d_set_active(std::uint64_t reverb_3d_ref, double active);
double fmod_reverb_3d_get_active(std::uint64_t reverb_3d_ref);
double fmod_reverb_3d_set_properties(std::uint64_t reverb_3d_ref, double decay_time, double early_delay, double late_delay, double hf_reference, double hf_decay_ratio, double diffusion, double density, double low_shelf_frequency, double low_shelf_gain, double high_cut, double early_late_mix, double wet_level);
double fmod_reverb_3d_release(std::uint64_t reverb_3d_ref);
double fmod_channel_control_is_playing(std::uint64_t channel_control_ref);
double fmod_channel_control_stop(std::uint64_t channel_control_ref);
double fmod_channel_control_set_paused(std::uint64_t channel_control_ref, double paused);
double fmod_channel_control_get_paused(std::uint64_t channel_control_ref);
double fmod_channel_control_set_mode(std::uint64_t channel_control_ref, double mode);
double fmod_channel_control_get_mode(std::uint64_t channel_control_ref);
double fmod_channel_control_set_pitch(std::uint64_t channel_control_ref, double pitch);
double fmod_channel_control_get_pitch(std::uint64_t channel_control_ref);
double fmod_channel_control_get_audibility(std::uint64_t channel_control_ref);
double fmod_channel_control_set_volume(std::uint64_t channel_control_ref, double volume);
double fmod_channel_control_get_volume(std::uint64_t channel_control_ref);
double fmod_channel_control_set_volume_ramp(std::uint64_t channel_control_ref, double ramp);
double fmod_channel_control_get_volume_ramp(std::uint64_t channel_control_ref);
double fmod_channel_control_set_mute(std::uint64_t channel_control_ref, double mute);
double fmod_channel_control_get_mute(std::uint64_t channel_control_ref);
double fmod_channel_control_set_3d_doppler_level(std::uint64_t channel_control_ref, double level);
double fmod_channel_control_get_3d_doppler_level(std::uint64_t channel_control_ref);
double fmod_channel_control_set_3d_level(std::uint64_t channel_control_ref, double level);
double fmod_channel_control_get_3d_level(std::uint64_t channel_control_ref);
double fmod_channel_control_set_3d_min_max_distance(std::uint64_t channel_control_ref, double min_dist, double max_dist);
double fmod_channel_control_set_3d_cone_settings(std::uint64_t channel_control_ref, double inside_cone_angle, double outside_cone_angle, double outside_volume);
double fmod_channel_control_set_3d_occlusion(std::uint64_t channel_control_ref, double direct_occlusion, double reverb_occlusion);
double fmod_channel_control_set_3d_attributes(std::uint64_t channel_control_ref, const gm_structs::FmodVec3& position, const gm_structs::FmodVec3& velocity);
gm_structs::FmodChannelControl3DAttributes fmod_channel_control_get_3d_attributes(std::uint64_t channel_control_ref);
double fmod_channel_control_set_3d_spread(std::uint64_t channel_control_ref, double angle);
double fmod_channel_control_get_3d_spread(std::uint64_t channel_control_ref);
double fmod_channel_control_set_3d_distance_filter(std::uint64_t channel_control_ref, double custom, double custom_level, double center_freq);
double fmod_channel_control_set_pan(std::uint64_t channel_control_ref, double pan);
double fmod_channel_control_set_mix_levels_output(std::uint64_t channel_control_ref, double front_left, double front_right, double center, double lfe, double surround_left, double surround_right, double back_left, double back_right);
double fmod_channel_control_set_reverb_properties(std::uint64_t channel_control_ref, double reverb_instance, double wet);
double fmod_channel_control_get_reverb_properties(std::uint64_t channel_control_ref, double reverb_instance);
double fmod_channel_control_set_low_pass_gain(std::uint64_t channel_control_ref, double gain);
double fmod_channel_control_get_low_pass_gain(std::uint64_t channel_control_ref);
double fmod_channel_control_add_dsp(std::uint64_t channel_control_ref, double dsp_chain_offset, std::uint64_t dsp_ref);
double fmod_channel_control_remove_dsp(std::uint64_t channel_control_ref, std::uint64_t dsp_ref);
double fmod_channel_control_get_num_dsps(std::uint64_t channel_control_ref);
std::uint64_t fmod_channel_control_get_dsp(std::uint64_t channel_control_ref, double index);
double fmod_channel_control_set_dsp_index(std::uint64_t channel_control_ref, std::uint64_t dsp_ref, double chain_index);
double fmod_channel_control_get_dsp_index(std::uint64_t channel_control_ref, std::uint64_t dsp_ref);
std::uint64_t fmod_channel_control_get_system_object(std::uint64_t channel_control_ref);
gm_structs::FmodDelay fmod_channel_control_get_delay(std::uint64_t channel_ref);
double fmod_channel_control_set_delay(std::uint64_t channel_ref, double dspclock_start, double dspclock_end, double stop_channels);
gm_structs::FmodDSPClock fmod_channel_control_get_dsp_clock(std::uint64_t channel_ref);
double fmod_channel_control_set_callback(std::uint64_t channel_ref, const std::optional<gm::wire::GMFunction>& callback);
std::uint64_t fmod_dsp_add_input(std::uint64_t dsp_ref, std::uint64_t dsp_input_ref, double dsp_connection_type);
double fmod_dsp_get_num_inputs(std::uint64_t dsp_ref);
double fmod_dsp_get_num_outputs(std::uint64_t dsp_ref);
double fmod_dsp_disconnect_all(std::uint64_t dsp_ref, double inputs, double outputs);
double fmod_dsp_get_num_parameters(std::uint64_t dsp_ref);
void fmod_dsp_set_parameter_float(std::uint64_t dsp_ref, double index, double value);
double fmod_dsp_get_parameter_float(std::uint64_t dsp_ref, double index);
void fmod_dsp_set_parameter_int(std::uint64_t dsp_ref, double index, double value);
double fmod_dsp_get_parameter_int(std::uint64_t dsp_ref, double index);
void fmod_dsp_set_parameter_bool(std::uint64_t dsp_ref, double index, double value);
double fmod_dsp_get_parameter_bool(std::uint64_t dsp_ref, double index);
void fmod_dsp_release(std::uint64_t dsp_ref);
std::uint64_t fmod_dsp_get_system_object(std::uint64_t dsp_ref);
std::uint64_t fmod_dsp_get_input(std::uint64_t dsp_ref, double index);
std::uint64_t fmod_dsp_get_output(std::uint64_t dsp_ref, double index);
void fmod_dsp_disconnect_from(std::uint64_t dsp_ref, std::uint64_t target_dsp);
double fmod_dsp_get_data_parameter_index(std::uint64_t dsp_ref, double data_type);
void fmod_dsp_set_parameter_data(std::uint64_t dsp_ref, double index, const gm::wire::GMValue& buffer, double length);
double fmod_dsp_get_parameter_data(std::uint64_t dsp_ref, double index, const gm::wire::GMValue& buffer, double length);
gm_structs::FmodDSPParameterInfo fmod_dsp_get_parameter_info(std::uint64_t dsp_ref, double index);
void fmod_dsp_set_channel_format(std::uint64_t dsp_ref, double channel_mask, double num_channels);
gm_structs::FmodDSPChannelFormat fmod_dsp_get_channel_format(std::uint64_t dsp_ref);
gm_structs::FmodDSPChannelFormat fmod_dsp_get_output_channel_format(std::uint64_t dsp_ref);
gm_structs::FmodDSPMeteringInfo fmod_dsp_get_metering_info(std::uint64_t dsp_ref);
void fmod_dsp_set_metering_enabled(std::uint64_t dsp_ref, double input_enabled, double output_enabled);
gm_structs::FmodDSPMeteringEnabled fmod_dsp_get_metering_enabled(std::uint64_t dsp_ref);
void fmod_dsp_set_active(std::uint64_t dsp_ref, double active);
double fmod_dsp_get_active(std::uint64_t dsp_ref);
void fmod_dsp_set_bypass(std::uint64_t dsp_ref, double bypass);
double fmod_dsp_get_bypass(std::uint64_t dsp_ref);
void fmod_dsp_set_wet_dry_mix(std::uint64_t dsp_ref, double prewet, double postwet, double dry);
gm_structs::FmodDSPWetDryMix fmod_dsp_get_wet_dry_mix(std::uint64_t dsp_ref);
double fmod_dsp_get_idle(std::uint64_t dsp_ref);
void fmod_dsp_reset(std::uint64_t dsp_ref);
double fmod_dsp_get_type(std::uint64_t dsp_ref);
gm_structs::FmodDSPInfo fmod_dsp_get_info(std::uint64_t dsp_ref);
gm_structs::FmodDSPCPUUsage fmod_dsp_get_cpu_usage(std::uint64_t dsp_ref);
double fmod_dsp_set_user_data(std::uint64_t dsp_ref, double user_data);
double fmod_dsp_get_user_data(std::uint64_t dsp_ref);
double fmod_dsp_set_callback(std::uint64_t dsp_ref, const std::optional<gm::wire::GMFunction>& callback);
double fmod_dsp_connection_set_mix(std::uint64_t connection_ref, double volume);
double fmod_dsp_connection_get_mix(std::uint64_t connection_ref);
double fmod_dsp_connection_set_mix_matrix(std::uint64_t connection_ref, double matrix, double out_channels, double in_channels, double in_channel_hop);
gm_structs::FmodDSPMixMatrix fmod_dsp_connection_get_mix_matrix(std::uint64_t connection_ref, double in_channel_hop);
std::uint64_t fmod_dsp_connection_get_input(std::uint64_t connection_ref);
std::uint64_t fmod_dsp_connection_get_output(std::uint64_t connection_ref);
double fmod_dsp_connection_get_type(std::uint64_t connection_ref);
double fmod_dsp_connection_set_user_data(std::uint64_t connection_ref, double user_data);
double fmod_dsp_connection_get_user_data(std::uint64_t connection_ref);
double fmod_geometry_set_polygon_attributes(std::uint64_t geometry_ref, double polygon_index, double direct_occlusion, double reverb_occlusion, double double_sided);
double fmod_geometry_get_polygon_num_vertices(std::uint64_t geometry_ref, double polygon_index);
double fmod_geometry_set_position(std::uint64_t geometry_ref, double x, double y, double z);
double fmod_geometry_set_rotation(std::uint64_t geometry_ref, double forward_x, double forward_y, double forward_z, double up_x, double up_y, double up_z);
double fmod_geometry_set_scale(std::uint64_t geometry_ref, double scale_x, double scale_y, double scale_z);
double fmod_geometry_save(std::uint64_t geometry_ref, std::string_view filename);
double fmod_geometry_release(std::uint64_t geometry_ref);
std::uint64_t fmod_studio_system_create();
double fmod_studio_system_init(double max_channels, double studio_flags, double core_flags);
double fmod_studio_system_release();
double fmod_studio_system_update();
double fmod_studio_system_flush_commands();
double fmod_studio_system_flush_sample_loading();
std::optional<std::uint64_t> fmod_studio_system_load_bank_file(std::string_view filename, double flags);
std::optional<std::uint64_t> fmod_studio_system_load_bank_memory(std::string_view data, double flags);
double fmod_studio_system_unload_all();
double fmod_studio_system_get_bank_count();
std::optional<std::uint64_t> fmod_studio_system_get_bank_at(double index);
std::optional<std::uint64_t> fmod_studio_system_get_bank(std::string_view path);
std::optional<std::uint64_t> fmod_studio_system_get_event(std::string_view path);
std::optional<std::uint64_t> fmod_studio_system_create_event_instance(std::string_view path);
std::optional<std::uint64_t> fmod_studio_system_get_bus(std::string_view path);
std::optional<std::uint64_t> fmod_studio_system_get_master_bus();
std::optional<std::uint64_t> fmod_studio_system_get_vca(std::string_view path);
double fmod_studio_system_set_listener_attributes(double listener_index, double x, double y, double z);
double fmod_studio_system_set_listener_weight(double listener_index, double weight);
double fmod_studio_system_set_parameter_by_name(std::string_view name, double value);
double fmod_studio_system_get_parameter_by_name(std::string_view name);
std::uint64_t fmod_studio_system_get_core_system();
double fmod_studio_system_set_num_listeners(double count);
std::string fmod_studio_system_lookup_id(std::string_view path);
std::uint64_t fmod_studio_system_get_event_by_id(std::string_view id);
double fmod_studio_system_start_command_capture(std::string_view filename, gm_enums::FmodStudioCommandCaptureFlags flags);
double fmod_studio_system_stop_command_capture();
std::uint64_t fmod_studio_system_load_command_replay(std::string_view filename, gm_enums::FmodStudioCommandReplayFlags flags);
double fmod_studio_bank_unload(std::uint64_t bank_ref);
double fmod_studio_bank_get_loading_state(std::uint64_t bank_ref);
double fmod_studio_bank_get_sample_loading_state(std::uint64_t bank_ref);
std::string fmod_studio_bank_get_path(std::uint64_t bank_ref);
std::optional<std::uint64_t> fmod_studio_bank_get_parent_studio_system(std::uint64_t bank_ref);
double fmod_studio_bank_get_event_count(std::uint64_t bank_ref);
std::optional<std::uint64_t> fmod_studio_bank_get_event_at(std::uint64_t bank_ref, double index);
double fmod_studio_bank_get_bus_count(std::uint64_t bank_ref);
std::optional<std::uint64_t> fmod_studio_bank_get_bus_at(std::uint64_t bank_ref, double index);
double fmod_studio_bank_get_vca_count(std::uint64_t bank_ref);
std::optional<std::uint64_t> fmod_studio_bank_get_vca_at(std::uint64_t bank_ref, double index);
double fmod_studio_bank_get_string_count(std::uint64_t bank_ref);
std::string fmod_studio_event_description_get_path(std::uint64_t event_desc_ref);
std::optional<std::uint64_t> fmod_studio_event_description_create_instance(std::uint64_t event_desc_ref);
double fmod_studio_event_description_get_instance_count(std::uint64_t event_desc_ref);
std::optional<std::uint64_t> fmod_studio_event_description_get_instance_at(std::uint64_t event_desc_ref, double index);
double fmod_studio_event_description_is_snapshot(std::uint64_t event_desc_ref);
double fmod_studio_event_description_is_one_shot(std::uint64_t event_desc_ref);
double fmod_studio_event_description_has_sustain_point(std::uint64_t event_desc_ref);
double fmod_studio_event_description_get_length(std::uint64_t event_desc_ref);
double fmod_studio_event_description_get_parameter_count(std::uint64_t event_desc_ref);
double fmod_studio_event_description_release_all_instances(std::uint64_t event_desc_ref);
gm_structs::FmodStudioParameterDescription fmod_studio_event_description_get_parameter_description_by_name(std::uint64_t event_desc_ref, std::string_view name);
double fmod_studio_event_description_load_sample_data(std::uint64_t event_desc_ref);
double fmod_studio_event_instance_start(std::uint64_t instance_ref);
double fmod_studio_event_instance_stop(std::uint64_t instance_ref, double stop_mode);
double fmod_studio_event_instance_get_playback_state(std::uint64_t instance_ref);
double fmod_studio_event_instance_get_paused(std::uint64_t instance_ref);
double fmod_studio_event_instance_set_paused(std::uint64_t instance_ref, double paused);
double fmod_studio_event_instance_get_timeline_position(std::uint64_t instance_ref);
double fmod_studio_event_instance_set_timeline_position(std::uint64_t instance_ref, double position);
double fmod_studio_event_instance_get_volume(std::uint64_t instance_ref);
double fmod_studio_event_instance_set_volume(std::uint64_t instance_ref, double volume);
double fmod_studio_event_instance_get_pitch(std::uint64_t instance_ref);
double fmod_studio_event_instance_set_pitch(std::uint64_t instance_ref, double pitch);
double fmod_studio_event_instance_set_parameter_by_name(std::uint64_t instance_ref, std::string_view name, double value);
double fmod_studio_event_instance_get_parameter_by_name(std::uint64_t instance_ref, std::string_view name);
double fmod_studio_event_instance_get_parameter_count(std::uint64_t instance_ref);
double fmod_studio_event_instance_get_parameter_by_id(std::uint64_t instance_ref, double id_data1, double id_data2);
double fmod_studio_event_instance_set_parameter_by_id(std::uint64_t instance_ref, double id_data1, double id_data2, double value);
double fmod_studio_event_instance_set_callback(std::uint64_t instance_ref, const std::optional<gm::wire::GMFunction>& callback, gm_enums::FmodStudioEventCallbackType mask);
double fmod_studio_event_instance_set_3d_attributes(std::uint64_t instance_ref, double x, double y, double z);
std::optional<std::uint64_t> fmod_studio_event_instance_get_description(std::uint64_t instance_ref);
double fmod_studio_event_instance_release(std::uint64_t instance_ref);
std::string fmod_studio_bus_get_path(std::uint64_t bus_ref);
double fmod_studio_bus_get_volume(std::uint64_t bus_ref);
double fmod_studio_bus_set_volume(std::uint64_t bus_ref, double volume);
double fmod_studio_bus_get_paused(std::uint64_t bus_ref);
double fmod_studio_bus_set_paused(std::uint64_t bus_ref, double paused);
double fmod_studio_bus_stop_all_events(std::uint64_t bus_ref, double stop_mode);
std::optional<std::uint64_t> fmod_studio_bus_get_master_bus();
std::string fmod_studio_vca_get_path(std::uint64_t vca_ref);
double fmod_studio_vca_get_volume(std::uint64_t vca_ref);
double fmod_studio_vca_set_volume(std::uint64_t vca_ref, double volume);
double fmod_studio_command_replay_get_playback_state(std::uint64_t replay_ref);
double fmod_studio_command_replay_get_current_command(std::uint64_t replay_ref);
double fmod_studio_command_replay_release(std::uint64_t replay_ref);
double fmod_studio_command_replay_get_command_count(std::uint64_t replay_ref);
double fmod_studio_command_replay_get_length(std::uint64_t replay_ref);
double fmod_studio_command_replay_set_frame_callback(std::uint64_t replay_ref, const std::optional<gm::wire::GMFunction>& callback);
double fmod_studio_command_replay_set_create_instance_callback(std::uint64_t replay_ref, const std::optional<gm::wire::GMFunction>& callback);
double fmod_studio_command_replay_set_load_bank_callback(std::uint64_t replay_ref, const std::optional<gm::wire::GMFunction>& callback);
