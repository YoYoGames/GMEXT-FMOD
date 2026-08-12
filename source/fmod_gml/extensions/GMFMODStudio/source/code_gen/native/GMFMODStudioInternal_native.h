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
    enum class FmodStudioResult : std::int64_t
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

    enum class FmodStudioDebugFlags : std::int64_t
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

    enum class FmodStudioDebugMode : std::int64_t
    {
        Tty = 0,
        File = 1,
        Callback = 2
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

    enum class FmodStudioMode : std::int64_t
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

    enum class FmodStudioSoundFormat : std::int64_t
    {
        None = 0,
        Pcm8 = 1,
        Pcm16 = 2,
        Pcm24 = 3,
        Pcm32 = 4,
        PcmFloat = 5,
        BitStream = 6
    };

}


namespace gm_structs
{
    struct FmodStudioParameterDescription;
    struct FmodStudioStringInfo;
    struct FmodStudioCPUUsage;
    struct FmodStudioMemoryUsage;
    struct FmodStudioCommandInfo;
    struct FmodStudioCurrentCommand;
    struct FmodStudioUserProperty;
    struct FmodStudioVec3;
    struct FmodStudioMinMaxDistance;
    struct FmodStudioCoreCPUUsage;
    struct FmodStudioCreateSoundExInfo;
    struct FmodStudioBufferInfo;
    struct FmodStudioAdvancedSettings;
    struct FmodStudioParameterValue;
    struct FmodStudioListener3DAttributes;
    struct FmodStudioChannelControl3DAttributes;
    struct FmodStudioSystemCPUUsage;
    struct FmodStudioSoundInfo;
    struct FmodStudioBufferUsage;
    struct FmodStudioListenerAttributes;

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

    struct FmodStudioStringInfo
    {
        std::string guid;
        std::string path;
    };

    struct FmodStudioCPUUsage
    {
        double exclusive;
        double inclusive;
    };

    struct FmodStudioMemoryUsage
    {
        double exclusive;
        double inclusive;
        double sample_data;
    };

    struct FmodStudioCommandInfo
    {
        std::string command_name;
        double parent_command_index;
        double frame_time;
        double instance_type;
        double output_type;
        double instance_handle;
        double output_handle;
    };

    struct FmodStudioCurrentCommand
    {
        double command_index;
        double current_time;
    };

    struct FmodStudioUserProperty
    {
        std::string name;
        gm_enums::FmodStudioUserPropertyType type;
        std::string string_value;
        double int_value;
        double bool_value;
        double float_value;
    };

    struct FmodStudioVec3
    {
        double x;
        double y;
        double z;
    };

    struct FmodStudioMinMaxDistance
    {
        double min_distance;
        double max_distance;
    };

    struct FmodStudioCoreCPUUsage
    {
        double dsp;
        double stream;
        double geometry;
        double update;
        double convolution1;
        double convolution2;
    };

    struct FmodStudioCreateSoundExInfo
    {
        double length;
        double file_offset;
        double num_channels;
        double default_frequency;
        gm_enums::FmodStudioSoundFormat format;
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

    struct FmodStudioBufferInfo
    {
        double current_usage;
        double peak_usage;
        double capacity;
        double stall_count;
        double stall_time;
    };

    struct FmodStudioAdvancedSettings
    {
        double command_queue_size;
        double handle_initial_size;
        double studio_update_period;
        double idle_sampledata_pool_size;
        double streaming_schedule_delay;
        std::string encryption_key;
    };

    struct FmodStudioParameterValue
    {
        double value;
        double final_value;
    };

    struct FmodStudioListener3DAttributes
    {
        gm_structs::FmodStudioVec3 position;
        gm_structs::FmodStudioVec3 velocity;
        gm_structs::FmodStudioVec3 forward;
        gm_structs::FmodStudioVec3 up;
    };

    struct FmodStudioChannelControl3DAttributes
    {
        gm_structs::FmodStudioVec3 position;
        gm_structs::FmodStudioVec3 velocity;
    };

    struct FmodStudioSystemCPUUsage
    {
        double studio_update;
        gm_structs::FmodStudioCoreCPUUsage core;
    };

    struct FmodStudioSoundInfo
    {
        gm_structs::FmodStudioCreateSoundExInfo ext_info;
        std::string name_or_data;
        gm_enums::FmodStudioMode mode;
        double sub_sound_index;
    };

