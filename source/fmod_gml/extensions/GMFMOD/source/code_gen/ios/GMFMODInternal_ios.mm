// ##### extgen :: Auto-generated file do not edit!! #####

#import "GMFMODInternal_ios.h"
#import "native/GMFMODInternal_exports.h"
#import <objc/runtime.h>


extern "C" const char* extOptGetString(char* _ext, char* _opt);

// Adapter: matches const signature expected by the C++ API
static const char* ExtOptGetString(const char* ext, const char* opt)
{
    return extOptGetString(const_cast<char*>(ext), const_cast<char*>(opt));
}

static BOOL GMIsSubclassOf(Class cls, Class base)
{
    for (Class c = cls; c != Nil; c = class_getSuperclass(c)) {
        if (c == base) return YES;
    }
    return NO;
}

static void GMInjectSelectorsIntoSubclass(Class subclass, Class base)
{
    // Build set of methods already defined on subclass
    unsigned subCount = 0;
    Method *subList = class_copyMethodList(subclass, &subCount);

    CFMutableSetRef owned = CFSetCreateMutable(kCFAllocatorDefault, 0, NULL);
    for (unsigned i = 0; i < subCount; ++i) {
        CFSetAddValue(owned, method_getName(subList[i]));
    }

    // Walk base class methods
    unsigned baseCount = 0;
    Method *baseList = class_copyMethodList(base, &baseCount);

    for (unsigned i = 0; i < baseCount; ++i) {
        SEL sel = method_getName(baseList[i]);
        const char *name = sel_getName(sel);

        // Only inject extension selectors (methods prefixed with __EXT_NATIVE__)
        if (!name || strncmp(name, "__EXT_NATIVE__", 13) != 0) continue;

        // Add only if subclass doesn't already have it
        if (!CFSetContainsValue(owned, sel)) {
            IMP imp = method_getImplementation(baseList[i]);
            const char *types = method_getTypeEncoding(baseList[i]);
            if (class_addMethod(subclass, sel, imp, types)) {
                CFSetAddValue(owned, sel);
            }
        }
    }

    if (subList) free(subList);
    if (baseList) free(baseList);
    if (owned) CFRelease(owned);
}

@implementation GMFMODInternal

+ (void)load
{
    // Find all loaded classes
    int num = objc_getClassList(NULL, 0);
    if (num <= 0) return;

    Class *classes = (Class *)malloc(sizeof(Class) * (unsigned)num);
    num = objc_getClassList(classes, num);

    Class base = [GMFMODInternal class];

    for (int i = 0; i < num; ++i) {
        Class cls = classes[i];
        if (cls == base) continue;

        // We only care about direct or indirect subclasses
        if (GMIsSubclassOf(cls, base)) {
            GMInjectSelectorsIntoSubclass(cls, base);
        }
    }

    free(classes);

    gm::details::GMRTRunnerInterface ri{};
    ri.ExtOptGetString = &ExtOptGetString;
    GMExtensionInitialise(&ri, sizeof(ri));
}

