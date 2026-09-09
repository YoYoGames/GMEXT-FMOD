package ${YYAndroidPackageName};
import static com.gamemaker.ExtensionCore.ExtBridge.GMFMODStudioBridge.*;
import java.lang.String;
import java.nio.ByteBuffer;

public class GMFMODStudioInternal extends RunnerSocial {
    public double __EXT_NATIVE__GMFMODStudio_invocation_handler(ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__GMFMODStudio_invocation_handler(__ret_buffer, __ret_buffer_length);
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
    public double __EXT_NATIVE__fmod_studio_system_set_listener_attributes(ByteBuffer __arg_buffer, double __arg_buffer_length)
    {
        return __EXT_JNI__fmod_studio_system_set_listener_attributes(__arg_buffer, __arg_buffer_length);
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
    public double __EXT_NATIVE__fmod_studio_system_get_core_system_ptr(ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_studio_system_get_core_system_ptr(__ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_last_result(ByteBuffer __ret_buffer, double __ret_buffer_length)
    {
        return __EXT_JNI__fmod_studio_last_result(__ret_buffer, __ret_buffer_length);
    }
    public double __EXT_NATIVE__fmod_studio_shutdown()
    {
        return __EXT_JNI__fmod_studio_shutdown();
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