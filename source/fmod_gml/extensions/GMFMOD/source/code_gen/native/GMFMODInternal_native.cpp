// ##### extgen :: Auto-generated file do not edit!! #####

#include "GMFMODInternal_native.h"
#include "GMFMODInternal_exports.h"

using namespace gm_structs;
using namespace gm::wire::codec;

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

