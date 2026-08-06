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
    };

    enum class FmodInitFlags : std::int64_t
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
    };

    enum class FmodStudioInitFlags : std::int64_t
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
    };

    enum class FmodMode : std::int64_t
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
    };

    enum class FmodDspConnectionType : std::int64_t
    {
        Default = 0,
        Dry = 1,
        Wet = 2
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
        DisplayTimeStamps = 65536,
        DisplayLineNumbers = 131072,
        DisplayCompress = 262144,
        DisplayThreadId = 524288,
        DisplayModule = 1048576,
        DisplaySourceCodeLine = 2097152
    };

    enum class FmodDebugMode : std::int64_t
    {
        Tty = 0,
        File = 1,
        Callback = 2,
        FilePlusTty = 3
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
        _7Point1PointFront = 8,
        _5Point1Rears = 9
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
        NativeAudio = 19
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
        Starting = 3
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
        Interactive = 4,
        Labeled = 8
    };

    enum class FmodStudioUserPropertyType : std::int64_t
    {
        String = 0,
        Integer = 1,
        Float = 2,
        Boolean = 3
    };

}


namespace gm_structs
{
    struct FmodChannelRef;
    struct FmodChannelGroupRef;
    struct FmodSoundRef;
    struct FmodSystemRef;
    struct FmodDSPConnectionRef;
    struct FmodSoundGroupRef;
    struct FmodReverb3DRef;
    struct FmodDSPRef;
    struct FmodGeometryRef;
    struct FmodStudioSystemRef;
    struct FmodStudioBankRef;
    struct FmodStudioBusRef;
    struct FmodStudioEventInstanceRef;
    struct FmodStudioEventDescriptionRef;
    struct FmodStudioVCARef;
    struct FmodStudioCommandReplayRef;
    struct FmodSoundDefaults;
    struct FmodLoopPoints;
    struct FmodSoundMinMaxDistance;
    struct FmodConeSettings;
    struct FmodSystem3DSettings;
    struct FmodListener3DAttributes;
    struct FmodSyncPointInfo;
    struct FmodRecordDriverInfo;
    struct FmodDSPMixMatrix;

    struct FmodChannelRef
    {
        std::uint64_t _ref;
    };

    struct FmodChannelGroupRef
    {
        std::uint64_t _ref;
    };

    struct FmodSoundRef
    {
        std::uint64_t _ref;
    };

    struct FmodSystemRef
    {
        std::uint64_t _ref;
    };

    struct FmodDSPConnectionRef
    {
        std::uint64_t _ref;
    };

    struct FmodSoundGroupRef
    {
        std::uint64_t _ref;
    };

    struct FmodReverb3DRef
    {
        std::uint64_t _ref;
    };

    struct FmodDSPRef
    {
        std::uint64_t _ref;
    };

    struct FmodGeometryRef
    {
        std::uint64_t _ref;
    };

    struct FmodStudioSystemRef
    {
        std::uint64_t _ref;
    };

    struct FmodStudioBankRef
    {
        std::uint64_t _ref;
    };

    struct FmodStudioBusRef
    {
        std::uint64_t _ref;
    };

    struct FmodStudioEventInstanceRef
    {
        std::uint64_t _ref;
    };

    struct FmodStudioEventDescriptionRef
    {
        std::uint64_t _ref;
    };

    struct FmodStudioVCARef
    {
        std::uint64_t _ref;
    };

    struct FmodStudioCommandReplayRef
    {
        std::uint64_t _ref;
    };

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

    struct FmodListener3DAttributes
    {
        double position;
        double velocity;
        double forward;
        double up;
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

}

namespace gm::wire::codec
{
    template<>
    inline void writeValue<gm_structs::FmodChannelRef>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodChannelRef& obj)
    {
        gm::wire::codec::writeValue(_buf, obj._ref);
    }

