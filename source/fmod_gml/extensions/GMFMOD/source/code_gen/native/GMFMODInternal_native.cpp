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

GMEXPORT double __EXT_NATIVE__fmod_channel_set_frequency(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_ref, type: struct FmodChannelRef
    gm_structs::FmodChannelRef channel_ref = gm::wire::codec::readValue<gm_structs::FmodChannelRef>(__br);

    // field: frequency, type: Float64
    double frequency = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_channel_set_frequency(channel_ref, frequency);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_get_frequency(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_ref, type: struct FmodChannelRef
    gm_structs::FmodChannelRef channel_ref = gm::wire::codec::readValue<gm_structs::FmodChannelRef>(__br);

    auto&& __result = fmod_channel_get_frequency(channel_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_set_priority(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_ref, type: struct FmodChannelRef
    gm_structs::FmodChannelRef channel_ref = gm::wire::codec::readValue<gm_structs::FmodChannelRef>(__br);

    // field: priority, type: Float64
    double priority = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_channel_set_priority(channel_ref, priority);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_get_priority(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_ref, type: struct FmodChannelRef
    gm_structs::FmodChannelRef channel_ref = gm::wire::codec::readValue<gm_structs::FmodChannelRef>(__br);

    auto&& __result = fmod_channel_get_priority(channel_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_set_position(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_ref, type: struct FmodChannelRef
    gm_structs::FmodChannelRef channel_ref = gm::wire::codec::readValue<gm_structs::FmodChannelRef>(__br);

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

    // field: channel_ref, type: struct FmodChannelRef
    gm_structs::FmodChannelRef channel_ref = gm::wire::codec::readValue<gm_structs::FmodChannelRef>(__br);

    // field: time_unit, type: Float64
    double time_unit = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_channel_get_position(channel_ref, time_unit);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_set_channel_group(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_ref, type: struct FmodChannelRef
    gm_structs::FmodChannelRef channel_ref = gm::wire::codec::readValue<gm_structs::FmodChannelRef>(__br);

    // field: channel_group_ref, type: struct FmodChannelGroupRef
    gm_structs::FmodChannelGroupRef channel_group_ref = gm::wire::codec::readValue<gm_structs::FmodChannelGroupRef>(__br);

    auto&& __result = fmod_channel_set_channel_group(channel_ref, channel_group_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_get_channel_group(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_ref, type: struct FmodChannelRef
    gm_structs::FmodChannelRef channel_ref = gm::wire::codec::readValue<gm_structs::FmodChannelRef>(__br);

    auto&& __result = fmod_channel_get_channel_group(channel_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodChannelGroupRef
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_channel_set_loop_count(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_ref, type: struct FmodChannelRef
    gm_structs::FmodChannelRef channel_ref = gm::wire::codec::readValue<gm_structs::FmodChannelRef>(__br);

    // field: loop_count, type: Float64
    double loop_count = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_channel_set_loop_count(channel_ref, loop_count);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_get_loop_count(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_ref, type: struct FmodChannelRef
    gm_structs::FmodChannelRef channel_ref = gm::wire::codec::readValue<gm_structs::FmodChannelRef>(__br);

    auto&& __result = fmod_channel_get_loop_count(channel_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_set_loop_points(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_ref, type: struct FmodChannelRef
    gm_structs::FmodChannelRef channel_ref = gm::wire::codec::readValue<gm_structs::FmodChannelRef>(__br);

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

GMEXPORT double __EXT_NATIVE__fmod_channel_is_virtual(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_ref, type: struct FmodChannelRef
    gm_structs::FmodChannelRef channel_ref = gm::wire::codec::readValue<gm_structs::FmodChannelRef>(__br);

    auto&& __result = fmod_channel_is_virtual(channel_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_get_index(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_ref, type: struct FmodChannelRef
    gm_structs::FmodChannelRef channel_ref = gm::wire::codec::readValue<gm_structs::FmodChannelRef>(__br);

    auto&& __result = fmod_channel_get_index(channel_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_get_current_sound(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_ref, type: struct FmodChannelRef
    gm_structs::FmodChannelRef channel_ref = gm::wire::codec::readValue<gm_structs::FmodChannelRef>(__br);

    auto&& __result = fmod_channel_get_current_sound(channel_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodSoundRef
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_channel_get_system_object(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_ref, type: struct FmodChannelRef
    gm_structs::FmodChannelRef channel_ref = gm::wire::codec::readValue<gm_structs::FmodChannelRef>(__br);

    auto&& __result = fmod_channel_get_system_object(channel_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodSystemRef
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_system_create(char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_system_create();
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodSystemRef
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

    // field: system_ref, type: struct FmodSystemRef
    gm_structs::FmodSystemRef system_ref = gm::wire::codec::readValue<gm_structs::FmodSystemRef>(__br);

    auto&& __result = fmod_system_release(system_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_system_close(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: system_ref, type: struct FmodSystemRef
    gm_structs::FmodSystemRef system_ref = gm::wire::codec::readValue<gm_structs::FmodSystemRef>(__br);

    auto&& __result = fmod_system_close(system_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_system_update()
{
    auto&& __result = fmod_system_update();
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_system_get_channel(double index, char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_system_get_channel(static_cast<double>(index));
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodChannelRef
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_system_get_master_channel_group(char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_system_get_master_channel_group();
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodChannelGroupRef
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

GMEXPORT double __EXT_NATIVE__fmod_system_create_sound(char* name_or_data, double mode, char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_system_create_sound(name_or_data, static_cast<double>(mode));
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodSoundRef
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_system_create_stream(char* name_or_data, double mode, char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_system_create_stream(name_or_data, static_cast<double>(mode));
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodSoundRef
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_system_play_sound(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_ref, type: struct FmodSoundRef
    gm_structs::FmodSoundRef sound_ref = gm::wire::codec::readValue<gm_structs::FmodSoundRef>(__br);

    // field: channel_group_ref, type: struct FmodChannelGroupRef
    gm_structs::FmodChannelGroupRef channel_group_ref = gm::wire::codec::readValue<gm_structs::FmodChannelGroupRef>(__br);

    // field: pause, type: Float64
    double pause = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_system_play_sound(sound_ref, channel_group_ref, pause);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodChannelRef
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_sound_get_length(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_ref, type: struct FmodSoundRef
    gm_structs::FmodSoundRef sound_ref = gm::wire::codec::readValue<gm_structs::FmodSoundRef>(__br);

    // field: length_type, type: Float64
    double length_type = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_sound_get_length(sound_ref, length_type);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_sound_set_defaults(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_ref, type: struct FmodSoundRef
    gm_structs::FmodSoundRef sound_ref = gm::wire::codec::readValue<gm_structs::FmodSoundRef>(__br);

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

    // field: sound_ref, type: struct FmodSoundRef
    gm_structs::FmodSoundRef sound_ref = gm::wire::codec::readValue<gm_structs::FmodSoundRef>(__br);

    // field: mode, type: Float64
    double mode = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_sound_set_mode(sound_ref, mode);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_sound_get_mode(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_ref, type: struct FmodSoundRef
    gm_structs::FmodSoundRef sound_ref = gm::wire::codec::readValue<gm_structs::FmodSoundRef>(__br);

    auto&& __result = fmod_sound_get_mode(sound_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_sound_set_loop_count(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_ref, type: struct FmodSoundRef
    gm_structs::FmodSoundRef sound_ref = gm::wire::codec::readValue<gm_structs::FmodSoundRef>(__br);

    // field: count, type: Float64
    double count = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_sound_set_loop_count(sound_ref, count);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_sound_get_loop_count(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_ref, type: struct FmodSoundRef
    gm_structs::FmodSoundRef sound_ref = gm::wire::codec::readValue<gm_structs::FmodSoundRef>(__br);

    auto&& __result = fmod_sound_get_loop_count(sound_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_sound_set_loop_points(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_ref, type: struct FmodSoundRef
    gm_structs::FmodSoundRef sound_ref = gm::wire::codec::readValue<gm_structs::FmodSoundRef>(__br);

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

GMEXPORT double __EXT_NATIVE__fmod_sound_set_3d_min_max_distance(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_ref, type: struct FmodSoundRef
    gm_structs::FmodSoundRef sound_ref = gm::wire::codec::readValue<gm_structs::FmodSoundRef>(__br);

    // field: min, type: Float64
    double min = gm::wire::codec::readValue<double>(__br);

    // field: max, type: Float64
    double max = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_sound_set_3d_min_max_distance(sound_ref, min, max);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_sound_set_3d_cone_settings(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_ref, type: struct FmodSoundRef
    gm_structs::FmodSoundRef sound_ref = gm::wire::codec::readValue<gm_structs::FmodSoundRef>(__br);

    // field: inside_cone_angle, type: Float64
    double inside_cone_angle = gm::wire::codec::readValue<double>(__br);

    // field: outside_cone_angle, type: Float64
    double outside_cone_angle = gm::wire::codec::readValue<double>(__br);

    // field: outside_volume, type: Float64
    double outside_volume = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_sound_set_3d_cone_settings(sound_ref, inside_cone_angle, outside_cone_angle, outside_volume);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_sound_release(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_ref, type: struct FmodSoundRef
    gm_structs::FmodSoundRef sound_ref = gm::wire::codec::readValue<gm_structs::FmodSoundRef>(__br);

    auto&& __result = fmod_sound_release(sound_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_sound_get_system_object(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_ref, type: struct FmodSoundRef
    gm_structs::FmodSoundRef sound_ref = gm::wire::codec::readValue<gm_structs::FmodSoundRef>(__br);

    auto&& __result = fmod_sound_get_system_object(sound_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodSystemRef
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_channel_group_get_num_channels(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_group_ref, type: struct FmodChannelGroupRef
    gm_structs::FmodChannelGroupRef channel_group_ref = gm::wire::codec::readValue<gm_structs::FmodChannelGroupRef>(__br);

    auto&& __result = fmod_channel_group_get_num_channels(channel_group_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_group_get_channel(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_group_ref, type: struct FmodChannelGroupRef
    gm_structs::FmodChannelGroupRef channel_group_ref = gm::wire::codec::readValue<gm_structs::FmodChannelGroupRef>(__br);

    // field: index, type: Float64
    double index = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_channel_group_get_channel(channel_group_ref, index);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodChannelRef
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_channel_group_add_group(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_group_ref, type: struct FmodChannelGroupRef
    gm_structs::FmodChannelGroupRef channel_group_ref = gm::wire::codec::readValue<gm_structs::FmodChannelGroupRef>(__br);

    // field: child_channel_group_ref, type: struct FmodChannelGroupRef
    gm_structs::FmodChannelGroupRef child_channel_group_ref = gm::wire::codec::readValue<gm_structs::FmodChannelGroupRef>(__br);

    // field: propagate_dsp_clock, type: Float64
    double propagate_dsp_clock = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_channel_group_add_group(channel_group_ref, child_channel_group_ref, propagate_dsp_clock);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodDSPConnectionRef
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_channel_group_get_num_groups(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_group_ref, type: struct FmodChannelGroupRef
    gm_structs::FmodChannelGroupRef channel_group_ref = gm::wire::codec::readValue<gm_structs::FmodChannelGroupRef>(__br);

    auto&& __result = fmod_channel_group_get_num_groups(channel_group_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_group_get_group(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_group_ref, type: struct FmodChannelGroupRef
    gm_structs::FmodChannelGroupRef channel_group_ref = gm::wire::codec::readValue<gm_structs::FmodChannelGroupRef>(__br);

    // field: group_index, type: Float64
    double group_index = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_channel_group_get_group(channel_group_ref, group_index);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodChannelGroupRef
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_channel_group_get_parent_group(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_group_ref, type: struct FmodChannelGroupRef
    gm_structs::FmodChannelGroupRef channel_group_ref = gm::wire::codec::readValue<gm_structs::FmodChannelGroupRef>(__br);

    auto&& __result = fmod_channel_group_get_parent_group(channel_group_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodChannelGroupRef
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT char* __EXT_NATIVE__fmod_channel_group_get_name(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_group_ref, type: struct FmodChannelGroupRef
    gm_structs::FmodChannelGroupRef channel_group_ref = gm::wire::codec::readValue<gm_structs::FmodChannelGroupRef>(__br);

    static std::string __result;
    __result = fmod_channel_group_get_name(channel_group_ref);
    return (char*)__result.c_str();
}

GMEXPORT double __EXT_NATIVE__fmod_channel_group_release(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_group_ref, type: struct FmodChannelGroupRef
    gm_structs::FmodChannelGroupRef channel_group_ref = gm::wire::codec::readValue<gm_structs::FmodChannelGroupRef>(__br);

    auto&& __result = fmod_channel_group_release(channel_group_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_group_get_system_object(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_group_ref, type: struct FmodChannelGroupRef
    gm_structs::FmodChannelGroupRef channel_group_ref = gm::wire::codec::readValue<gm_structs::FmodChannelGroupRef>(__br);

    auto&& __result = fmod_channel_group_get_system_object(channel_group_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodSystemRef
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_sound_group_set_max_audible(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_group_ref, type: struct FmodSoundGroupRef
    gm_structs::FmodSoundGroupRef sound_group_ref = gm::wire::codec::readValue<gm_structs::FmodSoundGroupRef>(__br);

    // field: max_audible, type: Float64
    double max_audible = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_sound_group_set_max_audible(sound_group_ref, max_audible);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_sound_group_get_max_audible(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_group_ref, type: struct FmodSoundGroupRef
    gm_structs::FmodSoundGroupRef sound_group_ref = gm::wire::codec::readValue<gm_structs::FmodSoundGroupRef>(__br);

    auto&& __result = fmod_sound_group_get_max_audible(sound_group_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_sound_group_set_max_audible_behavior(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_group_ref, type: struct FmodSoundGroupRef
    gm_structs::FmodSoundGroupRef sound_group_ref = gm::wire::codec::readValue<gm_structs::FmodSoundGroupRef>(__br);

    // field: behavior, type: Float64
    double behavior = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_sound_group_set_max_audible_behavior(sound_group_ref, behavior);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_sound_group_get_max_audible_behavior(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_group_ref, type: struct FmodSoundGroupRef
    gm_structs::FmodSoundGroupRef sound_group_ref = gm::wire::codec::readValue<gm_structs::FmodSoundGroupRef>(__br);

    auto&& __result = fmod_sound_group_get_max_audible_behavior(sound_group_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_sound_group_set_mute_fade_speed(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_group_ref, type: struct FmodSoundGroupRef
    gm_structs::FmodSoundGroupRef sound_group_ref = gm::wire::codec::readValue<gm_structs::FmodSoundGroupRef>(__br);

    // field: speed, type: Float64
    double speed = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_sound_group_set_mute_fade_speed(sound_group_ref, speed);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_sound_group_get_mute_fade_speed(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_group_ref, type: struct FmodSoundGroupRef
    gm_structs::FmodSoundGroupRef sound_group_ref = gm::wire::codec::readValue<gm_structs::FmodSoundGroupRef>(__br);

    auto&& __result = fmod_sound_group_get_mute_fade_speed(sound_group_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_sound_group_set_volume(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_group_ref, type: struct FmodSoundGroupRef
    gm_structs::FmodSoundGroupRef sound_group_ref = gm::wire::codec::readValue<gm_structs::FmodSoundGroupRef>(__br);

    // field: volume, type: Float64
    double volume = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_sound_group_set_volume(sound_group_ref, volume);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_sound_group_get_volume(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_group_ref, type: struct FmodSoundGroupRef
    gm_structs::FmodSoundGroupRef sound_group_ref = gm::wire::codec::readValue<gm_structs::FmodSoundGroupRef>(__br);

    auto&& __result = fmod_sound_group_get_volume(sound_group_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_sound_group_get_num_sounds(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_group_ref, type: struct FmodSoundGroupRef
    gm_structs::FmodSoundGroupRef sound_group_ref = gm::wire::codec::readValue<gm_structs::FmodSoundGroupRef>(__br);

    auto&& __result = fmod_sound_group_get_num_sounds(sound_group_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_sound_group_get_sound(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_group_ref, type: struct FmodSoundGroupRef
    gm_structs::FmodSoundGroupRef sound_group_ref = gm::wire::codec::readValue<gm_structs::FmodSoundGroupRef>(__br);

    // field: sound_index, type: Float64
    double sound_index = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_sound_group_get_sound(sound_group_ref, sound_index);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodSoundRef
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_sound_group_get_num_playing(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_group_ref, type: struct FmodSoundGroupRef
    gm_structs::FmodSoundGroupRef sound_group_ref = gm::wire::codec::readValue<gm_structs::FmodSoundGroupRef>(__br);

    auto&& __result = fmod_sound_group_get_num_playing(sound_group_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_sound_group_stop(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_group_ref, type: struct FmodSoundGroupRef
    gm_structs::FmodSoundGroupRef sound_group_ref = gm::wire::codec::readValue<gm_structs::FmodSoundGroupRef>(__br);

    auto&& __result = fmod_sound_group_stop(sound_group_ref);
    return static_cast<double>(__result);
}

GMEXPORT char* __EXT_NATIVE__fmod_sound_group_get_name(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_group_ref, type: struct FmodSoundGroupRef
    gm_structs::FmodSoundGroupRef sound_group_ref = gm::wire::codec::readValue<gm_structs::FmodSoundGroupRef>(__br);

    static std::string __result;
    __result = fmod_sound_group_get_name(sound_group_ref);
    return (char*)__result.c_str();
}

GMEXPORT double __EXT_NATIVE__fmod_sound_group_release(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_group_ref, type: struct FmodSoundGroupRef
    gm_structs::FmodSoundGroupRef sound_group_ref = gm::wire::codec::readValue<gm_structs::FmodSoundGroupRef>(__br);

    auto&& __result = fmod_sound_group_release(sound_group_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_sound_group_get_system_object(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: sound_group_ref, type: struct FmodSoundGroupRef
    gm_structs::FmodSoundGroupRef sound_group_ref = gm::wire::codec::readValue<gm_structs::FmodSoundGroupRef>(__br);

    auto&& __result = fmod_sound_group_get_system_object(sound_group_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodSystemRef
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_reverb_3d_set_active(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: reverb_3d_ref, type: struct FmodReverb3DRef
    gm_structs::FmodReverb3DRef reverb_3d_ref = gm::wire::codec::readValue<gm_structs::FmodReverb3DRef>(__br);

    // field: active, type: Float64
    double active = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_reverb_3d_set_active(reverb_3d_ref, active);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_reverb_3d_get_active(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: reverb_3d_ref, type: struct FmodReverb3DRef
    gm_structs::FmodReverb3DRef reverb_3d_ref = gm::wire::codec::readValue<gm_structs::FmodReverb3DRef>(__br);

    auto&& __result = fmod_reverb_3d_get_active(reverb_3d_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_reverb_3d_set_properties(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: reverb_3d_ref, type: struct FmodReverb3DRef
    gm_structs::FmodReverb3DRef reverb_3d_ref = gm::wire::codec::readValue<gm_structs::FmodReverb3DRef>(__br);

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

GMEXPORT double __EXT_NATIVE__fmod_reverb_3d_release(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: reverb_3d_ref, type: struct FmodReverb3DRef
    gm_structs::FmodReverb3DRef reverb_3d_ref = gm::wire::codec::readValue<gm_structs::FmodReverb3DRef>(__br);

    auto&& __result = fmod_reverb_3d_release(reverb_3d_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_is_playing(double channel_control_ref)
{
    auto&& __result = fmod_channel_control_is_playing(static_cast<double>(channel_control_ref));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_stop(double channel_control_ref)
{
    auto&& __result = fmod_channel_control_stop(static_cast<double>(channel_control_ref));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_set_paused(double channel_control_ref, double paused)
{
    auto&& __result = fmod_channel_control_set_paused(static_cast<double>(channel_control_ref), static_cast<double>(paused));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_get_paused(double channel_control_ref)
{
    auto&& __result = fmod_channel_control_get_paused(static_cast<double>(channel_control_ref));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_set_mode(double channel_control_ref, double mode)
{
    auto&& __result = fmod_channel_control_set_mode(static_cast<double>(channel_control_ref), static_cast<double>(mode));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_get_mode(double channel_control_ref)
{
    auto&& __result = fmod_channel_control_get_mode(static_cast<double>(channel_control_ref));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_set_pitch(double channel_control_ref, double pitch)
{
    auto&& __result = fmod_channel_control_set_pitch(static_cast<double>(channel_control_ref), static_cast<double>(pitch));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_get_pitch(double channel_control_ref)
{
    auto&& __result = fmod_channel_control_get_pitch(static_cast<double>(channel_control_ref));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_get_audibility(double channel_control_ref)
{
    auto&& __result = fmod_channel_control_get_audibility(static_cast<double>(channel_control_ref));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_set_volume(double channel_control_ref, double volume)
{
    auto&& __result = fmod_channel_control_set_volume(static_cast<double>(channel_control_ref), static_cast<double>(volume));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_get_volume(double channel_control_ref)
{
    auto&& __result = fmod_channel_control_get_volume(static_cast<double>(channel_control_ref));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_set_volume_ramp(double channel_control_ref, double ramp)
{
    auto&& __result = fmod_channel_control_set_volume_ramp(static_cast<double>(channel_control_ref), static_cast<double>(ramp));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_get_volume_ramp(double channel_control_ref)
{
    auto&& __result = fmod_channel_control_get_volume_ramp(static_cast<double>(channel_control_ref));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_set_mute(double channel_control_ref, double mute)
{
    auto&& __result = fmod_channel_control_set_mute(static_cast<double>(channel_control_ref), static_cast<double>(mute));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_get_mute(double channel_control_ref)
{
    auto&& __result = fmod_channel_control_get_mute(static_cast<double>(channel_control_ref));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_set_3d_doppler_level(double channel_control_ref, double level)
{
    auto&& __result = fmod_channel_control_set_3d_doppler_level(static_cast<double>(channel_control_ref), static_cast<double>(level));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_get_3d_doppler_level(double channel_control_ref)
{
    auto&& __result = fmod_channel_control_get_3d_doppler_level(static_cast<double>(channel_control_ref));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_set_3d_level(double channel_control_ref, double level)
{
    auto&& __result = fmod_channel_control_set_3d_level(static_cast<double>(channel_control_ref), static_cast<double>(level));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_get_3d_level(double channel_control_ref)
{
    auto&& __result = fmod_channel_control_get_3d_level(static_cast<double>(channel_control_ref));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_set_3d_min_max_distance(double channel_control_ref, double min_dist, double max_dist)
{
    auto&& __result = fmod_channel_control_set_3d_min_max_distance(static_cast<double>(channel_control_ref), static_cast<double>(min_dist), static_cast<double>(max_dist));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_set_3d_cone_settings(double channel_control_ref, double inside_cone_angle, double outside_cone_angle, double outside_volume)
{
    auto&& __result = fmod_channel_control_set_3d_cone_settings(static_cast<double>(channel_control_ref), static_cast<double>(inside_cone_angle), static_cast<double>(outside_cone_angle), static_cast<double>(outside_volume));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_set_3d_occlusion(double channel_control_ref, double direct_occlusion, double reverb_occlusion)
{
    auto&& __result = fmod_channel_control_set_3d_occlusion(static_cast<double>(channel_control_ref), static_cast<double>(direct_occlusion), static_cast<double>(reverb_occlusion));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_set_3d_spread(double channel_control_ref, double angle)
{
    auto&& __result = fmod_channel_control_set_3d_spread(static_cast<double>(channel_control_ref), static_cast<double>(angle));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_get_3d_spread(double channel_control_ref)
{
    auto&& __result = fmod_channel_control_get_3d_spread(static_cast<double>(channel_control_ref));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_set_3d_distance_filter(double channel_control_ref, double custom, double custom_level, double center_freq)
{
    auto&& __result = fmod_channel_control_set_3d_distance_filter(static_cast<double>(channel_control_ref), static_cast<double>(custom), static_cast<double>(custom_level), static_cast<double>(center_freq));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_set_pan(double channel_control_ref, double pan)
{
    auto&& __result = fmod_channel_control_set_pan(static_cast<double>(channel_control_ref), static_cast<double>(pan));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_set_mix_levels_output(double channel_control_ref, double front_left, double front_right, double center, double lfe, double surround_left, double surround_right, double back_left, double back_right)
{
    auto&& __result = fmod_channel_control_set_mix_levels_output(static_cast<double>(channel_control_ref), static_cast<double>(front_left), static_cast<double>(front_right), static_cast<double>(center), static_cast<double>(lfe), static_cast<double>(surround_left), static_cast<double>(surround_right), static_cast<double>(back_left), static_cast<double>(back_right));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_set_reverb_properties(double channel_control_ref, double reverb_instance, double wet)
{
    auto&& __result = fmod_channel_control_set_reverb_properties(static_cast<double>(channel_control_ref), static_cast<double>(reverb_instance), static_cast<double>(wet));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_get_reverb_properties(double channel_control_ref, double reverb_instance)
{
    auto&& __result = fmod_channel_control_get_reverb_properties(static_cast<double>(channel_control_ref), static_cast<double>(reverb_instance));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_set_low_pass_gain(double channel_control_ref, double gain)
{
    auto&& __result = fmod_channel_control_set_low_pass_gain(static_cast<double>(channel_control_ref), static_cast<double>(gain));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_get_low_pass_gain(double channel_control_ref)
{
    auto&& __result = fmod_channel_control_get_low_pass_gain(static_cast<double>(channel_control_ref));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_add_dsp(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: Float64
    double channel_control_ref = gm::wire::codec::readValue<double>(__br);

    // field: dsp_chain_offset, type: Float64
    double dsp_chain_offset = gm::wire::codec::readValue<double>(__br);

    // field: dsp_ref, type: struct FmodDSPRef
    gm_structs::FmodDSPRef dsp_ref = gm::wire::codec::readValue<gm_structs::FmodDSPRef>(__br);

    auto&& __result = fmod_channel_control_add_dsp(channel_control_ref, dsp_chain_offset, dsp_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_remove_dsp(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: Float64
    double channel_control_ref = gm::wire::codec::readValue<double>(__br);

    // field: dsp_ref, type: struct FmodDSPRef
    gm_structs::FmodDSPRef dsp_ref = gm::wire::codec::readValue<gm_structs::FmodDSPRef>(__br);

    auto&& __result = fmod_channel_control_remove_dsp(channel_control_ref, dsp_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_get_num_dsps(double channel_control_ref)
{
    auto&& __result = fmod_channel_control_get_num_dsps(static_cast<double>(channel_control_ref));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_get_dsp(double channel_control_ref, double index, char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_channel_control_get_dsp(static_cast<double>(channel_control_ref), static_cast<double>(index));
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodDSPRef
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_set_dsp_index(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: Float64
    double channel_control_ref = gm::wire::codec::readValue<double>(__br);

    // field: dsp_ref, type: struct FmodDSPRef
    gm_structs::FmodDSPRef dsp_ref = gm::wire::codec::readValue<gm_structs::FmodDSPRef>(__br);

    // field: chain_index, type: Float64
    double chain_index = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_channel_control_set_dsp_index(channel_control_ref, dsp_ref, chain_index);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_get_dsp_index(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: channel_control_ref, type: Float64
    double channel_control_ref = gm::wire::codec::readValue<double>(__br);

    // field: dsp_ref, type: struct FmodDSPRef
    gm_structs::FmodDSPRef dsp_ref = gm::wire::codec::readValue<gm_structs::FmodDSPRef>(__br);

    auto&& __result = fmod_channel_control_get_dsp_index(channel_control_ref, dsp_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_channel_control_get_system_object(double channel_control_ref, char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_channel_control_get_system_object(static_cast<double>(channel_control_ref));
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodSystemRef
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_dsp_add_input(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: dsp_ref, type: struct FmodDSPRef
    gm_structs::FmodDSPRef dsp_ref = gm::wire::codec::readValue<gm_structs::FmodDSPRef>(__br);

    // field: dsp_input_ref, type: struct FmodDSPRef
    gm_structs::FmodDSPRef dsp_input_ref = gm::wire::codec::readValue<gm_structs::FmodDSPRef>(__br);

    // field: dsp_connection_type, type: Float64
    double dsp_connection_type = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_dsp_add_input(dsp_ref, dsp_input_ref, dsp_connection_type);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodDSPConnectionRef
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_dsp_get_num_inputs(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: dsp_ref, type: struct FmodDSPRef
    gm_structs::FmodDSPRef dsp_ref = gm::wire::codec::readValue<gm_structs::FmodDSPRef>(__br);

    auto&& __result = fmod_dsp_get_num_inputs(dsp_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_dsp_get_num_outputs(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: dsp_ref, type: struct FmodDSPRef
    gm_structs::FmodDSPRef dsp_ref = gm::wire::codec::readValue<gm_structs::FmodDSPRef>(__br);

    auto&& __result = fmod_dsp_get_num_outputs(dsp_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_dsp_disconnect_all(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: dsp_ref, type: struct FmodDSPRef
    gm_structs::FmodDSPRef dsp_ref = gm::wire::codec::readValue<gm_structs::FmodDSPRef>(__br);

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

    // field: dsp_ref, type: struct FmodDSPRef
    gm_structs::FmodDSPRef dsp_ref = gm::wire::codec::readValue<gm_structs::FmodDSPRef>(__br);

    auto&& __result = fmod_dsp_get_num_parameters(dsp_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_dsp_set_parameter_float(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: dsp_ref, type: struct FmodDSPRef
    gm_structs::FmodDSPRef dsp_ref = gm::wire::codec::readValue<gm_structs::FmodDSPRef>(__br);

    // field: index, type: Float64
    double index = gm::wire::codec::readValue<double>(__br);

    // field: value, type: Float64
    double value = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_dsp_set_parameter_float(dsp_ref, index, value);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_dsp_get_parameter_float(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: dsp_ref, type: struct FmodDSPRef
    gm_structs::FmodDSPRef dsp_ref = gm::wire::codec::readValue<gm_structs::FmodDSPRef>(__br);

    // field: index, type: Float64
    double index = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_dsp_get_parameter_float(dsp_ref, index);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_dsp_set_parameter_int(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: dsp_ref, type: struct FmodDSPRef
    gm_structs::FmodDSPRef dsp_ref = gm::wire::codec::readValue<gm_structs::FmodDSPRef>(__br);

    // field: index, type: Float64
    double index = gm::wire::codec::readValue<double>(__br);

    // field: value, type: Float64
    double value = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_dsp_set_parameter_int(dsp_ref, index, value);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_dsp_get_parameter_int(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: dsp_ref, type: struct FmodDSPRef
    gm_structs::FmodDSPRef dsp_ref = gm::wire::codec::readValue<gm_structs::FmodDSPRef>(__br);

    // field: index, type: Float64
    double index = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_dsp_get_parameter_int(dsp_ref, index);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_dsp_set_parameter_bool(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: dsp_ref, type: struct FmodDSPRef
    gm_structs::FmodDSPRef dsp_ref = gm::wire::codec::readValue<gm_structs::FmodDSPRef>(__br);

    // field: index, type: Float64
    double index = gm::wire::codec::readValue<double>(__br);

    // field: value, type: Float64
    double value = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_dsp_set_parameter_bool(dsp_ref, index, value);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_dsp_get_parameter_bool(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: dsp_ref, type: struct FmodDSPRef
    gm_structs::FmodDSPRef dsp_ref = gm::wire::codec::readValue<gm_structs::FmodDSPRef>(__br);

    // field: index, type: Float64
    double index = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_dsp_get_parameter_bool(dsp_ref, index);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_dsp_release(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: dsp_ref, type: struct FmodDSPRef
    gm_structs::FmodDSPRef dsp_ref = gm::wire::codec::readValue<gm_structs::FmodDSPRef>(__br);

    auto&& __result = fmod_dsp_release(dsp_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_dsp_get_system_object(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: dsp_ref, type: struct FmodDSPRef
    gm_structs::FmodDSPRef dsp_ref = gm::wire::codec::readValue<gm_structs::FmodDSPRef>(__br);

    auto&& __result = fmod_dsp_get_system_object(dsp_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodSystemRef
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_geometry_set_polygon_attributes(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: geometry_ref, type: struct FmodGeometryRef
    gm_structs::FmodGeometryRef geometry_ref = gm::wire::codec::readValue<gm_structs::FmodGeometryRef>(__br);

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

GMEXPORT double __EXT_NATIVE__fmod_geometry_get_polygon_num_vertices(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: geometry_ref, type: struct FmodGeometryRef
    gm_structs::FmodGeometryRef geometry_ref = gm::wire::codec::readValue<gm_structs::FmodGeometryRef>(__br);

    // field: polygon_index, type: Float64
    double polygon_index = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_geometry_get_polygon_num_vertices(geometry_ref, polygon_index);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_geometry_set_position(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: geometry_ref, type: struct FmodGeometryRef
    gm_structs::FmodGeometryRef geometry_ref = gm::wire::codec::readValue<gm_structs::FmodGeometryRef>(__br);

    // field: x, type: Float64
    double x = gm::wire::codec::readValue<double>(__br);

    // field: y, type: Float64
    double y = gm::wire::codec::readValue<double>(__br);

    // field: z, type: Float64
    double z = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_geometry_set_position(geometry_ref, x, y, z);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_geometry_set_rotation(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: geometry_ref, type: struct FmodGeometryRef
    gm_structs::FmodGeometryRef geometry_ref = gm::wire::codec::readValue<gm_structs::FmodGeometryRef>(__br);

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

GMEXPORT double __EXT_NATIVE__fmod_geometry_set_scale(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: geometry_ref, type: struct FmodGeometryRef
    gm_structs::FmodGeometryRef geometry_ref = gm::wire::codec::readValue<gm_structs::FmodGeometryRef>(__br);

    // field: scale_x, type: Float64
    double scale_x = gm::wire::codec::readValue<double>(__br);

    // field: scale_y, type: Float64
    double scale_y = gm::wire::codec::readValue<double>(__br);

    // field: scale_z, type: Float64
    double scale_z = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_geometry_set_scale(geometry_ref, scale_x, scale_y, scale_z);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_geometry_save(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: geometry_ref, type: struct FmodGeometryRef
    gm_structs::FmodGeometryRef geometry_ref = gm::wire::codec::readValue<gm_structs::FmodGeometryRef>(__br);

    // field: filename, type: String
    std::string_view filename = gm::wire::codec::readValue<std::string_view>(__br);

    auto&& __result = fmod_geometry_save(geometry_ref, filename);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_geometry_release(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: geometry_ref, type: struct FmodGeometryRef
    gm_structs::FmodGeometryRef geometry_ref = gm::wire::codec::readValue<gm_structs::FmodGeometryRef>(__br);

    auto&& __result = fmod_geometry_release(geometry_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_create(char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_system_create();
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodStudioSystemRef
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

    // return: __result, type: optional<struct FmodStudioBankRef>
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_load_bank_memory(char* data, double flags, char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_system_load_bank_memory(data, static_cast<double>(flags));
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: optional<struct FmodStudioBankRef>
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

    // return: __result, type: optional<struct FmodStudioBankRef>
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_get_bank(char* path, char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_system_get_bank(path);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: optional<struct FmodStudioBankRef>
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_get_event(char* path, char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_system_get_event(path);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: optional<struct FmodStudioEventDescriptionRef>
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_create_event_instance(char* path, char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_system_create_event_instance(path);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: optional<struct FmodStudioEventInstanceRef>
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_get_bus(char* path, char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_system_get_bus(path);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: optional<struct FmodStudioBusRef>
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_get_master_bus(char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_system_get_master_bus();
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: optional<struct FmodStudioBusRef>
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_get_vca(char* path, char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_system_get_vca(path);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: optional<struct FmodStudioVCARef>
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

    // return: __result, type: struct FmodSystemRef
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bank_unload(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bank_ref, type: struct FmodStudioBankRef
    gm_structs::FmodStudioBankRef bank_ref = gm::wire::codec::readValue<gm_structs::FmodStudioBankRef>(__br);

    auto&& __result = fmod_studio_bank_unload(bank_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bank_get_loading_state(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bank_ref, type: struct FmodStudioBankRef
    gm_structs::FmodStudioBankRef bank_ref = gm::wire::codec::readValue<gm_structs::FmodStudioBankRef>(__br);

    auto&& __result = fmod_studio_bank_get_loading_state(bank_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bank_get_sample_loading_state(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bank_ref, type: struct FmodStudioBankRef
    gm_structs::FmodStudioBankRef bank_ref = gm::wire::codec::readValue<gm_structs::FmodStudioBankRef>(__br);

    auto&& __result = fmod_studio_bank_get_sample_loading_state(bank_ref);
    return static_cast<double>(__result);
}

GMEXPORT char* __EXT_NATIVE__fmod_studio_bank_get_path(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bank_ref, type: struct FmodStudioBankRef
    gm_structs::FmodStudioBankRef bank_ref = gm::wire::codec::readValue<gm_structs::FmodStudioBankRef>(__br);

    static std::string __result;
    __result = fmod_studio_bank_get_path(bank_ref);
    return (char*)__result.c_str();
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bank_get_parent_studio_system(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bank_ref, type: struct FmodStudioBankRef
    gm_structs::FmodStudioBankRef bank_ref = gm::wire::codec::readValue<gm_structs::FmodStudioBankRef>(__br);

    auto&& __result = fmod_studio_bank_get_parent_studio_system(bank_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: optional<struct FmodStudioSystemRef>
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bank_get_event_count(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bank_ref, type: struct FmodStudioBankRef
    gm_structs::FmodStudioBankRef bank_ref = gm::wire::codec::readValue<gm_structs::FmodStudioBankRef>(__br);

    auto&& __result = fmod_studio_bank_get_event_count(bank_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bank_get_event_at(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bank_ref, type: struct FmodStudioBankRef
    gm_structs::FmodStudioBankRef bank_ref = gm::wire::codec::readValue<gm_structs::FmodStudioBankRef>(__br);

    // field: index, type: Float64
    double index = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_bank_get_event_at(bank_ref, index);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: optional<struct FmodStudioEventDescriptionRef>
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bank_get_bus_count(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bank_ref, type: struct FmodStudioBankRef
    gm_structs::FmodStudioBankRef bank_ref = gm::wire::codec::readValue<gm_structs::FmodStudioBankRef>(__br);

    auto&& __result = fmod_studio_bank_get_bus_count(bank_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bank_get_bus_at(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bank_ref, type: struct FmodStudioBankRef
    gm_structs::FmodStudioBankRef bank_ref = gm::wire::codec::readValue<gm_structs::FmodStudioBankRef>(__br);

    // field: index, type: Float64
    double index = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_bank_get_bus_at(bank_ref, index);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: optional<struct FmodStudioBusRef>
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bank_get_vca_count(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bank_ref, type: struct FmodStudioBankRef
    gm_structs::FmodStudioBankRef bank_ref = gm::wire::codec::readValue<gm_structs::FmodStudioBankRef>(__br);

    auto&& __result = fmod_studio_bank_get_vca_count(bank_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bank_get_vca_at(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bank_ref, type: struct FmodStudioBankRef
    gm_structs::FmodStudioBankRef bank_ref = gm::wire::codec::readValue<gm_structs::FmodStudioBankRef>(__br);

    // field: index, type: Float64
    double index = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_bank_get_vca_at(bank_ref, index);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: optional<struct FmodStudioVCARef>
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bank_get_string_count(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bank_ref, type: struct FmodStudioBankRef
    gm_structs::FmodStudioBankRef bank_ref = gm::wire::codec::readValue<gm_structs::FmodStudioBankRef>(__br);

    auto&& __result = fmod_studio_bank_get_string_count(bank_ref);
    return static_cast<double>(__result);
}

GMEXPORT char* __EXT_NATIVE__fmod_studio_event_description_get_path(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: struct FmodStudioEventDescriptionRef
    gm_structs::FmodStudioEventDescriptionRef event_desc_ref = gm::wire::codec::readValue<gm_structs::FmodStudioEventDescriptionRef>(__br);

    static std::string __result;
    __result = fmod_studio_event_description_get_path(event_desc_ref);
    return (char*)__result.c_str();
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_create_instance(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: struct FmodStudioEventDescriptionRef
    gm_structs::FmodStudioEventDescriptionRef event_desc_ref = gm::wire::codec::readValue<gm_structs::FmodStudioEventDescriptionRef>(__br);

    auto&& __result = fmod_studio_event_description_create_instance(event_desc_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: optional<struct FmodStudioEventInstanceRef>
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_get_instance_count(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: struct FmodStudioEventDescriptionRef
    gm_structs::FmodStudioEventDescriptionRef event_desc_ref = gm::wire::codec::readValue<gm_structs::FmodStudioEventDescriptionRef>(__br);

    auto&& __result = fmod_studio_event_description_get_instance_count(event_desc_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_get_instance_at(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: struct FmodStudioEventDescriptionRef
    gm_structs::FmodStudioEventDescriptionRef event_desc_ref = gm::wire::codec::readValue<gm_structs::FmodStudioEventDescriptionRef>(__br);

    // field: index, type: Float64
    double index = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_event_description_get_instance_at(event_desc_ref, index);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: optional<struct FmodStudioEventInstanceRef>
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_is_snapshot(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: struct FmodStudioEventDescriptionRef
    gm_structs::FmodStudioEventDescriptionRef event_desc_ref = gm::wire::codec::readValue<gm_structs::FmodStudioEventDescriptionRef>(__br);

    auto&& __result = fmod_studio_event_description_is_snapshot(event_desc_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_is_one_shot(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: struct FmodStudioEventDescriptionRef
    gm_structs::FmodStudioEventDescriptionRef event_desc_ref = gm::wire::codec::readValue<gm_structs::FmodStudioEventDescriptionRef>(__br);

    auto&& __result = fmod_studio_event_description_is_one_shot(event_desc_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_has_sustain_point(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: struct FmodStudioEventDescriptionRef
    gm_structs::FmodStudioEventDescriptionRef event_desc_ref = gm::wire::codec::readValue<gm_structs::FmodStudioEventDescriptionRef>(__br);

    auto&& __result = fmod_studio_event_description_has_sustain_point(event_desc_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_get_length(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: struct FmodStudioEventDescriptionRef
    gm_structs::FmodStudioEventDescriptionRef event_desc_ref = gm::wire::codec::readValue<gm_structs::FmodStudioEventDescriptionRef>(__br);

    auto&& __result = fmod_studio_event_description_get_length(event_desc_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_get_parameter_count(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: struct FmodStudioEventDescriptionRef
    gm_structs::FmodStudioEventDescriptionRef event_desc_ref = gm::wire::codec::readValue<gm_structs::FmodStudioEventDescriptionRef>(__br);

    auto&& __result = fmod_studio_event_description_get_parameter_count(event_desc_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_release_all_instances(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: struct FmodStudioEventDescriptionRef
    gm_structs::FmodStudioEventDescriptionRef event_desc_ref = gm::wire::codec::readValue<gm_structs::FmodStudioEventDescriptionRef>(__br);

    auto&& __result = fmod_studio_event_description_release_all_instances(event_desc_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_start(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: struct FmodStudioEventInstanceRef
    gm_structs::FmodStudioEventInstanceRef instance_ref = gm::wire::codec::readValue<gm_structs::FmodStudioEventInstanceRef>(__br);

    auto&& __result = fmod_studio_event_instance_start(instance_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_stop(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: struct FmodStudioEventInstanceRef
    gm_structs::FmodStudioEventInstanceRef instance_ref = gm::wire::codec::readValue<gm_structs::FmodStudioEventInstanceRef>(__br);

    // field: stop_mode, type: Float64
    double stop_mode = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_event_instance_stop(instance_ref, stop_mode);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_get_playback_state(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: struct FmodStudioEventInstanceRef
    gm_structs::FmodStudioEventInstanceRef instance_ref = gm::wire::codec::readValue<gm_structs::FmodStudioEventInstanceRef>(__br);

    auto&& __result = fmod_studio_event_instance_get_playback_state(instance_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_get_paused(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: struct FmodStudioEventInstanceRef
    gm_structs::FmodStudioEventInstanceRef instance_ref = gm::wire::codec::readValue<gm_structs::FmodStudioEventInstanceRef>(__br);

    auto&& __result = fmod_studio_event_instance_get_paused(instance_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_set_paused(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: struct FmodStudioEventInstanceRef
    gm_structs::FmodStudioEventInstanceRef instance_ref = gm::wire::codec::readValue<gm_structs::FmodStudioEventInstanceRef>(__br);

    // field: paused, type: Float64
    double paused = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_event_instance_set_paused(instance_ref, paused);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_get_timeline_position(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: struct FmodStudioEventInstanceRef
    gm_structs::FmodStudioEventInstanceRef instance_ref = gm::wire::codec::readValue<gm_structs::FmodStudioEventInstanceRef>(__br);

    auto&& __result = fmod_studio_event_instance_get_timeline_position(instance_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_set_timeline_position(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: struct FmodStudioEventInstanceRef
    gm_structs::FmodStudioEventInstanceRef instance_ref = gm::wire::codec::readValue<gm_structs::FmodStudioEventInstanceRef>(__br);

    // field: position, type: Float64
    double position = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_event_instance_set_timeline_position(instance_ref, position);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_get_volume(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: struct FmodStudioEventInstanceRef
    gm_structs::FmodStudioEventInstanceRef instance_ref = gm::wire::codec::readValue<gm_structs::FmodStudioEventInstanceRef>(__br);

    auto&& __result = fmod_studio_event_instance_get_volume(instance_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_set_volume(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: struct FmodStudioEventInstanceRef
    gm_structs::FmodStudioEventInstanceRef instance_ref = gm::wire::codec::readValue<gm_structs::FmodStudioEventInstanceRef>(__br);

    // field: volume, type: Float64
    double volume = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_event_instance_set_volume(instance_ref, volume);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_get_pitch(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: struct FmodStudioEventInstanceRef
    gm_structs::FmodStudioEventInstanceRef instance_ref = gm::wire::codec::readValue<gm_structs::FmodStudioEventInstanceRef>(__br);

    auto&& __result = fmod_studio_event_instance_get_pitch(instance_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_set_pitch(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: struct FmodStudioEventInstanceRef
    gm_structs::FmodStudioEventInstanceRef instance_ref = gm::wire::codec::readValue<gm_structs::FmodStudioEventInstanceRef>(__br);

    // field: pitch, type: Float64
    double pitch = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_event_instance_set_pitch(instance_ref, pitch);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_set_parameter_by_name(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: struct FmodStudioEventInstanceRef
    gm_structs::FmodStudioEventInstanceRef instance_ref = gm::wire::codec::readValue<gm_structs::FmodStudioEventInstanceRef>(__br);

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

    // field: instance_ref, type: struct FmodStudioEventInstanceRef
    gm_structs::FmodStudioEventInstanceRef instance_ref = gm::wire::codec::readValue<gm_structs::FmodStudioEventInstanceRef>(__br);

    // field: name, type: String
    std::string_view name = gm::wire::codec::readValue<std::string_view>(__br);

    auto&& __result = fmod_studio_event_instance_get_parameter_by_name(instance_ref, name);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_get_parameter_count(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: struct FmodStudioEventInstanceRef
    gm_structs::FmodStudioEventInstanceRef instance_ref = gm::wire::codec::readValue<gm_structs::FmodStudioEventInstanceRef>(__br);

    auto&& __result = fmod_studio_event_instance_get_parameter_count(instance_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_set_3d_attributes(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: struct FmodStudioEventInstanceRef
    gm_structs::FmodStudioEventInstanceRef instance_ref = gm::wire::codec::readValue<gm_structs::FmodStudioEventInstanceRef>(__br);

    // field: x, type: Float64
    double x = gm::wire::codec::readValue<double>(__br);

    // field: y, type: Float64
    double y = gm::wire::codec::readValue<double>(__br);

    // field: z, type: Float64
    double z = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_event_instance_set_3d_attributes(instance_ref, x, y, z);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_get_description(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: struct FmodStudioEventInstanceRef
    gm_structs::FmodStudioEventInstanceRef instance_ref = gm::wire::codec::readValue<gm_structs::FmodStudioEventInstanceRef>(__br);

    auto&& __result = fmod_studio_event_instance_get_description(instance_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: optional<struct FmodStudioEventDescriptionRef>
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_release(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: struct FmodStudioEventInstanceRef
    gm_structs::FmodStudioEventInstanceRef instance_ref = gm::wire::codec::readValue<gm_structs::FmodStudioEventInstanceRef>(__br);

    auto&& __result = fmod_studio_event_instance_release(instance_ref);
    return static_cast<double>(__result);
}

GMEXPORT char* __EXT_NATIVE__fmod_studio_bus_get_path(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bus_ref, type: struct FmodStudioBusRef
    gm_structs::FmodStudioBusRef bus_ref = gm::wire::codec::readValue<gm_structs::FmodStudioBusRef>(__br);

    static std::string __result;
    __result = fmod_studio_bus_get_path(bus_ref);
    return (char*)__result.c_str();
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bus_get_volume(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bus_ref, type: struct FmodStudioBusRef
    gm_structs::FmodStudioBusRef bus_ref = gm::wire::codec::readValue<gm_structs::FmodStudioBusRef>(__br);

    auto&& __result = fmod_studio_bus_get_volume(bus_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bus_set_volume(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bus_ref, type: struct FmodStudioBusRef
    gm_structs::FmodStudioBusRef bus_ref = gm::wire::codec::readValue<gm_structs::FmodStudioBusRef>(__br);

    // field: volume, type: Float64
    double volume = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_bus_set_volume(bus_ref, volume);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bus_get_paused(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bus_ref, type: struct FmodStudioBusRef
    gm_structs::FmodStudioBusRef bus_ref = gm::wire::codec::readValue<gm_structs::FmodStudioBusRef>(__br);

    auto&& __result = fmod_studio_bus_get_paused(bus_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bus_set_paused(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bus_ref, type: struct FmodStudioBusRef
    gm_structs::FmodStudioBusRef bus_ref = gm::wire::codec::readValue<gm_structs::FmodStudioBusRef>(__br);

    // field: paused, type: Float64
    double paused = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_bus_set_paused(bus_ref, paused);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bus_stop_all_events(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bus_ref, type: struct FmodStudioBusRef
    gm_structs::FmodStudioBusRef bus_ref = gm::wire::codec::readValue<gm_structs::FmodStudioBusRef>(__br);

    // field: stop_mode, type: Float64
    double stop_mode = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_bus_stop_all_events(bus_ref, stop_mode);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bus_get_master_bus(char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_bus_get_master_bus();
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: optional<struct FmodStudioBusRef>
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT char* __EXT_NATIVE__fmod_studio_vca_get_path(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: vca_ref, type: struct FmodStudioVCARef
    gm_structs::FmodStudioVCARef vca_ref = gm::wire::codec::readValue<gm_structs::FmodStudioVCARef>(__br);

    static std::string __result;
    __result = fmod_studio_vca_get_path(vca_ref);
    return (char*)__result.c_str();
}

GMEXPORT double __EXT_NATIVE__fmod_studio_vca_get_volume(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: vca_ref, type: struct FmodStudioVCARef
    gm_structs::FmodStudioVCARef vca_ref = gm::wire::codec::readValue<gm_structs::FmodStudioVCARef>(__br);

    auto&& __result = fmod_studio_vca_get_volume(vca_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_vca_set_volume(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: vca_ref, type: struct FmodStudioVCARef
    gm_structs::FmodStudioVCARef vca_ref = gm::wire::codec::readValue<gm_structs::FmodStudioVCARef>(__br);

    // field: volume, type: Float64
    double volume = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_vca_set_volume(vca_ref, volume);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_command_replay_get_playback_state(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: replay_ref, type: struct FmodStudioCommandReplayRef
    gm_structs::FmodStudioCommandReplayRef replay_ref = gm::wire::codec::readValue<gm_structs::FmodStudioCommandReplayRef>(__br);

    auto&& __result = fmod_studio_command_replay_get_playback_state(replay_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_command_replay_get_current_command(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: replay_ref, type: struct FmodStudioCommandReplayRef
    gm_structs::FmodStudioCommandReplayRef replay_ref = gm::wire::codec::readValue<gm_structs::FmodStudioCommandReplayRef>(__br);

    auto&& __result = fmod_studio_command_replay_get_current_command(replay_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_command_replay_release(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: replay_ref, type: struct FmodStudioCommandReplayRef
    gm_structs::FmodStudioCommandReplayRef replay_ref = gm::wire::codec::readValue<gm_structs::FmodStudioCommandReplayRef>(__br);

    auto&& __result = fmod_studio_command_replay_release(replay_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_command_replay_set_frame_callback(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: replay_ref, type: struct FmodStudioCommandReplayRef
    gm_structs::FmodStudioCommandReplayRef replay_ref = gm::wire::codec::readValue<gm_structs::FmodStudioCommandReplayRef>(__br);

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

    // field: replay_ref, type: struct FmodStudioCommandReplayRef
    gm_structs::FmodStudioCommandReplayRef replay_ref = gm::wire::codec::readValue<gm_structs::FmodStudioCommandReplayRef>(__br);

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

    // field: replay_ref, type: struct FmodStudioCommandReplayRef
    gm_structs::FmodStudioCommandReplayRef replay_ref = gm::wire::codec::readValue<gm_structs::FmodStudioCommandReplayRef>(__br);

    // field: callback, type: optional<Function>
    std::optional<gm::wire::GMFunction> callback = std::nullopt;
    if (gm::wire::codec::readValue<bool>(__br))
    {
        callback = gm::wire::codec::readFunction(__br, &__dispatch_queue);
    }

    auto&& __result = fmod_studio_command_replay_set_load_bank_callback(replay_ref, callback);
    return static_cast<double>(__result);
}

