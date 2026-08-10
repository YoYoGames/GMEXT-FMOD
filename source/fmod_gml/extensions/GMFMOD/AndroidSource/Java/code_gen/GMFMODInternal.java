package ${YYAndroidPackageName};
import static com.gamemaker.ExtensionCore.ExtBridge.GMFMODBridge.*;
import java.lang.String;
import java.nio.ByteBuffer;

public class GMFMODInternal extends RunnerSocial {
    public double __EXT_NATIVE__GMFMOD_invocation_handler(ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__GMFMOD_invocation_handler(__ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__GMFMOD_queue_buffer(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__GMFMOD_queue_buffer(__arg_buffer, __arg_buffer_length);
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
    public String __EXT_NATIVE__fmod_error_string(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_error_string(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_fetch_callbacks()
    {
        return __EXT_JNI__fmod_fetch_callbacks();
    }
    public double __EXT_NATIVE__fmod_file_get_disk_busy()
    {
        return __EXT_JNI__fmod_file_get_disk_busy();
    }
    public double __EXT_NATIVE__fmod_file_set_disk_busy(double busy)
    {
        return __EXT_JNI__fmod_file_set_disk_busy(busy);
    }
    public double __EXT_NATIVE__fmod_memory_get_stats(double blocking, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_memory_get_stats(blocking, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_thread_set_attributes(double thread_type, double affinity, double priority)
    {
        return __EXT_JNI__fmod_thread_set_attributes(thread_type, affinity, priority);
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
    public double __EXT_NATIVE__fmod_channel_get_loop_points(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_channel_get_loop_points(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
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
    public double __EXT_NATIVE__fmod_system_get_channels_playing()
    {
        return __EXT_JNI__fmod_system_get_channels_playing();
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
    public double __EXT_NATIVE__fmod_system_set_3d_settings(double doppler_scale, double distance_factor, double rolloff_scale)
    {
        return __EXT_JNI__fmod_system_set_3d_settings(doppler_scale, distance_factor, rolloff_scale);
    }
    public double __EXT_NATIVE__fmod_system_get_3d_settings(ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_system_get_3d_settings(__ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_system_set_3d_listener_attributes(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_system_set_3d_listener_attributes(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_system_get_3d_listener_attributes(double listener_index, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_system_get_3d_listener_attributes(listener_index, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_system_get_record_num_drivers()
    {
        return __EXT_JNI__fmod_system_get_record_num_drivers();
    }
    public double __EXT_NATIVE__fmod_system_get_record_driver_info(double record_driver_index, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_system_get_record_driver_info(record_driver_index, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_system_get_record_position(double device_index)
    {
        return __EXT_JNI__fmod_system_get_record_position(device_index);
    }
    public double __EXT_NATIVE__fmod_system_record_start(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_system_record_start(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_system_record_stop(double device_index)
    {
        return __EXT_JNI__fmod_system_record_stop(device_index);
    }
    public double __EXT_NATIVE__fmod_system_is_recording(double device_index)
    {
        return __EXT_JNI__fmod_system_is_recording(device_index);
    }
    public double __EXT_NATIVE__fmod_system_create_dsp(ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_system_create_dsp(__ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_system_create_dsp_by_type(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_system_create_dsp_by_type(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_system_get_dsp_buffer_size(ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_system_get_dsp_buffer_size(__ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_system_set_dsp_buffer_size(double buff_size, double num_buffers)
    {
        return __EXT_JNI__fmod_system_set_dsp_buffer_size(buff_size, num_buffers);
    }
    public double __EXT_NATIVE__fmod_system_get_software_format(ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_system_get_software_format(__ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_system_set_software_format(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_system_set_software_format(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_system_set_stream_buffer_size(double file_buffer_size, double file_buffer_size_type)
    {
        return __EXT_JNI__fmod_system_set_stream_buffer_size(file_buffer_size, file_buffer_size_type);
    }
    public double __EXT_NATIVE__fmod_system_get_driver_info(double driver_id, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_system_get_driver_info(driver_id, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_system_create_channel_group(String name, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_system_create_channel_group(name, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_system_play_dsp(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_system_play_dsp(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_system_select(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_system_select(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_system_count()
    {
        return __EXT_JNI__fmod_system_count();
    }
    public double __EXT_NATIVE__fmod_system_get_version()
    {
        return __EXT_JNI__fmod_system_get_version();
    }
    public double __EXT_NATIVE__fmod_system_get_master_sound_group(ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_system_get_master_sound_group(__ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_system_get_advanced_settings(ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_system_get_advanced_settings(__ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_system_set_advanced_settings(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_system_set_advanced_settings(__arg_buffer, __arg_buffer_length);
    }
    public String __EXT_NATIVE__fmod_system_get_network_proxy()
    {
        return __EXT_JNI__fmod_system_get_network_proxy();
    }
    public double __EXT_NATIVE__fmod_system_set_network_proxy(String proxy)
    {
        return __EXT_JNI__fmod_system_set_network_proxy(proxy);
    }
    public double __EXT_NATIVE__fmod_system_get_network_timeout()
    {
        return __EXT_JNI__fmod_system_get_network_timeout();
    }
    public double __EXT_NATIVE__fmod_system_set_network_timeout(double timeout_ms)
    {
        return __EXT_JNI__fmod_system_set_network_timeout(timeout_ms);
    }
    public double __EXT_NATIVE__fmod_system_get_speaker_mode_channels(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_system_get_speaker_mode_channels(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_system_get_speaker_position(double speaker, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_system_get_speaker_position(speaker, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_system_set_speaker_position(double speaker, double x, double y, double active)
    {
        return __EXT_JNI__fmod_system_set_speaker_position(speaker, x, y, active);
    }
    public double __EXT_NATIVE__fmod_system_get_reverb_properties(double instance, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_system_get_reverb_properties(instance, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_system_set_reverb_properties(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_system_set_reverb_properties(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_system_get_default_mix_matrix(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_system_get_default_mix_matrix(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_system_get_cpu_usage(ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_system_get_cpu_usage(__ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_system_get_file_usage(ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_system_get_file_usage(__ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_system_get_stream_buffer_size(ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_system_get_stream_buffer_size(__ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_system_get_3d_num_listeners()
    {
        return __EXT_JNI__fmod_system_get_3d_num_listeners();
    }
    public double __EXT_NATIVE__fmod_system_set_3d_num_listeners(double num)
    {
        return __EXT_JNI__fmod_system_set_3d_num_listeners(num);
    }
    public double __EXT_NATIVE__fmod_system_set_3d_rolloff_callback()
    {
        return __EXT_JNI__fmod_system_set_3d_rolloff_callback();
    }
    public double __EXT_NATIVE__fmod_system_mixer_suspend()
    {
        return __EXT_JNI__fmod_system_mixer_suspend();
    }
    public double __EXT_NATIVE__fmod_system_mixer_resume()
    {
        return __EXT_JNI__fmod_system_mixer_resume();
    }
    public double __EXT_NATIVE__fmod_system_lock_dsp()
    {
        return __EXT_JNI__fmod_system_lock_dsp();
    }
    public double __EXT_NATIVE__fmod_system_unlock_dsp()
    {
        return __EXT_JNI__fmod_system_unlock_dsp();
    }
    public double __EXT_NATIVE__fmod_system_get_user_data()
    {
        return __EXT_JNI__fmod_system_get_user_data();
    }
    public double __EXT_NATIVE__fmod_system_set_user_data(double user_data)
    {
        return __EXT_JNI__fmod_system_set_user_data(user_data);
    }
    public double __EXT_NATIVE__fmod_system_attach_channel_group_to_port(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_system_attach_channel_group_to_port(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_system_detach_channel_group_from_port(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_system_detach_channel_group_from_port(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_system_create_sound_group(String name, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_system_create_sound_group(name, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_system_create_geometry(double max_polygons, double max_vertices, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_system_create_geometry(max_polygons, max_vertices, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_system_load_geometry(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_system_load_geometry(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_system_get_geometry_occlusion(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_system_get_geometry_occlusion(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_system_get_geometry_settings()
    {
        return __EXT_JNI__fmod_system_get_geometry_settings();
    }
    public double __EXT_NATIVE__fmod_system_set_geometry_settings(double max_world_size)
    {
        return __EXT_JNI__fmod_system_set_geometry_settings(max_world_size);
    }
    public double __EXT_NATIVE__fmod_system_create_reverb_3d(ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_system_create_reverb_3d(__ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_system_create_sound(String name_or_data, double mode, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_system_create_sound(name_or_data, mode, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_system_create_sound_ex(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_system_create_sound_ex(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
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
    public double __EXT_NATIVE__fmod_sound_get_format(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_sound_get_format(__arg_buffer, __arg_buffer_length);
    }
    public String __EXT_NATIVE__fmod_sound_get_name(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_sound_get_name(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_sound_get_defaults(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_sound_get_defaults(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
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
    public double __EXT_NATIVE__fmod_sound_get_loop_points(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_sound_get_loop_points(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_sound_set_3d_min_max_distance(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_sound_set_3d_min_max_distance(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_sound_get_3d_min_max_distance(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_sound_get_3d_min_max_distance(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_sound_set_3d_cone_settings(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_sound_set_3d_cone_settings(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_sound_get_3d_cone_settings(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_sound_get_3d_cone_settings(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_sound_set_3d_custom_rolloff(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_sound_set_3d_custom_rolloff(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_sound_get_3d_custom_rolloff(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_sound_get_3d_custom_rolloff(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_sound_get_num_sync_points(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_sound_get_num_sync_points(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_sound_get_sync_point(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_sound_get_sync_point(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_sound_add_sync_point(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_sound_add_sync_point(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_sound_delete_sync_point(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_sound_delete_sync_point(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_sound_get_music_num_channels(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_sound_get_music_num_channels(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_sound_set_music_channel_volume(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_sound_set_music_channel_volume(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_sound_get_music_channel_volume(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_sound_get_music_channel_volume(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_sound_set_music_speed(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_sound_set_music_speed(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_sound_get_music_speed(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_sound_get_music_speed(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_sound_set_sound_group(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_sound_set_sound_group(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_sound_get_sound_group(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_sound_get_sound_group(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_sound_set_user_data(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_sound_set_user_data(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_sound_get_user_data(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_sound_get_user_data(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_sound_release(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_sound_release(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_sound_get_system_object(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_sound_get_system_object(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_sound_get_open_state(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_sound_get_open_state(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_sound_get_num_tags(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_sound_get_num_tags(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_sound_get_tag(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_sound_get_tag(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_sound_get_num_sub_sounds(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_sound_get_num_sub_sounds(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_sound_get_sub_sound(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_sound_get_sub_sound(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_sound_get_sub_sound_parent(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_sound_get_sub_sound_parent(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_sound_read_data(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_sound_read_data(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_sound_seek_data(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_sound_seek_data(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_sound_lock(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_sound_lock(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_sound_unlock(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_sound_unlock(__arg_buffer, __arg_buffer_length);
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
    public double __EXT_NATIVE__fmod_sound_group_set_user_data(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_sound_group_set_user_data(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_sound_group_get_user_data(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_sound_group_get_user_data(__arg_buffer, __arg_buffer_length);
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
    public double __EXT_NATIVE__fmod_reverb_3d_get_properties(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_reverb_3d_get_properties(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_reverb_3d_set_3d_attributes(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_reverb_3d_set_3d_attributes(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_reverb_3d_get_3d_attributes(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_reverb_3d_get_3d_attributes(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_reverb_3d_set_user_data(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_reverb_3d_set_user_data(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_reverb_3d_get_user_data(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_reverb_3d_get_user_data(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_reverb_3d_release(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_reverb_3d_release(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_add_fade_point(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_add_fade_point(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_remove_fade_points(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_remove_fade_points(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_set_fade_point_ramp(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_set_fade_point_ramp(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_get_fade_point_count(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_get_fade_point_count(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_get_fade_point_at(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_get_fade_point_at(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_is_playing(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_is_playing(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_stop(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_stop(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_set_paused(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_set_paused(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_get_paused(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_get_paused(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_set_mode(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_set_mode(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_get_mode(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_get_mode(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_set_pitch(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_set_pitch(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_get_pitch(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_get_pitch(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_get_audibility(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_get_audibility(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_set_volume(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_set_volume(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_get_volume(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_get_volume(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_set_volume_ramp(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_set_volume_ramp(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_get_volume_ramp(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_get_volume_ramp(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_set_mute(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_set_mute(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_get_mute(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_get_mute(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_set_3d_doppler_level(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_set_3d_doppler_level(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_get_3d_doppler_level(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_get_3d_doppler_level(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_set_3d_level(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_set_3d_level(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_get_3d_level(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_get_3d_level(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_set_3d_min_max_distance(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_set_3d_min_max_distance(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_get_3d_min_max_distance(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_get_3d_min_max_distance(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_set_3d_cone_settings(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_set_3d_cone_settings(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_get_3d_cone_settings(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_get_3d_cone_settings(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_set_3d_cone_orientation(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_set_3d_cone_orientation(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_get_3d_cone_orientation(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_get_3d_cone_orientation(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_set_3d_occlusion(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_set_3d_occlusion(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_get_3d_occlusion(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_get_3d_occlusion(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_set_3d_attributes(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_set_3d_attributes(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_get_3d_attributes(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_get_3d_attributes(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_set_3d_spread(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_set_3d_spread(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_get_3d_spread(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_get_3d_spread(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_set_3d_distance_filter(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_set_3d_distance_filter(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_get_3d_distance_filter(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_get_3d_distance_filter(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_set_3d_custom_rolloff(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_set_3d_custom_rolloff(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_get_3d_custom_rolloff_count(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_get_3d_custom_rolloff_count(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_get_3d_custom_rolloff_at(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_get_3d_custom_rolloff_at(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_set_pan(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_set_pan(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_set_mix_levels_output(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_set_mix_levels_output(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_set_mix_levels_input(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_set_mix_levels_input(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_set_mix_matrix(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_set_mix_matrix(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_get_mix_matrix(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_get_mix_matrix(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_set_reverb_properties(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_set_reverb_properties(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_get_reverb_properties(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_get_reverb_properties(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_set_low_pass_gain(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_set_low_pass_gain(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_get_low_pass_gain(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_get_low_pass_gain(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_add_dsp(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_add_dsp(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_remove_dsp(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_remove_dsp(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_get_num_dsps(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_get_num_dsps(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_get_dsp(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_get_dsp(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_set_dsp_index(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_set_dsp_index(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_get_dsp_index(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_get_dsp_index(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_set_user_data(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_set_user_data(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_get_user_data(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_get_user_data(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_get_system_object(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_get_system_object(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_get_delay(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_get_delay(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_set_delay(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_set_delay(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_get_dsp_clock(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_get_dsp_clock(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_channel_control_set_callback(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_channel_control_set_callback(__arg_buffer, __arg_buffer_length);
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
    public double __EXT_NATIVE__fmod_dsp_get_input(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_dsp_get_input(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_dsp_get_output(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_dsp_get_output(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_dsp_disconnect_from(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_dsp_disconnect_from(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_dsp_get_data_parameter_index(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_dsp_get_data_parameter_index(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_dsp_set_parameter_data(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_dsp_set_parameter_data(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_dsp_get_parameter_data(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_dsp_get_parameter_data(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_dsp_get_parameter_info(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_dsp_get_parameter_info(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_dsp_set_channel_format(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_dsp_set_channel_format(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_dsp_get_channel_format(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_dsp_get_channel_format(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_dsp_get_output_channel_format(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_dsp_get_output_channel_format(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_dsp_get_metering_info(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_dsp_get_metering_info(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_dsp_set_metering_enabled(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_dsp_set_metering_enabled(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_dsp_get_metering_enabled(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_dsp_get_metering_enabled(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_dsp_set_active(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_dsp_set_active(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_dsp_get_active(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_dsp_get_active(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_dsp_set_bypass(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_dsp_set_bypass(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_dsp_get_bypass(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_dsp_get_bypass(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_dsp_set_wet_dry_mix(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_dsp_set_wet_dry_mix(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_dsp_get_wet_dry_mix(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_dsp_get_wet_dry_mix(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_dsp_get_idle(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_dsp_get_idle(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_dsp_reset(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_dsp_reset(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_dsp_get_type(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_dsp_get_type(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_dsp_get_info(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_dsp_get_info(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_dsp_get_cpu_usage(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_dsp_get_cpu_usage(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_dsp_set_user_data(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_dsp_set_user_data(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_dsp_get_user_data(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_dsp_get_user_data(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_dsp_set_callback(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_dsp_set_callback(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_dsp_connection_set_mix(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_dsp_connection_set_mix(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_dsp_connection_get_mix(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_dsp_connection_get_mix(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_dsp_connection_set_mix_matrix(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_dsp_connection_set_mix_matrix(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_dsp_connection_get_mix_matrix(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_dsp_connection_get_mix_matrix(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_dsp_connection_get_input(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_dsp_connection_get_input(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_dsp_connection_get_output(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_dsp_connection_get_output(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_dsp_connection_get_type(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_dsp_connection_get_type(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_dsp_connection_set_user_data(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_dsp_connection_set_user_data(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_dsp_connection_get_user_data(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_dsp_connection_get_user_data(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_geometry_add_polygon(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_geometry_add_polygon(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_geometry_set_polygon_attributes(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_geometry_set_polygon_attributes(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_geometry_get_polygon_attributes(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_geometry_get_polygon_attributes(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_geometry_get_polygon_num_vertices(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_geometry_get_polygon_num_vertices(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_geometry_set_polygon_vertex(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_geometry_set_polygon_vertex(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_geometry_get_polygon_vertex(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_geometry_get_polygon_vertex(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_geometry_get_num_polygons(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_geometry_get_num_polygons(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_geometry_get_max_polygons(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_geometry_get_max_polygons(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_geometry_set_position(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_geometry_set_position(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_geometry_get_position(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_geometry_get_position(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_geometry_set_rotation(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_geometry_set_rotation(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_geometry_get_rotation(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_geometry_get_rotation(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_geometry_set_scale(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_geometry_set_scale(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_geometry_get_scale(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_geometry_get_scale(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_geometry_set_user_data(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_geometry_set_user_data(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_geometry_get_user_data(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_geometry_get_user_data(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_geometry_get_active(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_geometry_get_active(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_geometry_set_active(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_geometry_set_active(__arg_buffer, __arg_buffer_length);
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
    public double __EXT_NATIVE__fmod_studio_system_get_bank_by_id(String str_guid, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_studio_system_get_bank_by_id(str_guid, __ret_buffer, __ret_buffer_length);
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
    public double __EXT_NATIVE__fmod_studio_system_get_bus_by_id(String str_guid, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_studio_system_get_bus_by_id(str_guid, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_system_get_vca(String path, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_studio_system_get_vca(path, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_system_get_vca_by_id(String str_guid, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_studio_system_get_vca_by_id(str_guid, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_system_set_listener_attributes(double listener_index, double x, double y, double z)
    {
        return __EXT_JNI__fmod_studio_system_set_listener_attributes(listener_index, x, y, z);
    }
    public double __EXT_NATIVE__fmod_studio_system_set_listener_weight(double listener_index, double weight)
    {
        return __EXT_JNI__fmod_studio_system_set_listener_weight(listener_index, weight);
    }
    public double __EXT_NATIVE__fmod_studio_system_get_num_listeners()
    {
        return __EXT_JNI__fmod_studio_system_get_num_listeners();
    }
    public double __EXT_NATIVE__fmod_studio_system_get_listener_attributes(double listener_index, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_studio_system_get_listener_attributes(listener_index, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_system_get_listener_weight(double listener_index)
    {
        return __EXT_JNI__fmod_studio_system_get_listener_weight(listener_index);
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
    public double __EXT_NATIVE__fmod_studio_system_set_num_listeners(double count)
    {
        return __EXT_JNI__fmod_studio_system_set_num_listeners(count);
    }
    public String __EXT_NATIVE__fmod_studio_system_lookup_id(String path)
    {
        return __EXT_JNI__fmod_studio_system_lookup_id(path);
    }
    public String __EXT_NATIVE__fmod_studio_system_lookup_path(String str_guid)
    {
        return __EXT_JNI__fmod_studio_system_lookup_path(str_guid);
    }
    public double __EXT_NATIVE__fmod_studio_system_get_event_by_id(String id, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_studio_system_get_event_by_id(id, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_system_is_valid()
    {
        return __EXT_JNI__fmod_studio_system_is_valid();
    }
    public double __EXT_NATIVE__fmod_studio_system_start_command_capture(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_system_start_command_capture(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_system_stop_command_capture()
    {
        return __EXT_JNI__fmod_studio_system_stop_command_capture();
    }
    public double __EXT_NATIVE__fmod_studio_system_load_command_replay(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_studio_system_load_command_replay(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_system_get_sound_info(String key, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_studio_system_get_sound_info(key, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_system_get_parameter_by_id(double id_data1, double id_data2, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_studio_system_get_parameter_by_id(id_data1, id_data2, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_system_set_parameter_by_id(double id_data1, double id_data2, double value, double ignore_seek_speed)
    {
        return __EXT_JNI__fmod_studio_system_set_parameter_by_id(id_data1, id_data2, value, ignore_seek_speed);
    }
    public double __EXT_NATIVE__fmod_studio_system_get_parameter_description_by_id(double id_data1, double id_data2, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_studio_system_get_parameter_description_by_id(id_data1, id_data2, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_system_get_parameter_description_by_name(String name, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_studio_system_get_parameter_description_by_name(name, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_system_get_parameter_description_count()
    {
        return __EXT_JNI__fmod_studio_system_get_parameter_description_count();
    }
    public double __EXT_NATIVE__fmod_studio_system_get_parameter_description_at(double index, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_studio_system_get_parameter_description_at(index, __ret_buffer, __ret_buffer_length);
    }
    public String __EXT_NATIVE__fmod_studio_system_get_parameter_label_by_id(double id_data1, double id_data2, double label_index)
    {
        return __EXT_JNI__fmod_studio_system_get_parameter_label_by_id(id_data1, id_data2, label_index);
    }
    public String __EXT_NATIVE__fmod_studio_system_get_parameter_label_by_name(String name, double label_index)
    {
        return __EXT_JNI__fmod_studio_system_get_parameter_label_by_name(name, label_index);
    }
    public double __EXT_NATIVE__fmod_studio_system_set_parameter_by_id_with_label(double id_data1, double id_data2, String label, double ignore_seek_speed)
    {
        return __EXT_JNI__fmod_studio_system_set_parameter_by_id_with_label(id_data1, id_data2, label, ignore_seek_speed);
    }
    public double __EXT_NATIVE__fmod_studio_system_set_parameter_by_name_with_label(String name, String label, double ignore_seek_speed)
    {
        return __EXT_JNI__fmod_studio_system_set_parameter_by_name_with_label(name, label, ignore_seek_speed);
    }
    public double __EXT_NATIVE__fmod_studio_system_get_cpu_usage(ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_studio_system_get_cpu_usage(__ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_system_get_buffer_usage(ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_studio_system_get_buffer_usage(__ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_system_reset_buffer_usage()
    {
        return __EXT_JNI__fmod_studio_system_reset_buffer_usage();
    }
    public double __EXT_NATIVE__fmod_studio_system_get_memory_usage(ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_studio_system_get_memory_usage(__ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_system_get_advanced_settings(ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_studio_system_get_advanced_settings(__ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_system_set_advanced_settings(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_system_set_advanced_settings(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_system_set_callback(double callback_mask)
    {
        return __EXT_JNI__fmod_studio_system_set_callback(callback_mask);
    }
    public double __EXT_NATIVE__fmod_studio_system_get_user_data()
    {
        return __EXT_JNI__fmod_studio_system_get_user_data();
    }
    public double __EXT_NATIVE__fmod_studio_system_set_user_data(double user_data)
    {
        return __EXT_JNI__fmod_studio_system_set_user_data(user_data);
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
    public String __EXT_NATIVE__fmod_studio_bank_get_id(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_bank_get_id(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_bank_is_valid(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_bank_is_valid(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_bank_get_string_info(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_studio_bank_get_string_info(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_bank_load_sample_data(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_bank_load_sample_data(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_bank_unload_sample_data(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_bank_unload_sample_data(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_bank_get_user_data(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_bank_get_user_data(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_bank_set_user_data(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_bank_set_user_data(__arg_buffer, __arg_buffer_length);
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
    public double __EXT_NATIVE__fmod_studio_event_description_get_parameter_description_by_name(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_description_get_parameter_description_by_name(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_description_load_sample_data(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_description_load_sample_data(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_description_is_valid(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_description_is_valid(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_description_is_3d(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_description_is_3d(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_description_is_stream(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_description_is_stream(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_description_is_doppler_enabled(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_description_is_doppler_enabled(__arg_buffer, __arg_buffer_length);
    }
    public String __EXT_NATIVE__fmod_studio_event_description_get_id(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_description_get_id(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_description_get_min_max_distance(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_description_get_min_max_distance(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_description_get_sound_size(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_description_get_sound_size(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_description_get_sample_loading_state(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_description_get_sample_loading_state(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_description_unload_sample_data(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_description_unload_sample_data(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_description_set_callback(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_description_set_callback(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_description_get_user_data(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_description_get_user_data(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_description_set_user_data(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_description_set_user_data(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_description_get_user_property(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_description_get_user_property(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_description_get_user_property_at(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_description_get_user_property_at(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_description_get_user_property_count(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_description_get_user_property_count(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_description_get_parameter_description_by_id(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_description_get_parameter_description_by_id(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_description_get_parameter_description_at(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_description_get_parameter_description_at(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public String __EXT_NATIVE__fmod_studio_event_description_get_parameter_label_by_id(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_description_get_parameter_label_by_id(__arg_buffer, __arg_buffer_length);
    }
    public String __EXT_NATIVE__fmod_studio_event_description_get_parameter_label_at(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_description_get_parameter_label_at(__arg_buffer, __arg_buffer_length);
    }
    public String __EXT_NATIVE__fmod_studio_event_description_get_parameter_label_by_name(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_description_get_parameter_label_by_name(__arg_buffer, __arg_buffer_length);
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
    public double __EXT_NATIVE__fmod_studio_event_instance_keyoff(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_instance_keyoff(__arg_buffer, __arg_buffer_length);
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
    public double __EXT_NATIVE__fmod_studio_event_instance_get_parameter_by_id(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_instance_get_parameter_by_id(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_instance_set_parameter_by_id(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_instance_set_parameter_by_id(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_instance_set_callback(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_instance_set_callback(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_instance_set_parameter_by_id_with_label(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_instance_set_parameter_by_id_with_label(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_instance_set_parameter_by_name_with_label(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_instance_set_parameter_by_name_with_label(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_instance_set_3d_attributes(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_instance_set_3d_attributes(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_instance_get_3d_attributes(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_instance_get_3d_attributes(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_instance_get_min_max_distance(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_instance_get_min_max_distance(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_instance_get_listener_mask(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_instance_get_listener_mask(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_instance_set_listener_mask(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_instance_set_listener_mask(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_instance_get_reverb_level(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_instance_get_reverb_level(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_instance_set_reverb_level(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_instance_set_reverb_level(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_instance_get_property(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_instance_get_property(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_instance_set_property(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_instance_set_property(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_instance_get_user_data(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_instance_get_user_data(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_instance_set_user_data(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_instance_set_user_data(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_instance_is_valid(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_instance_is_valid(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_instance_is_virtual(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_instance_is_virtual(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_instance_get_channel_group(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_instance_get_channel_group(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_instance_get_cpu_usage(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_instance_get_cpu_usage(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_event_instance_get_memory_usage(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_studio_event_instance_get_memory_usage(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
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
    public String __EXT_NATIVE__fmod_studio_bus_get_id(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_bus_get_id(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_bus_is_valid(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_bus_is_valid(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_bus_get_channel_group(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_studio_bus_get_channel_group(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_bus_lock_channel_group(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_bus_lock_channel_group(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_bus_unlock_channel_group(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_bus_unlock_channel_group(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_bus_get_cpu_usage(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_studio_bus_get_cpu_usage(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_bus_get_memory_usage(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_studio_bus_get_memory_usage(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_bus_get_mute(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_bus_get_mute(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_bus_set_mute(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_bus_set_mute(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_bus_get_port_index(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_studio_bus_get_port_index(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_bus_set_port_index(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_bus_set_port_index(__arg_buffer, __arg_buffer_length);
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
    public double __EXT_NATIVE__fmod_studio_command_replay_get_command_count(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_command_replay_get_command_count(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_command_replay_get_length(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_command_replay_get_length(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_command_replay_get_system_object(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_studio_command_replay_get_system_object(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_command_replay_is_valid(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_command_replay_is_valid(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_command_replay_get_command_info(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_studio_command_replay_get_command_info(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
    }
    public String __EXT_NATIVE__fmod_studio_command_replay_get_command_string(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_command_replay_get_command_string(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_command_replay_get_command_at_time(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_command_replay_get_command_at_time(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_command_replay_seek_to_command(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_command_replay_seek_to_command(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_command_replay_seek_to_time(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_command_replay_seek_to_time(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_command_replay_set_bank_path(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_command_replay_set_bank_path(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_command_replay_get_paused(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_command_replay_get_paused(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_command_replay_set_paused(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_command_replay_set_paused(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_command_replay_start(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_command_replay_start(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_command_replay_stop(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_command_replay_stop(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_command_replay_get_user_data(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_command_replay_get_user_data(__arg_buffer, __arg_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_command_replay_set_user_data(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_command_replay_set_user_data(__arg_buffer, __arg_buffer_length);
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