    template<>
    inline gm_structs::FmodChannelRef readValue<gm_structs::FmodChannelRef>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodChannelRef obj;
        obj._ref = gm::wire::codec::readValue<std::uint64_t>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodChannelGroupRef>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodChannelGroupRef& obj)
    {
        gm::wire::codec::writeValue(_buf, obj._ref);
    }

    template<>
    inline gm_structs::FmodChannelGroupRef readValue<gm_structs::FmodChannelGroupRef>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodChannelGroupRef obj;
        obj._ref = gm::wire::codec::readValue<std::uint64_t>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodSoundRef>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodSoundRef& obj)
    {
        gm::wire::codec::writeValue(_buf, obj._ref);
    }

    template<>
    inline gm_structs::FmodSoundRef readValue<gm_structs::FmodSoundRef>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodSoundRef obj;
        obj._ref = gm::wire::codec::readValue<std::uint64_t>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodSystemRef>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodSystemRef& obj)
    {
        gm::wire::codec::writeValue(_buf, obj._ref);
    }

    template<>
    inline gm_structs::FmodSystemRef readValue<gm_structs::FmodSystemRef>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodSystemRef obj;
        obj._ref = gm::wire::codec::readValue<std::uint64_t>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodDSPConnectionRef>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodDSPConnectionRef& obj)
    {
        gm::wire::codec::writeValue(_buf, obj._ref);
    }

    template<>
    inline gm_structs::FmodDSPConnectionRef readValue<gm_structs::FmodDSPConnectionRef>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodDSPConnectionRef obj;
        obj._ref = gm::wire::codec::readValue<std::uint64_t>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodSoundGroupRef>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodSoundGroupRef& obj)
    {
        gm::wire::codec::writeValue(_buf, obj._ref);
    }

    template<>
    inline gm_structs::FmodSoundGroupRef readValue<gm_structs::FmodSoundGroupRef>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodSoundGroupRef obj;
        obj._ref = gm::wire::codec::readValue<std::uint64_t>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodReverb3DRef>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodReverb3DRef& obj)
    {
        gm::wire::codec::writeValue(_buf, obj._ref);
    }

    template<>
    inline gm_structs::FmodReverb3DRef readValue<gm_structs::FmodReverb3DRef>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodReverb3DRef obj;
        obj._ref = gm::wire::codec::readValue<std::uint64_t>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodDSPRef>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodDSPRef& obj)
    {
        gm::wire::codec::writeValue(_buf, obj._ref);
    }

    template<>
    inline gm_structs::FmodDSPRef readValue<gm_structs::FmodDSPRef>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodDSPRef obj;
        obj._ref = gm::wire::codec::readValue<std::uint64_t>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodGeometryRef>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodGeometryRef& obj)
    {
        gm::wire::codec::writeValue(_buf, obj._ref);
    }

    template<>
    inline gm_structs::FmodGeometryRef readValue<gm_structs::FmodGeometryRef>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodGeometryRef obj;
        obj._ref = gm::wire::codec::readValue<std::uint64_t>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodStudioSystemRef>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodStudioSystemRef& obj)
    {
        gm::wire::codec::writeValue(_buf, obj._ref);
    }

    template<>
    inline gm_structs::FmodStudioSystemRef readValue<gm_structs::FmodStudioSystemRef>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodStudioSystemRef obj;
        obj._ref = gm::wire::codec::readValue<std::uint64_t>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodStudioBankRef>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodStudioBankRef& obj)
    {
        gm::wire::codec::writeValue(_buf, obj._ref);
    }

    template<>
    inline gm_structs::FmodStudioBankRef readValue<gm_structs::FmodStudioBankRef>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodStudioBankRef obj;
        obj._ref = gm::wire::codec::readValue<std::uint64_t>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodStudioBusRef>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodStudioBusRef& obj)
    {
        gm::wire::codec::writeValue(_buf, obj._ref);
    }

    template<>
    inline gm_structs::FmodStudioBusRef readValue<gm_structs::FmodStudioBusRef>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodStudioBusRef obj;
        obj._ref = gm::wire::codec::readValue<std::uint64_t>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodStudioEventInstanceRef>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodStudioEventInstanceRef& obj)
    {
        gm::wire::codec::writeValue(_buf, obj._ref);
    }

    template<>
    inline gm_structs::FmodStudioEventInstanceRef readValue<gm_structs::FmodStudioEventInstanceRef>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodStudioEventInstanceRef obj;
        obj._ref = gm::wire::codec::readValue<std::uint64_t>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodStudioEventDescriptionRef>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodStudioEventDescriptionRef& obj)
    {
        gm::wire::codec::writeValue(_buf, obj._ref);
    }

    template<>
    inline gm_structs::FmodStudioEventDescriptionRef readValue<gm_structs::FmodStudioEventDescriptionRef>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodStudioEventDescriptionRef obj;
        obj._ref = gm::wire::codec::readValue<std::uint64_t>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodStudioVCARef>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodStudioVCARef& obj)
    {
        gm::wire::codec::writeValue(_buf, obj._ref);
    }

    template<>
    inline gm_structs::FmodStudioVCARef readValue<gm_structs::FmodStudioVCARef>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodStudioVCARef obj;
        obj._ref = gm::wire::codec::readValue<std::uint64_t>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodStudioCommandReplayRef>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodStudioCommandReplayRef& obj)
    {
        gm::wire::codec::writeValue(_buf, obj._ref);
    }

    template<>
    inline gm_structs::FmodStudioCommandReplayRef readValue<gm_structs::FmodStudioCommandReplayRef>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodStudioCommandReplayRef obj;
        obj._ref = gm::wire::codec::readValue<std::uint64_t>(_buf);
        return obj;
    }

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
        obj.position = gm::wire::codec::readValue<double>(_buf);
        obj.velocity = gm::wire::codec::readValue<double>(_buf);
        obj.forward = gm::wire::codec::readValue<double>(_buf);
        obj.up = gm::wire::codec::readValue<double>(_buf);
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

}

