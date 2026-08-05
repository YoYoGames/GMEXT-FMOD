package ${YYAndroidPackageName};
import static com.gamemaker.ExtensionCore.ExtBridge.GMFMODBridge.*;
import java.lang.String;
import java.nio.ByteBuffer;

public class GMFMODInternal extends RunnerSocial {
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
}