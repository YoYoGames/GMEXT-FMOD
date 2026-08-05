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
