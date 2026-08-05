package com.gamemaker.ExtensionCore.ExtBridge;
import java.lang.String;
import java.nio.ByteBuffer;
import ${YYAndroidPackageName}.GMExtUtils;

public final class GMFMODBridge {
    static {
        // this is the extension lib name
        System.loadLibrary("GMFMOD");
        nativeRegister();
    }
    // this registers the native functions on the C++ layer
    private static native void nativeRegister();

    public static String __EXT_JAVA__GetExtensionOption(String extName, String optName)
    {
        return GMExtUtils.GetExtensionOption(extName, optName);
    }

    public static native double __EXT_JNI__fmod_channel_set_frequency(ByteBuffer __arg_buffer, double __arg_buffer_length);
    public static native double __EXT_JNI__fmod_channel_get_frequency(ByteBuffer __arg_buffer, double __arg_buffer_length);
    public static native double __EXT_JNI__fmod_channel_set_priority(ByteBuffer __arg_buffer, double __arg_buffer_length);
    public static native double __EXT_JNI__fmod_channel_get_priority(ByteBuffer __arg_buffer, double __arg_buffer_length);
    public static native double __EXT_JNI__fmod_channel_set_position(ByteBuffer __arg_buffer, double __arg_buffer_length);
    public static native double __EXT_JNI__fmod_channel_get_position(ByteBuffer __arg_buffer, double __arg_buffer_length);
    public static native double __EXT_JNI__fmod_channel_set_channel_group(ByteBuffer __arg_buffer, double __arg_buffer_length);
    public static native double __EXT_JNI__fmod_channel_get_channel_group(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length);
    public static native double __EXT_JNI__fmod_channel_set_loop_count(ByteBuffer __arg_buffer, double __arg_buffer_length);
    public static native double __EXT_JNI__fmod_channel_get_loop_count(ByteBuffer __arg_buffer, double __arg_buffer_length);
    public static native double __EXT_JNI__fmod_channel_set_loop_points(ByteBuffer __arg_buffer, double __arg_buffer_length);
    public static native double __EXT_JNI__fmod_channel_is_virtual(ByteBuffer __arg_buffer, double __arg_buffer_length);
    public static native double __EXT_JNI__fmod_channel_get_index(ByteBuffer __arg_buffer, double __arg_buffer_length);
    public static native double __EXT_JNI__fmod_channel_get_current_sound(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length);
    public static native double __EXT_JNI__fmod_channel_get_system_object(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length);
    public static native double __EXT_JNI__fmod_system_create(ByteBuffer __ret_buffer, double __ret_buffer_length);
    public static native double __EXT_JNI__fmod_system_init(double max_channels, double flags);
    public static native double __EXT_JNI__fmod_system_release(ByteBuffer __arg_buffer, double __arg_buffer_length);
    public static native double __EXT_JNI__fmod_system_close(ByteBuffer __arg_buffer, double __arg_buffer_length);
    public static native double __EXT_JNI__fmod_system_update();
    public static native double __EXT_JNI__fmod_system_get_channel(double index, ByteBuffer __ret_buffer, double __ret_buffer_length);
    public static native double __EXT_JNI__fmod_system_get_master_channel_group(ByteBuffer __ret_buffer, double __ret_buffer_length);
    public static native double __EXT_JNI__fmod_system_set_output(double output);
    public static native double __EXT_JNI__fmod_system_get_output();
    public static native double __EXT_JNI__fmod_system_get_num_drivers();
    public static native double __EXT_JNI__fmod_system_set_driver(double driver);
    public static native double __EXT_JNI__fmod_system_get_driver();
    public static native double __EXT_JNI__fmod_system_set_software_channels(double software_channels);
    public static native double __EXT_JNI__fmod_system_get_software_channels();
    public static native double __EXT_JNI__fmod_system_create_sound(String name_or_data, double mode, ByteBuffer __ret_buffer, double __ret_buffer_length);
    public static native double __EXT_JNI__fmod_system_create_stream(String name_or_data, double mode, ByteBuffer __ret_buffer, double __ret_buffer_length);
    public static native double __EXT_JNI__fmod_system_play_sound(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length);
    public static native double __EXT_JNI__fmod_sound_get_length(ByteBuffer __arg_buffer, double __arg_buffer_length);
    public static native double __EXT_JNI__fmod_sound_set_defaults(ByteBuffer __arg_buffer, double __arg_buffer_length);
    public static native double __EXT_JNI__fmod_sound_set_mode(ByteBuffer __arg_buffer, double __arg_buffer_length);
    public static native double __EXT_JNI__fmod_sound_get_mode(ByteBuffer __arg_buffer, double __arg_buffer_length);
    public static native double __EXT_JNI__fmod_sound_set_loop_count(ByteBuffer __arg_buffer, double __arg_buffer_length);
    public static native double __EXT_JNI__fmod_sound_get_loop_count(ByteBuffer __arg_buffer, double __arg_buffer_length);
    public static native double __EXT_JNI__fmod_sound_set_loop_points(ByteBuffer __arg_buffer, double __arg_buffer_length);
    public static native double __EXT_JNI__fmod_sound_set_3d_min_max_distance(ByteBuffer __arg_buffer, double __arg_buffer_length);
    public static native double __EXT_JNI__fmod_sound_set_3d_cone_settings(ByteBuffer __arg_buffer, double __arg_buffer_length);
    public static native double __EXT_JNI__fmod_sound_release(ByteBuffer __arg_buffer, double __arg_buffer_length);
    public static native double __EXT_JNI__fmod_sound_get_system_object(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length);
    public static native double __EXT_JNI__fmod_channel_group_get_num_channels(ByteBuffer __arg_buffer, double __arg_buffer_length);
    public static native double __EXT_JNI__fmod_channel_group_get_channel(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length);
    public static native double __EXT_JNI__fmod_channel_group_add_group(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length);
    public static native double __EXT_JNI__fmod_channel_group_get_num_groups(ByteBuffer __arg_buffer, double __arg_buffer_length);
    public static native double __EXT_JNI__fmod_channel_group_get_group(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length);
    public static native double __EXT_JNI__fmod_channel_group_get_parent_group(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length);
    public static native String __EXT_JNI__fmod_channel_group_get_name(ByteBuffer __arg_buffer, double __arg_buffer_length);
    public static native double __EXT_JNI__fmod_channel_group_release(ByteBuffer __arg_buffer, double __arg_buffer_length);
    public static native double __EXT_JNI__fmod_channel_group_get_system_object(ByteBuffer __arg_buffer, double __arg_buffer_length, ByteBuffer __ret_buffer, double __ret_buffer_length);
}