    struct FmodStudioBufferUsage
    {
        gm_structs::FmodStudioBufferInfo command_queue;
        gm_structs::FmodStudioBufferInfo handle;
    };

    struct FmodStudioListenerAttributes
    {
        gm_structs::FmodStudioListener3DAttributes attributes;
        gm_structs::FmodStudioVec3 attenuation;
    };

}

namespace gm::wire::codec
{
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
    inline void writeValue<gm_structs::FmodStudioStringInfo>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodStudioStringInfo& obj)
    {
        gm::wire::codec::writeValue(_buf, obj.guid);
        gm::wire::codec::writeValue(_buf, obj.path);
    }

    template<>
    inline gm_structs::FmodStudioStringInfo readValue<gm_structs::FmodStudioStringInfo>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodStudioStringInfo obj;
        obj.guid = gm::wire::codec::readValue<std::string>(_buf);
        obj.path = gm::wire::codec::readValue<std::string>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodStudioCPUUsage>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodStudioCPUUsage& obj)
    {
        gm::wire::codec::writeValue(_buf, obj.exclusive);
        gm::wire::codec::writeValue(_buf, obj.inclusive);
    }

    template<>
    inline gm_structs::FmodStudioCPUUsage readValue<gm_structs::FmodStudioCPUUsage>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodStudioCPUUsage obj;
        obj.exclusive = gm::wire::codec::readValue<double>(_buf);
        obj.inclusive = gm::wire::codec::readValue<double>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodStudioMemoryUsage>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodStudioMemoryUsage& obj)
    {
        gm::wire::codec::writeValue(_buf, obj.exclusive);
        gm::wire::codec::writeValue(_buf, obj.inclusive);
        gm::wire::codec::writeValue(_buf, obj.sample_data);
    }

    template<>
    inline gm_structs::FmodStudioMemoryUsage readValue<gm_structs::FmodStudioMemoryUsage>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodStudioMemoryUsage obj;
        obj.exclusive = gm::wire::codec::readValue<double>(_buf);
        obj.inclusive = gm::wire::codec::readValue<double>(_buf);
        obj.sample_data = gm::wire::codec::readValue<double>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodStudioCommandInfo>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodStudioCommandInfo& obj)
    {
        gm::wire::codec::writeValue(_buf, obj.command_name);
        gm::wire::codec::writeValue(_buf, obj.parent_command_index);
        gm::wire::codec::writeValue(_buf, obj.frame_time);
        gm::wire::codec::writeValue(_buf, obj.instance_type);
        gm::wire::codec::writeValue(_buf, obj.output_type);
        gm::wire::codec::writeValue(_buf, obj.instance_handle);
        gm::wire::codec::writeValue(_buf, obj.output_handle);
    }

    template<>
    inline gm_structs::FmodStudioCommandInfo readValue<gm_structs::FmodStudioCommandInfo>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodStudioCommandInfo obj;
        obj.command_name = gm::wire::codec::readValue<std::string>(_buf);
        obj.parent_command_index = gm::wire::codec::readValue<double>(_buf);
        obj.frame_time = gm::wire::codec::readValue<double>(_buf);
        obj.instance_type = gm::wire::codec::readValue<double>(_buf);
        obj.output_type = gm::wire::codec::readValue<double>(_buf);
        obj.instance_handle = gm::wire::codec::readValue<double>(_buf);
        obj.output_handle = gm::wire::codec::readValue<double>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodStudioCurrentCommand>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodStudioCurrentCommand& obj)
    {
        gm::wire::codec::writeValue(_buf, obj.command_index);
        gm::wire::codec::writeValue(_buf, obj.current_time);
    }

    template<>
    inline gm_structs::FmodStudioCurrentCommand readValue<gm_structs::FmodStudioCurrentCommand>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodStudioCurrentCommand obj;
        obj.command_index = gm::wire::codec::readValue<double>(_buf);
        obj.current_time = gm::wire::codec::readValue<double>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodStudioUserProperty>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodStudioUserProperty& obj)
    {
        gm::wire::codec::writeValue(_buf, obj.name);
        gm::wire::codec::writeValue(_buf, obj.type);
        gm::wire::codec::writeValue(_buf, obj.string_value);
        gm::wire::codec::writeValue(_buf, obj.int_value);
        gm::wire::codec::writeValue(_buf, obj.bool_value);
        gm::wire::codec::writeValue(_buf, obj.float_value);
    }

    template<>
    inline gm_structs::FmodStudioUserProperty readValue<gm_structs::FmodStudioUserProperty>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodStudioUserProperty obj;
        obj.name = gm::wire::codec::readValue<std::string>(_buf);
        obj.type = gm::wire::codec::readValue<gm_enums::FmodStudioUserPropertyType>(_buf);
        obj.string_value = gm::wire::codec::readValue<std::string>(_buf);
        obj.int_value = gm::wire::codec::readValue<double>(_buf);
        obj.bool_value = gm::wire::codec::readValue<double>(_buf);
        obj.float_value = gm::wire::codec::readValue<double>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodStudioVec3>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodStudioVec3& obj)
    {
        gm::wire::codec::writeValue(_buf, obj.x);
        gm::wire::codec::writeValue(_buf, obj.y);
        gm::wire::codec::writeValue(_buf, obj.z);
    }

    template<>
    inline gm_structs::FmodStudioVec3 readValue<gm_structs::FmodStudioVec3>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodStudioVec3 obj;
        obj.x = gm::wire::codec::readValue<double>(_buf);
        obj.y = gm::wire::codec::readValue<double>(_buf);
        obj.z = gm::wire::codec::readValue<double>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodStudioMinMaxDistance>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodStudioMinMaxDistance& obj)
    {
        gm::wire::codec::writeValue(_buf, obj.min_distance);
        gm::wire::codec::writeValue(_buf, obj.max_distance);
    }

    template<>
    inline gm_structs::FmodStudioMinMaxDistance readValue<gm_structs::FmodStudioMinMaxDistance>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodStudioMinMaxDistance obj;
        obj.min_distance = gm::wire::codec::readValue<double>(_buf);
        obj.max_distance = gm::wire::codec::readValue<double>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodStudioCoreCPUUsage>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodStudioCoreCPUUsage& obj)
    {
        gm::wire::codec::writeValue(_buf, obj.dsp);
        gm::wire::codec::writeValue(_buf, obj.stream);
        gm::wire::codec::writeValue(_buf, obj.geometry);
        gm::wire::codec::writeValue(_buf, obj.update);
        gm::wire::codec::writeValue(_buf, obj.convolution1);
        gm::wire::codec::writeValue(_buf, obj.convolution2);
    }

    template<>
    inline gm_structs::FmodStudioCoreCPUUsage readValue<gm_structs::FmodStudioCoreCPUUsage>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodStudioCoreCPUUsage obj;
        obj.dsp = gm::wire::codec::readValue<double>(_buf);
        obj.stream = gm::wire::codec::readValue<double>(_buf);
        obj.geometry = gm::wire::codec::readValue<double>(_buf);
        obj.update = gm::wire::codec::readValue<double>(_buf);
        obj.convolution1 = gm::wire::codec::readValue<double>(_buf);
        obj.convolution2 = gm::wire::codec::readValue<double>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodStudioCreateSoundExInfo>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodStudioCreateSoundExInfo& obj)
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
    inline gm_structs::FmodStudioCreateSoundExInfo readValue<gm_structs::FmodStudioCreateSoundExInfo>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodStudioCreateSoundExInfo obj;
        obj.length = gm::wire::codec::readValue<double>(_buf);
        obj.file_offset = gm::wire::codec::readValue<double>(_buf);
        obj.num_channels = gm::wire::codec::readValue<double>(_buf);
        obj.default_frequency = gm::wire::codec::readValue<double>(_buf);
        obj.format = gm::wire::codec::readValue<gm_enums::FmodStudioSoundFormat>(_buf);
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
    inline void writeValue<gm_structs::FmodStudioBufferInfo>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodStudioBufferInfo& obj)
    {
        gm::wire::codec::writeValue(_buf, obj.current_usage);
        gm::wire::codec::writeValue(_buf, obj.peak_usage);
        gm::wire::codec::writeValue(_buf, obj.capacity);
        gm::wire::codec::writeValue(_buf, obj.stall_count);
        gm::wire::codec::writeValue(_buf, obj.stall_time);
    }

    template<>
    inline gm_structs::FmodStudioBufferInfo readValue<gm_structs::FmodStudioBufferInfo>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodStudioBufferInfo obj;
        obj.current_usage = gm::wire::codec::readValue<double>(_buf);
        obj.peak_usage = gm::wire::codec::readValue<double>(_buf);
        obj.capacity = gm::wire::codec::readValue<double>(_buf);
        obj.stall_count = gm::wire::codec::readValue<double>(_buf);
        obj.stall_time = gm::wire::codec::readValue<double>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodStudioAdvancedSettings>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodStudioAdvancedSettings& obj)
    {
        gm::wire::codec::writeValue(_buf, obj.command_queue_size);
        gm::wire::codec::writeValue(_buf, obj.handle_initial_size);
        gm::wire::codec::writeValue(_buf, obj.studio_update_period);
        gm::wire::codec::writeValue(_buf, obj.idle_sampledata_pool_size);
        gm::wire::codec::writeValue(_buf, obj.streaming_schedule_delay);
        gm::wire::codec::writeValue(_buf, obj.encryption_key);
    }

    template<>
    inline gm_structs::FmodStudioAdvancedSettings readValue<gm_structs::FmodStudioAdvancedSettings>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodStudioAdvancedSettings obj;
        obj.command_queue_size = gm::wire::codec::readValue<double>(_buf);
        obj.handle_initial_size = gm::wire::codec::readValue<double>(_buf);
        obj.studio_update_period = gm::wire::codec::readValue<double>(_buf);
        obj.idle_sampledata_pool_size = gm::wire::codec::readValue<double>(_buf);
        obj.streaming_schedule_delay = gm::wire::codec::readValue<double>(_buf);
        obj.encryption_key = gm::wire::codec::readValue<std::string>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodStudioParameterValue>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodStudioParameterValue& obj)
    {
        gm::wire::codec::writeValue(_buf, obj.value);
        gm::wire::codec::writeValue(_buf, obj.final_value);
    }

    template<>
    inline gm_structs::FmodStudioParameterValue readValue<gm_structs::FmodStudioParameterValue>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodStudioParameterValue obj;
        obj.value = gm::wire::codec::readValue<double>(_buf);
        obj.final_value = gm::wire::codec::readValue<double>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodStudioListener3DAttributes>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodStudioListener3DAttributes& obj)
    {
        gm::wire::codec::writeValue(_buf, obj.position);
        gm::wire::codec::writeValue(_buf, obj.velocity);
        gm::wire::codec::writeValue(_buf, obj.forward);
        gm::wire::codec::writeValue(_buf, obj.up);
    }

    template<>
    inline gm_structs::FmodStudioListener3DAttributes readValue<gm_structs::FmodStudioListener3DAttributes>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodStudioListener3DAttributes obj;
        obj.position = gm::wire::codec::readValue<gm_structs::FmodStudioVec3>(_buf);
        obj.velocity = gm::wire::codec::readValue<gm_structs::FmodStudioVec3>(_buf);
        obj.forward = gm::wire::codec::readValue<gm_structs::FmodStudioVec3>(_buf);
        obj.up = gm::wire::codec::readValue<gm_structs::FmodStudioVec3>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodStudioChannelControl3DAttributes>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodStudioChannelControl3DAttributes& obj)
    {
        gm::wire::codec::writeValue(_buf, obj.position);
        gm::wire::codec::writeValue(_buf, obj.velocity);
    }

    template<>
    inline gm_structs::FmodStudioChannelControl3DAttributes readValue<gm_structs::FmodStudioChannelControl3DAttributes>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodStudioChannelControl3DAttributes obj;
        obj.position = gm::wire::codec::readValue<gm_structs::FmodStudioVec3>(_buf);
        obj.velocity = gm::wire::codec::readValue<gm_structs::FmodStudioVec3>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodStudioSystemCPUUsage>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodStudioSystemCPUUsage& obj)
    {
        gm::wire::codec::writeValue(_buf, obj.studio_update);
        gm::wire::codec::writeValue(_buf, obj.core);
    }

    template<>
    inline gm_structs::FmodStudioSystemCPUUsage readValue<gm_structs::FmodStudioSystemCPUUsage>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodStudioSystemCPUUsage obj;
        obj.studio_update = gm::wire::codec::readValue<double>(_buf);
        obj.core = gm::wire::codec::readValue<gm_structs::FmodStudioCoreCPUUsage>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodStudioSoundInfo>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodStudioSoundInfo& obj)
    {
        gm::wire::codec::writeValue(_buf, obj.ext_info);
        gm::wire::codec::writeValue(_buf, obj.name_or_data);
        gm::wire::codec::writeValue(_buf, obj.mode);
        gm::wire::codec::writeValue(_buf, obj.sub_sound_index);
    }

    template<>
    inline gm_structs::FmodStudioSoundInfo readValue<gm_structs::FmodStudioSoundInfo>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodStudioSoundInfo obj;
        obj.ext_info = gm::wire::codec::readValue<gm_structs::FmodStudioCreateSoundExInfo>(_buf);
        obj.name_or_data = gm::wire::codec::readValue<std::string>(_buf);
        obj.mode = gm::wire::codec::readValue<gm_enums::FmodStudioMode>(_buf);
        obj.sub_sound_index = gm::wire::codec::readValue<double>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodStudioBufferUsage>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodStudioBufferUsage& obj)
    {
        gm::wire::codec::writeValue(_buf, obj.command_queue);
        gm::wire::codec::writeValue(_buf, obj.handle);
    }

    template<>
    inline gm_structs::FmodStudioBufferUsage readValue<gm_structs::FmodStudioBufferUsage>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodStudioBufferUsage obj;
        obj.command_queue = gm::wire::codec::readValue<gm_structs::FmodStudioBufferInfo>(_buf);
        obj.handle = gm::wire::codec::readValue<gm_structs::FmodStudioBufferInfo>(_buf);
        return obj;
    }

    template<>
    inline void writeValue<gm_structs::FmodStudioListenerAttributes>(gm::byteio::IByteWriter& _buf, const gm_structs::FmodStudioListenerAttributes& obj)
    {
        gm::wire::codec::writeValue(_buf, obj.attributes);
        gm::wire::codec::writeValue(_buf, obj.attenuation);
    }

    template<>
    inline gm_structs::FmodStudioListenerAttributes readValue<gm_structs::FmodStudioListenerAttributes>(gm::byteio::BufferReader& _buf)
    {
        gm_structs::FmodStudioListenerAttributes obj;
        obj.attributes = gm::wire::codec::readValue<gm_structs::FmodStudioListener3DAttributes>(_buf);
        obj.attenuation = gm::wire::codec::readValue<gm_structs::FmodStudioVec3>(_buf);
        return obj;
    }

}

