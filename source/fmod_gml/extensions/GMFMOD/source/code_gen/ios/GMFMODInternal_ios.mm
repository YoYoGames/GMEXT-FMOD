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
- (double)__EXT_NATIVE__fmod_system_create_sound:(char*)name_or_data arg1:(double)mode arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_system_create_sound(name_or_data, mode, __ret_buffer, __ret_buffer_length);
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
- (double)__EXT_NATIVE__fmod_sound_set_3d_min_max_distance:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_sound_set_3d_min_max_distance(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_sound_set_3d_cone_settings:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_sound_set_3d_cone_settings(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_sound_release:(char*)__arg_buffer arg1:(double)__arg_buffer_length
{
    return __EXT_NATIVE__fmod_sound_release(__arg_buffer, __arg_buffer_length);
}
- (double)__EXT_NATIVE__fmod_sound_get_system_object:(char*)__arg_buffer arg1:(double)__arg_buffer_length arg2:(char*)__ret_buffer arg3:(double)__ret_buffer_length
{
    return __EXT_NATIVE__fmod_sound_get_system_object(__arg_buffer, __arg_buffer_length, __ret_buffer, __ret_buffer_length);
}
@end