namespace gm::wire::details
{
    template<>
    struct gm_struct_traits<gm_structs::FmodChannelRef>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 0;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodChannelGroupRef>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 1;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodSoundRef>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 2;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodSystemRef>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 3;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodDSPConnectionRef>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 4;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodSoundGroupRef>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 5;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodReverb3DRef>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 6;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodDSPRef>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 7;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodGeometryRef>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 8;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodStudioSystemRef>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 9;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodStudioBankRef>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 10;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodStudioBusRef>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 11;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodStudioEventInstanceRef>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 12;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodStudioEventDescriptionRef>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 13;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodStudioVCARef>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 14;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodStudioCommandReplayRef>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 15;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodSoundDefaults>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 16;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodLoopPoints>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 17;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodSoundMinMaxDistance>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 18;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodConeSettings>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 19;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodSystem3DSettings>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 20;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodListener3DAttributes>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 21;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodSyncPointInfo>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 22;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodRecordDriverInfo>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 23;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodDSPMixMatrix>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 24;
    };

}

gm_enums::FmodResult fmod_last_result();
void fmod_debug_initialize(gm_enums::FmodDebugFlags flags, gm_enums::FmodDebugMode mode);
std::string fmod_path_bundle(std::string_view filename);
std::string fmod_path_user(std::string_view filename);
double fmod_channel_set_frequency(const gm_structs::FmodChannelRef& channel_ref, double frequency);
double fmod_channel_get_frequency(const gm_structs::FmodChannelRef& channel_ref);
double fmod_channel_set_priority(const gm_structs::FmodChannelRef& channel_ref, double priority);
double fmod_channel_get_priority(const gm_structs::FmodChannelRef& channel_ref);
double fmod_channel_set_position(const gm_structs::FmodChannelRef& channel_ref, double position, double time_unit);
double fmod_channel_get_position(const gm_structs::FmodChannelRef& channel_ref, double time_unit);
double fmod_channel_set_channel_group(const gm_structs::FmodChannelRef& channel_ref, const gm_structs::FmodChannelGroupRef& channel_group_ref);
gm_structs::FmodChannelGroupRef fmod_channel_get_channel_group(const gm_structs::FmodChannelRef& channel_ref);
double fmod_channel_set_loop_count(const gm_structs::FmodChannelRef& channel_ref, double loop_count);
double fmod_channel_get_loop_count(const gm_structs::FmodChannelRef& channel_ref);
double fmod_channel_set_loop_points(const gm_structs::FmodChannelRef& channel_ref, double loop_start, double loop_start_type, double loop_end, double loop_end_type);
double fmod_channel_is_virtual(const gm_structs::FmodChannelRef& channel_ref);
double fmod_channel_get_index(const gm_structs::FmodChannelRef& channel_ref);
gm_structs::FmodSoundRef fmod_channel_get_current_sound(const gm_structs::FmodChannelRef& channel_ref);
gm_structs::FmodSystemRef fmod_channel_get_system_object(const gm_structs::FmodChannelRef& channel_ref);
gm_structs::FmodSystemRef fmod_system_create();
double fmod_system_init(double max_channels, double flags);
double fmod_system_release(const gm_structs::FmodSystemRef& system_ref);
double fmod_system_close(const gm_structs::FmodSystemRef& system_ref);
double fmod_system_update();
double fmod_system_get_channels_playing();
gm_structs::FmodChannelRef fmod_system_get_channel(double index);
gm_structs::FmodChannelGroupRef fmod_system_get_master_channel_group();
double fmod_system_set_output(double output);
double fmod_system_get_output();
double fmod_system_get_num_drivers();
double fmod_system_set_driver(double driver);
double fmod_system_get_driver();
double fmod_system_set_software_channels(double software_channels);
double fmod_system_get_software_channels();
double fmod_system_set_3d_settings(double doppler_scale, double distance_factor, double rolloff_scale);
gm_structs::FmodSystem3DSettings fmod_system_get_3d_settings();
double fmod_system_set_3d_listener_attributes(double listener_index, const gm::wire::GMValue& position, const gm::wire::GMValue& velocity, const gm::wire::GMValue& forward, const gm::wire::GMValue& up);
gm_structs::FmodListener3DAttributes fmod_system_get_3d_listener_attributes(double listener_index);
double fmod_system_get_record_num_drivers();
gm_structs::FmodRecordDriverInfo fmod_system_get_record_driver_info(double record_driver_index);
double fmod_system_get_record_position(double device_index);
double fmod_system_record_start(double device_index, const gm_structs::FmodSoundRef& sound_ref, double loop);
double fmod_system_record_stop(double device_index);
double fmod_system_is_recording(double device_index);
gm_structs::FmodSoundRef fmod_system_create_sound(std::string_view name_or_data, double mode);
gm_structs::FmodSoundRef fmod_system_create_stream(std::string_view name_or_data, double mode);
gm_structs::FmodChannelRef fmod_system_play_sound(const gm_structs::FmodSoundRef& sound_ref, const gm_structs::FmodChannelGroupRef& channel_group_ref, double pause);
double fmod_sound_get_length(const gm_structs::FmodSoundRef& sound_ref, double length_type);
double fmod_sound_set_defaults(const gm_structs::FmodSoundRef& sound_ref, double frequency, double priority);
double fmod_sound_set_mode(const gm_structs::FmodSoundRef& sound_ref, double mode);
double fmod_sound_get_mode(const gm_structs::FmodSoundRef& sound_ref);
double fmod_sound_get_format(const gm_structs::FmodSoundRef& sound_ref);
std::string fmod_sound_get_name(const gm_structs::FmodSoundRef& sound_ref);
gm_structs::FmodSoundDefaults fmod_sound_get_defaults(const gm_structs::FmodSoundRef& sound_ref);
double fmod_sound_set_loop_count(const gm_structs::FmodSoundRef& sound_ref, double count);
double fmod_sound_get_loop_count(const gm_structs::FmodSoundRef& sound_ref);
double fmod_sound_set_loop_points(const gm_structs::FmodSoundRef& sound_ref, double loop_start, double loop_start_type, double loop_end, double loop_end_type);
gm_structs::FmodLoopPoints fmod_sound_get_loop_points(const gm_structs::FmodSoundRef& sound_ref, double start_type, double end_type);
double fmod_sound_set_3d_min_max_distance(const gm_structs::FmodSoundRef& sound_ref, double min, double max);
gm_structs::FmodSoundMinMaxDistance fmod_sound_get_3d_min_max_distance(const gm_structs::FmodSoundRef& sound_ref);
double fmod_sound_set_3d_cone_settings(const gm_structs::FmodSoundRef& sound_ref, double inside_cone_angle, double outside_cone_angle, double outside_volume);
gm_structs::FmodConeSettings fmod_sound_get_3d_cone_settings(const gm_structs::FmodSoundRef& sound_ref);
double fmod_sound_set_3d_custom_rolloff(const gm_structs::FmodSoundRef& sound_ref, const gm::wire::GMValue& points, double num_points);
gm::wire::DataStream fmod_sound_get_3d_custom_rolloff(const gm_structs::FmodSoundRef& sound_ref);
double fmod_sound_get_num_sync_points(const gm_structs::FmodSoundRef& sound_ref);
gm_structs::FmodSyncPointInfo fmod_sound_get_sync_point(const gm_structs::FmodSoundRef& sound_ref, double sync_point_index, double offset_type);
double fmod_sound_add_sync_point(const gm_structs::FmodSoundRef& sound_ref, double offset, double offset_type, std::string_view name);
double fmod_sound_delete_sync_point(const gm_structs::FmodSoundRef& sound_ref, double sync_point_index);
double fmod_sound_get_music_num_channels(const gm_structs::FmodSoundRef& sound_ref);
double fmod_sound_set_music_channel_volume(const gm_structs::FmodSoundRef& sound_ref, double channel_index, double volume);
double fmod_sound_get_music_channel_volume(const gm_structs::FmodSoundRef& sound_ref, double channel_index);
double fmod_sound_set_music_speed(const gm_structs::FmodSoundRef& sound_ref, double speed);
double fmod_sound_get_music_speed(const gm_structs::FmodSoundRef& sound_ref);
double fmod_sound_set_sound_group(const gm_structs::FmodSoundRef& sound_ref, const gm_structs::FmodSoundGroupRef& sound_group_ref);
gm_structs::FmodSoundGroupRef fmod_sound_get_sound_group(const gm_structs::FmodSoundRef& sound_ref);
double fmod_sound_release(const gm_structs::FmodSoundRef& sound_ref);
gm_structs::FmodSystemRef fmod_sound_get_system_object(const gm_structs::FmodSoundRef& sound_ref);
double fmod_channel_group_get_num_channels(const gm_structs::FmodChannelGroupRef& channel_group_ref);
gm_structs::FmodChannelRef fmod_channel_group_get_channel(const gm_structs::FmodChannelGroupRef& channel_group_ref, double index);
gm_structs::FmodDSPConnectionRef fmod_channel_group_add_group(const gm_structs::FmodChannelGroupRef& channel_group_ref, const gm_structs::FmodChannelGroupRef& child_channel_group_ref, double propagate_dsp_clock);
double fmod_channel_group_get_num_groups(const gm_structs::FmodChannelGroupRef& channel_group_ref);
gm_structs::FmodChannelGroupRef fmod_channel_group_get_group(const gm_structs::FmodChannelGroupRef& channel_group_ref, double group_index);
gm_structs::FmodChannelGroupRef fmod_channel_group_get_parent_group(const gm_structs::FmodChannelGroupRef& channel_group_ref);
std::string fmod_channel_group_get_name(const gm_structs::FmodChannelGroupRef& channel_group_ref);
double fmod_channel_group_release(const gm_structs::FmodChannelGroupRef& channel_group_ref);
gm_structs::FmodSystemRef fmod_channel_group_get_system_object(const gm_structs::FmodChannelGroupRef& channel_group_ref);
double fmod_sound_group_set_max_audible(const gm_structs::FmodSoundGroupRef& sound_group_ref, double max_audible);
double fmod_sound_group_get_max_audible(const gm_structs::FmodSoundGroupRef& sound_group_ref);
double fmod_sound_group_set_max_audible_behavior(const gm_structs::FmodSoundGroupRef& sound_group_ref, double behavior);
double fmod_sound_group_get_max_audible_behavior(const gm_structs::FmodSoundGroupRef& sound_group_ref);
double fmod_sound_group_set_mute_fade_speed(const gm_structs::FmodSoundGroupRef& sound_group_ref, double speed);
double fmod_sound_group_get_mute_fade_speed(const gm_structs::FmodSoundGroupRef& sound_group_ref);
double fmod_sound_group_set_volume(const gm_structs::FmodSoundGroupRef& sound_group_ref, double volume);
double fmod_sound_group_get_volume(const gm_structs::FmodSoundGroupRef& sound_group_ref);
double fmod_sound_group_get_num_sounds(const gm_structs::FmodSoundGroupRef& sound_group_ref);
gm_structs::FmodSoundRef fmod_sound_group_get_sound(const gm_structs::FmodSoundGroupRef& sound_group_ref, double sound_index);
double fmod_sound_group_get_num_playing(const gm_structs::FmodSoundGroupRef& sound_group_ref);
double fmod_sound_group_stop(const gm_structs::FmodSoundGroupRef& sound_group_ref);
std::string fmod_sound_group_get_name(const gm_structs::FmodSoundGroupRef& sound_group_ref);
double fmod_sound_group_release(const gm_structs::FmodSoundGroupRef& sound_group_ref);
gm_structs::FmodSystemRef fmod_sound_group_get_system_object(const gm_structs::FmodSoundGroupRef& sound_group_ref);
double fmod_reverb_3d_set_active(const gm_structs::FmodReverb3DRef& reverb_3d_ref, double active);
double fmod_reverb_3d_get_active(const gm_structs::FmodReverb3DRef& reverb_3d_ref);
double fmod_reverb_3d_set_properties(const gm_structs::FmodReverb3DRef& reverb_3d_ref, double decay_time, double early_delay, double late_delay, double hf_reference, double hf_decay_ratio, double diffusion, double density, double low_shelf_frequency, double low_shelf_gain, double high_cut, double early_late_mix, double wet_level);
double fmod_reverb_3d_release(const gm_structs::FmodReverb3DRef& reverb_3d_ref);
double fmod_channel_control_is_playing(double channel_control_ref);
double fmod_channel_control_stop(double channel_control_ref);
double fmod_channel_control_set_paused(double channel_control_ref, double paused);
double fmod_channel_control_get_paused(double channel_control_ref);
double fmod_channel_control_set_mode(double channel_control_ref, double mode);
double fmod_channel_control_get_mode(double channel_control_ref);
double fmod_channel_control_set_pitch(double channel_control_ref, double pitch);
double fmod_channel_control_get_pitch(double channel_control_ref);
double fmod_channel_control_get_audibility(double channel_control_ref);
double fmod_channel_control_set_volume(double channel_control_ref, double volume);
double fmod_channel_control_get_volume(double channel_control_ref);
double fmod_channel_control_set_volume_ramp(double channel_control_ref, double ramp);
double fmod_channel_control_get_volume_ramp(double channel_control_ref);
double fmod_channel_control_set_mute(double channel_control_ref, double mute);
double fmod_channel_control_get_mute(double channel_control_ref);
double fmod_channel_control_set_3d_doppler_level(double channel_control_ref, double level);
double fmod_channel_control_get_3d_doppler_level(double channel_control_ref);
double fmod_channel_control_set_3d_level(double channel_control_ref, double level);
double fmod_channel_control_get_3d_level(double channel_control_ref);
double fmod_channel_control_set_3d_min_max_distance(double channel_control_ref, double min_dist, double max_dist);
double fmod_channel_control_set_3d_cone_settings(double channel_control_ref, double inside_cone_angle, double outside_cone_angle, double outside_volume);
double fmod_channel_control_set_3d_occlusion(double channel_control_ref, double direct_occlusion, double reverb_occlusion);
double fmod_channel_control_set_3d_spread(double channel_control_ref, double angle);
double fmod_channel_control_get_3d_spread(double channel_control_ref);
double fmod_channel_control_set_3d_distance_filter(double channel_control_ref, double custom, double custom_level, double center_freq);
double fmod_channel_control_set_pan(double channel_control_ref, double pan);
double fmod_channel_control_set_mix_levels_output(double channel_control_ref, double front_left, double front_right, double center, double lfe, double surround_left, double surround_right, double back_left, double back_right);
double fmod_channel_control_set_reverb_properties(double channel_control_ref, double reverb_instance, double wet);
double fmod_channel_control_get_reverb_properties(double channel_control_ref, double reverb_instance);
double fmod_channel_control_set_low_pass_gain(double channel_control_ref, double gain);
double fmod_channel_control_get_low_pass_gain(double channel_control_ref);
double fmod_channel_control_add_dsp(double channel_control_ref, double dsp_chain_offset, const gm_structs::FmodDSPRef& dsp_ref);
double fmod_channel_control_remove_dsp(double channel_control_ref, const gm_structs::FmodDSPRef& dsp_ref);
double fmod_channel_control_get_num_dsps(double channel_control_ref);
gm_structs::FmodDSPRef fmod_channel_control_get_dsp(double channel_control_ref, double index);
double fmod_channel_control_set_dsp_index(double channel_control_ref, const gm_structs::FmodDSPRef& dsp_ref, double chain_index);
double fmod_channel_control_get_dsp_index(double channel_control_ref, const gm_structs::FmodDSPRef& dsp_ref);
gm_structs::FmodSystemRef fmod_channel_control_get_system_object(double channel_control_ref);
gm_structs::FmodDSPConnectionRef fmod_dsp_add_input(const gm_structs::FmodDSPRef& dsp_ref, const gm_structs::FmodDSPRef& dsp_input_ref, double dsp_connection_type);
double fmod_dsp_get_num_inputs(const gm_structs::FmodDSPRef& dsp_ref);
double fmod_dsp_get_num_outputs(const gm_structs::FmodDSPRef& dsp_ref);
double fmod_dsp_disconnect_all(const gm_structs::FmodDSPRef& dsp_ref, double inputs, double outputs);
double fmod_dsp_get_num_parameters(const gm_structs::FmodDSPRef& dsp_ref);
double fmod_dsp_set_parameter_float(const gm_structs::FmodDSPRef& dsp_ref, double index, double value);
double fmod_dsp_get_parameter_float(const gm_structs::FmodDSPRef& dsp_ref, double index);
double fmod_dsp_set_parameter_int(const gm_structs::FmodDSPRef& dsp_ref, double index, double value);
double fmod_dsp_get_parameter_int(const gm_structs::FmodDSPRef& dsp_ref, double index);
double fmod_dsp_set_parameter_bool(const gm_structs::FmodDSPRef& dsp_ref, double index, double value);
double fmod_dsp_get_parameter_bool(const gm_structs::FmodDSPRef& dsp_ref, double index);
double fmod_dsp_release(const gm_structs::FmodDSPRef& dsp_ref);
gm_structs::FmodSystemRef fmod_dsp_get_system_object(const gm_structs::FmodDSPRef& dsp_ref);
double fmod_dsp_connection_set_mix(const gm_structs::FmodDSPConnectionRef& connection_ref, double volume);
double fmod_dsp_connection_get_mix(const gm_structs::FmodDSPConnectionRef& connection_ref);
double fmod_dsp_connection_set_mix_matrix(const gm_structs::FmodDSPConnectionRef& connection_ref, double matrix, double out_channels, double in_channels, double in_channel_hop);
gm_structs::FmodDSPMixMatrix fmod_dsp_connection_get_mix_matrix(const gm_structs::FmodDSPConnectionRef& connection_ref, double in_channel_hop);
gm_structs::FmodDSPRef fmod_dsp_connection_get_input(const gm_structs::FmodDSPConnectionRef& connection_ref);
gm_structs::FmodDSPRef fmod_dsp_connection_get_output(const gm_structs::FmodDSPConnectionRef& connection_ref);
double fmod_dsp_connection_get_type(const gm_structs::FmodDSPConnectionRef& connection_ref);
double fmod_dsp_connection_set_user_data(const gm_structs::FmodDSPConnectionRef& connection_ref, double user_data);
double fmod_dsp_connection_get_user_data(const gm_structs::FmodDSPConnectionRef& connection_ref);
double fmod_geometry_set_polygon_attributes(const gm_structs::FmodGeometryRef& geometry_ref, double polygon_index, double direct_occlusion, double reverb_occlusion, double double_sided);
double fmod_geometry_get_polygon_num_vertices(const gm_structs::FmodGeometryRef& geometry_ref, double polygon_index);
double fmod_geometry_set_position(const gm_structs::FmodGeometryRef& geometry_ref, double x, double y, double z);
double fmod_geometry_set_rotation(const gm_structs::FmodGeometryRef& geometry_ref, double forward_x, double forward_y, double forward_z, double up_x, double up_y, double up_z);
double fmod_geometry_set_scale(const gm_structs::FmodGeometryRef& geometry_ref, double scale_x, double scale_y, double scale_z);
double fmod_geometry_save(const gm_structs::FmodGeometryRef& geometry_ref, std::string_view filename);
double fmod_geometry_release(const gm_structs::FmodGeometryRef& geometry_ref);
gm_structs::FmodStudioSystemRef fmod_studio_system_create();
double fmod_studio_system_init(double max_channels, double studio_flags, double core_flags);
double fmod_studio_system_release();
double fmod_studio_system_update();
double fmod_studio_system_flush_commands();
double fmod_studio_system_flush_sample_loading();
std::optional<gm_structs::FmodStudioBankRef> fmod_studio_system_load_bank_file(std::string_view filename, double flags);
std::optional<gm_structs::FmodStudioBankRef> fmod_studio_system_load_bank_memory(std::string_view data, double flags);
double fmod_studio_system_unload_all();
double fmod_studio_system_get_bank_count();
std::optional<gm_structs::FmodStudioBankRef> fmod_studio_system_get_bank_at(double index);
std::optional<gm_structs::FmodStudioBankRef> fmod_studio_system_get_bank(std::string_view path);
std::optional<gm_structs::FmodStudioEventDescriptionRef> fmod_studio_system_get_event(std::string_view path);
std::optional<gm_structs::FmodStudioEventInstanceRef> fmod_studio_system_create_event_instance(std::string_view path);
std::optional<gm_structs::FmodStudioBusRef> fmod_studio_system_get_bus(std::string_view path);
std::optional<gm_structs::FmodStudioBusRef> fmod_studio_system_get_master_bus();
std::optional<gm_structs::FmodStudioVCARef> fmod_studio_system_get_vca(std::string_view path);
double fmod_studio_system_set_listener_attributes(double listener_index, double x, double y, double z);
double fmod_studio_system_set_listener_weight(double listener_index, double weight);
double fmod_studio_system_set_parameter_by_name(std::string_view name, double value);
double fmod_studio_system_get_parameter_by_name(std::string_view name);
gm_structs::FmodSystemRef fmod_studio_system_get_core_system();
double fmod_studio_bank_unload(const gm_structs::FmodStudioBankRef& bank_ref);
double fmod_studio_bank_get_loading_state(const gm_structs::FmodStudioBankRef& bank_ref);
double fmod_studio_bank_get_sample_loading_state(const gm_structs::FmodStudioBankRef& bank_ref);
std::string fmod_studio_bank_get_path(const gm_structs::FmodStudioBankRef& bank_ref);
std::optional<gm_structs::FmodStudioSystemRef> fmod_studio_bank_get_parent_studio_system(const gm_structs::FmodStudioBankRef& bank_ref);
double fmod_studio_bank_get_event_count(const gm_structs::FmodStudioBankRef& bank_ref);
std::optional<gm_structs::FmodStudioEventDescriptionRef> fmod_studio_bank_get_event_at(const gm_structs::FmodStudioBankRef& bank_ref, double index);
double fmod_studio_bank_get_bus_count(const gm_structs::FmodStudioBankRef& bank_ref);
std::optional<gm_structs::FmodStudioBusRef> fmod_studio_bank_get_bus_at(const gm_structs::FmodStudioBankRef& bank_ref, double index);
double fmod_studio_bank_get_vca_count(const gm_structs::FmodStudioBankRef& bank_ref);
std::optional<gm_structs::FmodStudioVCARef> fmod_studio_bank_get_vca_at(const gm_structs::FmodStudioBankRef& bank_ref, double index);
double fmod_studio_bank_get_string_count(const gm_structs::FmodStudioBankRef& bank_ref);
std::string fmod_studio_event_description_get_path(const gm_structs::FmodStudioEventDescriptionRef& event_desc_ref);
std::optional<gm_structs::FmodStudioEventInstanceRef> fmod_studio_event_description_create_instance(const gm_structs::FmodStudioEventDescriptionRef& event_desc_ref);
double fmod_studio_event_description_get_instance_count(const gm_structs::FmodStudioEventDescriptionRef& event_desc_ref);
std::optional<gm_structs::FmodStudioEventInstanceRef> fmod_studio_event_description_get_instance_at(const gm_structs::FmodStudioEventDescriptionRef& event_desc_ref, double index);
double fmod_studio_event_description_is_snapshot(const gm_structs::FmodStudioEventDescriptionRef& event_desc_ref);
double fmod_studio_event_description_is_one_shot(const gm_structs::FmodStudioEventDescriptionRef& event_desc_ref);
double fmod_studio_event_description_has_sustain_point(const gm_structs::FmodStudioEventDescriptionRef& event_desc_ref);
double fmod_studio_event_description_get_length(const gm_structs::FmodStudioEventDescriptionRef& event_desc_ref);
double fmod_studio_event_description_get_parameter_count(const gm_structs::FmodStudioEventDescriptionRef& event_desc_ref);
double fmod_studio_event_description_release_all_instances(const gm_structs::FmodStudioEventDescriptionRef& event_desc_ref);
double fmod_studio_event_instance_start(const gm_structs::FmodStudioEventInstanceRef& instance_ref);
double fmod_studio_event_instance_stop(const gm_structs::FmodStudioEventInstanceRef& instance_ref, double stop_mode);
double fmod_studio_event_instance_get_playback_state(const gm_structs::FmodStudioEventInstanceRef& instance_ref);
double fmod_studio_event_instance_get_paused(const gm_structs::FmodStudioEventInstanceRef& instance_ref);
double fmod_studio_event_instance_set_paused(const gm_structs::FmodStudioEventInstanceRef& instance_ref, double paused);
double fmod_studio_event_instance_get_timeline_position(const gm_structs::FmodStudioEventInstanceRef& instance_ref);
double fmod_studio_event_instance_set_timeline_position(const gm_structs::FmodStudioEventInstanceRef& instance_ref, double position);
double fmod_studio_event_instance_get_volume(const gm_structs::FmodStudioEventInstanceRef& instance_ref);
double fmod_studio_event_instance_set_volume(const gm_structs::FmodStudioEventInstanceRef& instance_ref, double volume);
double fmod_studio_event_instance_get_pitch(const gm_structs::FmodStudioEventInstanceRef& instance_ref);
double fmod_studio_event_instance_set_pitch(const gm_structs::FmodStudioEventInstanceRef& instance_ref, double pitch);
double fmod_studio_event_instance_set_parameter_by_name(const gm_structs::FmodStudioEventInstanceRef& instance_ref, std::string_view name, double value);
double fmod_studio_event_instance_get_parameter_by_name(const gm_structs::FmodStudioEventInstanceRef& instance_ref, std::string_view name);
double fmod_studio_event_instance_get_parameter_count(const gm_structs::FmodStudioEventInstanceRef& instance_ref);
double fmod_studio_event_instance_set_3d_attributes(const gm_structs::FmodStudioEventInstanceRef& instance_ref, double x, double y, double z);
std::optional<gm_structs::FmodStudioEventDescriptionRef> fmod_studio_event_instance_get_description(const gm_structs::FmodStudioEventInstanceRef& instance_ref);
double fmod_studio_event_instance_release(const gm_structs::FmodStudioEventInstanceRef& instance_ref);
std::string fmod_studio_bus_get_path(const gm_structs::FmodStudioBusRef& bus_ref);
double fmod_studio_bus_get_volume(const gm_structs::FmodStudioBusRef& bus_ref);
double fmod_studio_bus_set_volume(const gm_structs::FmodStudioBusRef& bus_ref, double volume);
double fmod_studio_bus_get_paused(const gm_structs::FmodStudioBusRef& bus_ref);
double fmod_studio_bus_set_paused(const gm_structs::FmodStudioBusRef& bus_ref, double paused);
double fmod_studio_bus_stop_all_events(const gm_structs::FmodStudioBusRef& bus_ref, double stop_mode);
std::optional<gm_structs::FmodStudioBusRef> fmod_studio_bus_get_master_bus();
std::string fmod_studio_vca_get_path(const gm_structs::FmodStudioVCARef& vca_ref);
double fmod_studio_vca_get_volume(const gm_structs::FmodStudioVCARef& vca_ref);
double fmod_studio_vca_set_volume(const gm_structs::FmodStudioVCARef& vca_ref, double volume);
double fmod_studio_command_replay_get_playback_state(const gm_structs::FmodStudioCommandReplayRef& replay_ref);
double fmod_studio_command_replay_get_current_command(const gm_structs::FmodStudioCommandReplayRef& replay_ref);
double fmod_studio_command_replay_release(const gm_structs::FmodStudioCommandReplayRef& replay_ref);
double fmod_studio_command_replay_set_frame_callback(const gm_structs::FmodStudioCommandReplayRef& replay_ref, const std::optional<gm::wire::GMFunction>& callback);
double fmod_studio_command_replay_set_create_instance_callback(const gm_structs::FmodStudioCommandReplayRef& replay_ref, const std::optional<gm::wire::GMFunction>& callback);
double fmod_studio_command_replay_set_load_bank_callback(const gm_structs::FmodStudioCommandReplayRef& replay_ref, const std::optional<gm::wire::GMFunction>& callback);
