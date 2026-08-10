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
        BandStartFreq = 2,
        BandStopFreq = 3,
        SpectrumData = 4,
        Rms = 5,
        SpectralCentroid = 6,
        ImmediateMode = 7,
        Downmix = 8,
        Channel = 9
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

    enum class FmodDriverState : std::int64_t
    {
        Connected = 1,
        Default = 2
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
    struct FmodFadePoint;
    struct FmodDistanceFilter;
    struct FmodOcclusion;
    struct FmodGeometryMaxPolygons;
    struct FmodPolygonAttributes;
    struct FmodReverbProperties;
    struct FmodSoundLockLengths;
    struct FmodMemoryStats;
    struct FmodAdvancedSettings;
    struct FmodSpeakerPosition;
    struct FmodCPUUsage;
    struct FmodFileUsage;
    struct FmodStreamBufferSize;
    struct FmodCreateSoundExInfo;
    struct FmodListener3DAttributes;
    struct FmodChannelControl3DAttributes;
    struct FmodGeometryRotation;
    struct FmodReverb3DAttributes;

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
        gm_enums::FmodSpeakerMode speaker_mode;
        double speaker_mode_channels;
        double sample_rate;
        gm_enums::FmodDriverState state;
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

    struct FmodFadePoint
    {
        double dsp_clock;
        double volume;
    };

    struct FmodDistanceFilter
    {
        double custom;
        double custom_level;
        double center_freq;
    };

    struct FmodOcclusion
    {
        double direct;
        double reverb;
    };

    struct FmodGeometryMaxPolygons
    {
        double max_polygons;
        double max_vertices;
    };

    struct FmodPolygonAttributes
    {
        double direct_occlusion;
        double reverb_occlusion;
        double double_sided;
    };

    struct FmodReverbProperties
    {
        double decay_time;
        double early_delay;
        double late_delay;
        double hf_reference;
        double hf_decay_ratio;
        double diffusion;
        double density;
        double low_shelf_frequency;
        double low_shelf_gain;
        double high_cut;
        double early_late_mix;
        double wet_level;
    };

    struct FmodSoundLockLengths
    {
        double length1;
        double length2;
    };

    struct FmodMemoryStats
    {
        double current_alloced;
        double max_alloced;
    };

    struct FmodAdvancedSettings
    {
        double max_mpeg_codecs;
        double max_adpcm_codecs;
        double max_xma_codecs;
        double max_vorbis_codecs;
        double max_at9_codecs;
        double max_fadpcm_codecs;
        double max_pcm_codecs;
        double asio_num_channels;
        double vol0_virtualvol;
        double default_decode_buffer_size;
        double profile_port;
        double geometry_max_fade_time;
        double distance_filter_center_freq;
        double reverb3d_instance;
        double dsp_buffer_pool_size;
        double resampler_method;
        double random_seed;
        double max_convolution_threads;
        double max_opus_codecs;
    };

    struct FmodSpeakerPosition
    {
        double x;
        double y;
        double active;
    };

    struct FmodCPUUsage
    {
        double dsp;
        double stream;
        double geometry;
        double update;
        double convolution1;
        double convolution2;
    };

    struct FmodFileUsage
    {
        double sample_bytes_read;
        double stream_bytes_read;
        double other_bytes_read;
    };

    struct FmodStreamBufferSize
    {
        double file_buffer_size;
        double file_buffer_size_type;
    };

    struct FmodCreateSoundExInfo
    {
        double length;
        double file_offset;
        double num_channels;
        double default_frequency;
        gm_enums::FmodSoundFormat format;
        double decode_buffer_size;
        double initial_subsound;
        double num_subsounds;
        double inclusion_list_num;
        std::string dls_name;
        std::string encryption_key;
        double max_polyphony;
        double suggested_sound_type;
        double file_buffer_size;
        double channel_order;
        std::uint64_t initial_sound_group;
        double initial_seek_position;
        double initial_seek_pos_type;
        double ignore_set_filesystem;
        double audio_queue_policy;
        double min_midi_granularity;
        double non_block_thread_id;
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

    struct FmodGeometryRotation
    {
        gm_structs::FmodVec3 forward;
        gm_structs::FmodVec3 up;
    };

    struct FmodReverb3DAttributes
    {
        gm_structs::FmodVec3 position;
        double min_distance;
        double max_distance;
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
        gm::wire::codec::writeValue(_buf, obj.speaker_mode_channels);
        gm::wire::codec::writeValue(_buf, obj.sample_rate);
        gm::wire::codec::writeValue(_buf, obj.state);
    }

    template<>
    inline gm_structs::FmodRecordDriverInfo readValue<gm_structs::FmodRecordDriverInfo>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodRecordDriverInfo obj;
        obj.name = gm::wire::codec::readValue<std::string>(_buf);
        obj.speaker_mode = gm::wire::codec::readValue<gm_enums::FmodSpeakerMode>(_buf);
        obj.speaker_mode_channels = gm::wire::codec::readValue<double>(_buf);
        obj.sample_rate = gm::wire::codec::readValue<double>(_buf);
        obj.state = gm::wire::codec::readValue<gm_enums::FmodDriverState>(_buf);
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
    inline void writeValue<gm_structs::FmodFadePoint>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodFadePoint& obj)
    {
        gm::wire::codec::writeValue(_buf, obj.dsp_clock);
        gm::wire::codec::writeValue(_buf, obj.volume);
    }

    template<>
    inline gm_structs::FmodFadePoint readValue<gm_structs::FmodFadePoint>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodFadePoint obj;
        obj.dsp_clock = gm::wire::codec::readValue<double>(_buf);
        obj.volume = gm::wire::codec::readValue<double>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodDistanceFilter>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodDistanceFilter& obj)
    {
        gm::wire::codec::writeValue(_buf, obj.custom);
        gm::wire::codec::writeValue(_buf, obj.custom_level);
        gm::wire::codec::writeValue(_buf, obj.center_freq);
    }

    template<>
    inline gm_structs::FmodDistanceFilter readValue<gm_structs::FmodDistanceFilter>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodDistanceFilter obj;
        obj.custom = gm::wire::codec::readValue<double>(_buf);
        obj.custom_level = gm::wire::codec::readValue<double>(_buf);
        obj.center_freq = gm::wire::codec::readValue<double>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodOcclusion>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodOcclusion& obj)
    {
        gm::wire::codec::writeValue(_buf, obj.direct);
        gm::wire::codec::writeValue(_buf, obj.reverb);
    }

    template<>
    inline gm_structs::FmodOcclusion readValue<gm_structs::FmodOcclusion>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodOcclusion obj;
        obj.direct = gm::wire::codec::readValue<double>(_buf);
        obj.reverb = gm::wire::codec::readValue<double>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodGeometryMaxPolygons>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodGeometryMaxPolygons& obj)
    {
        gm::wire::codec::writeValue(_buf, obj.max_polygons);
        gm::wire::codec::writeValue(_buf, obj.max_vertices);
    }

    template<>
    inline gm_structs::FmodGeometryMaxPolygons readValue<gm_structs::FmodGeometryMaxPolygons>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodGeometryMaxPolygons obj;
        obj.max_polygons = gm::wire::codec::readValue<double>(_buf);
        obj.max_vertices = gm::wire::codec::readValue<double>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodPolygonAttributes>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodPolygonAttributes& obj)
    {
        gm::wire::codec::writeValue(_buf, obj.direct_occlusion);
        gm::wire::codec::writeValue(_buf, obj.reverb_occlusion);
        gm::wire::codec::writeValue(_buf, obj.double_sided);
    }

    template<>
    inline gm_structs::FmodPolygonAttributes readValue<gm_structs::FmodPolygonAttributes>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodPolygonAttributes obj;
        obj.direct_occlusion = gm::wire::codec::readValue<double>(_buf);
        obj.reverb_occlusion = gm::wire::codec::readValue<double>(_buf);
        obj.double_sided = gm::wire::codec::readValue<double>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodReverbProperties>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodReverbProperties& obj)
    {
        gm::wire::codec::writeValue(_buf, obj.decay_time);
        gm::wire::codec::writeValue(_buf, obj.early_delay);
        gm::wire::codec::writeValue(_buf, obj.late_delay);
        gm::wire::codec::writeValue(_buf, obj.hf_reference);
        gm::wire::codec::writeValue(_buf, obj.hf_decay_ratio);
        gm::wire::codec::writeValue(_buf, obj.diffusion);
        gm::wire::codec::writeValue(_buf, obj.density);
        gm::wire::codec::writeValue(_buf, obj.low_shelf_frequency);
        gm::wire::codec::writeValue(_buf, obj.low_shelf_gain);
        gm::wire::codec::writeValue(_buf, obj.high_cut);
        gm::wire::codec::writeValue(_buf, obj.early_late_mix);
        gm::wire::codec::writeValue(_buf, obj.wet_level);
    }

    template<>
    inline gm_structs::FmodReverbProperties readValue<gm_structs::FmodReverbProperties>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodReverbProperties obj;
        obj.decay_time = gm::wire::codec::readValue<double>(_buf);
        obj.early_delay = gm::wire::codec::readValue<double>(_buf);
        obj.late_delay = gm::wire::codec::readValue<double>(_buf);
        obj.hf_reference = gm::wire::codec::readValue<double>(_buf);
        obj.hf_decay_ratio = gm::wire::codec::readValue<double>(_buf);
        obj.diffusion = gm::wire::codec::readValue<double>(_buf);
        obj.density = gm::wire::codec::readValue<double>(_buf);
        obj.low_shelf_frequency = gm::wire::codec::readValue<double>(_buf);
        obj.low_shelf_gain = gm::wire::codec::readValue<double>(_buf);
        obj.high_cut = gm::wire::codec::readValue<double>(_buf);
        obj.early_late_mix = gm::wire::codec::readValue<double>(_buf);
        obj.wet_level = gm::wire::codec::readValue<double>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodSoundLockLengths>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodSoundLockLengths& obj)
    {
        gm::wire::codec::writeValue(_buf, obj.length1);
        gm::wire::codec::writeValue(_buf, obj.length2);
    }

    template<>
    inline gm_structs::FmodSoundLockLengths readValue<gm_structs::FmodSoundLockLengths>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodSoundLockLengths obj;
        obj.length1 = gm::wire::codec::readValue<double>(_buf);
        obj.length2 = gm::wire::codec::readValue<double>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodMemoryStats>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodMemoryStats& obj)
    {
        gm::wire::codec::writeValue(_buf, obj.current_alloced);
        gm::wire::codec::writeValue(_buf, obj.max_alloced);
    }

    template<>
    inline gm_structs::FmodMemoryStats readValue<gm_structs::FmodMemoryStats>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodMemoryStats obj;
        obj.current_alloced = gm::wire::codec::readValue<double>(_buf);
        obj.max_alloced = gm::wire::codec::readValue<double>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodAdvancedSettings>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodAdvancedSettings& obj)
    {
        gm::wire::codec::writeValue(_buf, obj.max_mpeg_codecs);
        gm::wire::codec::writeValue(_buf, obj.max_adpcm_codecs);
        gm::wire::codec::writeValue(_buf, obj.max_xma_codecs);
        gm::wire::codec::writeValue(_buf, obj.max_vorbis_codecs);
        gm::wire::codec::writeValue(_buf, obj.max_at9_codecs);
        gm::wire::codec::writeValue(_buf, obj.max_fadpcm_codecs);
        gm::wire::codec::writeValue(_buf, obj.max_pcm_codecs);
        gm::wire::codec::writeValue(_buf, obj.asio_num_channels);
        gm::wire::codec::writeValue(_buf, obj.vol0_virtualvol);
        gm::wire::codec::writeValue(_buf, obj.default_decode_buffer_size);
        gm::wire::codec::writeValue(_buf, obj.profile_port);
        gm::wire::codec::writeValue(_buf, obj.geometry_max_fade_time);
        gm::wire::codec::writeValue(_buf, obj.distance_filter_center_freq);
        gm::wire::codec::writeValue(_buf, obj.reverb3d_instance);
        gm::wire::codec::writeValue(_buf, obj.dsp_buffer_pool_size);
        gm::wire::codec::writeValue(_buf, obj.resampler_method);
        gm::wire::codec::writeValue(_buf, obj.random_seed);
        gm::wire::codec::writeValue(_buf, obj.max_convolution_threads);
        gm::wire::codec::writeValue(_buf, obj.max_opus_codecs);
    }

    template<>
    inline gm_structs::FmodAdvancedSettings readValue<gm_structs::FmodAdvancedSettings>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodAdvancedSettings obj;
        obj.max_mpeg_codecs = gm::wire::codec::readValue<double>(_buf);
        obj.max_adpcm_codecs = gm::wire::codec::readValue<double>(_buf);
        obj.max_xma_codecs = gm::wire::codec::readValue<double>(_buf);
        obj.max_vorbis_codecs = gm::wire::codec::readValue<double>(_buf);
        obj.max_at9_codecs = gm::wire::codec::readValue<double>(_buf);
        obj.max_fadpcm_codecs = gm::wire::codec::readValue<double>(_buf);
        obj.max_pcm_codecs = gm::wire::codec::readValue<double>(_buf);
        obj.asio_num_channels = gm::wire::codec::readValue<double>(_buf);
        obj.vol0_virtualvol = gm::wire::codec::readValue<double>(_buf);
        obj.default_decode_buffer_size = gm::wire::codec::readValue<double>(_buf);
        obj.profile_port = gm::wire::codec::readValue<double>(_buf);
        obj.geometry_max_fade_time = gm::wire::codec::readValue<double>(_buf);
        obj.distance_filter_center_freq = gm::wire::codec::readValue<double>(_buf);
        obj.reverb3d_instance = gm::wire::codec::readValue<double>(_buf);
        obj.dsp_buffer_pool_size = gm::wire::codec::readValue<double>(_buf);
        obj.resampler_method = gm::wire::codec::readValue<double>(_buf);
        obj.random_seed = gm::wire::codec::readValue<double>(_buf);
        obj.max_convolution_threads = gm::wire::codec::readValue<double>(_buf);
        obj.max_opus_codecs = gm::wire::codec::readValue<double>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodSpeakerPosition>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodSpeakerPosition& obj)
    {
        gm::wire::codec::writeValue(_buf, obj.x);
        gm::wire::codec::writeValue(_buf, obj.y);
        gm::wire::codec::writeValue(_buf, obj.active);
    }

    template<>
    inline gm_structs::FmodSpeakerPosition readValue<gm_structs::FmodSpeakerPosition>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodSpeakerPosition obj;
        obj.x = gm::wire::codec::readValue<double>(_buf);
        obj.y = gm::wire::codec::readValue<double>(_buf);
        obj.active = gm::wire::codec::readValue<double>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodCPUUsage>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodCPUUsage& obj)
    {
        gm::wire::codec::writeValue(_buf, obj.dsp);
        gm::wire::codec::writeValue(_buf, obj.stream);
        gm::wire::codec::writeValue(_buf, obj.geometry);
        gm::wire::codec::writeValue(_buf, obj.update);
        gm::wire::codec::writeValue(_buf, obj.convolution1);
        gm::wire::codec::writeValue(_buf, obj.convolution2);
    }

    template<>
    inline gm_structs::FmodCPUUsage readValue<gm_structs::FmodCPUUsage>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodCPUUsage obj;
        obj.dsp = gm::wire::codec::readValue<double>(_buf);
        obj.stream = gm::wire::codec::readValue<double>(_buf);
        obj.geometry = gm::wire::codec::readValue<double>(_buf);
        obj.update = gm::wire::codec::readValue<double>(_buf);
        obj.convolution1 = gm::wire::codec::readValue<double>(_buf);
        obj.convolution2 = gm::wire::codec::readValue<double>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodFileUsage>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodFileUsage& obj)
    {
        gm::wire::codec::writeValue(_buf, obj.sample_bytes_read);
        gm::wire::codec::writeValue(_buf, obj.stream_bytes_read);
        gm::wire::codec::writeValue(_buf, obj.other_bytes_read);
    }

    template<>
    inline gm_structs::FmodFileUsage readValue<gm_structs::FmodFileUsage>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodFileUsage obj;
        obj.sample_bytes_read = gm::wire::codec::readValue<double>(_buf);
        obj.stream_bytes_read = gm::wire::codec::readValue<double>(_buf);
        obj.other_bytes_read = gm::wire::codec::readValue<double>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodStreamBufferSize>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodStreamBufferSize& obj)
    {
        gm::wire::codec::writeValue(_buf, obj.file_buffer_size);
        gm::wire::codec::writeValue(_buf, obj.file_buffer_size_type);
    }

    template<>
    inline gm_structs::FmodStreamBufferSize readValue<gm_structs::FmodStreamBufferSize>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodStreamBufferSize obj;
        obj.file_buffer_size = gm::wire::codec::readValue<double>(_buf);
        obj.file_buffer_size_type = gm::wire::codec::readValue<double>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodCreateSoundExInfo>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodCreateSoundExInfo& obj)
    {
        gm::wire::codec::writeValue(_buf, obj.length);
        gm::wire::codec::writeValue(_buf, obj.file_offset);
        gm::wire::codec::writeValue(_buf, obj.num_channels);
        gm::wire::codec::writeValue(_buf, obj.default_frequency);
        gm::wire::codec::writeValue(_buf, obj.format);
        gm::wire::codec::writeValue(_buf, obj.decode_buffer_size);
        gm::wire::codec::writeValue(_buf, obj.initial_subsound);
        gm::wire::codec::writeValue(_buf, obj.num_subsounds);
        gm::wire::codec::writeValue(_buf, obj.inclusion_list_num);
        gm::wire::codec::writeValue(_buf, obj.dls_name);
        gm::wire::codec::writeValue(_buf, obj.encryption_key);
        gm::wire::codec::writeValue(_buf, obj.max_polyphony);
        gm::wire::codec::writeValue(_buf, obj.suggested_sound_type);
        gm::wire::codec::writeValue(_buf, obj.file_buffer_size);
        gm::wire::codec::writeValue(_buf, obj.channel_order);
        gm::wire::codec::writeValue(_buf, obj.initial_sound_group);
        gm::wire::codec::writeValue(_buf, obj.initial_seek_position);
        gm::wire::codec::writeValue(_buf, obj.initial_seek_pos_type);
        gm::wire::codec::writeValue(_buf, obj.ignore_set_filesystem);
        gm::wire::codec::writeValue(_buf, obj.audio_queue_policy);
        gm::wire::codec::writeValue(_buf, obj.min_midi_granularity);
        gm::wire::codec::writeValue(_buf, obj.non_block_thread_id);
    }

    template<>
    inline gm_structs::FmodCreateSoundExInfo readValue<gm_structs::FmodCreateSoundExInfo>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodCreateSoundExInfo obj;
        obj.length = gm::wire::codec::readValue<double>(_buf);
        obj.file_offset = gm::wire::codec::readValue<double>(_buf);
        obj.num_channels = gm::wire::codec::readValue<double>(_buf);
        obj.default_frequency = gm::wire::codec::readValue<double>(_buf);
        obj.format = gm::wire::codec::readValue<gm_enums::FmodSoundFormat>(_buf);
        obj.decode_buffer_size = gm::wire::codec::readValue<double>(_buf);
        obj.initial_subsound = gm::wire::codec::readValue<double>(_buf);
        obj.num_subsounds = gm::wire::codec::readValue<double>(_buf);
        obj.inclusion_list_num = gm::wire::codec::readValue<double>(_buf);
        obj.dls_name = gm::wire::codec::readValue<std::string>(_buf);
        obj.encryption_key = gm::wire::codec::readValue<std::string>(_buf);
        obj.max_polyphony = gm::wire::codec::readValue<double>(_buf);
        obj.suggested_sound_type = gm::wire::codec::readValue<double>(_buf);
        obj.file_buffer_size = gm::wire::codec::readValue<double>(_buf);
        obj.channel_order = gm::wire::codec::readValue<double>(_buf);
        obj.initial_sound_group = gm::wire::codec::readValue<std::uint64_t>(_buf);
        obj.initial_seek_position = gm::wire::codec::readValue<double>(_buf);
        obj.initial_seek_pos_type = gm::wire::codec::readValue<double>(_buf);
        obj.ignore_set_filesystem = gm::wire::codec::readValue<double>(_buf);
        obj.audio_queue_policy = gm::wire::codec::readValue<double>(_buf);
        obj.min_midi_granularity = gm::wire::codec::readValue<double>(_buf);
        obj.non_block_thread_id = gm::wire::codec::readValue<double>(_buf);
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

    template<>
    inline void writeValue<gm_structs::FmodGeometryRotation>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodGeometryRotation& obj)
    {
        gm::wire::codec::writeValue(_buf, obj.forward);
        gm::wire::codec::writeValue(_buf, obj.up);
    }

    template<>
    inline gm_structs::FmodGeometryRotation readValue<gm_structs::FmodGeometryRotation>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodGeometryRotation obj;
        obj.forward = gm::wire::codec::readValue<gm_structs::FmodVec3>(_buf);
        obj.up = gm::wire::codec::readValue<gm_structs::FmodVec3>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodReverb3DAttributes>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodReverb3DAttributes& obj)
    {
        gm::wire::codec::writeValue(_buf, obj.position);
        gm::wire::codec::writeValue(_buf, obj.min_distance);
        gm::wire::codec::writeValue(_buf, obj.max_distance);
    }

    template<>
    inline gm_structs::FmodReverb3DAttributes readValue<gm_structs::FmodReverb3DAttributes>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodReverb3DAttributes obj;
        obj.position = gm::wire::codec::readValue<gm_structs::FmodVec3>(_buf);
        obj.min_distance = gm::wire::codec::readValue<double>(_buf);
        obj.max_distance = gm::wire::codec::readValue<double>(_buf);
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
    struct gm_struct_traits<gm_structs::FmodFadePoint>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 25;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodDistanceFilter>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 26;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodOcclusion>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 27;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodGeometryMaxPolygons>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 28;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodPolygonAttributes>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 29;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodReverbProperties>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 30;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodSoundLockLengths>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 31;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodMemoryStats>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 32;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodAdvancedSettings>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 33;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodSpeakerPosition>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 34;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodCPUUsage>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 35;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodFileUsage>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 36;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodStreamBufferSize>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 37;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodCreateSoundExInfo>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 38;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodListener3DAttributes>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 39;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodChannelControl3DAttributes>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 40;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodGeometryRotation>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 41;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodReverb3DAttributes>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 42;
    };

}