- (double)__EXT_NATIVE__fmod_last_result:(char*)__ret_buffer arg1:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_last_result(__ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_debug_initialize:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_debug_initialize(__arg_buffer, __arg_buffer_length);
}
- (char*)__EXT_NATIVE__fmod_path_bundle:(char*)filename
{
    return __EXT_NATIVE__fmod_path_bundle(filename);
}
- (char*)__EXT_NATIVE__fmod_path_user:(char*)filename
{
    return __EXT_NATIVE__fmod_path_user(filename);
}
- (char*)__EXT_NATIVE__fmod_error_string:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_error_string(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_fetch_callbacks
{
    return __EXT_NATIVE__fmod_fetch_callbacks();
}
- (double)__EXT_NATIVE__fmod_file_get_disk_busy
{
    return __EXT_NATIVE__fmod_file_get_disk_busy();
}
- (double)__EXT_NATIVE__fmod_file_set_disk_busy:(double)busy
{
    return __EXT_NATIVE__fmod_file_set_disk_busy(busy);
}
- (double)__EXT_NATIVE__fmod_memory_get_stats:(double)blocking arg1:(char*)__ret_buffer arg2:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_memory_get_stats(blocking, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_thread_set_attributes:(double)thread_type arg1:(double)affinity arg2:(double)priority
{
    return __EXT_NATIVE__fmod_thread_set_attributes(thread_type, affinity, priority);
}
- (double)__EXT_NATIVE__fmod_channel_set_frequency:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_set_frequency(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_get_frequency:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_get_frequency(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_set_priority:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_set_priority(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_get_priority:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_get_priority(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_set_position:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_set_position(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_get_position:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_get_position(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_set_channel_group:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_set_channel_group(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_get_channel_group:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_channel_get_channel_group(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_set_loop_count:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_set_loop_count(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_get_loop_count:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_get_loop_count(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_set_loop_points:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_set_loop_points(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_get_loop_points:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_channel_get_loop_points(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_is_virtual:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_is_virtual(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_get_index:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_get_index(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_get_current_sound:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_channel_get_current_sound(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_get_system_object:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_channel_get_system_object(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_system_create:(char*)__ret_buffer arg1:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_system_create(__ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_system_init:(double)max_channels arg1:(double)flags
{
    return __EXT_NATIVE__fmod_system_init(max_channels, flags);
}
- (double)__EXT_NATIVE__fmod_system_release:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_system_release(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_system_close:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_system_close(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_system_update
{
    return __EXT_NATIVE__fmod_system_update();
}
- (double)__EXT_NATIVE__fmod_system_get_channels_playing
{
    return __EXT_NATIVE__fmod_system_get_channels_playing();
}
- (double)__EXT_NATIVE__fmod_system_get_channel:(double)index arg1:(char*)__ret_buffer arg2:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_system_get_channel(index, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_system_get_master_channel_group:(char*)__ret_buffer arg1:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_system_get_master_channel_group(__ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_system_set_output:(double)output
{
    return __EXT_NATIVE__fmod_system_set_output(output);
}
- (double)__EXT_NATIVE__fmod_system_get_output
{
    return __EXT_NATIVE__fmod_system_get_output();
}
- (double)__EXT_NATIVE__fmod_system_get_num_drivers
{
    return __EXT_NATIVE__fmod_system_get_num_drivers();
}
- (double)__EXT_NATIVE__fmod_system_set_driver:(double)driver
{
    return __EXT_NATIVE__fmod_system_set_driver(driver);
}
- (double)__EXT_NATIVE__fmod_system_get_driver
{
    return __EXT_NATIVE__fmod_system_get_driver();
}
- (double)__EXT_NATIVE__fmod_system_set_software_channels:(double)software_channels
{
    return __EXT_NATIVE__fmod_system_set_software_channels(software_channels);
}
- (double)__EXT_NATIVE__fmod_system_get_software_channels
{
    return __EXT_NATIVE__fmod_system_get_software_channels();
}
- (double)__EXT_NATIVE__fmod_system_set_3d_settings:(double)doppler_scale arg1:(double)distance_factor arg2:(double)rolloff_scale
{
    return __EXT_NATIVE__fmod_system_set_3d_settings(doppler_scale, distance_factor, rolloff_scale);
}
- (double)__EXT_NATIVE__fmod_system_get_3d_settings:(char*)__ret_buffer arg1:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_system_get_3d_settings(__ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_system_set_3d_listener_attributes:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_system_set_3d_listener_attributes(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_system_get_3d_listener_attributes:(double)listener_index arg1:(char*)__ret_buffer arg2:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_system_get_3d_listener_attributes(listener_index, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_system_get_record_num_drivers
{
    return __EXT_NATIVE__fmod_system_get_record_num_drivers();
}
- (double)__EXT_NATIVE__fmod_system_get_record_driver_info:(double)record_driver_index arg1:(char*)__ret_buffer arg2:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_system_get_record_driver_info(record_driver_index, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_system_get_record_position:(double)device_index
{
    return __EXT_NATIVE__fmod_system_get_record_position(device_index);
}
- (double)__EXT_NATIVE__fmod_system_record_start:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_system_record_start(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_system_record_stop:(double)device_index
{
    return __EXT_NATIVE__fmod_system_record_stop(device_index);
}
- (double)__EXT_NATIVE__fmod_system_is_recording:(double)device_index
{
    return __EXT_NATIVE__fmod_system_is_recording(device_index);
}
- (double)__EXT_NATIVE__fmod_system_create_dsp:(char*)__ret_buffer arg1:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_system_create_dsp(__ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_system_create_dsp_by_type:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_system_create_dsp_by_type(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_system_get_dsp_buffer_size:(char*)__ret_buffer arg1:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_system_get_dsp_buffer_size(__ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_system_set_dsp_buffer_size:(double)buff_size arg1:(double)num_buffers
{
    return __EXT_NATIVE__fmod_system_set_dsp_buffer_size(buff_size, num_buffers);
}
- (double)__EXT_NATIVE__fmod_system_get_software_format:(char*)__ret_buffer arg1:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_system_get_software_format(__ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_system_set_software_format:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_system_set_software_format(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_system_set_stream_buffer_size:(double)file_buffer_size arg1:(double)file_buffer_size_type
{
    return __EXT_NATIVE__fmod_system_set_stream_buffer_size(file_buffer_size, file_buffer_size_type);
}
- (double)__EXT_NATIVE__fmod_system_get_driver_info:(double)driver_id arg1:(char*)__ret_buffer arg2:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_system_get_driver_info(driver_id, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_system_create_channel_group:(char*)name arg1:(char*)__ret_buffer arg2:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_system_create_channel_group(name, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_system_play_dsp:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_system_play_dsp(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_system_select:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_system_select(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_system_count
{
    return __EXT_NATIVE__fmod_system_count();
}
- (double)__EXT_NATIVE__fmod_system_get_version
{
    return __EXT_NATIVE__fmod_system_get_version();
}
- (double)__EXT_NATIVE__fmod_system_get_master_sound_group:(char*)__ret_buffer arg1:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_system_get_master_sound_group(__ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_system_get_advanced_settings:(char*)__ret_buffer arg1:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_system_get_advanced_settings(__ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_system_set_advanced_settings:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_system_set_advanced_settings(__arg_buffer, __arg_buffer_length);
}
- (char*)__EXT_NATIVE__fmod_system_get_network_proxy
{
    return __EXT_NATIVE__fmod_system_get_network_proxy();
}
- (double)__EXT_NATIVE__fmod_system_set_network_proxy:(char*)proxy
{
    return __EXT_NATIVE__fmod_system_set_network_proxy(proxy);
}
- (double)__EXT_NATIVE__fmod_system_get_network_timeout
{
    return __EXT_NATIVE__fmod_system_get_network_timeout();
}
- (double)__EXT_NATIVE__fmod_system_set_network_timeout:(double)timeout_ms
{
    return __EXT_NATIVE__fmod_system_set_network_timeout(timeout_ms);
}
- (double)__EXT_NATIVE__fmod_system_get_speaker_mode_channels:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_system_get_speaker_mode_channels(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_system_get_speaker_position:(double)speaker arg1:(char*)__ret_buffer arg2:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_system_get_speaker_position(speaker, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_system_set_speaker_position:(double)speaker arg1:(double)x arg2:(double)y arg3:(double)active
{
    return __EXT_NATIVE__fmod_system_set_speaker_position(speaker, x, y, active);
}
- (double)__EXT_NATIVE__fmod_system_get_reverb_properties:(double)instance arg1:(char*)__ret_buffer arg2:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_system_get_reverb_properties(instance, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_system_set_reverb_properties:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_system_set_reverb_properties(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_system_get_default_mix_matrix:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_system_get_default_mix_matrix(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_system_get_cpu_usage:(char*)__ret_buffer arg1:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_system_get_cpu_usage(__ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_system_get_file_usage:(char*)__ret_buffer arg1:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_system_get_file_usage(__ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_system_get_stream_buffer_size:(char*)__ret_buffer arg1:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_system_get_stream_buffer_size(__ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_system_get_3d_num_listeners
{
    return __EXT_NATIVE__fmod_system_get_3d_num_listeners();
}
- (double)__EXT_NATIVE__fmod_system_set_3d_num_listeners:(double)num
{
    return __EXT_NATIVE__fmod_system_set_3d_num_listeners(num);
}
- (double)__EXT_NATIVE__fmod_system_set_3d_rolloff_callback
{
    return __EXT_NATIVE__fmod_system_set_3d_rolloff_callback();
}
- (double)__EXT_NATIVE__fmod_system_mixer_suspend
{
    return __EXT_NATIVE__fmod_system_mixer_suspend();
}
- (double)__EXT_NATIVE__fmod_system_mixer_resume
{
    return __EXT_NATIVE__fmod_system_mixer_resume();
}
- (double)__EXT_NATIVE__fmod_system_lock_dsp
{
    return __EXT_NATIVE__fmod_system_lock_dsp();
}
- (double)__EXT_NATIVE__fmod_system_unlock_dsp
{
    return __EXT_NATIVE__fmod_system_unlock_dsp();
}
- (double)__EXT_NATIVE__fmod_system_get_user_data
{
    return __EXT_NATIVE__fmod_system_get_user_data();
}
- (double)__EXT_NATIVE__fmod_system_set_user_data:(double)user_data
{
    return __EXT_NATIVE__fmod_system_set_user_data(user_data);
}
- (double)__EXT_NATIVE__fmod_system_attach_channel_group_to_port:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_system_attach_channel_group_to_port(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_system_detach_channel_group_from_port:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_system_detach_channel_group_from_port(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_system_create_sound_group:(char*)name arg1:(char*)__ret_buffer arg2:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_system_create_sound_group(name, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_system_create_geometry:(double)max_polygons arg1:(double)max_vertices arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_system_create_geometry(max_polygons, max_vertices, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_system_load_geometry:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_system_load_geometry(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_system_get_geometry_occlusion:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_system_get_geometry_occlusion(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_system_get_geometry_settings
{
    return __EXT_NATIVE__fmod_system_get_geometry_settings();
}
- (double)__EXT_NATIVE__fmod_system_set_geometry_settings:(double)max_world_size
{
    return __EXT_NATIVE__fmod_system_set_geometry_settings(max_world_size);
}
- (double)__EXT_NATIVE__fmod_system_create_reverb_3d:(char*)__ret_buffer arg1:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_system_create_reverb_3d(__ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_system_create_sound:(char*)name_or_data arg1:(double)mode arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_system_create_sound(name_or_data, mode, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_system_create_sound_ex:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_system_create_sound_ex(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_system_create_stream:(char*)name_or_data arg1:(double)mode arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_system_create_stream(name_or_data, mode, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_system_play_sound:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_system_play_sound(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_sound_get_length:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_sound_get_length(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_sound_set_defaults:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_sound_set_defaults(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_sound_set_mode:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_sound_set_mode(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_sound_get_mode:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_sound_get_mode(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_sound_get_format:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_sound_get_format(__arg_buffer, __arg_buffer_length);
}
- (char*)__EXT_NATIVE__fmod_sound_get_name:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_sound_get_name(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_sound_get_defaults:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_sound_get_defaults(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_sound_set_loop_count:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_sound_set_loop_count(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_sound_get_loop_count:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_sound_get_loop_count(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_sound_set_loop_points:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_sound_set_loop_points(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_sound_get_loop_points:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_sound_get_loop_points(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_sound_set_3d_min_max_distance:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_sound_set_3d_min_max_distance(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_sound_get_3d_min_max_distance:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_sound_get_3d_min_max_distance(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_sound_set_3d_cone_settings:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_sound_set_3d_cone_settings(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_sound_get_3d_cone_settings:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_sound_get_3d_cone_settings(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_sound_set_3d_custom_rolloff:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_sound_set_3d_custom_rolloff(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_sound_get_3d_custom_rolloff:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_sound_get_3d_custom_rolloff(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_sound_get_num_sync_points:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_sound_get_num_sync_points(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_sound_get_sync_point:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_sound_get_sync_point(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_sound_add_sync_point:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_sound_add_sync_point(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_sound_delete_sync_point:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_sound_delete_sync_point(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_sound_get_music_num_channels:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_sound_get_music_num_channels(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_sound_set_music_channel_volume:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_sound_set_music_channel_volume(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_sound_get_music_channel_volume:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_sound_get_music_channel_volume(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_sound_set_music_speed:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_sound_set_music_speed(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_sound_get_music_speed:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_sound_get_music_speed(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_sound_set_sound_group:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_sound_set_sound_group(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_sound_get_sound_group:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_sound_get_sound_group(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_sound_set_user_data:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_sound_set_user_data(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_sound_get_user_data:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_sound_get_user_data(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_sound_release:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_sound_release(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_sound_get_system_object:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_sound_get_system_object(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_sound_get_open_state:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_sound_get_open_state(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_sound_get_num_tags:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_sound_get_num_tags(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_sound_get_tag:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_sound_get_tag(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_sound_get_num_sub_sounds:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_sound_get_num_sub_sounds(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_sound_get_sub_sound:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_sound_get_sub_sound(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_sound_get_sub_sound_parent:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_sound_get_sub_sound_parent(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_sound_read_data:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_sound_read_data(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_sound_seek_data:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_sound_seek_data(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_sound_lock:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_sound_lock(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_sound_unlock:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_sound_unlock(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_group_get_num_channels:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_group_get_num_channels(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_group_get_channel:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_channel_group_get_channel(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_group_add_group:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_channel_group_add_group(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_group_get_num_groups:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_group_get_num_groups(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_group_get_group:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_channel_group_get_group(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_group_get_parent_group:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_channel_group_get_parent_group(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (char*)__EXT_NATIVE__fmod_channel_group_get_name:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_group_get_name(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_group_release:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_group_release(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_group_get_system_object:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_channel_group_get_system_object(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_sound_group_set_max_audible:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_sound_group_set_max_audible(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_sound_group_get_max_audible:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_sound_group_get_max_audible(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_sound_group_set_max_audible_behavior:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_sound_group_set_max_audible_behavior(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_sound_group_get_max_audible_behavior:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_sound_group_get_max_audible_behavior(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_sound_group_set_mute_fade_speed:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_sound_group_set_mute_fade_speed(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_sound_group_get_mute_fade_speed:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_sound_group_get_mute_fade_speed(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_sound_group_set_volume:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_sound_group_set_volume(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_sound_group_get_volume:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_sound_group_get_volume(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_sound_group_get_num_sounds:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_sound_group_get_num_sounds(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_sound_group_get_sound:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_sound_group_get_sound(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_sound_group_get_num_playing:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_sound_group_get_num_playing(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_sound_group_stop:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_sound_group_stop(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_sound_group_set_user_data:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_sound_group_set_user_data(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_sound_group_get_user_data:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_sound_group_get_user_data(__arg_buffer, __arg_buffer_length);
}
- (char*)__EXT_NATIVE__fmod_sound_group_get_name:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_sound_group_get_name(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_sound_group_release:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_sound_group_release(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_sound_group_get_system_object:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_sound_group_get_system_object(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_reverb_3d_set_active:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_reverb_3d_set_active(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_reverb_3d_get_active:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_reverb_3d_get_active(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_reverb_3d_set_properties:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_reverb_3d_set_properties(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_reverb_3d_get_properties:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_reverb_3d_get_properties(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_reverb_3d_set_3d_attributes:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_reverb_3d_set_3d_attributes(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_reverb_3d_get_3d_attributes:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_reverb_3d_get_3d_attributes(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_reverb_3d_set_user_data:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_reverb_3d_set_user_data(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_reverb_3d_get_user_data:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_reverb_3d_get_user_data(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_reverb_3d_release:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_reverb_3d_release(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_add_fade_point:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_add_fade_point(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_remove_fade_points:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_remove_fade_points(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_set_fade_point_ramp:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_set_fade_point_ramp(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_get_fade_point_count:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_get_fade_point_count(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_get_fade_point_at:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_get_fade_point_at(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_is_playing:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_is_playing(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_stop:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_stop(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_set_paused:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_set_paused(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_get_paused:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_get_paused(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_set_mode:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_set_mode(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_get_mode:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_get_mode(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_set_pitch:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_set_pitch(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_get_pitch:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_get_pitch(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_get_audibility:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_get_audibility(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_set_volume:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_set_volume(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_get_volume:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_get_volume(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_set_volume_ramp:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_set_volume_ramp(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_get_volume_ramp:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_get_volume_ramp(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_set_mute:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_set_mute(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_get_mute:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_get_mute(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_set_3d_doppler_level:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_set_3d_doppler_level(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_get_3d_doppler_level:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_get_3d_doppler_level(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_set_3d_level:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_set_3d_level(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_get_3d_level:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_get_3d_level(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_set_3d_min_max_distance:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_set_3d_min_max_distance(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_get_3d_min_max_distance:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_get_3d_min_max_distance(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_set_3d_cone_settings:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_set_3d_cone_settings(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_get_3d_cone_settings:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_get_3d_cone_settings(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_set_3d_cone_orientation:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_set_3d_cone_orientation(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_get_3d_cone_orientation:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_get_3d_cone_orientation(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_set_3d_occlusion:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_set_3d_occlusion(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_get_3d_occlusion:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_get_3d_occlusion(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_set_3d_attributes:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_set_3d_attributes(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_get_3d_attributes:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_get_3d_attributes(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_set_3d_spread:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_set_3d_spread(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_get_3d_spread:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_get_3d_spread(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_set_3d_distance_filter:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_set_3d_distance_filter(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_get_3d_distance_filter:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_get_3d_distance_filter(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_set_3d_custom_rolloff:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_set_3d_custom_rolloff(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_get_3d_custom_rolloff_count:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_get_3d_custom_rolloff_count(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_get_3d_custom_rolloff_at:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_get_3d_custom_rolloff_at(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_set_pan:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_set_pan(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_set_mix_levels_output:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_set_mix_levels_output(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_set_mix_levels_input:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_set_mix_levels_input(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_set_mix_matrix:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_set_mix_matrix(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_get_mix_matrix:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_get_mix_matrix(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_set_reverb_properties:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_set_reverb_properties(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_get_reverb_properties:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_get_reverb_properties(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_set_low_pass_gain:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_set_low_pass_gain(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_get_low_pass_gain:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_get_low_pass_gain(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_add_dsp:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_add_dsp(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_remove_dsp:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_remove_dsp(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_get_num_dsps:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_get_num_dsps(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_get_dsp:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_get_dsp(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_set_dsp_index:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_set_dsp_index(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_get_dsp_index:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_get_dsp_index(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_set_user_data:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_set_user_data(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_get_user_data:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_get_user_data(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_get_system_object:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_get_system_object(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_get_delay:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_get_delay(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_set_delay:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_set_delay(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_get_dsp_clock:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_get_dsp_clock(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_channel_control_set_callback:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_channel_control_set_callback(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_dsp_add_input:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_dsp_add_input(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_dsp_get_num_inputs:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_dsp_get_num_inputs(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_dsp_get_num_outputs:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_dsp_get_num_outputs(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_dsp_disconnect_all:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_dsp_disconnect_all(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_dsp_get_num_parameters:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_dsp_get_num_parameters(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_dsp_set_parameter_float:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_dsp_set_parameter_float(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_dsp_get_parameter_float:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_dsp_get_parameter_float(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_dsp_set_parameter_int:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_dsp_set_parameter_int(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_dsp_get_parameter_int:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_dsp_get_parameter_int(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_dsp_set_parameter_bool:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_dsp_set_parameter_bool(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_dsp_get_parameter_bool:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_dsp_get_parameter_bool(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_dsp_release:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_dsp_release(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_dsp_get_system_object:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_dsp_get_system_object(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_dsp_get_input:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_dsp_get_input(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_dsp_get_output:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_dsp_get_output(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_dsp_disconnect_from:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_dsp_disconnect_from(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_dsp_get_data_parameter_index:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_dsp_get_data_parameter_index(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_dsp_set_parameter_data:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_dsp_set_parameter_data(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_dsp_get_parameter_data:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_dsp_get_parameter_data(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_dsp_get_parameter_info:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_dsp_get_parameter_info(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_dsp_set_channel_format:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_dsp_set_channel_format(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_dsp_get_channel_format:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_dsp_get_channel_format(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_dsp_get_output_channel_format:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_dsp_get_output_channel_format(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_dsp_get_metering_info:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_dsp_get_metering_info(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_dsp_set_metering_enabled:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_dsp_set_metering_enabled(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_dsp_get_metering_enabled:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_dsp_get_metering_enabled(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_dsp_set_active:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_dsp_set_active(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_dsp_get_active:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_dsp_get_active(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_dsp_set_bypass:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_dsp_set_bypass(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_dsp_get_bypass:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_dsp_get_bypass(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_dsp_set_wet_dry_mix:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_dsp_set_wet_dry_mix(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_dsp_get_wet_dry_mix:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_dsp_get_wet_dry_mix(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_dsp_get_idle:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_dsp_get_idle(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_dsp_reset:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_dsp_reset(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_dsp_get_type:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_dsp_get_type(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_dsp_get_info:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_dsp_get_info(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_dsp_get_cpu_usage:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_dsp_get_cpu_usage(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_dsp_set_user_data:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_dsp_set_user_data(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_dsp_get_user_data:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_dsp_get_user_data(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_dsp_set_callback:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_dsp_set_callback(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_dsp_connection_set_mix:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_dsp_connection_set_mix(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_dsp_connection_get_mix:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_dsp_connection_get_mix(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_dsp_connection_set_mix_matrix:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_dsp_connection_set_mix_matrix(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_dsp_connection_get_mix_matrix:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_dsp_connection_get_mix_matrix(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_dsp_connection_get_input:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_dsp_connection_get_input(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_dsp_connection_get_output:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_dsp_connection_get_output(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_dsp_connection_get_type:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_dsp_connection_get_type(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_dsp_connection_set_user_data:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_dsp_connection_set_user_data(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_dsp_connection_get_user_data:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_dsp_connection_get_user_data(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_geometry_add_polygon:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_geometry_add_polygon(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_geometry_set_polygon_attributes:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_geometry_set_polygon_attributes(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_geometry_get_polygon_attributes:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_geometry_get_polygon_attributes(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_geometry_get_polygon_num_vertices:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_geometry_get_polygon_num_vertices(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_geometry_set_polygon_vertex:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_geometry_set_polygon_vertex(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_geometry_get_polygon_vertex:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_geometry_get_polygon_vertex(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_geometry_get_num_polygons:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_geometry_get_num_polygons(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_geometry_get_max_polygons:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_geometry_get_max_polygons(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_geometry_set_position:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_geometry_set_position(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_geometry_get_position:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_geometry_get_position(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_geometry_set_rotation:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_geometry_set_rotation(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_geometry_get_rotation:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_geometry_get_rotation(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_geometry_set_scale:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_geometry_set_scale(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_geometry_get_scale:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_geometry_get_scale(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_geometry_set_user_data:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_geometry_set_user_data(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_geometry_get_user_data:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_geometry_get_user_data(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_geometry_get_active:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_geometry_get_active(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_geometry_set_active:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_geometry_set_active(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_geometry_save:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_geometry_save(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_geometry_release:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_geometry_release(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_system_create:(char*)__ret_buffer arg1:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_studio_system_create(__ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_system_init:(double)max_channels arg1:(double)studio_flags arg2:(double)core_flags
{
    return __EXT_NATIVE__fmod_studio_system_init(max_channels, studio_flags, core_flags);
}
- (double)__EXT_NATIVE__fmod_studio_system_release
{
    return __EXT_NATIVE__fmod_studio_system_release();
}
- (double)__EXT_NATIVE__fmod_studio_system_update
{
    return __EXT_NATIVE__fmod_studio_system_update();
}
- (double)__EXT_NATIVE__fmod_studio_system_flush_commands
{
    return __EXT_NATIVE__fmod_studio_system_flush_commands();
}
- (double)__EXT_NATIVE__fmod_studio_system_flush_sample_loading
{
    return __EXT_NATIVE__fmod_studio_system_flush_sample_loading();
}
- (double)__EXT_NATIVE__fmod_studio_system_load_bank_file:(char*)filename arg1:(double)flags arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_studio_system_load_bank_file(filename, flags, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_system_load_bank_memory:(char*)data arg1:(double)flags arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_studio_system_load_bank_memory(data, flags, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_system_unload_all
{
    return __EXT_NATIVE__fmod_studio_system_unload_all();
}
- (double)__EXT_NATIVE__fmod_studio_system_get_bank_count
{
    return __EXT_NATIVE__fmod_studio_system_get_bank_count();
}
- (double)__EXT_NATIVE__fmod_studio_system_get_bank_at:(double)index arg1:(char*)__ret_buffer arg2:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_studio_system_get_bank_at(index, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_system_get_bank:(char*)path arg1:(char*)__ret_buffer arg2:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_studio_system_get_bank(path, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_system_get_bank_by_id:(char*)str_guid arg1:(char*)__ret_buffer arg2:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_studio_system_get_bank_by_id(str_guid, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_system_get_event:(char*)path arg1:(char*)__ret_buffer arg2:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_studio_system_get_event(path, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_system_create_event_instance:(char*)path arg1:(char*)__ret_buffer arg2:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_studio_system_create_event_instance(path, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_system_get_bus:(char*)path arg1:(char*)__ret_buffer arg2:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_studio_system_get_bus(path, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_system_get_master_bus:(char*)__ret_buffer arg1:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_studio_system_get_master_bus(__ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_system_get_bus_by_id:(char*)str_guid arg1:(char*)__ret_buffer arg2:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_studio_system_get_bus_by_id(str_guid, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_system_get_vca:(char*)path arg1:(char*)__ret_buffer arg2:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_studio_system_get_vca(path, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_system_get_vca_by_id:(char*)str_guid arg1:(char*)__ret_buffer arg2:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_studio_system_get_vca_by_id(str_guid, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_system_set_listener_attributes:(double)listener_index arg1:(double)x arg2:(double)y arg3:(double)z
{
    return __EXT_NATIVE__fmod_studio_system_set_listener_attributes(listener_index, x, y, z);
}
- (double)__EXT_NATIVE__fmod_studio_system_set_listener_weight:(double)listener_index arg1:(double)weight
{
    return __EXT_NATIVE__fmod_studio_system_set_listener_weight(listener_index, weight);
}
- (double)__EXT_NATIVE__fmod_studio_system_get_num_listeners
{
    return __EXT_NATIVE__fmod_studio_system_get_num_listeners();
}
- (double)__EXT_NATIVE__fmod_studio_system_get_listener_attributes:(double)listener_index arg1:(char*)__ret_buffer arg2:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_studio_system_get_listener_attributes(listener_index, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_system_get_listener_weight:(double)listener_index
{
    return __EXT_NATIVE__fmod_studio_system_get_listener_weight(listener_index);
}
- (double)__EXT_NATIVE__fmod_studio_system_set_parameter_by_name:(char*)name arg1:(double)value
{
    return __EXT_NATIVE__fmod_studio_system_set_parameter_by_name(name, value);
}
- (double)__EXT_NATIVE__fmod_studio_system_get_parameter_by_name:(char*)name
{
    return __EXT_NATIVE__fmod_studio_system_get_parameter_by_name(name);
}
- (double)__EXT_NATIVE__fmod_studio_system_get_core_system:(char*)__ret_buffer arg1:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_studio_system_get_core_system(__ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_system_set_num_listeners:(double)count
{
    return __EXT_NATIVE__fmod_studio_system_set_num_listeners(count);
}
- (char*)__EXT_NATIVE__fmod_studio_system_lookup_id:(char*)path
{
    return __EXT_NATIVE__fmod_studio_system_lookup_id(path);
}
- (char*)__EXT_NATIVE__fmod_studio_system_lookup_path:(char*)str_guid
{
    return __EXT_NATIVE__fmod_studio_system_lookup_path(str_guid);
}
- (double)__EXT_NATIVE__fmod_studio_system_get_event_by_id:(char*)id arg1:(char*)__ret_buffer arg2:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_studio_system_get_event_by_id(id, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_system_is_valid
{
    return __EXT_NATIVE__fmod_studio_system_is_valid();
}
- (double)__EXT_NATIVE__fmod_studio_system_start_command_capture:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_system_start_command_capture(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_system_stop_command_capture
{
    return __EXT_NATIVE__fmod_studio_system_stop_command_capture();
}
- (double)__EXT_NATIVE__fmod_studio_system_load_command_replay:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_studio_system_load_command_replay(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_system_get_sound_info:(char*)key arg1:(char*)__ret_buffer arg2:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_studio_system_get_sound_info(key, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_system_get_parameter_by_id:(double)id_data1 arg1:(double)id_data2 arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_studio_system_get_parameter_by_id(id_data1, id_data2, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_system_set_parameter_by_id:(double)id_data1 arg1:(double)id_data2 arg2:(double)value arg3:(double)ignore_seek_speed
{
    return __EXT_NATIVE__fmod_studio_system_set_parameter_by_id(id_data1, id_data2, value, ignore_seek_speed);
}
- (double)__EXT_NATIVE__fmod_studio_system_get_parameter_description_by_id:(double)id_data1 arg1:(double)id_data2 arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_studio_system_get_parameter_description_by_id(id_data1, id_data2, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_system_get_parameter_description_by_name:(char*)name arg1:(char*)__ret_buffer arg2:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_studio_system_get_parameter_description_by_name(name, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_system_get_parameter_description_count
{
    return __EXT_NATIVE__fmod_studio_system_get_parameter_description_count();
}
- (double)__EXT_NATIVE__fmod_studio_system_get_parameter_description_at:(double)index arg1:(char*)__ret_buffer arg2:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_studio_system_get_parameter_description_at(index, __ret_buffer, __ret_buffer_length);
}
- (char*)__EXT_NATIVE__fmod_studio_system_get_parameter_label_by_id:(double)id_data1 arg1:(double)id_data2 arg2:(double)label_index
{
    return __EXT_NATIVE__fmod_studio_system_get_parameter_label_by_id(id_data1, id_data2, label_index);
}
- (char*)__EXT_NATIVE__fmod_studio_system_get_parameter_label_by_name:(char*)name arg1:(double)label_index
{
    return __EXT_NATIVE__fmod_studio_system_get_parameter_label_by_name(name, label_index);
}
- (double)__EXT_NATIVE__fmod_studio_system_set_parameter_by_id_with_label:(double)id_data1 arg1:(double)id_data2 arg2:(char*)label arg3:(double)ignore_seek_speed
{
    return __EXT_NATIVE__fmod_studio_system_set_parameter_by_id_with_label(id_data1, id_data2, label, ignore_seek_speed);
}
- (double)__EXT_NATIVE__fmod_studio_system_set_parameter_by_name_with_label:(char*)name arg1:(char*)label arg2:(double)ignore_seek_speed
{
    return __EXT_NATIVE__fmod_studio_system_set_parameter_by_name_with_label(name, label, ignore_seek_speed);
}
- (double)__EXT_NATIVE__fmod_studio_system_get_cpu_usage:(char*)__ret_buffer arg1:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_studio_system_get_cpu_usage(__ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_system_get_buffer_usage:(char*)__ret_buffer arg1:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_studio_system_get_buffer_usage(__ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_system_reset_buffer_usage
{
    return __EXT_NATIVE__fmod_studio_system_reset_buffer_usage();
}
- (double)__EXT_NATIVE__fmod_studio_system_get_memory_usage:(char*)__ret_buffer arg1:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_studio_system_get_memory_usage(__ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_system_get_advanced_settings:(char*)__ret_buffer arg1:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_studio_system_get_advanced_settings(__ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_system_set_advanced_settings:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_system_set_advanced_settings(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_system_set_callback:(double)callback_mask
{
    return __EXT_NATIVE__fmod_studio_system_set_callback(callback_mask);
}
- (double)__EXT_NATIVE__fmod_studio_system_get_user_data
{
    return __EXT_NATIVE__fmod_studio_system_get_user_data();
}
- (double)__EXT_NATIVE__fmod_studio_system_set_user_data:(double)user_data
{
    return __EXT_NATIVE__fmod_studio_system_set_user_data(user_data);
}
- (double)__EXT_NATIVE__fmod_studio_bank_unload:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_bank_unload(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_bank_get_loading_state:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_bank_get_loading_state(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_bank_get_sample_loading_state:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_bank_get_sample_loading_state(__arg_buffer, __arg_buffer_length);
}
- (char*)__EXT_NATIVE__fmod_studio_bank_get_path:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_bank_get_path(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_bank_get_parent_studio_system:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_studio_bank_get_parent_studio_system(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_bank_get_event_count:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_bank_get_event_count(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_bank_get_event_at:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_studio_bank_get_event_at(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_bank_get_bus_count:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_bank_get_bus_count(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_bank_get_bus_at:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_studio_bank_get_bus_at(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_bank_get_vca_count:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_bank_get_vca_count(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_bank_get_vca_at:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_studio_bank_get_vca_at(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_bank_get_string_count:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_bank_get_string_count(__arg_buffer, __arg_buffer_length);
}
- (char*)__EXT_NATIVE__fmod_studio_bank_get_id:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_bank_get_id(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_bank_is_valid:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_bank_is_valid(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_bank_get_string_info:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_studio_bank_get_string_info(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_bank_load_sample_data:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_bank_load_sample_data(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_bank_unload_sample_data:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_bank_unload_sample_data(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_bank_get_user_data:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_bank_get_user_data(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_bank_set_user_data:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_bank_set_user_data(__arg_buffer, __arg_buffer_length);
}
- (char*)__EXT_NATIVE__fmod_studio_event_description_get_path:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_description_get_path(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_description_create_instance:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_description_create_instance(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_description_get_instance_count:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_description_get_instance_count(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_description_get_instance_at:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_description_get_instance_at(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_description_is_snapshot:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_description_is_snapshot(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_description_is_one_shot:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_description_is_one_shot(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_description_has_sustain_point:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_description_has_sustain_point(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_description_get_length:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_description_get_length(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_description_get_parameter_count:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_description_get_parameter_count(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_description_release_all_instances:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_description_release_all_instances(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_description_get_parameter_description_by_name:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_description_get_parameter_description_by_name(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_description_load_sample_data:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_description_load_sample_data(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_description_is_valid:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_description_is_valid(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_description_is_3d:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_description_is_3d(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_description_is_stream:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_description_is_stream(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_description_is_doppler_enabled:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_description_is_doppler_enabled(__arg_buffer, __arg_buffer_length);
}
- (char*)__EXT_NATIVE__fmod_studio_event_description_get_id:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_description_get_id(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_description_get_min_max_distance:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_description_get_min_max_distance(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_description_get_sound_size:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_description_get_sound_size(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_description_get_sample_loading_state:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_description_get_sample_loading_state(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_description_unload_sample_data:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_description_unload_sample_data(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_description_set_callback:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_description_set_callback(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_description_get_user_data:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_description_get_user_data(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_description_set_user_data:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_description_set_user_data(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_description_get_user_property:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_description_get_user_property(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_description_get_user_property_at:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_description_get_user_property_at(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_description_get_user_property_count:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_description_get_user_property_count(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_description_get_parameter_description_by_id:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_description_get_parameter_description_by_id(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_description_get_parameter_description_at:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_description_get_parameter_description_at(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (char*)__EXT_NATIVE__fmod_studio_event_description_get_parameter_label_by_id:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_description_get_parameter_label_by_id(__arg_buffer, __arg_buffer_length);
}
- (char*)__EXT_NATIVE__fmod_studio_event_description_get_parameter_label_at:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_description_get_parameter_label_at(__arg_buffer, __arg_buffer_length);
}
- (char*)__EXT_NATIVE__fmod_studio_event_description_get_parameter_label_by_name:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_description_get_parameter_label_by_name(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_instance_start:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_instance_start(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_instance_stop:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_instance_stop(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_instance_get_playback_state:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_instance_get_playback_state(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_instance_get_paused:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_instance_get_paused(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_instance_set_paused:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_instance_set_paused(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_instance_get_timeline_position:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_instance_get_timeline_position(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_instance_set_timeline_position:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_instance_set_timeline_position(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_instance_keyoff:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_instance_keyoff(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_instance_get_volume:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_instance_get_volume(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_instance_set_volume:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_instance_set_volume(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_instance_get_pitch:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_instance_get_pitch(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_instance_set_pitch:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_instance_set_pitch(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_instance_set_parameter_by_name:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_instance_set_parameter_by_name(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_instance_get_parameter_by_name:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_instance_get_parameter_by_name(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_instance_get_parameter_count:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_instance_get_parameter_count(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_instance_get_parameter_by_id:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_instance_get_parameter_by_id(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_instance_set_parameter_by_id:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_instance_set_parameter_by_id(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_instance_set_callback:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_instance_set_callback(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_instance_set_parameter_by_id_with_label:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_instance_set_parameter_by_id_with_label(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_instance_set_parameter_by_name_with_label:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_instance_set_parameter_by_name_with_label(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_instance_set_3d_attributes:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_instance_set_3d_attributes(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_instance_get_3d_attributes:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_instance_get_3d_attributes(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_instance_get_min_max_distance:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_instance_get_min_max_distance(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_instance_get_listener_mask:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_instance_get_listener_mask(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_instance_set_listener_mask:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_instance_set_listener_mask(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_instance_get_reverb_level:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_instance_get_reverb_level(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_instance_set_reverb_level:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_instance_set_reverb_level(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_instance_get_property:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_instance_get_property(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_instance_set_property:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_instance_set_property(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_instance_get_user_data:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_instance_get_user_data(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_instance_set_user_data:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_instance_set_user_data(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_instance_is_valid:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_instance_is_valid(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_instance_is_virtual:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_instance_is_virtual(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_instance_get_channel_group:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_instance_get_channel_group(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_instance_get_cpu_usage:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_instance_get_cpu_usage(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_instance_get_memory_usage:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_instance_get_memory_usage(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_instance_get_description:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_instance_get_description(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_event_instance_release:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_event_instance_release(__arg_buffer, __arg_buffer_length);
}
- (char*)__EXT_NATIVE__fmod_studio_bus_get_path:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_bus_get_path(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_bus_get_volume:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_bus_get_volume(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_bus_set_volume:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_bus_set_volume(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_bus_get_paused:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_bus_get_paused(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_bus_set_paused:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_bus_set_paused(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_bus_stop_all_events:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_bus_stop_all_events(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_bus_get_master_bus:(char*)__ret_buffer arg1:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_studio_bus_get_master_bus(__ret_buffer, __ret_buffer_length);
}
- (char*)__EXT_NATIVE__fmod_studio_bus_get_id:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_bus_get_id(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_bus_is_valid:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_bus_is_valid(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_bus_get_channel_group:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_studio_bus_get_channel_group(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_bus_lock_channel_group:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_bus_lock_channel_group(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_bus_unlock_channel_group:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_bus_unlock_channel_group(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_bus_get_cpu_usage:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_studio_bus_get_cpu_usage(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_bus_get_memory_usage:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_studio_bus_get_memory_usage(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_bus_get_mute:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_bus_get_mute(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_bus_set_mute:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_bus_set_mute(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_bus_get_port_index:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_studio_bus_get_port_index(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_bus_set_port_index:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_bus_set_port_index(__arg_buffer, __arg_buffer_length);
}
- (char*)__EXT_NATIVE__fmod_studio_vca_get_path:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_vca_get_path(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_vca_get_volume:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_vca_get_volume(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_vca_set_volume:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_vca_set_volume(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_command_replay_get_playback_state:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_command_replay_get_playback_state(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_command_replay_get_current_command:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_command_replay_get_current_command(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_command_replay_release:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_command_replay_release(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_command_replay_get_command_count:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_command_replay_get_command_count(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_command_replay_get_length:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_command_replay_get_length(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_command_replay_get_system_object:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_studio_command_replay_get_system_object(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_command_replay_is_valid:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_command_replay_is_valid(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_command_replay_get_command_info:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_studio_command_replay_get_command_info(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
- (char*)__EXT_NATIVE__fmod_studio_command_replay_get_command_string:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_command_replay_get_command_string(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_command_replay_get_command_at_time:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_command_replay_get_command_at_time(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_command_replay_seek_to_command:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_command_replay_seek_to_command(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_command_replay_seek_to_time:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_command_replay_seek_to_time(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_command_replay_set_bank_path:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_command_replay_set_bank_path(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_command_replay_get_paused:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_command_replay_get_paused(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_command_replay_set_paused:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_command_replay_set_paused(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_command_replay_start:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_command_replay_start(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_command_replay_stop:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_command_replay_stop(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_command_replay_get_user_data:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_command_replay_get_user_data(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_command_replay_set_user_data:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_command_replay_set_user_data(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_command_replay_set_frame_callback:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_command_replay_set_frame_callback(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_command_replay_set_create_instance_callback:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_command_replay_set_create_instance_callback(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_command_replay_set_load_bank_callback:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_command_replay_set_load_bank_callback(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__GMFMOD_invocation_handler:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__GMFMOD_invocation_handler(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__GMFMOD_queue_buffer:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__GMFMOD_queue_buffer(__arg_buffer, __arg_buffer_length);
}
@end