namespace gm::wire::details
{
    template<>
    struct gm_struct_traits<gm_structs::FmodStudioParameterDescription>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 0;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodStudioStringInfo>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 1;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodStudioCPUUsage>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 2;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodStudioMemoryUsage>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 3;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodStudioCommandInfo>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 4;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodStudioCurrentCommand>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 5;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodStudioUserProperty>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 6;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodStudioVec3>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 7;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodStudioMinMaxDistance>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 8;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodStudioCoreCPUUsage>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 9;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodStudioCreateSoundExInfo>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 10;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodStudioBufferInfo>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 11;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodStudioAdvancedSettings>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 12;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodStudioParameterValue>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 13;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodStudioListener3DAttributes>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 14;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodStudioChannelControl3DAttributes>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 15;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodStudioSystemCPUUsage>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 16;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodStudioSoundInfo>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 17;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodStudioBufferUsage>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 18;
    };

    template<>
    struct gm_struct_traits<gm_structs::FmodStudioListenerAttributes>
    {
        static constexpr bool is_gm_struct = true;
        static constexpr std::uint32_t codec_id = 19;
    };

}

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
std::optional<std::uint64_t> fmod_studio_system_get_bank_by_id(std::string_view str_guid);
std::optional<std::uint64_t> fmod_studio_system_get_event(std::string_view path);
std::optional<std::uint64_t> fmod_studio_system_create_event_instance(std::string_view path);
std::optional<std::uint64_t> fmod_studio_system_get_bus(std::string_view path);
std::optional<std::uint64_t> fmod_studio_system_get_master_bus();
std::optional<std::uint64_t> fmod_studio_system_get_bus_by_id(std::string_view str_guid);
std::optional<std::uint64_t> fmod_studio_system_get_vca(std::string_view path);
std::optional<std::uint64_t> fmod_studio_system_get_vca_by_id(std::string_view str_guid);
double fmod_studio_system_set_listener_attributes(double listener_index, double x, double y, double z);
double fmod_studio_system_set_listener_weight(double listener_index, double weight);
double fmod_studio_system_get_num_listeners();
gm_structs::FmodStudioListenerAttributes fmod_studio_system_get_listener_attributes(double listener_index);
double fmod_studio_system_get_listener_weight(double listener_index);
double fmod_studio_system_set_parameter_by_name(std::string_view name, double value);
double fmod_studio_system_get_parameter_by_name(std::string_view name);
std::uint64_t fmod_studio_system_get_core_system();
std::uint64_t fmod_studio_system_get_core_system_ptr();
gm_enums::FmodStudioResult fmod_studio_last_result();
double fmod_studio_system_set_num_listeners(double count);
std::string fmod_studio_system_lookup_id(std::string_view path);
std::string fmod_studio_system_lookup_path(std::string_view str_guid);
std::uint64_t fmod_studio_system_get_event_by_id(std::string_view id);
double fmod_studio_system_is_valid();
double fmod_studio_system_start_command_capture(std::string_view filename, gm_enums::FmodStudioCommandCaptureFlags flags);
double fmod_studio_system_stop_command_capture();
std::uint64_t fmod_studio_system_load_command_replay(std::string_view filename, gm_enums::FmodStudioCommandReplayFlags flags);
gm_structs::FmodStudioSoundInfo fmod_studio_system_get_sound_info(std::string_view key);
gm_structs::FmodStudioParameterValue fmod_studio_system_get_parameter_by_id(double id_data1, double id_data2);
double fmod_studio_system_set_parameter_by_id(double id_data1, double id_data2, double value, double ignore_seek_speed);
gm_structs::FmodStudioParameterDescription fmod_studio_system_get_parameter_description_by_id(double id_data1, double id_data2);
gm_structs::FmodStudioParameterDescription fmod_studio_system_get_parameter_description_by_name(std::string_view name);
double fmod_studio_system_get_parameter_description_count();
gm_structs::FmodStudioParameterDescription fmod_studio_system_get_parameter_description_at(double index);
std::string fmod_studio_system_get_parameter_label_by_id(double id_data1, double id_data2, double label_index);
std::string fmod_studio_system_get_parameter_label_by_name(std::string_view name, double label_index);
double fmod_studio_system_set_parameter_by_id_with_label(double id_data1, double id_data2, std::string_view label, double ignore_seek_speed);
double fmod_studio_system_set_parameter_by_name_with_label(std::string_view name, std::string_view label, double ignore_seek_speed);
gm_structs::FmodStudioSystemCPUUsage fmod_studio_system_get_cpu_usage();
gm_structs::FmodStudioBufferUsage fmod_studio_system_get_buffer_usage();
double fmod_studio_system_reset_buffer_usage();
gm_structs::FmodStudioMemoryUsage fmod_studio_system_get_memory_usage();
gm_structs::FmodStudioAdvancedSettings fmod_studio_system_get_advanced_settings();
double fmod_studio_system_set_advanced_settings(const gm_structs::FmodStudioAdvancedSettings& settings);
double fmod_studio_system_set_callback(double callback_mask);
double fmod_studio_system_get_user_data();
double fmod_studio_system_set_user_data(double user_data);
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
std::string fmod_studio_bank_get_id(std::uint64_t bank_ref);
double fmod_studio_bank_is_valid(std::uint64_t bank_ref);
gm_structs::FmodStudioStringInfo fmod_studio_bank_get_string_info(std::uint64_t bank_ref, double string_index);
double fmod_studio_bank_load_sample_data(std::uint64_t bank_ref);
double fmod_studio_bank_unload_sample_data(std::uint64_t bank_ref);
double fmod_studio_bank_get_user_data(std::uint64_t bank_ref);
double fmod_studio_bank_set_user_data(std::uint64_t bank_ref, double user_data);
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
double fmod_studio_event_description_is_valid(std::uint64_t event_desc_ref);
double fmod_studio_event_description_is_3d(std::uint64_t event_desc_ref);
double fmod_studio_event_description_is_stream(std::uint64_t event_desc_ref);
double fmod_studio_event_description_is_doppler_enabled(std::uint64_t event_desc_ref);
std::string fmod_studio_event_description_get_id(std::uint64_t event_desc_ref);
gm_structs::FmodStudioMinMaxDistance fmod_studio_event_description_get_min_max_distance(std::uint64_t event_desc_ref);
double fmod_studio_event_description_get_sound_size(std::uint64_t event_desc_ref);
double fmod_studio_event_description_get_sample_loading_state(std::uint64_t event_desc_ref);
double fmod_studio_event_description_unload_sample_data(std::uint64_t event_desc_ref);
double fmod_studio_event_description_set_callback(std::uint64_t event_desc_ref, double callback_mask);
double fmod_studio_event_description_get_user_data(std::uint64_t event_desc_ref);
double fmod_studio_event_description_set_user_data(std::uint64_t event_desc_ref, double user_data);
gm_structs::FmodStudioUserProperty fmod_studio_event_description_get_user_property(std::uint64_t event_desc_ref, std::string_view name);
gm_structs::FmodStudioUserProperty fmod_studio_event_description_get_user_property_at(std::uint64_t event_desc_ref, double index);
double fmod_studio_event_description_get_user_property_count(std::uint64_t event_desc_ref);
gm_structs::FmodStudioParameterDescription fmod_studio_event_description_get_parameter_description_by_id(std::uint64_t event_desc_ref, double id_data1, double id_data2);
gm_structs::FmodStudioParameterDescription fmod_studio_event_description_get_parameter_description_at(std::uint64_t event_desc_ref, double index);
std::string fmod_studio_event_description_get_parameter_label_by_id(std::uint64_t event_desc_ref, double id_data1, double id_data2, double label_index);
std::string fmod_studio_event_description_get_parameter_label_at(std::uint64_t event_desc_ref, double index, double label_index);
std::string fmod_studio_event_description_get_parameter_label_by_name(std::uint64_t event_desc_ref, std::string_view name, double label_index);
double fmod_studio_event_instance_start(std::uint64_t instance_ref);
double fmod_studio_event_instance_stop(std::uint64_t instance_ref, double stop_mode);
double fmod_studio_event_instance_get_playback_state(std::uint64_t instance_ref);
double fmod_studio_event_instance_get_paused(std::uint64_t instance_ref);
double fmod_studio_event_instance_set_paused(std::uint64_t instance_ref, double paused);
double fmod_studio_event_instance_get_timeline_position(std::uint64_t instance_ref);
double fmod_studio_event_instance_set_timeline_position(std::uint64_t instance_ref, double position);
double fmod_studio_event_instance_keyoff(std::uint64_t instance_ref);
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
double fmod_studio_event_instance_set_parameter_by_id_with_label(std::uint64_t instance_ref, double id_data1, double id_data2, std::string_view label, double ignore_seek_speed);
double fmod_studio_event_instance_set_parameter_by_name_with_label(std::uint64_t instance_ref, std::string_view name, std::string_view label, double ignore_seek_speed);
double fmod_studio_event_instance_set_3d_attributes(std::uint64_t instance_ref, double x, double y, double z);
gm_structs::FmodStudioChannelControl3DAttributes fmod_studio_event_instance_get_3d_attributes(std::uint64_t instance_ref);
gm_structs::FmodStudioMinMaxDistance fmod_studio_event_instance_get_min_max_distance(std::uint64_t instance_ref);
double fmod_studio_event_instance_get_listener_mask(std::uint64_t instance_ref);
double fmod_studio_event_instance_set_listener_mask(std::uint64_t instance_ref, double mask);
double fmod_studio_event_instance_get_reverb_level(std::uint64_t instance_ref, double index);
double fmod_studio_event_instance_set_reverb_level(std::uint64_t instance_ref, double index, double level);
double fmod_studio_event_instance_get_property(std::uint64_t instance_ref, gm_enums::FmodStudioEventProperty property_type);
double fmod_studio_event_instance_set_property(std::uint64_t instance_ref, gm_enums::FmodStudioEventProperty property_type, double value);
double fmod_studio_event_instance_get_user_data(std::uint64_t instance_ref);
double fmod_studio_event_instance_set_user_data(std::uint64_t instance_ref, double user_data);
double fmod_studio_event_instance_is_valid(std::uint64_t instance_ref);
double fmod_studio_event_instance_is_virtual(std::uint64_t instance_ref);
std::uint64_t fmod_studio_event_instance_get_channel_group(std::uint64_t instance_ref);
gm_structs::FmodStudioCPUUsage fmod_studio_event_instance_get_cpu_usage(std::uint64_t instance_ref);
gm_structs::FmodStudioMemoryUsage fmod_studio_event_instance_get_memory_usage(std::uint64_t instance_ref);
std::optional<std::uint64_t> fmod_studio_event_instance_get_description(std::uint64_t instance_ref);
double fmod_studio_event_instance_release(std::uint64_t instance_ref);
std::string fmod_studio_bus_get_path(std::uint64_t bus_ref);
double fmod_studio_bus_get_volume(std::uint64_t bus_ref);
double fmod_studio_bus_set_volume(std::uint64_t bus_ref, double volume);
double fmod_studio_bus_get_paused(std::uint64_t bus_ref);
double fmod_studio_bus_set_paused(std::uint64_t bus_ref, double paused);
double fmod_studio_bus_stop_all_events(std::uint64_t bus_ref, double stop_mode);
std::optional<std::uint64_t> fmod_studio_bus_get_master_bus();
std::string fmod_studio_bus_get_id(std::uint64_t bus_ref);
double fmod_studio_bus_is_valid(std::uint64_t bus_ref);
std::uint64_t fmod_studio_bus_get_channel_group(std::uint64_t bus_ref);
double fmod_studio_bus_lock_channel_group(std::uint64_t bus_ref);
double fmod_studio_bus_unlock_channel_group(std::uint64_t bus_ref);
gm_structs::FmodStudioCPUUsage fmod_studio_bus_get_cpu_usage(std::uint64_t bus_ref);
gm_structs::FmodStudioMemoryUsage fmod_studio_bus_get_memory_usage(std::uint64_t bus_ref);
double fmod_studio_bus_get_mute(std::uint64_t bus_ref);
double fmod_studio_bus_set_mute(std::uint64_t bus_ref, double mute);
std::uint64_t fmod_studio_bus_get_port_index(std::uint64_t bus_ref);
double fmod_studio_bus_set_port_index(std::uint64_t bus_ref, std::uint64_t port_index);
std::string fmod_studio_vca_get_path(std::uint64_t vca_ref);
double fmod_studio_vca_get_volume(std::uint64_t vca_ref);
double fmod_studio_vca_set_volume(std::uint64_t vca_ref, double volume);
double fmod_studio_command_replay_get_playback_state(std::uint64_t replay_ref);
double fmod_studio_command_replay_get_current_command(std::uint64_t replay_ref);
double fmod_studio_command_replay_release(std::uint64_t replay_ref);
double fmod_studio_command_replay_get_command_count(std::uint64_t replay_ref);
double fmod_studio_command_replay_get_length(std::uint64_t replay_ref);
std::uint64_t fmod_studio_command_replay_get_system_object(std::uint64_t replay_ref);
double fmod_studio_command_replay_is_valid(std::uint64_t replay_ref);
gm_structs::FmodStudioCommandInfo fmod_studio_command_replay_get_command_info(std::uint64_t replay_ref, double command_index);
std::string fmod_studio_command_replay_get_command_string(std::uint64_t replay_ref, double command_index);
double fmod_studio_command_replay_get_command_at_time(std::uint64_t replay_ref, double time);
double fmod_studio_command_replay_seek_to_command(std::uint64_t replay_ref, double command_index);
double fmod_studio_command_replay_seek_to_time(std::uint64_t replay_ref, double time);
double fmod_studio_command_replay_set_bank_path(std::uint64_t replay_ref, std::string_view path);
double fmod_studio_command_replay_get_paused(std::uint64_t replay_ref);
double fmod_studio_command_replay_set_paused(std::uint64_t replay_ref, double paused);
double fmod_studio_command_replay_start(std::uint64_t replay_ref);
double fmod_studio_command_replay_stop(std::uint64_t replay_ref);
double fmod_studio_command_replay_get_user_data(std::uint64_t replay_ref);
double fmod_studio_command_replay_set_user_data(std::uint64_t replay_ref, double user_data);
double fmod_studio_command_replay_set_frame_callback(std::uint64_t replay_ref, const std::optional<gm::wire::GMFunction>& callback);
double fmod_studio_command_replay_set_create_instance_callback(std::uint64_t replay_ref, const std::optional<gm::wire::GMFunction>& callback);
double fmod_studio_command_replay_set_load_bank_callback(std::uint64_t replay_ref, const std::optional<gm::wire::GMFunction>& callback);
