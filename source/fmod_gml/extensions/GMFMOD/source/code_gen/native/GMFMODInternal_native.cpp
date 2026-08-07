// ##### extgen :: Auto-generated file do not edit!! #####

#include "GMFMODInternal_native.h"
#include "GMFMODInternal_exports.h"

using namespace gm_structs;
using namespace gm::wire::codec;

static gm::runtime::DispatchQueue __dispatch_queue;

// Internal function used for fetching dispatched function calls to GML
GMEXPORT double __EXT_NATIVE__GMFMOD_invocation_handler(char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferWriter __bw{ __ret_buffer, static_cast<size_t>(__ret_buffer_length) };
    return __dispatch_queue.fetch(__bw);
}

static std::queue<gm::wire::GMBuffer> __buffer_queue;

// Internal function used for queueing buffers to native code
GMEXPORT double __EXT_NATIVE__GMFMOD_queue_buffer(char* __arg_buffer, double __arg_buffer_length)
{
    gm::wire::GMBuffer __buff{__arg_buffer, static_cast<uint64_t>(__arg_buffer_length)};
    __buffer_queue.push(__buff);

    return 1.0;
}

GMEXPORT double __EXT_NATIVE__fmod_last_result(char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_last_result();
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: enum FmodResult
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_debug_initialize(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: flags, type: enum FmodDebugFlags
    gm_enums::FmodDebugFlags flags = gm::wire::codec::readValue<gm_enums::FmodDebugFlags>(__br);

    // field: mode, type: enum FmodDebugMode
    gm_enums::FmodDebugMode mode = gm::wire::codec::readValue<gm_enums::FmodDebugMode>(__br);

    fmod_debug_initialize(flags, mode);
    return 0;
}

GMEXPORT char* __EXT_NATIVE__fmod_path_bundle(char* filename)
{
    static std::string __result;
    __result = fmod_path_bundle(filename);
    return (char*)__result.c_str();
}

GMEXPORT char* __EXT_NATIVE__fmod_path_user(char* filename)
{
    static std::string __result;
    __result = fmod_path_user(filename);
    return (char*)__result.c_str();
}

GMEXPORT char* __EXT_NATIVE__fmod_error_string(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: result, type: enum FmodResult
    gm_enums::FmodResult result = gm::wire::codec::readValue<gm_enums::FmodResult>(__br);

    static std::string __result;
    __result = fmod_error_string(result);
    return (char*)__result.c_str();
}

GMEXPORT double __EXT_NATIVE__fmod_fetch_callbacks()
{
    auto&& __result = fmod_fetch_callbacks();
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_file_get_disk_busy()
{
    auto&& __result = fmod_file_get_disk_busy();
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_file_set_disk_busy(double busy)
{
    auto&& __result = fmod_file_set_disk_busy(static_cast<double>(busy));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_memory_get_stats(double blocking, char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_memory_get_stats(static_cast<double>(blocking));
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodMemoryStats
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_thread_set_attributes(double thread_type, double affinity, double priority)
{
    auto&& __result = fmod_thread_set_attributes(static_cast<double>(thread_type), static_cast<double>(affinity), static_cast<double>(priority));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_set_frequency(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_ref, type: UInt64
    std::uint64_t channel_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: frequency, type: Float64
    double frequency = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_channel_set_frequency(channel_ref, frequency);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_get_frequency(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_ref, type: UInt64
    std::uint64_t channel_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_channel_get_frequency(channel_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_set_priority(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_ref, type: UInt64
    std::uint64_t channel_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: priority, type: Float64
    double priority = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_channel_set_priority(channel_ref, priority);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_get_priority(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_ref, type: UInt64
    std::uint64_t channel_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_channel_get_priority(channel_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_set_position(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_ref, type: UInt64
    std::uint64_t channel_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: position, type: Float64
    double position = gm::wire::codec::readValue<double>(__br);

    // field: time_unit, type: Float64
    double time_unit = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_channel_set_position(channel_ref, position, time_unit);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_get_position(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_ref, type: UInt64
    std::uint64_t channel_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: time_unit, type: Float64
    double time_unit = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_channel_get_position(channel_ref, time_unit);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_set_channel_group(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_ref, type: UInt64
    std::uint64_t channel_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: channel_group_ref, type: UInt64
    std::uint64_t channel_group_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_channel_set_channel_group(channel_ref, channel_group_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_get_channel_group(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_ref, type: UInt64
    std::uint64_t channel_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_channel_get_channel_group(channel_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: UInt64
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_channel_set_loop_count(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_ref, type: UInt64
    std::uint64_t channel_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: loop_count, type: Float64
    double loop_count = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_channel_set_loop_count(channel_ref, loop_count);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_get_loop_count(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_ref, type: UInt64
    std::uint64_t channel_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_channel_get_loop_count(channel_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_set_loop_points(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_ref, type: UInt64
    std::uint64_t channel_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: loop_start, type: Float64
    double loop_start = gm::wire::codec::readValue<double>(__br);

    // field: loop_start_type, type: Float64
    double loop_start_type = gm::wire::codec::readValue<double>(__br);

    // field: loop_end, type: Float64
    double loop_end = gm::wire::codec::readValue<double>(__br);

    // field: loop_end_type, type: Float64
    double loop_end_type = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_channel_set_loop_points(channel_ref, loop_start, loop_start_type, loop_end, loop_end_type);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_get_loop_points(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_ref, type: UInt64
    std::uint64_t channel_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: start_type, type: Float64
    double start_type = gm::wire::codec::readValue<double>(__br);

    // field: end_type, type: Float64
    double end_type = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_channel_get_loop_points(channel_ref, start_type, end_type);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodLoopPoints
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_channel_is_virtual(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_ref, type: UInt64
    std::uint64_t channel_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_channel_is_virtual(channel_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_get_index(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_ref, type: UInt64
    std::uint64_t channel_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_channel_get_index(channel_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_get_current_sound(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_ref, type: UInt64
    std::uint64_t channel_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_channel_get_current_sound(channel_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: UInt64
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_channel_get_system_object(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_ref, type: UInt64
    std::uint64_t channel_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_channel_get_system_object(channel_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: UInt64
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_system_create(char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_system_create();
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: UInt64
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_system_init(double max_channels, double flags)
{
    auto&& __result = fmod_system_init(static_cast<double>(max_channels), static_cast<double>(flags));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_system_release(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: system_ref, type: UInt64
    std::uint64_t system_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_system_release(system_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_system_close(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: system_ref, type: UInt64
    std::uint64_t system_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_system_close(system_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_system_update()
{
    auto&& __result = fmod_system_update();
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_system_get_channels_playing()
{
    auto&& __result = fmod_system_get_channels_playing();
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_system_get_channel(double index, char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_system_get_channel(static_cast<double>(index));
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: UInt64
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_system_get_master_channel_group(char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_system_get_master_channel_group();
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: UInt64
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_system_set_output(double output)
{
    auto&& __result = fmod_system_set_output(static_cast<double>(output));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_system_get_output()
{
    auto&& __result = fmod_system_get_output();
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_system_get_num_drivers()
{
    auto&& __result = fmod_system_get_num_drivers();
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_system_set_driver(double driver)
{
    auto&& __result = fmod_system_set_driver(static_cast<double>(driver));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_system_get_driver()
{
    auto&& __result = fmod_system_get_driver();
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_system_set_software_channels(double software_channels)
{
    auto&& __result = fmod_system_set_software_channels(static_cast<double>(software_channels));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_system_get_software_channels()
{
    auto&& __result = fmod_system_get_software_channels();
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_system_set_3d_settings(double doppler_scale, double distance_factor, double rolloff_scale)
{
    auto&& __result = fmod_system_set_3d_settings(static_cast<double>(doppler_scale), static_cast<double>(distance_factor), static_cast<double>(rolloff_scale));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_system_get_3d_settings(char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_system_get_3d_settings();
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodSystem3DSettings
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_system_set_3d_listener_attributes(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: listener_index, type: Float64
    double listener_index = gm::wire::codec::readValue<double>(__br);

    // field: position, type: struct FmodVec3
    gm_structs::FmodVec3 position = gm::wire::codec::readValue<gm_structs::FmodVec3>(__br);

    // field: velocity, type: struct FmodVec3
    gm_structs::FmodVec3 velocity = gm::wire::codec::readValue<gm_structs::FmodVec3>(__br);

    // field: forward, type: struct FmodVec3
    gm_structs::FmodVec3 forward = gm::wire::codec::readValue<gm_structs::FmodVec3>(__br);

    // field: up, type: struct FmodVec3
    gm_structs::FmodVec3 up = gm::wire::codec::readValue<gm_structs::FmodVec3>(__br);

    auto&& __result = fmod_system_set_3d_listener_attributes(listener_index, position, velocity, forward, up);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_system_get_3d_listener_attributes(double listener_index, char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_system_get_3d_listener_attributes(static_cast<double>(listener_index));
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodListener3DAttributes
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_system_get_record_num_drivers()
{
    auto&& __result = fmod_system_get_record_num_drivers();
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_system_get_record_driver_info(double record_driver_index, char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_system_get_record_driver_info(static_cast<double>(record_driver_index));
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodRecordDriverInfo
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_system_get_record_position(double device_index)
{
    auto&& __result = fmod_system_get_record_position(static_cast<double>(device_index));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_system_record_start(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: device_index, type: Float64
    double device_index = gm::wire::codec::readValue<double>(__br);

    // field: sound_ref, type: UInt64
    std::uint64_t sound_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: loop, type: Float64
    double loop = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_system_record_start(device_index, sound_ref, loop);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_system_record_stop(double device_index)
{
    auto&& __result = fmod_system_record_stop(static_cast<double>(device_index));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_system_is_recording(double device_index)
{
    auto&& __result = fmod_system_is_recording(static_cast<double>(device_index));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_system_create_dsp(char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_system_create_dsp();
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: UInt64
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_system_create_dsp_by_type(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: dsp_type, type: enum FmodDspType
    gm_enums::FmodDspType dsp_type = gm::wire::codec::readValue<gm_enums::FmodDspType>(__br);

    auto&& __result = fmod_system_create_dsp_by_type(dsp_type);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: UInt64
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_system_get_dsp_buffer_size(char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_system_get_dsp_buffer_size();
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodDSPBufferSize
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_system_set_dsp_buffer_size(double buff_size, double num_buffers)
{
    auto&& __result = fmod_system_set_dsp_buffer_size(static_cast<double>(buff_size), static_cast<double>(num_buffers));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_system_get_software_format(char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_system_get_software_format();
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodSoftwareFormat
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_system_set_software_format(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sample_rate, type: Float64
    double sample_rate = gm::wire::codec::readValue<double>(__br);

    // field: speaker_mode, type: enum FmodSpeakerMode
    gm_enums::FmodSpeakerMode speaker_mode = gm::wire::codec::readValue<gm_enums::FmodSpeakerMode>(__br);

    // field: num_raw_speakers, type: Float64
    double num_raw_speakers = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_system_set_software_format(sample_rate, speaker_mode, num_raw_speakers);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_system_set_stream_buffer_size(double file_buffer_size, double file_buffer_size_type)
{
    auto&& __result = fmod_system_set_stream_buffer_size(static_cast<double>(file_buffer_size), static_cast<double>(file_buffer_size_type));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_system_get_driver_info(double driver_id, char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_system_get_driver_info(static_cast<double>(driver_id));
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodDriverInfo
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_system_create_channel_group(char* name, char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_system_create_channel_group(name);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: UInt64
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_system_play_dsp(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: dsp_ref, type: UInt64
    std::uint64_t dsp_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: channel_group_ref, type: UInt64
    std::uint64_t channel_group_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: paused, type: Float64
    double paused = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_system_play_dsp(dsp_ref, channel_group_ref, paused);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: UInt64
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_system_select(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: system_ref, type: UInt64
    std::uint64_t system_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_system_select(system_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_system_count()
{
    auto&& __result = fmod_system_count();
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_system_get_version()
{
    auto&& __result = fmod_system_get_version();
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_system_get_master_sound_group(char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_system_get_master_sound_group();
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: UInt64
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_system_get_advanced_settings(char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_system_get_advanced_settings();
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodAdvancedSettings
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_system_set_advanced_settings(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: settings, type: struct FmodAdvancedSettings
    gm_structs::FmodAdvancedSettings settings = gm::wire::codec::readValue<gm_structs::FmodAdvancedSettings>(__br);

    auto&& __result = fmod_system_set_advanced_settings(settings);
    return static_cast<double>(__result);
}

GMEXPORT char* __EXT_NATIVE__fmod_system_get_network_proxy()
{
    static std::string __result;
    __result = fmod_system_get_network_proxy();
    return (char*)__result.c_str();
}

GMEXPORT double __EXT_NATIVE__fmod_system_set_network_proxy(char* proxy)
{
    auto&& __result = fmod_system_set_network_proxy(proxy);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_system_get_network_timeout()
{
    auto&& __result = fmod_system_get_network_timeout();
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_system_set_network_timeout(double timeout_ms)
{
    auto&& __result = fmod_system_set_network_timeout(static_cast<double>(timeout_ms));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_system_get_speaker_mode_channels(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: mode, type: enum FmodSpeakerMode
    gm_enums::FmodSpeakerMode mode = gm::wire::codec::readValue<gm_enums::FmodSpeakerMode>(__br);

    auto&& __result = fmod_system_get_speaker_mode_channels(mode);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_system_get_speaker_position(double speaker, char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_system_get_speaker_position(static_cast<double>(speaker));
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodSpeakerPosition
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_system_set_speaker_position(double speaker, double x, double y, double active)
{
    auto&& __result = fmod_system_set_speaker_position(static_cast<double>(speaker), static_cast<double>(x), static_cast<double>(y), static_cast<double>(active));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_system_get_reverb_properties(double instance, char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_system_get_reverb_properties(static_cast<double>(instance));
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodReverbProperties
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_system_set_reverb_properties(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance, type: Float64
    double instance = gm::wire::codec::readValue<double>(__br);

    // field: props, type: struct FmodReverbProperties
    gm_structs::FmodReverbProperties props = gm::wire::codec::readValue<gm_structs::FmodReverbProperties>(__br);

    auto&& __result = fmod_system_set_reverb_properties(instance, props);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_system_get_default_mix_matrix(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: source_speaker_mode, type: enum FmodSpeakerMode
    gm_enums::FmodSpeakerMode source_speaker_mode = gm::wire::codec::readValue<gm_enums::FmodSpeakerMode>(__br);

    // field: target_speaker_mode, type: enum FmodSpeakerMode
    gm_enums::FmodSpeakerMode target_speaker_mode = gm::wire::codec::readValue<gm_enums::FmodSpeakerMode>(__br);

    auto&& __result = fmod_system_get_default_mix_matrix(source_speaker_mode, target_speaker_mode);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodDSPMixMatrix
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_system_get_cpu_usage(char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_system_get_cpu_usage();
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodCPUUsage
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_system_get_file_usage(char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_system_get_file_usage();
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodFileUsage
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_system_get_stream_buffer_size(char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_system_get_stream_buffer_size();
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodStreamBufferSize
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_system_get_3d_num_listeners()
{
    auto&& __result = fmod_system_get_3d_num_listeners();
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_system_set_3d_num_listeners(double num)
{
    auto&& __result = fmod_system_set_3d_num_listeners(static_cast<double>(num));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_system_set_3d_rolloff_callback()
{
    auto&& __result = fmod_system_set_3d_rolloff_callback();
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_system_mixer_suspend()
{
    auto&& __result = fmod_system_mixer_suspend();
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_system_mixer_resume()
{
    auto&& __result = fmod_system_mixer_resume();
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_system_lock_dsp()
{
    auto&& __result = fmod_system_lock_dsp();
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_system_unlock_dsp()
{
    auto&& __result = fmod_system_unlock_dsp();
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_system_get_user_data()
{
    auto&& __result = fmod_system_get_user_data();
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_system_set_user_data(double user_data)
{
    auto&& __result = fmod_system_set_user_data(static_cast<double>(user_data));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_system_attach_channel_group_to_port(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: port_type, type: Float64
    double port_type = gm::wire::codec::readValue<double>(__br);

    // field: port_index, type: Float64
    double port_index = gm::wire::codec::readValue<double>(__br);

    // field: channel_group_ref, type: UInt64
    std::uint64_t channel_group_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: pass_thru, type: Float64
    double pass_thru = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_system_attach_channel_group_to_port(port_type, port_index, channel_group_ref, pass_thru);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_system_detach_channel_group_from_port(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_group_ref, type: UInt64
    std::uint64_t channel_group_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_system_detach_channel_group_from_port(channel_group_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_system_create_sound_group(char* name, char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_system_create_sound_group(name);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: UInt64
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_system_create_geometry(double max_polygons, double max_vertices, char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_system_create_geometry(static_cast<double>(max_polygons), static_cast<double>(max_vertices));
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: UInt64
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_system_load_geometry(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: data, type: Buffer
    gm::wire::GMBuffer data = __buffer_queue.front();
    __buffer_queue.pop();

    // field: data_size, type: Float64
    double data_size = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_system_load_geometry(data, data_size);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: optional<UInt64>
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_system_get_geometry_occlusion(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: listener, type: struct FmodVec3
    gm_structs::FmodVec3 listener = gm::wire::codec::readValue<gm_structs::FmodVec3>(__br);

    // field: source, type: struct FmodVec3
    gm_structs::FmodVec3 source = gm::wire::codec::readValue<gm_structs::FmodVec3>(__br);

    auto&& __result = fmod_system_get_geometry_occlusion(listener, source);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodOcclusion
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_system_get_geometry_settings()
{
    auto&& __result = fmod_system_get_geometry_settings();
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_system_set_geometry_settings(double max_world_size)
{
    auto&& __result = fmod_system_set_geometry_settings(static_cast<double>(max_world_size));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_system_create_reverb_3d(char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_system_create_reverb_3d();
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: UInt64
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_system_create_sound(char* name_or_data, double mode, char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_system_create_sound(name_or_data, static_cast<double>(mode));
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: UInt64
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_system_create_stream(char* name_or_data, double mode, char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_system_create_stream(name_or_data, static_cast<double>(mode));
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: UInt64
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_system_play_sound(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_ref, type: UInt64
    std::uint64_t sound_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: channel_group_ref, type: UInt64
    std::uint64_t channel_group_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: pause, type: Float64
    double pause = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_system_play_sound(sound_ref, channel_group_ref, pause);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: UInt64
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_sound_get_length(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_ref, type: UInt64
    std::uint64_t sound_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: length_type, type: Float64
    double length_type = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_sound_get_length(sound_ref, length_type);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_sound_set_defaults(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_ref, type: UInt64
    std::uint64_t sound_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: frequency, type: Float64
    double frequency = gm::wire::codec::readValue<double>(__br);

    // field: priority, type: Float64
    double priority = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_sound_set_defaults(sound_ref, frequency, priority);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_sound_set_mode(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_ref, type: UInt64
    std::uint64_t sound_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: mode, type: Float64
    double mode = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_sound_set_mode(sound_ref, mode);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_sound_get_mode(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_ref, type: UInt64
    std::uint64_t sound_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_sound_get_mode(sound_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_sound_get_format(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_ref, type: UInt64
    std::uint64_t sound_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_sound_get_format(sound_ref);
    return static_cast<double>(__result);
}

GMEXPORT char* __EXT_NATIVE__fmod_sound_get_name(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_ref, type: UInt64
    std::uint64_t sound_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    static std::string __result;
    __result = fmod_sound_get_name(sound_ref);
    return (char*)__result.c_str();
}

GMEXPORT double __EXT_NATIVE__fmod_sound_get_defaults(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_ref, type: UInt64
    std::uint64_t sound_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_sound_get_defaults(sound_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodSoundDefaults
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_sound_set_loop_count(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_ref, type: UInt64
    std::uint64_t sound_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: count, type: Float64
    double count = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_sound_set_loop_count(sound_ref, count);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_sound_get_loop_count(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_ref, type: UInt64
    std::uint64_t sound_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_sound_get_loop_count(sound_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_sound_set_loop_points(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_ref, type: UInt64
    std::uint64_t sound_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: loop_start, type: Float64
    double loop_start = gm::wire::codec::readValue<double>(__br);

    // field: loop_start_type, type: Float64
    double loop_start_type = gm::wire::codec::readValue<double>(__br);

    // field: loop_end, type: Float64
    double loop_end = gm::wire::codec::readValue<double>(__br);

    // field: loop_end_type, type: Float64
    double loop_end_type = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_sound_set_loop_points(sound_ref, loop_start, loop_start_type, loop_end, loop_end_type);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_sound_get_loop_points(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_ref, type: UInt64
    std::uint64_t sound_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: start_type, type: Float64
    double start_type = gm::wire::codec::readValue<double>(__br);

    // field: end_type, type: Float64
    double end_type = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_sound_get_loop_points(sound_ref, start_type, end_type);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodLoopPoints
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_sound_set_3d_min_max_distance(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_ref, type: UInt64
    std::uint64_t sound_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: min, type: Float64
    double min = gm::wire::codec::readValue<double>(__br);

    // field: max, type: Float64
    double max = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_sound_set_3d_min_max_distance(sound_ref, min, max);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_sound_get_3d_min_max_distance(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_ref, type: UInt64
    std::uint64_t sound_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_sound_get_3d_min_max_distance(sound_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodSoundMinMaxDistance
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_sound_set_3d_cone_settings(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_ref, type: UInt64
    std::uint64_t sound_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: inside_cone_angle, type: Float64
    double inside_cone_angle = gm::wire::codec::readValue<double>(__br);

    // field: outside_cone_angle, type: Float64
    double outside_cone_angle = gm::wire::codec::readValue<double>(__br);

    // field: outside_volume, type: Float64
    double outside_volume = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_sound_set_3d_cone_settings(sound_ref, inside_cone_angle, outside_cone_angle, outside_volume);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_sound_get_3d_cone_settings(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_ref, type: UInt64
    std::uint64_t sound_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_sound_get_3d_cone_settings(sound_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodConeSettings
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_sound_set_3d_custom_rolloff(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_ref, type: UInt64
    std::uint64_t sound_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: points, type: Any
    gm::wire::GMValue points = gm::wire::codec::readValue<gm::wire::GMValue>(__br);

    // field: num_points, type: Float64
    double num_points = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_sound_set_3d_custom_rolloff(sound_ref, points, num_points);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_sound_get_3d_custom_rolloff(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_ref, type: UInt64
    std::uint64_t sound_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    fmod_sound_get_3d_custom_rolloff(sound_ref);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_sound_get_num_sync_points(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_ref, type: UInt64
    std::uint64_t sound_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_sound_get_num_sync_points(sound_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_sound_get_sync_point(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_ref, type: UInt64
    std::uint64_t sound_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: sync_point_index, type: Float64
    double sync_point_index = gm::wire::codec::readValue<double>(__br);

    // field: offset_type, type: Float64
    double offset_type = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_sound_get_sync_point(sound_ref, sync_point_index, offset_type);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodSyncPointInfo
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_sound_add_sync_point(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_ref, type: UInt64
    std::uint64_t sound_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: offset, type: Float64
    double offset = gm::wire::codec::readValue<double>(__br);

    // field: offset_type, type: Float64
    double offset_type = gm::wire::codec::readValue<double>(__br);

    // field: name, type: String
    std::string_view name = gm::wire::codec::readValue<std::string_view>(__br);

    auto&& __result = fmod_sound_add_sync_point(sound_ref, offset, offset_type, name);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_sound_delete_sync_point(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_ref, type: UInt64
    std::uint64_t sound_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: sync_point_index, type: Float64
    double sync_point_index = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_sound_delete_sync_point(sound_ref, sync_point_index);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_sound_get_music_num_channels(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_ref, type: UInt64
    std::uint64_t sound_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_sound_get_music_num_channels(sound_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_sound_set_music_channel_volume(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_ref, type: UInt64
    std::uint64_t sound_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: channel_index, type: Float64
    double channel_index = gm::wire::codec::readValue<double>(__br);

    // field: volume, type: Float64
    double volume = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_sound_set_music_channel_volume(sound_ref, channel_index, volume);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_sound_get_music_channel_volume(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_ref, type: UInt64
    std::uint64_t sound_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: channel_index, type: Float64
    double channel_index = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_sound_get_music_channel_volume(sound_ref, channel_index);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_sound_set_music_speed(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_ref, type: UInt64
    std::uint64_t sound_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: speed, type: Float64
    double speed = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_sound_set_music_speed(sound_ref, speed);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_sound_get_music_speed(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_ref, type: UInt64
    std::uint64_t sound_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_sound_get_music_speed(sound_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_sound_set_sound_group(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_ref, type: UInt64
    std::uint64_t sound_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: sound_group_ref, type: UInt64
    std::uint64_t sound_group_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_sound_set_sound_group(sound_ref, sound_group_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_sound_get_sound_group(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_ref, type: UInt64
    std::uint64_t sound_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_sound_get_sound_group(sound_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: UInt64
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_sound_set_user_data(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_ref, type: UInt64
    std::uint64_t sound_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: user_data, type: Float64
    double user_data = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_sound_set_user_data(sound_ref, user_data);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_sound_get_user_data(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_ref, type: UInt64
    std::uint64_t sound_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_sound_get_user_data(sound_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_sound_release(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_ref, type: UInt64
    std::uint64_t sound_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_sound_release(sound_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_sound_get_system_object(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_ref, type: UInt64
    std::uint64_t sound_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_sound_get_system_object(sound_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: UInt64
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_sound_get_open_state(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_ref, type: UInt64
    std::uint64_t sound_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_sound_get_open_state(sound_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodSoundOpenState
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_sound_get_num_tags(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_ref, type: UInt64
    std::uint64_t sound_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_sound_get_num_tags(sound_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_sound_get_tag(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_ref, type: UInt64
    std::uint64_t sound_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: name, type: String
    std::string_view name = gm::wire::codec::readValue<std::string_view>(__br);

    // field: index, type: Float64
    double index = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_sound_get_tag(sound_ref, name, index);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodSoundTag
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_sound_get_num_sub_sounds(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_ref, type: UInt64
    std::uint64_t sound_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_sound_get_num_sub_sounds(sound_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_sound_get_sub_sound(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_ref, type: UInt64
    std::uint64_t sound_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: index, type: Float64
    double index = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_sound_get_sub_sound(sound_ref, index);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: UInt64
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_sound_get_sub_sound_parent(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_ref, type: UInt64
    std::uint64_t sound_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_sound_get_sub_sound_parent(sound_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: optional<UInt64>
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_sound_read_data(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_ref, type: UInt64
    std::uint64_t sound_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: data, type: Buffer
    gm::wire::GMBuffer data = __buffer_queue.front();
    __buffer_queue.pop();

    // field: length, type: Float64
    double length = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_sound_read_data(sound_ref, data, length);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_sound_seek_data(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_ref, type: UInt64
    std::uint64_t sound_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: pcm, type: Float64
    double pcm = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_sound_seek_data(sound_ref, pcm);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_sound_lock(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_ref, type: UInt64
    std::uint64_t sound_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: offset, type: Float64
    double offset = gm::wire::codec::readValue<double>(__br);

    // field: length, type: Float64
    double length = gm::wire::codec::readValue<double>(__br);

    // field: buffer1, type: Buffer
    gm::wire::GMBuffer buffer1 = __buffer_queue.front();
    __buffer_queue.pop();

    // field: buffer2, type: Buffer
    gm::wire::GMBuffer buffer2 = __buffer_queue.front();
    __buffer_queue.pop();

    auto&& __result = fmod_sound_lock(sound_ref, offset, length, buffer1, buffer2);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodSoundLockLengths
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_sound_unlock(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_ref, type: UInt64
    std::uint64_t sound_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: buffer1, type: Buffer
    gm::wire::GMBuffer buffer1 = __buffer_queue.front();
    __buffer_queue.pop();

    // field: buffer2, type: Buffer
    gm::wire::GMBuffer buffer2 = __buffer_queue.front();
    __buffer_queue.pop();

    // field: length1, type: Float64
    double length1 = gm::wire::codec::readValue<double>(__br);

    // field: length2, type: Float64
    double length2 = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_sound_unlock(sound_ref, buffer1, buffer2, length1, length2);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_group_get_num_channels(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_group_ref, type: UInt64
    std::uint64_t channel_group_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_channel_group_get_num_channels(channel_group_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_group_get_channel(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_group_ref, type: UInt64
    std::uint64_t channel_group_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: index, type: Float64
    double index = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_channel_group_get_channel(channel_group_ref, index);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: UInt64
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_channel_group_add_group(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_group_ref, type: UInt64
    std::uint64_t channel_group_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: child_channel_group_ref, type: UInt64
    std::uint64_t child_channel_group_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: propagate_dsp_clock, type: Float64
    double propagate_dsp_clock = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_channel_group_add_group(channel_group_ref, child_channel_group_ref, propagate_dsp_clock);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: UInt64
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_channel_group_get_num_groups(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_group_ref, type: UInt64
    std::uint64_t channel_group_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_channel_group_get_num_groups(channel_group_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_group_get_group(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_group_ref, type: UInt64
    std::uint64_t channel_group_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: group_index, type: Float64
    double group_index = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_channel_group_get_group(channel_group_ref, group_index);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: UInt64
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_channel_group_get_parent_group(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_group_ref, type: UInt64
    std::uint64_t channel_group_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_channel_group_get_parent_group(channel_group_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: UInt64
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT char* __EXT_NATIVE__fmod_channel_group_get_name(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_group_ref, type: UInt64
    std::uint64_t channel_group_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    static std::string __result;
    __result = fmod_channel_group_get_name(channel_group_ref);
    return (char*)__result.c_str();
}

GMEXPORT double __EXT_NATIVE__fmod_channel_group_release(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_group_ref, type: UInt64
    std::uint64_t channel_group_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_channel_group_release(channel_group_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_group_get_system_object(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_group_ref, type: UInt64
    std::uint64_t channel_group_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_channel_group_get_system_object(channel_group_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: UInt64
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_sound_group_set_max_audible(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_group_ref, type: UInt64
    std::uint64_t sound_group_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: max_audible, type: Float64
    double max_audible = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_sound_group_set_max_audible(sound_group_ref, max_audible);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_sound_group_get_max_audible(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_group_ref, type: UInt64
    std::uint64_t sound_group_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_sound_group_get_max_audible(sound_group_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_sound_group_set_max_audible_behavior(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_group_ref, type: UInt64
    std::uint64_t sound_group_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: behavior, type: Float64
    double behavior = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_sound_group_set_max_audible_behavior(sound_group_ref, behavior);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_sound_group_get_max_audible_behavior(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_group_ref, type: UInt64
    std::uint64_t sound_group_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_sound_group_get_max_audible_behavior(sound_group_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_sound_group_set_mute_fade_speed(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_group_ref, type: UInt64
    std::uint64_t sound_group_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: speed, type: Float64
    double speed = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_sound_group_set_mute_fade_speed(sound_group_ref, speed);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_sound_group_get_mute_fade_speed(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_group_ref, type: UInt64
    std::uint64_t sound_group_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_sound_group_get_mute_fade_speed(sound_group_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_sound_group_set_volume(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_group_ref, type: UInt64
    std::uint64_t sound_group_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: volume, type: Float64
    double volume = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_sound_group_set_volume(sound_group_ref, volume);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_sound_group_get_volume(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_group_ref, type: UInt64
    std::uint64_t sound_group_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_sound_group_get_volume(sound_group_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_sound_group_get_num_sounds(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_group_ref, type: UInt64
    std::uint64_t sound_group_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_sound_group_get_num_sounds(sound_group_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_sound_group_get_sound(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_group_ref, type: UInt64
    std::uint64_t sound_group_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: sound_index, type: Float64
    double sound_index = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_sound_group_get_sound(sound_group_ref, sound_index);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: UInt64
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_sound_group_get_num_playing(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_group_ref, type: UInt64
    std::uint64_t sound_group_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_sound_group_get_num_playing(sound_group_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_sound_group_stop(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_group_ref, type: UInt64
    std::uint64_t sound_group_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_sound_group_stop(sound_group_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_sound_group_set_user_data(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_group_ref, type: UInt64
    std::uint64_t sound_group_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: user_data, type: Float64
    double user_data = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_sound_group_set_user_data(sound_group_ref, user_data);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_sound_group_get_user_data(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_group_ref, type: UInt64
    std::uint64_t sound_group_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_sound_group_get_user_data(sound_group_ref);
    return static_cast<double>(__result);
}

GMEXPORT char* __EXT_NATIVE__fmod_sound_group_get_name(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_group_ref, type: UInt64
    std::uint64_t sound_group_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    static std::string __result;
    __result = fmod_sound_group_get_name(sound_group_ref);
    return (char*)__result.c_str();
}

GMEXPORT double __EXT_NATIVE__fmod_sound_group_release(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_group_ref, type: UInt64
    std::uint64_t sound_group_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_sound_group_release(sound_group_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_sound_group_get_system_object(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_group_ref, type: UInt64
    std::uint64_t sound_group_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_sound_group_get_system_object(sound_group_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: UInt64
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_reverb_3d_set_active(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: reverb_3d_ref, type: UInt64
    std::uint64_t reverb_3d_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: active, type: Float64
    double active = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_reverb_3d_set_active(reverb_3d_ref, active);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_reverb_3d_get_active(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: reverb_3d_ref, type: UInt64
    std::uint64_t reverb_3d_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_reverb_3d_get_active(reverb_3d_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_reverb_3d_set_properties(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: reverb_3d_ref, type: UInt64
    std::uint64_t reverb_3d_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: decay_time, type: Float64
    double decay_time = gm::wire::codec::readValue<double>(__br);

    // field: early_delay, type: Float64
    double early_delay = gm::wire::codec::readValue<double>(__br);

    // field: late_delay, type: Float64
    double late_delay = gm::wire::codec::readValue<double>(__br);

    // field: hf_reference, type: Float64
    double hf_reference = gm::wire::codec::readValue<double>(__br);

    // field: hf_decay_ratio, type: Float64
    double hf_decay_ratio = gm::wire::codec::readValue<double>(__br);

    // field: diffusion, type: Float64
    double diffusion = gm::wire::codec::readValue<double>(__br);

    // field: density, type: Float64
    double density = gm::wire::codec::readValue<double>(__br);

    // field: low_shelf_frequency, type: Float64
    double low_shelf_frequency = gm::wire::codec::readValue<double>(__br);

    // field: low_shelf_gain, type: Float64
    double low_shelf_gain = gm::wire::codec::readValue<double>(__br);

    // field: high_cut, type: Float64
    double high_cut = gm::wire::codec::readValue<double>(__br);

    // field: early_late_mix, type: Float64
    double early_late_mix = gm::wire::codec::readValue<double>(__br);

    // field: wet_level, type: Float64
    double wet_level = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_reverb_3d_set_properties(reverb_3d_ref, decay_time, early_delay, late_delay, hf_reference, hf_decay_ratio, diffusion, density, low_shelf_frequency, low_shelf_gain, high_cut, early_late_mix, wet_level);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_reverb_3d_get_properties(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: reverb_3d_ref, type: UInt64
    std::uint64_t reverb_3d_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_reverb_3d_get_properties(reverb_3d_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodReverbProperties
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_reverb_3d_set_3d_attributes(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: reverb_3d_ref, type: UInt64
    std::uint64_t reverb_3d_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: position, type: struct FmodVec3
    gm_structs::FmodVec3 position = gm::wire::codec::readValue<gm_structs::FmodVec3>(__br);

    // field: min_distance, type: Float64
    double min_distance = gm::wire::codec::readValue<double>(__br);

    // field: max_distance, type: Float64
    double max_distance = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_reverb_3d_set_3d_attributes(reverb_3d_ref, position, min_distance, max_distance);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_reverb_3d_get_3d_attributes(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: reverb_3d_ref, type: UInt64
    std::uint64_t reverb_3d_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_reverb_3d_get_3d_attributes(reverb_3d_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodReverb3DAttributes
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_reverb_3d_set_user_data(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: reverb_3d_ref, type: UInt64
    std::uint64_t reverb_3d_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: user_data, type: Float64
    double user_data = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_reverb_3d_set_user_data(reverb_3d_ref, user_data);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_reverb_3d_get_user_data(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: reverb_3d_ref, type: UInt64
    std::uint64_t reverb_3d_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_reverb_3d_get_user_data(reverb_3d_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_reverb_3d_release(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: reverb_3d_ref, type: UInt64
    std::uint64_t reverb_3d_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_reverb_3d_release(reverb_3d_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_add_fade_point(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: UInt64
    std::uint64_t channel_control_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: dsp_clock, type: Float64
    double dsp_clock = gm::wire::codec::readValue<double>(__br);

    // field: volume, type: Float64
    double volume = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_channel_control_add_fade_point(channel_control_ref, dsp_clock, volume);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_remove_fade_points(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: UInt64
    std::uint64_t channel_control_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: dsp_clock_start, type: Float64
    double dsp_clock_start = gm::wire::codec::readValue<double>(__br);

    // field: dsp_clock_end, type: Float64
    double dsp_clock_end = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_channel_control_remove_fade_points(channel_control_ref, dsp_clock_start, dsp_clock_end);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_set_fade_point_ramp(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: UInt64
    std::uint64_t channel_control_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: dsp_clock, type: Float64
    double dsp_clock = gm::wire::codec::readValue<double>(__br);

    // field: volume, type: Float64
    double volume = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_channel_control_set_fade_point_ramp(channel_control_ref, dsp_clock, volume);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_get_fade_point_count(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: UInt64
    std::uint64_t channel_control_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_channel_control_get_fade_point_count(channel_control_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_get_fade_point_at(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: UInt64
    std::uint64_t channel_control_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: index, type: Float64
    double index = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_channel_control_get_fade_point_at(channel_control_ref, index);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodFadePoint
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_is_playing(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: UInt64
    std::uint64_t channel_control_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_channel_control_is_playing(channel_control_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_stop(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: UInt64
    std::uint64_t channel_control_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_channel_control_stop(channel_control_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_set_paused(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: UInt64
    std::uint64_t channel_control_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: paused, type: Float64
    double paused = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_channel_control_set_paused(channel_control_ref, paused);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_get_paused(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: UInt64
    std::uint64_t channel_control_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_channel_control_get_paused(channel_control_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_set_mode(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: UInt64
    std::uint64_t channel_control_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: mode, type: Float64
    double mode = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_channel_control_set_mode(channel_control_ref, mode);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_get_mode(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: UInt64
    std::uint64_t channel_control_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_channel_control_get_mode(channel_control_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_set_pitch(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: UInt64
    std::uint64_t channel_control_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: pitch, type: Float64
    double pitch = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_channel_control_set_pitch(channel_control_ref, pitch);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_get_pitch(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: UInt64
    std::uint64_t channel_control_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_channel_control_get_pitch(channel_control_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_get_audibility(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: UInt64
    std::uint64_t channel_control_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_channel_control_get_audibility(channel_control_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_set_volume(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: UInt64
    std::uint64_t channel_control_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: volume, type: Float64
    double volume = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_channel_control_set_volume(channel_control_ref, volume);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_get_volume(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: UInt64
    std::uint64_t channel_control_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_channel_control_get_volume(channel_control_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_set_volume_ramp(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: UInt64
    std::uint64_t channel_control_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: ramp, type: Float64
    double ramp = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_channel_control_set_volume_ramp(channel_control_ref, ramp);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_get_volume_ramp(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: UInt64
    std::uint64_t channel_control_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_channel_control_get_volume_ramp(channel_control_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_set_mute(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: UInt64
    std::uint64_t channel_control_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: mute, type: Float64
    double mute = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_channel_control_set_mute(channel_control_ref, mute);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_get_mute(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: UInt64
    std::uint64_t channel_control_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_channel_control_get_mute(channel_control_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_set_3d_doppler_level(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: UInt64
    std::uint64_t channel_control_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: level, type: Float64
    double level = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_channel_control_set_3d_doppler_level(channel_control_ref, level);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_get_3d_doppler_level(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: UInt64
    std::uint64_t channel_control_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_channel_control_get_3d_doppler_level(channel_control_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_set_3d_level(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: UInt64
    std::uint64_t channel_control_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: level, type: Float64
    double level = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_channel_control_set_3d_level(channel_control_ref, level);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_get_3d_level(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: UInt64
    std::uint64_t channel_control_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_channel_control_get_3d_level(channel_control_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_set_3d_min_max_distance(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: UInt64
    std::uint64_t channel_control_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: min_dist, type: Float64
    double min_dist = gm::wire::codec::readValue<double>(__br);

    // field: max_dist, type: Float64
    double max_dist = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_channel_control_set_3d_min_max_distance(channel_control_ref, min_dist, max_dist);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_get_3d_min_max_distance(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: UInt64
    std::uint64_t channel_control_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_channel_control_get_3d_min_max_distance(channel_control_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodMinMaxDistance
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_set_3d_cone_settings(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: UInt64
    std::uint64_t channel_control_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: inside_cone_angle, type: Float64
    double inside_cone_angle = gm::wire::codec::readValue<double>(__br);

    // field: outside_cone_angle, type: Float64
    double outside_cone_angle = gm::wire::codec::readValue<double>(__br);

    // field: outside_volume, type: Float64
    double outside_volume = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_channel_control_set_3d_cone_settings(channel_control_ref, inside_cone_angle, outside_cone_angle, outside_volume);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_get_3d_cone_settings(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: UInt64
    std::uint64_t channel_control_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_channel_control_get_3d_cone_settings(channel_control_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodConeSettings
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_set_3d_cone_orientation(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: UInt64
    std::uint64_t channel_control_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: orientation, type: struct FmodVec3
    gm_structs::FmodVec3 orientation = gm::wire::codec::readValue<gm_structs::FmodVec3>(__br);

    auto&& __result = fmod_channel_control_set_3d_cone_orientation(channel_control_ref, orientation);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_get_3d_cone_orientation(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: UInt64
    std::uint64_t channel_control_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_channel_control_get_3d_cone_orientation(channel_control_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodVec3
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_set_3d_occlusion(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: UInt64
    std::uint64_t channel_control_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: direct_occlusion, type: Float64
    double direct_occlusion = gm::wire::codec::readValue<double>(__br);

    // field: reverb_occlusion, type: Float64
    double reverb_occlusion = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_channel_control_set_3d_occlusion(channel_control_ref, direct_occlusion, reverb_occlusion);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_get_3d_occlusion(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: UInt64
    std::uint64_t channel_control_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_channel_control_get_3d_occlusion(channel_control_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodOcclusion
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_set_3d_attributes(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: UInt64
    std::uint64_t channel_control_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: position, type: struct FmodVec3
    gm_structs::FmodVec3 position = gm::wire::codec::readValue<gm_structs::FmodVec3>(__br);

    // field: velocity, type: struct FmodVec3
    gm_structs::FmodVec3 velocity = gm::wire::codec::readValue<gm_structs::FmodVec3>(__br);

    auto&& __result = fmod_channel_control_set_3d_attributes(channel_control_ref, position, velocity);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_get_3d_attributes(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: UInt64
    std::uint64_t channel_control_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_channel_control_get_3d_attributes(channel_control_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodChannelControl3DAttributes
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_set_3d_spread(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: UInt64
    std::uint64_t channel_control_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: angle, type: Float64
    double angle = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_channel_control_set_3d_spread(channel_control_ref, angle);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_get_3d_spread(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: UInt64
    std::uint64_t channel_control_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_channel_control_get_3d_spread(channel_control_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_set_3d_distance_filter(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: UInt64
    std::uint64_t channel_control_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: custom, type: Float64
    double custom = gm::wire::codec::readValue<double>(__br);

    // field: custom_level, type: Float64
    double custom_level = gm::wire::codec::readValue<double>(__br);

    // field: center_freq, type: Float64
    double center_freq = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_channel_control_set_3d_distance_filter(channel_control_ref, custom, custom_level, center_freq);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_get_3d_distance_filter(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: UInt64
    std::uint64_t channel_control_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_channel_control_get_3d_distance_filter(channel_control_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodDistanceFilter
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_set_3d_custom_rolloff(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: UInt64
    std::uint64_t channel_control_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: points, type: Any
    gm::wire::GMValue points = gm::wire::codec::readValue<gm::wire::GMValue>(__br);

    // field: num_points, type: Float64
    double num_points = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_channel_control_set_3d_custom_rolloff(channel_control_ref, points, num_points);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_get_3d_custom_rolloff_count(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: UInt64
    std::uint64_t channel_control_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_channel_control_get_3d_custom_rolloff_count(channel_control_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_get_3d_custom_rolloff_at(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: UInt64
    std::uint64_t channel_control_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: index, type: Float64
    double index = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_channel_control_get_3d_custom_rolloff_at(channel_control_ref, index);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodVec3
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_set_pan(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: UInt64
    std::uint64_t channel_control_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: pan, type: Float64
    double pan = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_channel_control_set_pan(channel_control_ref, pan);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_set_mix_levels_output(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: UInt64
    std::uint64_t channel_control_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: front_left, type: Float64
    double front_left = gm::wire::codec::readValue<double>(__br);

    // field: front_right, type: Float64
    double front_right = gm::wire::codec::readValue<double>(__br);

    // field: center, type: Float64
    double center = gm::wire::codec::readValue<double>(__br);

    // field: lfe, type: Float64
    double lfe = gm::wire::codec::readValue<double>(__br);

    // field: surround_left, type: Float64
    double surround_left = gm::wire::codec::readValue<double>(__br);

    // field: surround_right, type: Float64
    double surround_right = gm::wire::codec::readValue<double>(__br);

    // field: back_left, type: Float64
    double back_left = gm::wire::codec::readValue<double>(__br);

    // field: back_right, type: Float64
    double back_right = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_channel_control_set_mix_levels_output(channel_control_ref, front_left, front_right, center, lfe, surround_left, surround_right, back_left, back_right);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_set_mix_levels_input(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: UInt64
    std::uint64_t channel_control_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: levels, type: Float64
    double levels = gm::wire::codec::readValue<double>(__br);

    // field: num_levels, type: Float64
    double num_levels = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_channel_control_set_mix_levels_input(channel_control_ref, levels, num_levels);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_set_mix_matrix(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: UInt64
    std::uint64_t channel_control_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: matrix, type: Float64
    double matrix = gm::wire::codec::readValue<double>(__br);

    // field: out_channels, type: Float64
    double out_channels = gm::wire::codec::readValue<double>(__br);

    // field: in_channels, type: Float64
    double in_channels = gm::wire::codec::readValue<double>(__br);

    // field: in_channel_hop, type: Float64
    double in_channel_hop = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_channel_control_set_mix_matrix(channel_control_ref, matrix, out_channels, in_channels, in_channel_hop);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_get_mix_matrix(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: UInt64
    std::uint64_t channel_control_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: in_channel_hop, type: Float64
    double in_channel_hop = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_channel_control_get_mix_matrix(channel_control_ref, in_channel_hop);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodDSPMixMatrix
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_set_reverb_properties(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: UInt64
    std::uint64_t channel_control_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: reverb_instance, type: Float64
    double reverb_instance = gm::wire::codec::readValue<double>(__br);

    // field: wet, type: Float64
    double wet = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_channel_control_set_reverb_properties(channel_control_ref, reverb_instance, wet);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_get_reverb_properties(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: UInt64
    std::uint64_t channel_control_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: reverb_instance, type: Float64
    double reverb_instance = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_channel_control_get_reverb_properties(channel_control_ref, reverb_instance);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_set_low_pass_gain(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: UInt64
    std::uint64_t channel_control_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: gain, type: Float64
    double gain = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_channel_control_set_low_pass_gain(channel_control_ref, gain);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_get_low_pass_gain(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: UInt64
    std::uint64_t channel_control_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_channel_control_get_low_pass_gain(channel_control_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_add_dsp(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: UInt64
    std::uint64_t channel_control_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: dsp_chain_offset, type: Float64
    double dsp_chain_offset = gm::wire::codec::readValue<double>(__br);

    // field: dsp_ref, type: UInt64
    std::uint64_t dsp_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_channel_control_add_dsp(channel_control_ref, dsp_chain_offset, dsp_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_remove_dsp(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: UInt64
    std::uint64_t channel_control_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: dsp_ref, type: UInt64
    std::uint64_t dsp_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_channel_control_remove_dsp(channel_control_ref, dsp_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_get_num_dsps(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: UInt64
    std::uint64_t channel_control_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_channel_control_get_num_dsps(channel_control_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_get_dsp(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: UInt64
    std::uint64_t channel_control_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: index, type: Float64
    double index = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_channel_control_get_dsp(channel_control_ref, index);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: UInt64
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_set_dsp_index(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: UInt64
    std::uint64_t channel_control_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: dsp_ref, type: UInt64
    std::uint64_t dsp_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: chain_index, type: Float64
    double chain_index = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_channel_control_set_dsp_index(channel_control_ref, dsp_ref, chain_index);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_get_dsp_index(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: UInt64
    std::uint64_t channel_control_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: dsp_ref, type: UInt64
    std::uint64_t dsp_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_channel_control_get_dsp_index(channel_control_ref, dsp_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_set_user_data(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: UInt64
    std::uint64_t channel_control_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: user_data, type: Float64
    double user_data = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_channel_control_set_user_data(channel_control_ref, user_data);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_get_user_data(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: UInt64
    std::uint64_t channel_control_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_channel_control_get_user_data(channel_control_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_get_system_object(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: UInt64
    std::uint64_t channel_control_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_channel_control_get_system_object(channel_control_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: UInt64
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_get_delay(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_ref, type: UInt64
    std::uint64_t channel_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_channel_control_get_delay(channel_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodDelay
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_set_delay(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_ref, type: UInt64
    std::uint64_t channel_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: dspclock_start, type: Float64
    double dspclock_start = gm::wire::codec::readValue<double>(__br);

    // field: dspclock_end, type: Float64
    double dspclock_end = gm::wire::codec::readValue<double>(__br);

    // field: stop_channels, type: Float64
    double stop_channels = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_channel_control_set_delay(channel_ref, dspclock_start, dspclock_end, stop_channels);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_get_dsp_clock(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_ref, type: UInt64
    std::uint64_t channel_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_channel_control_get_dsp_clock(channel_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodDSPClock
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_set_callback(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_ref, type: UInt64
    std::uint64_t channel_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: callback, type: optional<Function>
    std::optional<gm::wire::GMFunction> callback = std::nullopt;
    if (gm::wire::codec::readValue<bool>(__br))
    {
        callback = gm::wire::codec::readFunction(__br, &__dispatch_queue);
    }

    auto&& __result = fmod_channel_control_set_callback(channel_ref, callback);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_dsp_add_input(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: dsp_ref, type: UInt64
    std::uint64_t dsp_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: dsp_input_ref, type: UInt64
    std::uint64_t dsp_input_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: dsp_connection_type, type: Float64
    double dsp_connection_type = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_dsp_add_input(dsp_ref, dsp_input_ref, dsp_connection_type);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: UInt64
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_dsp_get_num_inputs(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: dsp_ref, type: UInt64
    std::uint64_t dsp_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_dsp_get_num_inputs(dsp_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_dsp_get_num_outputs(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: dsp_ref, type: UInt64
    std::uint64_t dsp_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_dsp_get_num_outputs(dsp_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_dsp_disconnect_all(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: dsp_ref, type: UInt64
    std::uint64_t dsp_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: inputs, type: Float64
    double inputs = gm::wire::codec::readValue<double>(__br);

    // field: outputs, type: Float64
    double outputs = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_dsp_disconnect_all(dsp_ref, inputs, outputs);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_dsp_get_num_parameters(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: dsp_ref, type: UInt64
    std::uint64_t dsp_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_dsp_get_num_parameters(dsp_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_dsp_set_parameter_float(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: dsp_ref, type: UInt64
    std::uint64_t dsp_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: index, type: Float64
    double index = gm::wire::codec::readValue<double>(__br);

    // field: value, type: Float64
    double value = gm::wire::codec::readValue<double>(__br);

    fmod_dsp_set_parameter_float(dsp_ref, index, value);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_dsp_get_parameter_float(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: dsp_ref, type: UInt64
    std::uint64_t dsp_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: index, type: Float64
    double index = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_dsp_get_parameter_float(dsp_ref, index);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_dsp_set_parameter_int(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: dsp_ref, type: UInt64
    std::uint64_t dsp_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: index, type: Float64
    double index = gm::wire::codec::readValue<double>(__br);

    // field: value, type: Float64
    double value = gm::wire::codec::readValue<double>(__br);

    fmod_dsp_set_parameter_int(dsp_ref, index, value);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_dsp_get_parameter_int(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: dsp_ref, type: UInt64
    std::uint64_t dsp_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: index, type: Float64
    double index = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_dsp_get_parameter_int(dsp_ref, index);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_dsp_set_parameter_bool(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: dsp_ref, type: UInt64
    std::uint64_t dsp_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: index, type: Float64
    double index = gm::wire::codec::readValue<double>(__br);

    // field: value, type: Float64
    double value = gm::wire::codec::readValue<double>(__br);

    fmod_dsp_set_parameter_bool(dsp_ref, index, value);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_dsp_get_parameter_bool(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: dsp_ref, type: UInt64
    std::uint64_t dsp_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: index, type: Float64
    double index = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_dsp_get_parameter_bool(dsp_ref, index);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_dsp_release(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: dsp_ref, type: UInt64
    std::uint64_t dsp_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    fmod_dsp_release(dsp_ref);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_dsp_get_system_object(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: dsp_ref, type: UInt64
    std::uint64_t dsp_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_dsp_get_system_object(dsp_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: UInt64
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_dsp_get_input(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: dsp_ref, type: UInt64
    std::uint64_t dsp_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: index, type: Float64
    double index = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_dsp_get_input(dsp_ref, index);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: UInt64
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_dsp_get_output(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: dsp_ref, type: UInt64
    std::uint64_t dsp_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: index, type: Float64
    double index = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_dsp_get_output(dsp_ref, index);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: UInt64
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_dsp_disconnect_from(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: dsp_ref, type: UInt64
    std::uint64_t dsp_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: target_dsp, type: UInt64
    std::uint64_t target_dsp = gm::wire::codec::readValue<std::uint64_t>(__br);

    fmod_dsp_disconnect_from(dsp_ref, target_dsp);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_dsp_get_data_parameter_index(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: dsp_ref, type: UInt64
    std::uint64_t dsp_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: data_type, type: Float64
    double data_type = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_dsp_get_data_parameter_index(dsp_ref, data_type);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_dsp_set_parameter_data(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: dsp_ref, type: UInt64
    std::uint64_t dsp_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: index, type: Float64
    double index = gm::wire::codec::readValue<double>(__br);

    // field: buffer, type: Any
    gm::wire::GMValue buffer = gm::wire::codec::readValue<gm::wire::GMValue>(__br);

    // field: length, type: Float64
    double length = gm::wire::codec::readValue<double>(__br);

    fmod_dsp_set_parameter_data(dsp_ref, index, buffer, length);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_dsp_get_parameter_data(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: dsp_ref, type: UInt64
    std::uint64_t dsp_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: index, type: Float64
    double index = gm::wire::codec::readValue<double>(__br);

    // field: buffer, type: Any
    gm::wire::GMValue buffer = gm::wire::codec::readValue<gm::wire::GMValue>(__br);

    // field: length, type: Float64
    double length = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_dsp_get_parameter_data(dsp_ref, index, buffer, length);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_dsp_get_parameter_info(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: dsp_ref, type: UInt64
    std::uint64_t dsp_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: index, type: Float64
    double index = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_dsp_get_parameter_info(dsp_ref, index);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodDSPParameterInfo
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_dsp_set_channel_format(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: dsp_ref, type: UInt64
    std::uint64_t dsp_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: channel_mask, type: Float64
    double channel_mask = gm::wire::codec::readValue<double>(__br);

    // field: num_channels, type: Float64
    double num_channels = gm::wire::codec::readValue<double>(__br);

    fmod_dsp_set_channel_format(dsp_ref, channel_mask, num_channels);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_dsp_get_channel_format(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: dsp_ref, type: UInt64
    std::uint64_t dsp_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_dsp_get_channel_format(dsp_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodDSPChannelFormat
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_dsp_get_output_channel_format(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: dsp_ref, type: UInt64
    std::uint64_t dsp_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_dsp_get_output_channel_format(dsp_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodDSPChannelFormat
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_dsp_get_metering_info(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: dsp_ref, type: UInt64
    std::uint64_t dsp_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_dsp_get_metering_info(dsp_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodDSPMeteringInfo
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_dsp_set_metering_enabled(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: dsp_ref, type: UInt64
    std::uint64_t dsp_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: input_enabled, type: Float64
    double input_enabled = gm::wire::codec::readValue<double>(__br);

    // field: output_enabled, type: Float64
    double output_enabled = gm::wire::codec::readValue<double>(__br);

    fmod_dsp_set_metering_enabled(dsp_ref, input_enabled, output_enabled);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_dsp_get_metering_enabled(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: dsp_ref, type: UInt64
    std::uint64_t dsp_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_dsp_get_metering_enabled(dsp_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodDSPMeteringEnabled
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_dsp_set_active(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: dsp_ref, type: UInt64
    std::uint64_t dsp_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: active, type: Float64
    double active = gm::wire::codec::readValue<double>(__br);

    fmod_dsp_set_active(dsp_ref, active);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_dsp_get_active(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: dsp_ref, type: UInt64
    std::uint64_t dsp_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_dsp_get_active(dsp_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_dsp_set_bypass(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: dsp_ref, type: UInt64
    std::uint64_t dsp_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: bypass, type: Float64
    double bypass = gm::wire::codec::readValue<double>(__br);

    fmod_dsp_set_bypass(dsp_ref, bypass);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_dsp_get_bypass(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: dsp_ref, type: UInt64
    std::uint64_t dsp_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_dsp_get_bypass(dsp_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_dsp_set_wet_dry_mix(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: dsp_ref, type: UInt64
    std::uint64_t dsp_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: prewet, type: Float64
    double prewet = gm::wire::codec::readValue<double>(__br);

    // field: postwet, type: Float64
    double postwet = gm::wire::codec::readValue<double>(__br);

    // field: dry, type: Float64
    double dry = gm::wire::codec::readValue<double>(__br);

    fmod_dsp_set_wet_dry_mix(dsp_ref, prewet, postwet, dry);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_dsp_get_wet_dry_mix(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: dsp_ref, type: UInt64
    std::uint64_t dsp_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_dsp_get_wet_dry_mix(dsp_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodDSPWetDryMix
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_dsp_get_idle(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: dsp_ref, type: UInt64
    std::uint64_t dsp_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_dsp_get_idle(dsp_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_dsp_reset(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: dsp_ref, type: UInt64
    std::uint64_t dsp_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    fmod_dsp_reset(dsp_ref);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_dsp_get_type(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: dsp_ref, type: UInt64
    std::uint64_t dsp_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_dsp_get_type(dsp_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_dsp_get_info(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: dsp_ref, type: UInt64
    std::uint64_t dsp_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_dsp_get_info(dsp_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodDSPInfo
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_dsp_get_cpu_usage(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: dsp_ref, type: UInt64
    std::uint64_t dsp_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_dsp_get_cpu_usage(dsp_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodDSPCPUUsage
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_dsp_set_user_data(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: dsp_ref, type: UInt64
    std::uint64_t dsp_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: user_data, type: Float64
    double user_data = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_dsp_set_user_data(dsp_ref, user_data);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_dsp_get_user_data(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: dsp_ref, type: UInt64
    std::uint64_t dsp_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_dsp_get_user_data(dsp_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_dsp_set_callback(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: dsp_ref, type: UInt64
    std::uint64_t dsp_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: callback, type: optional<Function>
    std::optional<gm::wire::GMFunction> callback = std::nullopt;
    if (gm::wire::codec::readValue<bool>(__br))
    {
        callback = gm::wire::codec::readFunction(__br, &__dispatch_queue);
    }

    auto&& __result = fmod_dsp_set_callback(dsp_ref, callback);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_dsp_connection_set_mix(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: connection_ref, type: UInt64
    std::uint64_t connection_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: volume, type: Float64
    double volume = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_dsp_connection_set_mix(connection_ref, volume);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_dsp_connection_get_mix(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: connection_ref, type: UInt64
    std::uint64_t connection_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_dsp_connection_get_mix(connection_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_dsp_connection_set_mix_matrix(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: connection_ref, type: UInt64
    std::uint64_t connection_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: matrix, type: Float64
    double matrix = gm::wire::codec::readValue<double>(__br);

    // field: out_channels, type: Float64
    double out_channels = gm::wire::codec::readValue<double>(__br);

    // field: in_channels, type: Float64
    double in_channels = gm::wire::codec::readValue<double>(__br);

    // field: in_channel_hop, type: Float64
    double in_channel_hop = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_dsp_connection_set_mix_matrix(connection_ref, matrix, out_channels, in_channels, in_channel_hop);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_dsp_connection_get_mix_matrix(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: connection_ref, type: UInt64
    std::uint64_t connection_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: in_channel_hop, type: Float64
    double in_channel_hop = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_dsp_connection_get_mix_matrix(connection_ref, in_channel_hop);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodDSPMixMatrix
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_dsp_connection_get_input(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: connection_ref, type: UInt64
    std::uint64_t connection_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_dsp_connection_get_input(connection_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: UInt64
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_dsp_connection_get_output(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: connection_ref, type: UInt64
    std::uint64_t connection_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_dsp_connection_get_output(connection_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: UInt64
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_dsp_connection_get_type(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: connection_ref, type: UInt64
    std::uint64_t connection_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_dsp_connection_get_type(connection_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_dsp_connection_set_user_data(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: connection_ref, type: UInt64
    std::uint64_t connection_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: user_data, type: Float64
    double user_data = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_dsp_connection_set_user_data(connection_ref, user_data);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_dsp_connection_get_user_data(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: connection_ref, type: UInt64
    std::uint64_t connection_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_dsp_connection_get_user_data(connection_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_geometry_add_polygon(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: geometry_ref, type: UInt64
    std::uint64_t geometry_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: direct_occlusion, type: Float64
    double direct_occlusion = gm::wire::codec::readValue<double>(__br);

    // field: reverb_occlusion, type: Float64
    double reverb_occlusion = gm::wire::codec::readValue<double>(__br);

    // field: double_sided, type: Float64
    double double_sided = gm::wire::codec::readValue<double>(__br);

    // field: num_vertices, type: Float64
    double num_vertices = gm::wire::codec::readValue<double>(__br);

    // field: vertices, type: Buffer
    gm::wire::GMBuffer vertices = __buffer_queue.front();
    __buffer_queue.pop();

    auto&& __result = fmod_geometry_add_polygon(geometry_ref, direct_occlusion, reverb_occlusion, double_sided, num_vertices, vertices);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_geometry_set_polygon_attributes(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: geometry_ref, type: UInt64
    std::uint64_t geometry_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: polygon_index, type: Float64
    double polygon_index = gm::wire::codec::readValue<double>(__br);

    // field: direct_occlusion, type: Float64
    double direct_occlusion = gm::wire::codec::readValue<double>(__br);

    // field: reverb_occlusion, type: Float64
    double reverb_occlusion = gm::wire::codec::readValue<double>(__br);

    // field: double_sided, type: Float64
    double double_sided = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_geometry_set_polygon_attributes(geometry_ref, polygon_index, direct_occlusion, reverb_occlusion, double_sided);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_geometry_get_polygon_attributes(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: geometry_ref, type: UInt64
    std::uint64_t geometry_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: polygon_index, type: Float64
    double polygon_index = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_geometry_get_polygon_attributes(geometry_ref, polygon_index);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodPolygonAttributes
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_geometry_get_polygon_num_vertices(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: geometry_ref, type: UInt64
    std::uint64_t geometry_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: polygon_index, type: Float64
    double polygon_index = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_geometry_get_polygon_num_vertices(geometry_ref, polygon_index);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_geometry_set_polygon_vertex(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: geometry_ref, type: UInt64
    std::uint64_t geometry_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: polygon_index, type: Float64
    double polygon_index = gm::wire::codec::readValue<double>(__br);

    // field: vertex_index, type: Float64
    double vertex_index = gm::wire::codec::readValue<double>(__br);

    // field: vertex, type: struct FmodVec3
    gm_structs::FmodVec3 vertex = gm::wire::codec::readValue<gm_structs::FmodVec3>(__br);

    auto&& __result = fmod_geometry_set_polygon_vertex(geometry_ref, polygon_index, vertex_index, vertex);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_geometry_get_polygon_vertex(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: geometry_ref, type: UInt64
    std::uint64_t geometry_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: polygon_index, type: Float64
    double polygon_index = gm::wire::codec::readValue<double>(__br);

    // field: vertex_index, type: Float64
    double vertex_index = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_geometry_get_polygon_vertex(geometry_ref, polygon_index, vertex_index);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodVec3
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_geometry_get_num_polygons(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: geometry_ref, type: UInt64
    std::uint64_t geometry_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_geometry_get_num_polygons(geometry_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_geometry_get_max_polygons(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: geometry_ref, type: UInt64
    std::uint64_t geometry_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_geometry_get_max_polygons(geometry_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodGeometryMaxPolygons
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_geometry_set_position(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: geometry_ref, type: UInt64
    std::uint64_t geometry_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: x, type: Float64
    double x = gm::wire::codec::readValue<double>(__br);

    // field: y, type: Float64
    double y = gm::wire::codec::readValue<double>(__br);

    // field: z, type: Float64
    double z = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_geometry_set_position(geometry_ref, x, y, z);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_geometry_get_position(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: geometry_ref, type: UInt64
    std::uint64_t geometry_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_geometry_get_position(geometry_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodVec3
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_geometry_set_rotation(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: geometry_ref, type: UInt64
    std::uint64_t geometry_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: forward_x, type: Float64
    double forward_x = gm::wire::codec::readValue<double>(__br);

    // field: forward_y, type: Float64
    double forward_y = gm::wire::codec::readValue<double>(__br);

    // field: forward_z, type: Float64
    double forward_z = gm::wire::codec::readValue<double>(__br);

    // field: up_x, type: Float64
    double up_x = gm::wire::codec::readValue<double>(__br);

    // field: up_y, type: Float64
    double up_y = gm::wire::codec::readValue<double>(__br);

    // field: up_z, type: Float64
    double up_z = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_geometry_set_rotation(geometry_ref, forward_x, forward_y, forward_z, up_x, up_y, up_z);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_geometry_get_rotation(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: geometry_ref, type: UInt64
    std::uint64_t geometry_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_geometry_get_rotation(geometry_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodGeometryRotation
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_geometry_set_scale(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: geometry_ref, type: UInt64
    std::uint64_t geometry_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: scale_x, type: Float64
    double scale_x = gm::wire::codec::readValue<double>(__br);

    // field: scale_y, type: Float64
    double scale_y = gm::wire::codec::readValue<double>(__br);

    // field: scale_z, type: Float64
    double scale_z = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_geometry_set_scale(geometry_ref, scale_x, scale_y, scale_z);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_geometry_get_scale(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: geometry_ref, type: UInt64
    std::uint64_t geometry_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_geometry_get_scale(geometry_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodVec3
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_geometry_set_user_data(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: geometry_ref, type: UInt64
    std::uint64_t geometry_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: user_data, type: Float64
    double user_data = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_geometry_set_user_data(geometry_ref, user_data);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_geometry_get_user_data(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: geometry_ref, type: UInt64
    std::uint64_t geometry_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_geometry_get_user_data(geometry_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_geometry_get_active(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: geometry_ref, type: UInt64
    std::uint64_t geometry_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_geometry_get_active(geometry_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_geometry_set_active(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: geometry_ref, type: UInt64
    std::uint64_t geometry_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: active, type: Float64
    double active = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_geometry_set_active(geometry_ref, active);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_geometry_save(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: geometry_ref, type: UInt64
    std::uint64_t geometry_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: filename, type: String
    std::string_view filename = gm::wire::codec::readValue<std::string_view>(__br);

    auto&& __result = fmod_geometry_save(geometry_ref, filename);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_geometry_release(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: geometry_ref, type: UInt64
    std::uint64_t geometry_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_geometry_release(geometry_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_create(char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_system_create();
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: UInt64
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_init(double max_channels, double studio_flags, double core_flags)
{
    auto&& __result = fmod_studio_system_init(static_cast<double>(max_channels), static_cast<double>(studio_flags), static_cast<double>(core_flags));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_release()
{
    auto&& __result = fmod_studio_system_release();
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_update()
{
    auto&& __result = fmod_studio_system_update();
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_flush_commands()
{
    auto&& __result = fmod_studio_system_flush_commands();
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_flush_sample_loading()
{
    auto&& __result = fmod_studio_system_flush_sample_loading();
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_load_bank_file(char* filename, double flags, char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_system_load_bank_file(filename, static_cast<double>(flags));
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: optional<UInt64>
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_load_bank_memory(char* data, double flags, char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_system_load_bank_memory(data, static_cast<double>(flags));
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: optional<UInt64>
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_unload_all()
{
    auto&& __result = fmod_studio_system_unload_all();
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_get_bank_count()
{
    auto&& __result = fmod_studio_system_get_bank_count();
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_get_bank_at(double index, char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_system_get_bank_at(static_cast<double>(index));
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: optional<UInt64>
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_get_bank(char* path, char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_system_get_bank(path);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: optional<UInt64>
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_get_bank_by_id(char* str_guid, char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_system_get_bank_by_id(str_guid);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: optional<UInt64>
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_get_event(char* path, char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_system_get_event(path);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: optional<UInt64>
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_create_event_instance(char* path, char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_system_create_event_instance(path);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: optional<UInt64>
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_get_bus(char* path, char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_system_get_bus(path);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: optional<UInt64>
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_get_master_bus(char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_system_get_master_bus();
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: optional<UInt64>
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_get_bus_by_id(char* str_guid, char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_system_get_bus_by_id(str_guid);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: optional<UInt64>
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_get_vca(char* path, char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_system_get_vca(path);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: optional<UInt64>
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_get_vca_by_id(char* str_guid, char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_system_get_vca_by_id(str_guid);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: optional<UInt64>
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_set_listener_attributes(double listener_index, double x, double y, double z)
{
    auto&& __result = fmod_studio_system_set_listener_attributes(static_cast<double>(listener_index), static_cast<double>(x), static_cast<double>(y), static_cast<double>(z));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_set_listener_weight(double listener_index, double weight)
{
    auto&& __result = fmod_studio_system_set_listener_weight(static_cast<double>(listener_index), static_cast<double>(weight));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_get_num_listeners()
{
    auto&& __result = fmod_studio_system_get_num_listeners();
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_get_listener_attributes(double listener_index, char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_system_get_listener_attributes(static_cast<double>(listener_index));
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodStudioListenerAttributes
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_get_listener_weight(double listener_index)
{
    auto&& __result = fmod_studio_system_get_listener_weight(static_cast<double>(listener_index));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_set_parameter_by_name(char* name, double value)
{
    auto&& __result = fmod_studio_system_set_parameter_by_name(name, static_cast<double>(value));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_get_parameter_by_name(char* name)
{
    auto&& __result = fmod_studio_system_get_parameter_by_name(name);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_get_core_system(char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_system_get_core_system();
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: UInt64
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_set_num_listeners(double count)
{
    auto&& __result = fmod_studio_system_set_num_listeners(static_cast<double>(count));
    return static_cast<double>(__result);
}

GMEXPORT char* __EXT_NATIVE__fmod_studio_system_lookup_id(char* path)
{
    static std::string __result;
    __result = fmod_studio_system_lookup_id(path);
    return (char*)__result.c_str();
}

GMEXPORT char* __EXT_NATIVE__fmod_studio_system_lookup_path(char* str_guid)
{
    static std::string __result;
    __result = fmod_studio_system_lookup_path(str_guid);
    return (char*)__result.c_str();
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_get_event_by_id(char* id, char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_system_get_event_by_id(id);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: UInt64
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_is_valid()
{
    auto&& __result = fmod_studio_system_is_valid();
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_start_command_capture(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: filename, type: String
    std::string_view filename = gm::wire::codec::readValue<std::string_view>(__br);

    // field: flags, type: enum FmodStudioCommandCaptureFlags
    gm_enums::FmodStudioCommandCaptureFlags flags = gm::wire::codec::readValue<gm_enums::FmodStudioCommandCaptureFlags>(__br);

    auto&& __result = fmod_studio_system_start_command_capture(filename, flags);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_stop_command_capture()
{
    auto&& __result = fmod_studio_system_stop_command_capture();
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_load_command_replay(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: filename, type: String
    std::string_view filename = gm::wire::codec::readValue<std::string_view>(__br);

    // field: flags, type: enum FmodStudioCommandReplayFlags
    gm_enums::FmodStudioCommandReplayFlags flags = gm::wire::codec::readValue<gm_enums::FmodStudioCommandReplayFlags>(__br);

    auto&& __result = fmod_studio_system_load_command_replay(filename, flags);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: UInt64
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_get_sound_info(char* key, char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_system_get_sound_info(key);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodStudioSoundInfo
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_get_parameter_by_id(double id_data1, double id_data2, char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_system_get_parameter_by_id(static_cast<double>(id_data1), static_cast<double>(id_data2));
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodStudioParameterValue
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_set_parameter_by_id(double id_data1, double id_data2, double value, double ignore_seek_speed)
{
    auto&& __result = fmod_studio_system_set_parameter_by_id(static_cast<double>(id_data1), static_cast<double>(id_data2), static_cast<double>(value), static_cast<double>(ignore_seek_speed));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_get_parameter_description_by_id(double id_data1, double id_data2, char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_system_get_parameter_description_by_id(static_cast<double>(id_data1), static_cast<double>(id_data2));
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodStudioParameterDescription
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_get_parameter_description_by_name(char* name, char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_system_get_parameter_description_by_name(name);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodStudioParameterDescription
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_get_parameter_description_count()
{
    auto&& __result = fmod_studio_system_get_parameter_description_count();
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_get_parameter_description_at(double index, char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_system_get_parameter_description_at(static_cast<double>(index));
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodStudioParameterDescription
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT char* __EXT_NATIVE__fmod_studio_system_get_parameter_label_by_id(double id_data1, double id_data2, double label_index)
{
    static std::string __result;
    __result = fmod_studio_system_get_parameter_label_by_id(static_cast<double>(id_data1), static_cast<double>(id_data2), static_cast<double>(label_index));
    return (char*)__result.c_str();
}

GMEXPORT char* __EXT_NATIVE__fmod_studio_system_get_parameter_label_by_name(char* name, double label_index)
{
    static std::string __result;
    __result = fmod_studio_system_get_parameter_label_by_name(name, static_cast<double>(label_index));
    return (char*)__result.c_str();
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_set_parameter_by_id_with_label(double id_data1, double id_data2, char* label, double ignore_seek_speed)
{
    auto&& __result = fmod_studio_system_set_parameter_by_id_with_label(static_cast<double>(id_data1), static_cast<double>(id_data2), label, static_cast<double>(ignore_seek_speed));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_set_parameter_by_name_with_label(char* name, char* label, double ignore_seek_speed)
{
    auto&& __result = fmod_studio_system_set_parameter_by_name_with_label(name, label, static_cast<double>(ignore_seek_speed));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_get_cpu_usage(char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_system_get_cpu_usage();
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodStudioSystemCPUUsage
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_get_buffer_usage(char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_system_get_buffer_usage();
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodStudioBufferUsage
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_reset_buffer_usage()
{
    auto&& __result = fmod_studio_system_reset_buffer_usage();
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_get_memory_usage(char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_system_get_memory_usage();
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodStudioMemoryUsage
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_get_advanced_settings(char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_system_get_advanced_settings();
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodStudioAdvancedSettings
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_set_advanced_settings(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: settings, type: struct FmodStudioAdvancedSettings
    gm_structs::FmodStudioAdvancedSettings settings = gm::wire::codec::readValue<gm_structs::FmodStudioAdvancedSettings>(__br);

    auto&& __result = fmod_studio_system_set_advanced_settings(settings);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_set_callback(double callback_mask)
{
    auto&& __result = fmod_studio_system_set_callback(static_cast<double>(callback_mask));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_get_user_data()
{
    auto&& __result = fmod_studio_system_get_user_data();
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_set_user_data(double user_data)
{
    auto&& __result = fmod_studio_system_set_user_data(static_cast<double>(user_data));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bank_unload(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bank_ref, type: UInt64
    std::uint64_t bank_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_bank_unload(bank_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bank_get_loading_state(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bank_ref, type: UInt64
    std::uint64_t bank_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_bank_get_loading_state(bank_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bank_get_sample_loading_state(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bank_ref, type: UInt64
    std::uint64_t bank_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_bank_get_sample_loading_state(bank_ref);
    return static_cast<double>(__result);
}

GMEXPORT char* __EXT_NATIVE__fmod_studio_bank_get_path(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bank_ref, type: UInt64
    std::uint64_t bank_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    static std::string __result;
    __result = fmod_studio_bank_get_path(bank_ref);
    return (char*)__result.c_str();
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bank_get_parent_studio_system(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bank_ref, type: UInt64
    std::uint64_t bank_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_bank_get_parent_studio_system(bank_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: optional<UInt64>
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bank_get_event_count(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bank_ref, type: UInt64
    std::uint64_t bank_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_bank_get_event_count(bank_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bank_get_event_at(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bank_ref, type: UInt64
    std::uint64_t bank_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: index, type: Float64
    double index = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_bank_get_event_at(bank_ref, index);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: optional<UInt64>
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bank_get_bus_count(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bank_ref, type: UInt64
    std::uint64_t bank_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_bank_get_bus_count(bank_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bank_get_bus_at(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bank_ref, type: UInt64
    std::uint64_t bank_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: index, type: Float64
    double index = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_bank_get_bus_at(bank_ref, index);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: optional<UInt64>
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bank_get_vca_count(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bank_ref, type: UInt64
    std::uint64_t bank_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_bank_get_vca_count(bank_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bank_get_vca_at(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bank_ref, type: UInt64
    std::uint64_t bank_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: index, type: Float64
    double index = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_bank_get_vca_at(bank_ref, index);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: optional<UInt64>
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bank_get_string_count(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bank_ref, type: UInt64
    std::uint64_t bank_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_bank_get_string_count(bank_ref);
    return static_cast<double>(__result);
}

GMEXPORT char* __EXT_NATIVE__fmod_studio_bank_get_id(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bank_ref, type: UInt64
    std::uint64_t bank_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    static std::string __result;
    __result = fmod_studio_bank_get_id(bank_ref);
    return (char*)__result.c_str();
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bank_is_valid(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bank_ref, type: UInt64
    std::uint64_t bank_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_bank_is_valid(bank_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bank_get_string_info(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bank_ref, type: UInt64
    std::uint64_t bank_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: string_index, type: Float64
    double string_index = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_bank_get_string_info(bank_ref, string_index);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodStudioStringInfo
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bank_load_sample_data(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bank_ref, type: UInt64
    std::uint64_t bank_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_bank_load_sample_data(bank_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bank_unload_sample_data(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bank_ref, type: UInt64
    std::uint64_t bank_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_bank_unload_sample_data(bank_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bank_get_user_data(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bank_ref, type: UInt64
    std::uint64_t bank_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_bank_get_user_data(bank_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bank_set_user_data(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bank_ref, type: UInt64
    std::uint64_t bank_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: user_data, type: Float64
    double user_data = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_bank_set_user_data(bank_ref, user_data);
    return static_cast<double>(__result);
}

GMEXPORT char* __EXT_NATIVE__fmod_studio_event_description_get_path(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    static std::string __result;
    __result = fmod_studio_event_description_get_path(event_desc_ref);
    return (char*)__result.c_str();
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_create_instance(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_description_create_instance(event_desc_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: optional<UInt64>
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_get_instance_count(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_description_get_instance_count(event_desc_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_get_instance_at(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: index, type: Float64
    double index = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_event_description_get_instance_at(event_desc_ref, index);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: optional<UInt64>
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_is_snapshot(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_description_is_snapshot(event_desc_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_is_one_shot(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_description_is_one_shot(event_desc_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_has_sustain_point(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_description_has_sustain_point(event_desc_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_get_length(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_description_get_length(event_desc_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_get_parameter_count(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_description_get_parameter_count(event_desc_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_release_all_instances(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_description_release_all_instances(event_desc_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_get_parameter_description_by_name(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: name, type: String
    std::string_view name = gm::wire::codec::readValue<std::string_view>(__br);

    auto&& __result = fmod_studio_event_description_get_parameter_description_by_name(event_desc_ref, name);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodStudioParameterDescription
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_load_sample_data(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_description_load_sample_data(event_desc_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_is_valid(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_description_is_valid(event_desc_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_is_3d(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_description_is_3d(event_desc_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_is_stream(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_description_is_stream(event_desc_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_is_doppler_enabled(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_description_is_doppler_enabled(event_desc_ref);
    return static_cast<double>(__result);
}

GMEXPORT char* __EXT_NATIVE__fmod_studio_event_description_get_id(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    static std::string __result;
    __result = fmod_studio_event_description_get_id(event_desc_ref);
    return (char*)__result.c_str();
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_get_min_max_distance(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_description_get_min_max_distance(event_desc_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodMinMaxDistance
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_get_sound_size(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_description_get_sound_size(event_desc_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_get_sample_loading_state(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_description_get_sample_loading_state(event_desc_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_unload_sample_data(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_description_unload_sample_data(event_desc_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_set_callback(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: callback_mask, type: Float64
    double callback_mask = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_event_description_set_callback(event_desc_ref, callback_mask);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_get_user_data(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_description_get_user_data(event_desc_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_set_user_data(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: user_data, type: Float64
    double user_data = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_event_description_set_user_data(event_desc_ref, user_data);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_get_user_property(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: name, type: String
    std::string_view name = gm::wire::codec::readValue<std::string_view>(__br);

    auto&& __result = fmod_studio_event_description_get_user_property(event_desc_ref, name);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodStudioUserProperty
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_get_user_property_at(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: index, type: Float64
    double index = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_event_description_get_user_property_at(event_desc_ref, index);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodStudioUserProperty
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_get_user_property_count(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_description_get_user_property_count(event_desc_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_get_parameter_description_by_id(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: id_data1, type: Float64
    double id_data1 = gm::wire::codec::readValue<double>(__br);

    // field: id_data2, type: Float64
    double id_data2 = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_event_description_get_parameter_description_by_id(event_desc_ref, id_data1, id_data2);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodStudioParameterDescription
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_get_parameter_description_at(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: index, type: Float64
    double index = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_event_description_get_parameter_description_at(event_desc_ref, index);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodStudioParameterDescription
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT char* __EXT_NATIVE__fmod_studio_event_description_get_parameter_label_by_id(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: id_data1, type: Float64
    double id_data1 = gm::wire::codec::readValue<double>(__br);

    // field: id_data2, type: Float64
    double id_data2 = gm::wire::codec::readValue<double>(__br);

    // field: label_index, type: Float64
    double label_index = gm::wire::codec::readValue<double>(__br);

    static std::string __result;
    __result = fmod_studio_event_description_get_parameter_label_by_id(event_desc_ref, id_data1, id_data2, label_index);
    return (char*)__result.c_str();
}

GMEXPORT char* __EXT_NATIVE__fmod_studio_event_description_get_parameter_label_at(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: index, type: Float64
    double index = gm::wire::codec::readValue<double>(__br);

    // field: label_index, type: Float64
    double label_index = gm::wire::codec::readValue<double>(__br);

    static std::string __result;
    __result = fmod_studio_event_description_get_parameter_label_at(event_desc_ref, index, label_index);
    return (char*)__result.c_str();
}

GMEXPORT char* __EXT_NATIVE__fmod_studio_event_description_get_parameter_label_by_name(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: name, type: String
    std::string_view name = gm::wire::codec::readValue<std::string_view>(__br);

    // field: label_index, type: Float64
    double label_index = gm::wire::codec::readValue<double>(__br);

    static std::string __result;
    __result = fmod_studio_event_description_get_parameter_label_by_name(event_desc_ref, name, label_index);
    return (char*)__result.c_str();
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_start(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_instance_start(instance_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_stop(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: stop_mode, type: Float64
    double stop_mode = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_event_instance_stop(instance_ref, stop_mode);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_get_playback_state(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_instance_get_playback_state(instance_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_get_paused(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_instance_get_paused(instance_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_set_paused(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: paused, type: Float64
    double paused = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_event_instance_set_paused(instance_ref, paused);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_get_timeline_position(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_instance_get_timeline_position(instance_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_set_timeline_position(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: position, type: Float64
    double position = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_event_instance_set_timeline_position(instance_ref, position);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_keyoff(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_instance_keyoff(instance_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_get_volume(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_instance_get_volume(instance_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_set_volume(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: volume, type: Float64
    double volume = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_event_instance_set_volume(instance_ref, volume);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_get_pitch(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_instance_get_pitch(instance_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_set_pitch(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: pitch, type: Float64
    double pitch = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_event_instance_set_pitch(instance_ref, pitch);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_set_parameter_by_name(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: name, type: String
    std::string_view name = gm::wire::codec::readValue<std::string_view>(__br);

    // field: value, type: Float64
    double value = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_event_instance_set_parameter_by_name(instance_ref, name, value);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_get_parameter_by_name(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: name, type: String
    std::string_view name = gm::wire::codec::readValue<std::string_view>(__br);

    auto&& __result = fmod_studio_event_instance_get_parameter_by_name(instance_ref, name);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_get_parameter_count(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_instance_get_parameter_count(instance_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_get_parameter_by_id(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: id_data1, type: Float64
    double id_data1 = gm::wire::codec::readValue<double>(__br);

    // field: id_data2, type: Float64
    double id_data2 = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_event_instance_get_parameter_by_id(instance_ref, id_data1, id_data2);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_set_parameter_by_id(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: id_data1, type: Float64
    double id_data1 = gm::wire::codec::readValue<double>(__br);

    // field: id_data2, type: Float64
    double id_data2 = gm::wire::codec::readValue<double>(__br);

    // field: value, type: Float64
    double value = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_event_instance_set_parameter_by_id(instance_ref, id_data1, id_data2, value);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_set_callback(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: callback, type: optional<Function>
    std::optional<gm::wire::GMFunction> callback = std::nullopt;
    if (gm::wire::codec::readValue<bool>(__br))
    {
        callback = gm::wire::codec::readFunction(__br, &__dispatch_queue);
    }

    // field: mask, type: enum FmodStudioEventCallbackType
    gm_enums::FmodStudioEventCallbackType mask = gm::wire::codec::readValue<gm_enums::FmodStudioEventCallbackType>(__br);

    auto&& __result = fmod_studio_event_instance_set_callback(instance_ref, callback, mask);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_set_parameter_by_id_with_label(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: id_data1, type: Float64
    double id_data1 = gm::wire::codec::readValue<double>(__br);

    // field: id_data2, type: Float64
    double id_data2 = gm::wire::codec::readValue<double>(__br);

    // field: label, type: String
    std::string_view label = gm::wire::codec::readValue<std::string_view>(__br);

    // field: ignore_seek_speed, type: Float64
    double ignore_seek_speed = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_event_instance_set_parameter_by_id_with_label(instance_ref, id_data1, id_data2, label, ignore_seek_speed);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_set_parameter_by_name_with_label(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: name, type: String
    std::string_view name = gm::wire::codec::readValue<std::string_view>(__br);

    // field: label, type: String
    std::string_view label = gm::wire::codec::readValue<std::string_view>(__br);

    // field: ignore_seek_speed, type: Float64
    double ignore_seek_speed = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_event_instance_set_parameter_by_name_with_label(instance_ref, name, label, ignore_seek_speed);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_set_3d_attributes(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: x, type: Float64
    double x = gm::wire::codec::readValue<double>(__br);

    // field: y, type: Float64
    double y = gm::wire::codec::readValue<double>(__br);

    // field: z, type: Float64
    double z = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_event_instance_set_3d_attributes(instance_ref, x, y, z);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_get_3d_attributes(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_instance_get_3d_attributes(instance_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodChannelControl3DAttributes
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_get_min_max_distance(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_instance_get_min_max_distance(instance_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodMinMaxDistance
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_get_listener_mask(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_instance_get_listener_mask(instance_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_set_listener_mask(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: mask, type: Float64
    double mask = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_event_instance_set_listener_mask(instance_ref, mask);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_get_reverb_level(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: index, type: Float64
    double index = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_event_instance_get_reverb_level(instance_ref, index);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_set_reverb_level(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: index, type: Float64
    double index = gm::wire::codec::readValue<double>(__br);

    // field: level, type: Float64
    double level = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_event_instance_set_reverb_level(instance_ref, index, level);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_get_property(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: property_type, type: enum FmodStudioEventProperty
    gm_enums::FmodStudioEventProperty property_type = gm::wire::codec::readValue<gm_enums::FmodStudioEventProperty>(__br);

    auto&& __result = fmod_studio_event_instance_get_property(instance_ref, property_type);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_set_property(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: property_type, type: enum FmodStudioEventProperty
    gm_enums::FmodStudioEventProperty property_type = gm::wire::codec::readValue<gm_enums::FmodStudioEventProperty>(__br);

    // field: value, type: Float64
    double value = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_event_instance_set_property(instance_ref, property_type, value);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_get_user_data(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_instance_get_user_data(instance_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_set_user_data(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: user_data, type: Float64
    double user_data = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_event_instance_set_user_data(instance_ref, user_data);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_is_valid(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_instance_is_valid(instance_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_is_virtual(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_instance_is_virtual(instance_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_get_channel_group(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_instance_get_channel_group(instance_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: UInt64
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_get_cpu_usage(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_instance_get_cpu_usage(instance_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodStudioCPUUsage
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_get_memory_usage(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_instance_get_memory_usage(instance_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodStudioMemoryUsage
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_get_description(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_instance_get_description(instance_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: optional<UInt64>
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_release(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_instance_release(instance_ref);
    return static_cast<double>(__result);
}

GMEXPORT char* __EXT_NATIVE__fmod_studio_bus_get_path(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bus_ref, type: UInt64
    std::uint64_t bus_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    static std::string __result;
    __result = fmod_studio_bus_get_path(bus_ref);
    return (char*)__result.c_str();
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bus_get_volume(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bus_ref, type: UInt64
    std::uint64_t bus_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_bus_get_volume(bus_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bus_set_volume(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bus_ref, type: UInt64
    std::uint64_t bus_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: volume, type: Float64
    double volume = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_bus_set_volume(bus_ref, volume);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bus_get_paused(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bus_ref, type: UInt64
    std::uint64_t bus_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_bus_get_paused(bus_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bus_set_paused(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bus_ref, type: UInt64
    std::uint64_t bus_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: paused, type: Float64
    double paused = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_bus_set_paused(bus_ref, paused);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bus_stop_all_events(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bus_ref, type: UInt64
    std::uint64_t bus_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: stop_mode, type: Float64
    double stop_mode = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_bus_stop_all_events(bus_ref, stop_mode);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bus_get_master_bus(char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_bus_get_master_bus();
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: optional<UInt64>
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT char* __EXT_NATIVE__fmod_studio_bus_get_id(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bus_ref, type: UInt64
    std::uint64_t bus_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    static std::string __result;
    __result = fmod_studio_bus_get_id(bus_ref);
    return (char*)__result.c_str();
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bus_is_valid(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bus_ref, type: UInt64
    std::uint64_t bus_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_bus_is_valid(bus_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bus_get_channel_group(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bus_ref, type: UInt64
    std::uint64_t bus_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_bus_get_channel_group(bus_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: UInt64
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bus_lock_channel_group(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bus_ref, type: UInt64
    std::uint64_t bus_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_bus_lock_channel_group(bus_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bus_unlock_channel_group(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bus_ref, type: UInt64
    std::uint64_t bus_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_bus_unlock_channel_group(bus_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bus_get_cpu_usage(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bus_ref, type: UInt64
    std::uint64_t bus_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_bus_get_cpu_usage(bus_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodStudioCPUUsage
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bus_get_memory_usage(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bus_ref, type: UInt64
    std::uint64_t bus_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_bus_get_memory_usage(bus_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodStudioMemoryUsage
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bus_get_mute(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bus_ref, type: UInt64
    std::uint64_t bus_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_bus_get_mute(bus_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bus_set_mute(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bus_ref, type: UInt64
    std::uint64_t bus_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: mute, type: Float64
    double mute = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_bus_set_mute(bus_ref, mute);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bus_get_port_index(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bus_ref, type: UInt64
    std::uint64_t bus_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_bus_get_port_index(bus_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: UInt64
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bus_set_port_index(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bus_ref, type: UInt64
    std::uint64_t bus_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: port_index, type: UInt64
    std::uint64_t port_index = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_bus_set_port_index(bus_ref, port_index);
    return static_cast<double>(__result);
}

GMEXPORT char* __EXT_NATIVE__fmod_studio_vca_get_path(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: vca_ref, type: UInt64
    std::uint64_t vca_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    static std::string __result;
    __result = fmod_studio_vca_get_path(vca_ref);
    return (char*)__result.c_str();
}

GMEXPORT double __EXT_NATIVE__fmod_studio_vca_get_volume(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: vca_ref, type: UInt64
    std::uint64_t vca_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_vca_get_volume(vca_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_vca_set_volume(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: vca_ref, type: UInt64
    std::uint64_t vca_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: volume, type: Float64
    double volume = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_vca_set_volume(vca_ref, volume);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_command_replay_get_playback_state(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: replay_ref, type: UInt64
    std::uint64_t replay_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_command_replay_get_playback_state(replay_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_command_replay_get_current_command(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: replay_ref, type: UInt64
    std::uint64_t replay_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_command_replay_get_current_command(replay_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_command_replay_release(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: replay_ref, type: UInt64
    std::uint64_t replay_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_command_replay_release(replay_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_command_replay_get_command_count(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: replay_ref, type: UInt64
    std::uint64_t replay_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_command_replay_get_command_count(replay_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_command_replay_get_length(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: replay_ref, type: UInt64
    std::uint64_t replay_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_command_replay_get_length(replay_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_command_replay_get_system_object(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: replay_ref, type: UInt64
    std::uint64_t replay_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_command_replay_get_system_object(replay_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: UInt64
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_command_replay_is_valid(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: replay_ref, type: UInt64
    std::uint64_t replay_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_command_replay_is_valid(replay_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_command_replay_get_command_info(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: replay_ref, type: UInt64
    std::uint64_t replay_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: command_index, type: Float64
    double command_index = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_command_replay_get_command_info(replay_ref, command_index);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodStudioCommandInfo
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT char* __EXT_NATIVE__fmod_studio_command_replay_get_command_string(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: replay_ref, type: UInt64
    std::uint64_t replay_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: command_index, type: Float64
    double command_index = gm::wire::codec::readValue<double>(__br);

    static std::string __result;
    __result = fmod_studio_command_replay_get_command_string(replay_ref, command_index);
    return (char*)__result.c_str();
}

GMEXPORT double __EXT_NATIVE__fmod_studio_command_replay_get_command_at_time(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: replay_ref, type: UInt64
    std::uint64_t replay_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: time, type: Float64
    double time = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_command_replay_get_command_at_time(replay_ref, time);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_command_replay_seek_to_command(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: replay_ref, type: UInt64
    std::uint64_t replay_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: command_index, type: Float64
    double command_index = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_command_replay_seek_to_command(replay_ref, command_index);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_command_replay_seek_to_time(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: replay_ref, type: UInt64
    std::uint64_t replay_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: time, type: Float64
    double time = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_command_replay_seek_to_time(replay_ref, time);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_command_replay_set_bank_path(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: replay_ref, type: UInt64
    std::uint64_t replay_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: path, type: String
    std::string_view path = gm::wire::codec::readValue<std::string_view>(__br);

    auto&& __result = fmod_studio_command_replay_set_bank_path(replay_ref, path);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_command_replay_get_paused(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: replay_ref, type: UInt64
    std::uint64_t replay_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_command_replay_get_paused(replay_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_command_replay_set_paused(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: replay_ref, type: UInt64
    std::uint64_t replay_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: paused, type: Float64
    double paused = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_command_replay_set_paused(replay_ref, paused);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_command_replay_start(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: replay_ref, type: UInt64
    std::uint64_t replay_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_command_replay_start(replay_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_command_replay_stop(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: replay_ref, type: UInt64
    std::uint64_t replay_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_command_replay_stop(replay_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_command_replay_get_user_data(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: replay_ref, type: UInt64
    std::uint64_t replay_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_command_replay_get_user_data(replay_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_command_replay_set_user_data(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: replay_ref, type: UInt64
    std::uint64_t replay_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: user_data, type: Float64
    double user_data = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_command_replay_set_user_data(replay_ref, user_data);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_command_replay_set_frame_callback(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: replay_ref, type: UInt64
    std::uint64_t replay_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: callback, type: optional<Function>
    std::optional<gm::wire::GMFunction> callback = std::nullopt;
    if (gm::wire::codec::readValue<bool>(__br))
    {
        callback = gm::wire::codec::readFunction(__br, &__dispatch_queue);
    }

    auto&& __result = fmod_studio_command_replay_set_frame_callback(replay_ref, callback);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_command_replay_set_create_instance_callback(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: replay_ref, type: UInt64
    std::uint64_t replay_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: callback, type: optional<Function>
    std::optional<gm::wire::GMFunction> callback = std::nullopt;
    if (gm::wire::codec::readValue<bool>(__br))
    {
        callback = gm::wire::codec::readFunction(__br, &__dispatch_queue);
    }

    auto&& __result = fmod_studio_command_replay_set_create_instance_callback(replay_ref, callback);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_command_replay_set_load_bank_callback(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: replay_ref, type: UInt64
    std::uint64_t replay_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: callback, type: optional<Function>
    std::optional<gm::wire::GMFunction> callback = std::nullopt;
    if (gm::wire::codec::readValue<bool>(__br))
    {
        callback = gm::wire::codec::readFunction(__br, &__dispatch_queue);
    }

    auto&& __result = fmod_studio_command_replay_set_load_bank_callback(replay_ref, callback);
    return static_cast<double>(__result);
}

