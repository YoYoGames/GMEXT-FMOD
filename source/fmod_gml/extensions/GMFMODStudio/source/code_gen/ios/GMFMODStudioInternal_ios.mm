// ##### extgen :: Auto-generated file do not edit!! #####

#import "GMFMODStudioInternal_ios.h"
#import "native/GMFMODStudioInternal_exports.h"
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

@implementation GMFMODStudioInternal

+ (void)load
{
    // Find all loaded classes
    int num = objc_getClassList(NULL, 0);
    if (num <= 0) return;

    Class *classes = (Class *)malloc(sizeof(Class) * (unsigned)num);
    num = objc_getClassList(classes, num);

    Class base = [GMFMODStudioInternal class];

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
- (double)__EXT_NATIVE__fmod_studio_system_set_listener_attributes:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_studio_system_set_listener_attributes(__arg_buffer, __arg_buffer_length);
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
- (double)__EXT_NATIVE__fmod_studio_system_get_core_system_ptr:(char*)__ret_buffer arg1:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_studio_system_get_core_system_ptr(__ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_last_result:(char*)__ret_buffer arg1:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_studio_last_result(__ret_buffer, __ret_buffer_length);
}
- (double)__EXT_NATIVE__fmod_studio_shutdown
{
    return __EXT_NATIVE__fmod_studio_shutdown();
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
- (double)__EXT_NATIVE__GMFMODStudio_invocation_handler:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__GMFMODStudio_invocation_handler(__arg_buffer, __arg_buffer_length);
}
@end

