package ${YYAndroidPackageName};
import static com.gamemaker.ExtensionCore.ExtBridge.GMFMODBridge.*;
import java.lang.String;
import java.nio.ByteBuffer;

public class GMFMODInternal extends RunnerSocial {
    public double __EXT_NATIVE__GMFMOD_invocation_handler(ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__GMFMOD_invocation_handler(__ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_last_result(ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_last_result(__ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_debug_initialize(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_debug_initialize(__arg_buffer, __arg_buffer_length);
    }
    public String __EXT_NATIVE__fmod_path_bundle(String filename)
    {
        return __EXT_JNI__fmod_path_bundle(filename);
    }
    public String __EXT_NATIVE__fmod_path_user(String filename)
    {
        return __EXT_JNI__fmod_path_user(filename);
    }
    public double __EXT_NATIVE__fmod_channel_set_frequency(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_set_frequency(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_get_frequency(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_get_frequency(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_set_priority(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_set_priority(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_get_priority(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_get_priority(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_set_position(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_set_position(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_get_position(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_get_position(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_set_channel_group(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_set_channel_group(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_get_channel_group(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_channel_get_channel_group(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_set_loop_count(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_set_loop_count(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_get_loop_count(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_get_loop_count(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_set_loop_points(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_set_loop_points(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_is_virtual(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_is_virtual(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_get_index(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_get_index(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_get_current_sound(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_channel_get_current_sound(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_get_system_object(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_channel_get_system_object(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_system_create(ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_system_create(__ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_system_init(double max_channels, double flags)
    {
        return __EXT_JNI__fmod_system_init(max_channels, flags);
    }
    public double __EXT_NATIVE__fmod_system_release(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_system_release(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_system_close(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_system_close(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_system_update()
    {
        return __EXT_JNI__fmod_system_update();
    }
    public double __EXT_NATIVE__fmod_system_get_channel(double index, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_system_get_channel(index, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_system_get_master_channel_group(ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_system_get_master_channel_group(__ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_system_set_output(double output)
    {
        return __EXT_JNI__fmod_system_set_output(output);
    }
    public double __EXT_NATIVE__fmod_system_get_output()
    {
        return __EXT_JNI__fmod_system_get_output();
    }
    public double __EXT_NATIVE__fmod_system_get_num_drivers()
    {
        return __EXT_JNI__fmod_system_get_num_drivers();
    }
    public double __EXT_NATIVE__fmod_system_set_driver(double driver)
    {
        return __EXT_JNI__fmod_system_set_driver(driver);
    }
    public double __EXT_NATIVE__fmod_system_get_driver()
    {
        return __EXT_JNI__fmod_system_get_driver();
    }
    public double __EXT_NATIVE__fmod_system_set_software_channels(double software_channels)
    {
        return __EXT_JNI__fmod_system_set_software_channels(software_channels);
    }
    public double __EXT_NATIVE__fmod_system_get_software_channels()
    {
        return __EXT_JNI__fmod_system_get_software_channels();
    }
    public double __EXT_NATIVE__fmod_system_create_sound(String name_or_data, double mode, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_system_create_sound(name_or_data, mode, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_system_create_stream(String name_or_data, double mode, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_system_create_stream(name_or_data, mode, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_system_play_sound(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_system_play_sound(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_sound_get_length(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_sound_get_length(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_sound_set_defaults(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_sound_set_defaults(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_sound_set_mode(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_sound_set_mode(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_sound_get_mode(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_sound_get_mode(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_sound_set_loop_count(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_sound_set_loop_count(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_sound_get_loop_count(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_sound_get_loop_count(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_sound_set_loop_points(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_sound_set_loop_points(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_sound_set_3d_min_max_distance(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_sound_set_3d_min_max_distance(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_sound_set_3d_cone_settings(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_sound_set_3d_cone_settings(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_sound_release(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_sound_release(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_sound_get_system_object(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_sound_get_system_object(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_group_get_num_channels(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_group_get_num_channels(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_group_get_channel(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_channel_group_get_channel(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_group_add_group(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_channel_group_add_group(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_group_get_num_groups(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_group_get_num_groups(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_group_get_group(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_channel_group_get_group(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_group_get_parent_group(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_channel_group_get_parent_group(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public String __EXT_NATIVE__fmod_channel_group_get_name(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_group_get_name(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_group_release(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_group_release(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_group_get_system_object(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_channel_group_get_system_object(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_sound_group_set_max_audible(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_sound_group_set_max_audible(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_sound_group_get_max_audible(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_sound_group_get_max_audible(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_sound_group_set_max_audible_behavior(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_sound_group_set_max_audible_behavior(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_sound_group_get_max_audible_behavior(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_sound_group_get_max_audible_behavior(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_sound_group_set_mute_fade_speed(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_sound_group_set_mute_fade_speed(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_sound_group_get_mute_fade_speed(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_sound_group_get_mute_fade_speed(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_sound_group_set_volume(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_sound_group_set_volume(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_sound_group_get_volume(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_sound_group_get_volume(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_sound_group_get_num_sounds(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_sound_group_get_num_sounds(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_sound_group_get_sound(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_sound_group_get_sound(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_sound_group_get_num_playing(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_sound_group_get_num_playing(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_sound_group_stop(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_sound_group_stop(__arg_buffer, __arg_buffer_length);
    }
    public String __EXT_NATIVE__fmod_sound_group_get_name(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_sound_group_get_name(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_sound_group_release(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_sound_group_release(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_sound_group_get_system_object(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_sound_group_get_system_object(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_reverb_3d_set_active(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_reverb_3d_set_active(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_reverb_3d_get_active(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_reverb_3d_get_active(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_reverb_3d_set_properties(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_reverb_3d_set_properties(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_reverb_3d_release(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_reverb_3d_release(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_is_playing(double channel_control_ref)
    {
        return __EXT_JNI__fmod_channel_control_is_playing(channel_control_ref);
    }
    public double __EXT_NATIVE__fmod_channel_control_stop(double channel_control_ref)
    {
        return __EXT_JNI__fmod_channel_control_stop(channel_control_ref);
    }
    public double __EXT_NATIVE__fmod_channel_control_set_paused(double channel_control_ref, double paused)
    {
        return __EXT_JNI__fmod_channel_control_set_paused(channel_control_ref, paused);
    }
    public double __EXT_NATIVE__fmod_channel_control_get_paused(double channel_control_ref)
    {
        return __EXT_JNI__fmod_channel_control_get_paused(channel_control_ref);
    }
    public double __EXT_NATIVE__fmod_channel_control_set_mode(double channel_control_ref, double mode)
    {
        return __EXT_JNI__fmod_channel_control_set_mode(channel_control_ref, mode);
    }
    public double __EXT_NATIVE__fmod_channel_control_get_mode(double channel_control_ref)
    {
        return __EXT_JNI__fmod_channel_control_get_mode(channel_control_ref);
    }
    public double __EXT_NATIVE__fmod_channel_control_set_pitch(double channel_control_ref, double pitch)
    {
        return __EXT_JNI__fmod_channel_control_set_pitch(channel_control_ref, pitch);
    }
    public double __EXT_NATIVE__fmod_channel_control_get_pitch(double channel_control_ref)
    {
        return __EXT_JNI__fmod_channel_control_get_pitch(channel_control_ref);
    }
    public double __EXT_NATIVE__fmod_channel_control_get_audibility(double channel_control_ref)
    {
        return __EXT_JNI__fmod_channel_control_get_audibility(channel_control_ref);
    }
    public double __EXT_NATIVE__fmod_channel_control_set_volume(double channel_control_ref, double volume)
    {
        return __EXT_JNI__fmod_channel_control_set_volume(channel_control_ref, volume);
    }
    public double __EXT_NATIVE__fmod_channel_control_get_volume(double channel_control_ref)
    {
        return __EXT_JNI__fmod_channel_control_get_volume(channel_control_ref);
    }
    public double __EXT_NATIVE__fmod_channel_control_set_volume_ramp(double channel_control_ref, double ramp)
    {
        return __EXT_JNI__fmod_channel_control_set_volume_ramp(channel_control_ref, ramp);
    }
    public double __EXT_NATIVE__fmod_channel_control_get_volume_ramp(double channel_control_ref)
    {
        return __EXT_JNI__fmod_channel_control_get_volume_ramp(channel_control_ref);
    }
    public double __EXT_NATIVE__fmod_channel_control_set_mute(double channel_control_ref, double mute)
    {
        return __EXT_JNI__fmod_channel_control_set_mute(channel_control_ref, mute);
    }
    public double __EXT_NATIVE__fmod_channel_control_get_mute(double channel_control_ref)
    {
        return __EXT_JNI__fmod_channel_control_get_mute(channel_control_ref);
    }
    public double __EXT_NATIVE__fmod_channel_control_set_3d_doppler_level(double channel_control_ref, double level)
    {
        return __EXT_JNI__fmod_channel_control_set_3d_doppler_level(channel_control_ref, level);
    }
    public double __EXT_NATIVE__fmod_channel_control_get_3d_doppler_level(double channel_control_ref)
    {
        return __EXT_JNI__fmod_channel_control_get_3d_doppler_level(channel_control_ref);
    }
    public double __EXT_NATIVE__fmod_channel_control_set_3d_level(double channel_control_ref, double level)
    {
        return __EXT_JNI__fmod_channel_control_set_3d_level(channel_control_ref, level);
    }
    public double __EXT_NATIVE__fmod_channel_control_get_3d_level(double channel_control_ref)
    {
        return __EXT_JNI__fmod_channel_control_get_3d_level(channel_control_ref);
    }
    public double __EXT_NATIVE__fmod_channel_control_set_3d_min_max_distance(double channel_control_ref, double min_dist, double max_dist)
    {
        return __EXT_JNI__fmod_channel_control_set_3d_min_max_distance(channel_control_ref, min_dist, max_dist);
    }
    public double __EXT_NATIVE__fmod_channel_control_set_3d_cone_settings(double channel_control_ref, double inside_cone_angle, double outside_cone_angle, double outside_volume)
    {
        return __EXT_JNI__fmod_channel_control_set_3d_cone_settings(channel_control_ref, inside_cone_angle, outside_cone_angle, outside_volume);
    }
    public double __EXT_NATIVE__fmod_channel_control_set_3d_occlusion(double channel_control_ref, double direct_occlusion, double reverb_occlusion)
    {
        return __EXT_JNI__fmod_channel_control_set_3d_occlusion(channel_control_ref, direct_occlusion, reverb_occlusion);
    }
    public double __EXT_NATIVE__fmod_channel_control_set_3d_spread(double channel_control_ref, double angle)
    {
        return __EXT_JNI__fmod_channel_control_set_3d_spread(channel_control_ref, angle);
    }
    public double __EXT_NATIVE__fmod_channel_control_get_3d_spread(double channel_control_ref)
    {
        return __EXT_JNI__fmod_channel_control_get_3d_spread(channel_control_ref);
    }
    public double __EXT_NATIVE__fmod_channel_control_set_3d_distance_filter(double channel_control_ref, double custom, double custom_level, double center_freq)
    {
        return __EXT_JNI__fmod_channel_control_set_3d_distance_filter(channel_control_ref, custom, custom_level, center_freq);
    }
    public double __EXT_NATIVE__fmod_channel_control_set_pan(double channel_control_ref, double pan)
    {
        return __EXT_JNI__fmod_channel_control_set_pan(channel_control_ref, pan);
    }
    public double __EXT_NATIVE__fmod_channel_control_set_mix_levels_output(double channel_control_ref, double front_left, double front_right, double center, double lfe, double surround_left, double surround_right, double back_left, double back_right)
    {
        return __EXT_JNI__fmod_channel_control_set_mix_levels_output(channel_control_ref, front_left, front_right, center, lfe, surround_left, surround_right, back_left, back_right);
    }
    public double __EXT_NATIVE__fmod_channel_control_set_reverb_properties(double channel_control_ref, double reverb_instance, double wet)
    {
        return __EXT_JNI__fmod_channel_control_set_reverb_properties(channel_control_ref, reverb_instance, wet);
    }
    public double __EXT_NATIVE__fmod_channel_control_get_reverb_properties(double channel_control_ref, double reverb_instance)
    {
        return __EXT_JNI__fmod_channel_control_get_reverb_properties(channel_control_ref, reverb_instance);
    }
    public double __EXT_NATIVE__fmod_channel_control_set_low_pass_gain(double channel_control_ref, double gain)
    {
        return __EXT_JNI__fmod_channel_control_set_low_pass_gain(channel_control_ref, gain);
    }
    public double __EXT_NATIVE__fmod_channel_control_get_low_pass_gain(double channel_control_ref)
    {
        return __EXT_JNI__fmod_channel_control_get_low_pass_gain(channel_control_ref);
    }
    public double __EXT_NATIVE__fmod_channel_control_add_dsp(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_add_dsp(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_remove_dsp(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_remove_dsp(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_get_num_dsps(double channel_control_ref)
    {
        return __EXT_JNI__fmod_channel_control_get_num_dsps(channel_control_ref);
    }
    public double __EXT_NATIVE__fmod_channel_control_get_dsp(double channel_control_ref, double index, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_get_dsp(channel_control_ref, index, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_set_dsp_index(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_set_dsp_index(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_get_dsp_index(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_get_dsp_index(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_get_system_object(double channel_control_ref, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_get_system_object(channel_control_ref, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_dsp_add_input(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_dsp_add_input(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_dsp_get_num_inputs(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_dsp_get_num_inputs(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_dsp_get_num_outputs(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_dsp_get_num_outputs(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_dsp_disconnect_all(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_dsp_disconnect_all(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_dsp_get_num_parameters(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_dsp_get_num_parameters(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_dsp_set_parameter_float(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_dsp_set_parameter_float(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_dsp_get_parameter_float(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_dsp_get_parameter_float(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_dsp_set_parameter_int(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_dsp_set_parameter_int(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_dsp_get_parameter_int(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_dsp_get_parameter_int(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_dsp_set_parameter_bool(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_dsp_set_parameter_bool(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_dsp_get_parameter_bool(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_dsp_get_parameter_bool(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_dsp_release(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_dsp_release(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_dsp_get_system_object(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_dsp_get_system_object(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_geometry_set_polygon_attributes(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_geometry_set_polygon_attributes(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_geometry_get_polygon_num_vertices(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_geometry_get_polygon_num_vertices(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_geometry_set_position(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_geometry_set_position(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_geometry_set_rotation(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_geometry_set_rotation(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_geometry_set_scale(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_geometry_set_scale(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_geometry_save(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_geometry_save(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_geometry_release(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_geometry_release(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_system_create(ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_studio_system_create(__ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_system_init(double max_channels, double studio_flags, double core_flags)
    {
        return __EXT_JNI__fmod_studio_system_init(max_channels, studio_flags, core_flags);
    }
    public double __EXT_NATIVE__fmod_studio_system_release()
    {
        return __EXT_JNI__fmod_studio_system_release();
    }
    public double __EXT_NATIVE__fmod_studio_system_update()
    {
        return __EXT_JNI__fmod_studio_system_update();
    }
    public double __EXT_NATIVE__fmod_studio_system_flush_commands()
    {
        return __EXT_JNI__fmod_studio_system_flush_commands();
    }
    public double __EXT_NATIVE__fmod_studio_system_flush_sample_loading()
    {
        return __EXT_JNI__fmod_studio_system_flush_sample_loading();
    }
    public double __EXT_NATIVE__fmod_studio_system_load_bank_file(String filename, double flags, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_studio_system_load_bank_file(filename, flags, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_system_load_bank_memory(String data, double flags, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_studio_system_load_bank_memory(data, flags, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_system_unload_all()
    {
        return __EXT_JNI__fmod_studio_system_unload_all();
    }
    public double __EXT_NATIVE__fmod_studio_system_get_bank_count()
    {
        return __EXT_JNI__fmod_studio_system_get_bank_count();
    }
    public double __EXT_NATIVE__fmod_studio_system_get_bank_at(double index, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_studio_system_get_bank_at(index, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_system_get_bank(String path, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_studio_system_get_bank(path, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_system_get_event(String path, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_studio_system_get_event(path, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_system_create_event_instance(String path, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_studio_system_create_event_instance(path, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_system_get_bus(String path, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_studio_system_get_bus(path, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_system_get_master_bus(ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_studio_system_get_master_bus(__ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_system_get_vca(String path, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_studio_system_get_vca(path, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_system_set_listener_attributes(double listener_index, double x, double y, double z)
    {
        return __EXT_JNI__fmod_studio_system_set_listener_attributes(listener_index, x, y, z);
    }
    public double __EXT_NATIVE__fmod_studio_system_set_listener_weight(double listener_index, double weight)
    {
        return __EXT_JNI__fmod_studio_system_set_listener_weight(listener_index, weight);
    }
    public double __EXT_NATIVE__fmod_studio_system_set_parameter_by_name(String name, double value)
    {
        return __EXT_JNI__fmod_studio_system_set_parameter_by_name(name, value);
    }
    public double __EXT_NATIVE__fmod_studio_system_get_parameter_by_name(String name)
    {
        return __EXT_JNI__fmod_studio_system_get_parameter_by_name(name);
    }
    public double __EXT_NATIVE__fmod_studio_system_get_core_system(ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_studio_system_get_core_system(__ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_bank_unload(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_bank_unload(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_bank_get_loading_state(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_bank_get_loading_state(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_bank_get_sample_loading_state(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_bank_get_sample_loading_state(__arg_buffer, __arg_buffer_length);
    }
    public String __EXT_NATIVE__fmod_studio_bank_get_path(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_bank_get_path(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_bank_get_parent_studio_system(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_studio_bank_get_parent_studio_system(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_bank_get_event_count(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_bank_get_event_count(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_bank_get_event_at(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_studio_bank_get_event_at(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_bank_get_bus_count(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_bank_get_bus_count(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_bank_get_bus_at(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_studio_bank_get_bus_at(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_bank_get_vca_count(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_bank_get_vca_count(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_bank_get_vca_at(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_studio_bank_get_vca_at(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_bank_get_string_count(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_bank_get_string_count(__arg_buffer, __arg_buffer_length);
    }
    public String __EXT_NATIVE__fmod_studio_event_description_get_path(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_description_get_path(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_description_create_instance(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_description_create_instance(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_description_get_instance_count(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_description_get_instance_count(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_description_get_instance_at(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_description_get_instance_at(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_description_is_snapshot(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_description_is_snapshot(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_description_is_one_shot(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_description_is_one_shot(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_description_has_sustain_point(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_description_has_sustain_point(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_description_get_length(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_description_get_length(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_description_get_parameter_count(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_description_get_parameter_count(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_description_release_all_instances(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_description_release_all_instances(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_instance_start(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_instance_start(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_instance_stop(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_instance_stop(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_instance_get_playback_state(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_instance_get_playback_state(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_instance_get_paused(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_instance_get_paused(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_instance_set_paused(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_instance_set_paused(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_instance_get_timeline_position(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_instance_get_timeline_position(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_instance_set_timeline_position(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_instance_set_timeline_position(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_instance_get_volume(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_instance_get_volume(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_instance_set_volume(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_instance_set_volume(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_instance_get_pitch(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_instance_get_pitch(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_instance_set_pitch(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_instance_set_pitch(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_instance_set_parameter_by_name(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_instance_set_parameter_by_name(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_instance_get_parameter_by_name(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_instance_get_parameter_by_name(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_instance_get_parameter_count(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_instance_get_parameter_count(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_instance_set_3d_attributes(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_instance_set_3d_attributes(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_instance_get_description(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_instance_get_description(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_instance_release(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_instance_release(__arg_buffer, __arg_buffer_length);
    }
    public String __EXT_NATIVE__fmod_studio_bus_get_path(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_bus_get_path(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_bus_get_volume(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_bus_get_volume(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_bus_set_volume(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_bus_set_volume(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_bus_get_paused(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_bus_get_paused(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_bus_set_paused(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_bus_set_paused(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_bus_stop_all_events(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_bus_stop_all_events(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_bus_get_master_bus(ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_studio_bus_get_master_bus(__ret_buffer, __ret_buffer_length);
    }
    public String __EXT_NATIVE__fmod_studio_vca_get_path(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_vca_get_path(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_vca_get_volume(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_vca_get_volume(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_vca_set_volume(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_vca_set_volume(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_command_replay_get_playback_state(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_command_replay_get_playback_state(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_command_replay_get_current_command(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_command_replay_get_current_command(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_command_replay_release(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_command_replay_release(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_command_replay_set_frame_callback(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_command_replay_set_frame_callback(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_command_replay_set_create_instance_callback(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_command_replay_set_create_instance_callback(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_command_replay_set_load_bank_callback(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_command_replay_set_load_bank_callback(__arg_buffer, __arg_buffer_length);
    }
}