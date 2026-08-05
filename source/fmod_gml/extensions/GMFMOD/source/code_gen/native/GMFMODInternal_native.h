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
}


namespace gm_structs
{
    struct FmodChannelRef;
    struct FmodChannelGroupRef;
    struct FmodSoundRef;
    struct FmodSystemRef;

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

}

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
gm_structs::FmodChannelRef fmod_system_get_channel(double index);
gm_structs::FmodChannelGroupRef fmod_system_get_master_channel_group();
double fmod_system_set_output(double output);
double fmod_system_get_output();
double fmod_system_get_num_drivers();
double fmod_system_set_driver(double driver);
double fmod_system_get_driver();
double fmod_system_set_software_channels(double software_channels);
double fmod_system_get_software_channels();
gm_structs::FmodSoundRef fmod_system_create_sound(std::string_view name_or_data, double mode);
gm_structs::FmodSoundRef fmod_system_create_stream(std::string_view name_or_data, double mode);
gm_structs::FmodChannelRef fmod_system_play_sound(const gm_structs::FmodSoundRef& sound_ref, const gm_structs::FmodChannelGroupRef& channel_group_ref, double pause);
double fmod_sound_get_length(const gm_structs::FmodSoundRef& sound_ref, double length_type);
double fmod_sound_set_defaults(const gm_structs::FmodSoundRef& sound_ref, double frequency, double priority);
double fmod_sound_set_mode(const gm_structs::FmodSoundRef& sound_ref, double mode);
double fmod_sound_get_mode(const gm_structs::FmodSoundRef& sound_ref);
double fmod_sound_set_loop_count(const gm_structs::FmodSoundRef& sound_ref, double count);
double fmod_sound_get_loop_count(const gm_structs::FmodSoundRef& sound_ref);
double fmod_sound_set_loop_points(const gm_structs::FmodSoundRef& sound_ref, double loop_start, double loop_start_type, double loop_end, double loop_end_type);
double fmod_sound_set_3d_min_max_distance(const gm_structs::FmodSoundRef& sound_ref, double min, double max);
double fmod_sound_set_3d_cone_settings(const gm_structs::FmodSoundRef& sound_ref, double inside_cone_angle, double outside_cone_angle, double outside_volume);
double fmod_sound_release(const gm_structs::FmodSoundRef& sound_ref);
gm_structs::FmodSystemRef fmod_sound_get_system_object(const gm_structs::FmodSoundRef& sound_ref);