gm_enums::FmodResult fmod_last_result();
void fmod_debug_initialize(gm_enums::FmodDebugFlags flags, gm_enums::FmodDebugMode mode);
std::string fmod_path_bundle(std::string_view filename);
std::string fmod_path_user(std::string_view filename);
std::string fmod_error_string(gm_enums::FmodResult result);
double fmod_fetch_callbacks();
double fmod_file_get_disk_busy();
double fmod_file_set_disk_busy(double busy);
gm_structs::FmodMemoryStats fmod_memory_get_stats(double blocking);
double fmod_thread_set_attributes(double thread_type, double affinity, double priority);
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
gm_structs::FmodLoopPoints fmod_channel_get_loop_points(std::uint64_t channel_ref, double start_type, double end_type);
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
double fmod_system_count();
double fmod_system_get_version();
std::uint64_t fmod_system_get_master_sound_group();
gm_structs::FmodAdvancedSettings fmod_system_get_advanced_settings();
double fmod_system_set_advanced_settings(const gm_structs::FmodAdvancedSettings& settings);
std::string fmod_system_get_network_proxy();
double fmod_system_set_network_proxy(std::string_view proxy);
double fmod_system_get_network_timeout();
double fmod_system_set_network_timeout(double timeout_ms);
double fmod_system_get_speaker_mode_channels(gm_enums::FmodSpeakerMode mode);
gm_structs::FmodSpeakerPosition fmod_system_get_speaker_position(double speaker);
double fmod_system_set_speaker_position(double speaker, double x, double y, double active);
gm_structs::FmodReverbProperties fmod_system_get_reverb_properties(double instance);
double fmod_system_set_reverb_properties(double instance, const gm_structs::FmodReverbProperties& props);
gm_structs::FmodDSPMixMatrix fmod_system_get_default_mix_matrix(gm_enums::FmodSpeakerMode source_speaker_mode, gm_enums::FmodSpeakerMode target_speaker_mode);
gm_structs::FmodCPUUsage fmod_system_get_cpu_usage();
gm_structs::FmodFileUsage fmod_system_get_file_usage();
gm_structs::FmodStreamBufferSize fmod_system_get_stream_buffer_size();
double fmod_system_get_3d_num_listeners();
double fmod_system_set_3d_num_listeners(double num);
double fmod_system_set_3d_rolloff_callback();
double fmod_system_mixer_suspend();
double fmod_system_mixer_resume();
double fmod_system_lock_dsp();
double fmod_system_unlock_dsp();
double fmod_system_get_user_data();
double fmod_system_set_user_data(double user_data);
double fmod_system_attach_channel_group_to_port(double port_type, double port_index, std::uint64_t channel_group_ref, double pass_thru);
double fmod_system_detach_channel_group_from_port(std::uint64_t channel_group_ref);
std::uint64_t fmod_system_create_sound_group(std::string_view name);
std::uint64_t fmod_system_create_geometry(double max_polygons, double max_vertices);
std::optional<std::uint64_t> fmod_system_load_geometry(gm::wire::GMBuffer data, double data_size);
gm_structs::FmodOcclusion fmod_system_get_geometry_occlusion(const gm_structs::FmodVec3& listener, const gm_structs::FmodVec3& source);
double fmod_system_get_geometry_settings();
double fmod_system_set_geometry_settings(double max_world_size);
std::uint64_t fmod_system_create_reverb_3d();
std::uint64_t fmod_system_create_sound(std::string_view name_or_data, double mode);
std::uint64_t fmod_system_create_sound_ex(std::string_view name_or_data, double mode, const gm_structs::FmodCreateSoundExInfo& ex_info);
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
double fmod_sound_set_user_data(std::uint64_t sound_ref, double user_data);
double fmod_sound_get_user_data(std::uint64_t sound_ref);
double fmod_sound_release(std::uint64_t sound_ref);
std::uint64_t fmod_sound_get_system_object(std::uint64_t sound_ref);
gm_structs::FmodSoundOpenState fmod_sound_get_open_state(std::uint64_t sound_ref);
double fmod_sound_get_num_tags(std::uint64_t sound_ref);
gm_structs::FmodSoundTag fmod_sound_get_tag(std::uint64_t sound_ref, std::string_view name, double index);
double fmod_sound_get_num_sub_sounds(std::uint64_t sound_ref);
std::uint64_t fmod_sound_get_sub_sound(std::uint64_t sound_ref, double index);
std::optional<std::uint64_t> fmod_sound_get_sub_sound_parent(std::uint64_t sound_ref);
double fmod_sound_read_data(std::uint64_t sound_ref, gm::wire::GMBuffer data, double length);
double fmod_sound_seek_data(std::uint64_t sound_ref, double pcm);
gm_structs::FmodSoundLockLengths fmod_sound_lock(std::uint64_t sound_ref, double offset, double length, gm::wire::GMBuffer buffer1, gm::wire::GMBuffer buffer2);
double fmod_sound_unlock(std::uint64_t sound_ref, gm::wire::GMBuffer buffer1, gm::wire::GMBuffer buffer2, double length1, double length2);
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
double fmod_sound_group_set_user_data(std::uint64_t sound_group_ref, double user_data);
double fmod_sound_group_get_user_data(std::uint64_t sound_group_ref);
std::string fmod_sound_group_get_name(std::uint64_t sound_group_ref);
double fmod_sound_group_release(std::uint64_t sound_group_ref);
std::uint64_t fmod_sound_group_get_system_object(std::uint64_t sound_group_ref);
double fmod_reverb_3d_set_active(std::uint64_t reverb_3d_ref, double active);
double fmod_reverb_3d_get_active(std::uint64_t reverb_3d_ref);
double fmod_reverb_3d_set_properties(std::uint64_t reverb_3d_ref, double decay_time, double early_delay, double late_delay, double hf_reference, double hf_decay_ratio, double diffusion, double density, double low_shelf_frequency, double low_shelf_gain, double high_cut, double early_late_mix, double wet_level);
gm_structs::FmodReverbProperties fmod_reverb_3d_get_properties(std::uint64_t reverb_3d_ref);
double fmod_reverb_3d_set_3d_attributes(std::uint64_t reverb_3d_ref, const gm_structs::FmodVec3& position, double min_distance, double max_distance);
gm_structs::FmodReverb3DAttributes fmod_reverb_3d_get_3d_attributes(std::uint64_t reverb_3d_ref);
double fmod_reverb_3d_set_user_data(std::uint64_t reverb_3d_ref, double user_data);
double fmod_reverb_3d_get_user_data(std::uint64_t reverb_3d_ref);
double fmod_reverb_3d_release(std::uint64_t reverb_3d_ref);
double fmod_channel_control_add_fade_point(std::uint64_t channel_control_ref, double dsp_clock, double volume);
double fmod_channel_control_remove_fade_points(std::uint64_t channel_control_ref, double dsp_clock_start, double dsp_clock_end);
double fmod_channel_control_set_fade_point_ramp(std::uint64_t channel_control_ref, double dsp_clock, double volume);
double fmod_channel_control_get_fade_point_count(std::uint64_t channel_control_ref);
gm_structs::FmodFadePoint fmod_channel_control_get_fade_point_at(std::uint64_t channel_control_ref, double index);
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
gm_structs::FmodMinMaxDistance fmod_channel_control_get_3d_min_max_distance(std::uint64_t channel_control_ref);
double fmod_channel_control_set_3d_cone_settings(std::uint64_t channel_control_ref, double inside_cone_angle, double outside_cone_angle, double outside_volume);
gm_structs::FmodConeSettings fmod_channel_control_get_3d_cone_settings(std::uint64_t channel_control_ref);
double fmod_channel_control_set_3d_cone_orientation(std::uint64_t channel_control_ref, const gm_structs::FmodVec3& orientation);
gm_structs::FmodVec3 fmod_channel_control_get_3d_cone_orientation(std::uint64_t channel_control_ref);
double fmod_channel_control_set_3d_occlusion(std::uint64_t channel_control_ref, double direct_occlusion, double reverb_occlusion);
gm_structs::FmodOcclusion fmod_channel_control_get_3d_occlusion(std::uint64_t channel_control_ref);
double fmod_channel_control_set_3d_attributes(std::uint64_t channel_control_ref, const gm_structs::FmodVec3& position, const gm_structs::FmodVec3& velocity);
gm_structs::FmodChannelControl3DAttributes fmod_channel_control_get_3d_attributes(std::uint64_t channel_control_ref);
double fmod_channel_control_set_3d_spread(std::uint64_t channel_control_ref, double angle);
double fmod_channel_control_get_3d_spread(std::uint64_t channel_control_ref);
double fmod_channel_control_set_3d_distance_filter(std::uint64_t channel_control_ref, double custom, double custom_level, double center_freq);
gm_structs::FmodDistanceFilter fmod_channel_control_get_3d_distance_filter(std::uint64_t channel_control_ref);
double fmod_channel_control_set_3d_custom_rolloff(std::uint64_t channel_control_ref, const gm::wire::GMValue& points, double num_points);
double fmod_channel_control_get_3d_custom_rolloff_count(std::uint64_t channel_control_ref);
gm_structs::FmodVec3 fmod_channel_control_get_3d_custom_rolloff_at(std::uint64_t channel_control_ref, double index);
double fmod_channel_control_set_pan(std::uint64_t channel_control_ref, double pan);
double fmod_channel_control_set_mix_levels_output(std::uint64_t channel_control_ref, double front_left, double front_right, double center, double lfe, double surround_left, double surround_right, double back_left, double back_right);
double fmod_channel_control_set_mix_levels_input(std::uint64_t channel_control_ref, double levels, double num_levels);
double fmod_channel_control_set_mix_matrix(std::uint64_t channel_control_ref, double matrix, double out_channels, double in_channels, double in_channel_hop);
gm_structs::FmodDSPMixMatrix fmod_channel_control_get_mix_matrix(std::uint64_t channel_control_ref, double in_channel_hop);
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
double fmod_channel_control_set_user_data(std::uint64_t channel_control_ref, double user_data);
double fmod_channel_control_get_user_data(std::uint64_t channel_control_ref);
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
void fmod_dsp_set_parameter_data(std::uint64_t dsp_ref, double index, gm::wire::GMBuffer buffer, double length);
double fmod_dsp_get_parameter_data(std::uint64_t dsp_ref, double index, gm::wire::GMBuffer buffer, double length);
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
double fmod_geometry_add_polygon(std::uint64_t geometry_ref, double direct_occlusion, double reverb_occlusion, double double_sided, double num_vertices, gm::wire::GMBuffer vertices);
double fmod_geometry_set_polygon_attributes(std::uint64_t geometry_ref, double polygon_index, double direct_occlusion, double reverb_occlusion, double double_sided);
gm_structs::FmodPolygonAttributes fmod_geometry_get_polygon_attributes(std::uint64_t geometry_ref, double polygon_index);
double fmod_geometry_get_polygon_num_vertices(std::uint64_t geometry_ref, double polygon_index);
double fmod_geometry_set_polygon_vertex(std::uint64_t geometry_ref, double polygon_index, double vertex_index, const gm_structs::FmodVec3& vertex);
gm_structs::FmodVec3 fmod_geometry_get_polygon_vertex(std::uint64_t geometry_ref, double polygon_index, double vertex_index);
double fmod_geometry_get_num_polygons(std::uint64_t geometry_ref);
gm_structs::FmodGeometryMaxPolygons fmod_geometry_get_max_polygons(std::uint64_t geometry_ref);
double fmod_geometry_set_position(std::uint64_t geometry_ref, double x, double y, double z);
gm_structs::FmodVec3 fmod_geometry_get_position(std::uint64_t geometry_ref);
double fmod_geometry_set_rotation(std::uint64_t geometry_ref, double forward_x, double forward_y, double forward_z, double up_x, double up_y, double up_z);
gm_structs::FmodGeometryRotation fmod_geometry_get_rotation(std::uint64_t geometry_ref);
double fmod_geometry_set_scale(std::uint64_t geometry_ref, double scale_x, double scale_y, double scale_z);
gm_structs::FmodVec3 fmod_geometry_get_scale(std::uint64_t geometry_ref);
double fmod_geometry_set_user_data(std::uint64_t geometry_ref, double user_data);
double fmod_geometry_get_user_data(std::uint64_t geometry_ref);
double fmod_geometry_get_active(std::uint64_t geometry_ref);
double fmod_geometry_set_active(std::uint64_t geometry_ref, double active);
double fmod_geometry_save(std::uint64_t geometry_ref, std::string_view filename);
double fmod_geometry_release(std::uint64_t geometry_ref);
