// ##### extgen :: Auto-generated file do not edit!! #####

#include "GMFMODStudioInternal_native.h"
#include "GMFMODStudioInternal_exports.h"

using namespace gm_structs;
using namespace gm::wire::codec;

static gm::runtime::DispatchQueue __dispatch_queue;

// Internal function used for fetching dispatched function calls to GML
GMEXPORT double __EXT_NATIVE__GMFMODStudio_invocation_handler(char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferWriter __bw{ __ret_buffer, static_cast<size_t>(__ret_buffer_length) };
    return __dispatch_queue.fetch(__bw);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_create(char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_system_create();
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: UInt64
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_init(double max_channels, double studio_flags, double core_flags)
{
    auto&& __result = fmod_studio_system_init(static_cast<double>(max_channels), static_cast<double>(studio_flags), static_cast<double>(core_flags));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_release()
{
    auto&& __result = fmod_studio_system_release();
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_update()
{
    auto&& __result = fmod_studio_system_update();
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_flush_commands()
{
    auto&& __result = fmod_studio_system_flush_commands();
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_flush_sample_loading()
{
    auto&& __result = fmod_studio_system_flush_sample_loading();
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_load_bank_file(char* filename, double flags, char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_system_load_bank_file(filename, static_cast<double>(flags));
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: optional<UInt64>
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_load_bank_memory(char* data, double flags, char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_system_load_bank_memory(data, static_cast<double>(flags));
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: optional<UInt64>
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_unload_all()
{
    auto&& __result = fmod_studio_system_unload_all();
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_get_bank_count()
{
    auto&& __result = fmod_studio_system_get_bank_count();
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_get_bank_at(double index, char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_system_get_bank_at(static_cast<double>(index));
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: optional<UInt64>
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_get_bank(char* path, char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_system_get_bank(path);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: optional<UInt64>
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_get_bank_by_id(char* str_guid, char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_system_get_bank_by_id(str_guid);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: optional<UInt64>
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_get_event(char* path, char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_system_get_event(path);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: optional<UInt64>
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_create_event_instance(char* path, char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_system_create_event_instance(path);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: optional<UInt64>
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_get_bus(char* path, char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_system_get_bus(path);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: optional<UInt64>
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_get_master_bus(char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_system_get_master_bus();
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: optional<UInt64>
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_get_bus_by_id(char* str_guid, char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_system_get_bus_by_id(str_guid);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: optional<UInt64>
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_get_vca(char* path, char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_system_get_vca(path);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: optional<UInt64>
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_get_vca_by_id(char* str_guid, char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_system_get_vca_by_id(str_guid);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: optional<UInt64>
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_set_listener_attributes(double listener_index, double x, double y, double z)
{
    auto&& __result = fmod_studio_system_set_listener_attributes(static_cast<double>(listener_index), static_cast<double>(x), static_cast<double>(y), static_cast<double>(z));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_set_listener_weight(double listener_index, double weight)
{
    auto&& __result = fmod_studio_system_set_listener_weight(static_cast<double>(listener_index), static_cast<double>(weight));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_get_num_listeners()
{
    auto&& __result = fmod_studio_system_get_num_listeners();
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_get_listener_attributes(double listener_index, char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_system_get_listener_attributes(static_cast<double>(listener_index));
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodStudioListenerAttributes
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_get_listener_weight(double listener_index)
{
    auto&& __result = fmod_studio_system_get_listener_weight(static_cast<double>(listener_index));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_set_parameter_by_name(char* name, double value)
{
    auto&& __result = fmod_studio_system_set_parameter_by_name(name, static_cast<double>(value));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_get_parameter_by_name(char* name)
{
    auto&& __result = fmod_studio_system_get_parameter_by_name(name);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_get_core_system(char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_system_get_core_system();
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: UInt64
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_get_core_system_ptr(char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_system_get_core_system_ptr();
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: UInt64
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_last_result(char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_last_result();
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: enum FmodStudioResult
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_shutdown()
{
    fmod_studio_shutdown();
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_set_num_listeners(double count)
{
    auto&& __result = fmod_studio_system_set_num_listeners(static_cast<double>(count));
    return static_cast<double>(__result);
}

GMEXPORT char* __EXT_NATIVE__fmod_studio_system_lookup_id(char* path)
{
    static std::string __result;
    __result = fmod_studio_system_lookup_id(path);
    return (char*)__result.c_str();
}

GMEXPORT char* __EXT_NATIVE__fmod_studio_system_lookup_path(char* str_guid)
{
    static std::string __result;
    __result = fmod_studio_system_lookup_path(str_guid);
    return (char*)__result.c_str();
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_get_event_by_id(char* id, char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_system_get_event_by_id(id);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: UInt64
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_is_valid()
{
    auto&& __result = fmod_studio_system_is_valid();
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_start_command_capture(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: filename, type: String
    std::string_view filename = gm::wire::codec::readValue<std::string_view>(__br);

    // field: flags, type: enum FmodStudioCommandCaptureFlags
    gm_enums::FmodStudioCommandCaptureFlags flags = gm::wire::codec::readValue<gm_enums::FmodStudioCommandCaptureFlags>(__br);

    auto&& __result = fmod_studio_system_start_command_capture(filename, flags);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_stop_command_capture()
{
    auto&& __result = fmod_studio_system_stop_command_capture();
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_load_command_replay(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: filename, type: String
    std::string_view filename = gm::wire::codec::readValue<std::string_view>(__br);

    // field: flags, type: enum FmodStudioCommandReplayFlags
    gm_enums::FmodStudioCommandReplayFlags flags = gm::wire::codec::readValue<gm_enums::FmodStudioCommandReplayFlags>(__br);

    auto&& __result = fmod_studio_system_load_command_replay(filename, flags);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: UInt64
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_get_sound_info(char* key, char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_system_get_sound_info(key);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodStudioSoundInfo
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_get_parameter_by_id(double id_data1, double id_data2, char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_system_get_parameter_by_id(static_cast<double>(id_data1), static_cast<double>(id_data2));
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodStudioParameterValue
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_set_parameter_by_id(double id_data1, double id_data2, double value, double ignore_seek_speed)
{
    auto&& __result = fmod_studio_system_set_parameter_by_id(static_cast<double>(id_data1), static_cast<double>(id_data2), static_cast<double>(value), static_cast<double>(ignore_seek_speed));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_get_parameter_description_by_id(double id_data1, double id_data2, char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_system_get_parameter_description_by_id(static_cast<double>(id_data1), static_cast<double>(id_data2));
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodStudioParameterDescription
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_get_parameter_description_by_name(char* name, char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_system_get_parameter_description_by_name(name);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodStudioParameterDescription
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_get_parameter_description_count()
{
    auto&& __result = fmod_studio_system_get_parameter_description_count();
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_get_parameter_description_at(double index, char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_system_get_parameter_description_at(static_cast<double>(index));
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodStudioParameterDescription
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT char* __EXT_NATIVE__fmod_studio_system_get_parameter_label_by_id(double id_data1, double id_data2, double label_index)
{
    static std::string __result;
    __result = fmod_studio_system_get_parameter_label_by_id(static_cast<double>(id_data1), static_cast<double>(id_data2), static_cast<double>(label_index));
    return (char*)__result.c_str();
}

GMEXPORT char* __EXT_NATIVE__fmod_studio_system_get_parameter_label_by_name(char* name, double label_index)
{
    static std::string __result;
    __result = fmod_studio_system_get_parameter_label_by_name(name, static_cast<double>(label_index));
    return (char*)__result.c_str();
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_set_parameter_by_id_with_label(double id_data1, double id_data2, char* label, double ignore_seek_speed)
{
    auto&& __result = fmod_studio_system_set_parameter_by_id_with_label(static_cast<double>(id_data1), static_cast<double>(id_data2), label, static_cast<double>(ignore_seek_speed));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_set_parameter_by_name_with_label(char* name, char* label, double ignore_seek_speed)
{
    auto&& __result = fmod_studio_system_set_parameter_by_name_with_label(name, label, static_cast<double>(ignore_seek_speed));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_get_cpu_usage(char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_system_get_cpu_usage();
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodStudioSystemCPUUsage
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_get_buffer_usage(char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_system_get_buffer_usage();
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodStudioBufferUsage
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_reset_buffer_usage()
{
    auto&& __result = fmod_studio_system_reset_buffer_usage();
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_get_memory_usage(char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_system_get_memory_usage();
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodStudioMemoryUsage
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_get_advanced_settings(char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_system_get_advanced_settings();
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodStudioAdvancedSettings
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_set_advanced_settings(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: settings, type: struct FmodStudioAdvancedSettings
    gm_structs::FmodStudioAdvancedSettings settings = gm::wire::codec::readValue<gm_structs::FmodStudioAdvancedSettings>(__br);

    auto&& __result = fmod_studio_system_set_advanced_settings(settings);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_set_callback(double callback_mask)
{
    auto&& __result = fmod_studio_system_set_callback(static_cast<double>(callback_mask));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_get_user_data()
{
    auto&& __result = fmod_studio_system_get_user_data();
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_system_set_user_data(double user_data)
{
    auto&& __result = fmod_studio_system_set_user_data(static_cast<double>(user_data));
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bank_unload(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bank_ref, type: UInt64
    std::uint64_t bank_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_bank_unload(bank_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bank_get_loading_state(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bank_ref, type: UInt64
    std::uint64_t bank_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_bank_get_loading_state(bank_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bank_get_sample_loading_state(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bank_ref, type: UInt64
    std::uint64_t bank_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_bank_get_sample_loading_state(bank_ref);
    return static_cast<double>(__result);
}

GMEXPORT char* __EXT_NATIVE__fmod_studio_bank_get_path(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bank_ref, type: UInt64
    std::uint64_t bank_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    static std::string __result;
    __result = fmod_studio_bank_get_path(bank_ref);
    return (char*)__result.c_str();
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bank_get_parent_studio_system(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bank_ref, type: UInt64
    std::uint64_t bank_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_bank_get_parent_studio_system(bank_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: optional<UInt64>
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bank_get_event_count(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bank_ref, type: UInt64
    std::uint64_t bank_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_bank_get_event_count(bank_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bank_get_event_at(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bank_ref, type: UInt64
    std::uint64_t bank_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: index, type: Float64
    double index = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_bank_get_event_at(bank_ref, index);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: optional<UInt64>
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bank_get_bus_count(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bank_ref, type: UInt64
    std::uint64_t bank_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_bank_get_bus_count(bank_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bank_get_bus_at(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bank_ref, type: UInt64
    std::uint64_t bank_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: index, type: Float64
    double index = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_bank_get_bus_at(bank_ref, index);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: optional<UInt64>
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bank_get_vca_count(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bank_ref, type: UInt64
    std::uint64_t bank_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_bank_get_vca_count(bank_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bank_get_vca_at(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bank_ref, type: UInt64
    std::uint64_t bank_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: index, type: Float64
    double index = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_bank_get_vca_at(bank_ref, index);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: optional<UInt64>
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bank_get_string_count(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bank_ref, type: UInt64
    std::uint64_t bank_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_bank_get_string_count(bank_ref);
    return static_cast<double>(__result);
}

GMEXPORT char* __EXT_NATIVE__fmod_studio_bank_get_id(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bank_ref, type: UInt64
    std::uint64_t bank_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    static std::string __result;
    __result = fmod_studio_bank_get_id(bank_ref);
    return (char*)__result.c_str();
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bank_is_valid(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bank_ref, type: UInt64
    std::uint64_t bank_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_bank_is_valid(bank_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bank_get_string_info(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bank_ref, type: UInt64
    std::uint64_t bank_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: string_index, type: Float64
    double string_index = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_bank_get_string_info(bank_ref, string_index);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodStudioStringInfo
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bank_load_sample_data(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bank_ref, type: UInt64
    std::uint64_t bank_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_bank_load_sample_data(bank_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bank_unload_sample_data(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bank_ref, type: UInt64
    std::uint64_t bank_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_bank_unload_sample_data(bank_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bank_get_user_data(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bank_ref, type: UInt64
    std::uint64_t bank_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_bank_get_user_data(bank_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bank_set_user_data(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bank_ref, type: UInt64
    std::uint64_t bank_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: user_data, type: Float64
    double user_data = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_bank_set_user_data(bank_ref, user_data);
    return static_cast<double>(__result);
}

GMEXPORT char* __EXT_NATIVE__fmod_studio_event_description_get_path(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    static std::string __result;
    __result = fmod_studio_event_description_get_path(event_desc_ref);
    return (char*)__result.c_str();
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_create_instance(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_description_create_instance(event_desc_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: optional<UInt64>
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_get_instance_count(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_description_get_instance_count(event_desc_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_get_instance_at(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: index, type: Float64
    double index = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_event_description_get_instance_at(event_desc_ref, index);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: optional<UInt64>
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_is_snapshot(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_description_is_snapshot(event_desc_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_is_one_shot(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_description_is_one_shot(event_desc_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_has_sustain_point(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_description_has_sustain_point(event_desc_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_get_length(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_description_get_length(event_desc_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_get_parameter_count(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_description_get_parameter_count(event_desc_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_release_all_instances(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_description_release_all_instances(event_desc_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_get_parameter_description_by_name(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: name, type: String
    std::string_view name = gm::wire::codec::readValue<std::string_view>(__br);

    auto&& __result = fmod_studio_event_description_get_parameter_description_by_name(event_desc_ref, name);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodStudioParameterDescription
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_load_sample_data(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_description_load_sample_data(event_desc_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_is_valid(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_description_is_valid(event_desc_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_is_3d(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_description_is_3d(event_desc_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_is_stream(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_description_is_stream(event_desc_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_is_doppler_enabled(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_description_is_doppler_enabled(event_desc_ref);
    return static_cast<double>(__result);
}

GMEXPORT char* __EXT_NATIVE__fmod_studio_event_description_get_id(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    static std::string __result;
    __result = fmod_studio_event_description_get_id(event_desc_ref);
    return (char*)__result.c_str();
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_get_min_max_distance(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_description_get_min_max_distance(event_desc_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodStudioMinMaxDistance
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_get_sound_size(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_description_get_sound_size(event_desc_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_get_sample_loading_state(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_description_get_sample_loading_state(event_desc_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_unload_sample_data(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_description_unload_sample_data(event_desc_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_set_callback(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: callback_mask, type: Float64
    double callback_mask = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_event_description_set_callback(event_desc_ref, callback_mask);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_get_user_data(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_description_get_user_data(event_desc_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_set_user_data(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: user_data, type: Float64
    double user_data = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_event_description_set_user_data(event_desc_ref, user_data);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_get_user_property(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: name, type: String
    std::string_view name = gm::wire::codec::readValue<std::string_view>(__br);

    auto&& __result = fmod_studio_event_description_get_user_property(event_desc_ref, name);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodStudioUserProperty
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_get_user_property_at(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: index, type: Float64
    double index = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_event_description_get_user_property_at(event_desc_ref, index);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodStudioUserProperty
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_get_user_property_count(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_description_get_user_property_count(event_desc_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_get_parameter_description_by_id(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: id_data1, type: Float64
    double id_data1 = gm::wire::codec::readValue<double>(__br);

    // field: id_data2, type: Float64
    double id_data2 = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_event_description_get_parameter_description_by_id(event_desc_ref, id_data1, id_data2);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodStudioParameterDescription
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_description_get_parameter_description_at(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: index, type: Float64
    double index = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_event_description_get_parameter_description_at(event_desc_ref, index);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodStudioParameterDescription
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT char* __EXT_NATIVE__fmod_studio_event_description_get_parameter_label_by_id(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: id_data1, type: Float64
    double id_data1 = gm::wire::codec::readValue<double>(__br);

    // field: id_data2, type: Float64
    double id_data2 = gm::wire::codec::readValue<double>(__br);

    // field: label_index, type: Float64
    double label_index = gm::wire::codec::readValue<double>(__br);

    static std::string __result;
    __result = fmod_studio_event_description_get_parameter_label_by_id(event_desc_ref, id_data1, id_data2, label_index);
    return (char*)__result.c_str();
}

GMEXPORT char* __EXT_NATIVE__fmod_studio_event_description_get_parameter_label_at(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: index, type: Float64
    double index = gm::wire::codec::readValue<double>(__br);

    // field: label_index, type: Float64
    double label_index = gm::wire::codec::readValue<double>(__br);

    static std::string __result;
    __result = fmod_studio_event_description_get_parameter_label_at(event_desc_ref, index, label_index);
    return (char*)__result.c_str();
}

GMEXPORT char* __EXT_NATIVE__fmod_studio_event_description_get_parameter_label_by_name(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: event_desc_ref, type: UInt64
    std::uint64_t event_desc_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: name, type: String
    std::string_view name = gm::wire::codec::readValue<std::string_view>(__br);

    // field: label_index, type: Float64
    double label_index = gm::wire::codec::readValue<double>(__br);

    static std::string __result;
    __result = fmod_studio_event_description_get_parameter_label_by_name(event_desc_ref, name, label_index);
    return (char*)__result.c_str();
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_start(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_instance_start(instance_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_stop(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: stop_mode, type: Float64
    double stop_mode = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_event_instance_stop(instance_ref, stop_mode);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_get_playback_state(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_instance_get_playback_state(instance_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_get_paused(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_instance_get_paused(instance_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_set_paused(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: paused, type: Float64
    double paused = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_event_instance_set_paused(instance_ref, paused);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_get_timeline_position(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_instance_get_timeline_position(instance_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_set_timeline_position(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: position, type: Float64
    double position = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_event_instance_set_timeline_position(instance_ref, position);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_keyoff(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_instance_keyoff(instance_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_get_volume(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_instance_get_volume(instance_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_set_volume(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: volume, type: Float64
    double volume = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_event_instance_set_volume(instance_ref, volume);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_get_pitch(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_instance_get_pitch(instance_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_set_pitch(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: pitch, type: Float64
    double pitch = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_event_instance_set_pitch(instance_ref, pitch);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_set_parameter_by_name(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: name, type: String
    std::string_view name = gm::wire::codec::readValue<std::string_view>(__br);

    // field: value, type: Float64
    double value = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_event_instance_set_parameter_by_name(instance_ref, name, value);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_get_parameter_by_name(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: name, type: String
    std::string_view name = gm::wire::codec::readValue<std::string_view>(__br);

    auto&& __result = fmod_studio_event_instance_get_parameter_by_name(instance_ref, name);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_get_parameter_count(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_instance_get_parameter_count(instance_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_get_parameter_by_id(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: id_data1, type: Float64
    double id_data1 = gm::wire::codec::readValue<double>(__br);

    // field: id_data2, type: Float64
    double id_data2 = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_event_instance_get_parameter_by_id(instance_ref, id_data1, id_data2);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_set_parameter_by_id(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: id_data1, type: Float64
    double id_data1 = gm::wire::codec::readValue<double>(__br);

    // field: id_data2, type: Float64
    double id_data2 = gm::wire::codec::readValue<double>(__br);

    // field: value, type: Float64
    double value = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_event_instance_set_parameter_by_id(instance_ref, id_data1, id_data2, value);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_set_callback(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: callback, type: optional<Function>
    std::optional<gm::wire::GMFunction> callback = std::nullopt;
    if (gm::wire::codec::readValue<bool>(__br))
    {
        callback = gm::wire::codec::readFunction(__br, &__dispatch_queue);
    }

    // field: mask, type: enum FmodStudioEventCallbackType
    gm_enums::FmodStudioEventCallbackType mask = gm::wire::codec::readValue<gm_enums::FmodStudioEventCallbackType>(__br);

    auto&& __result = fmod_studio_event_instance_set_callback(instance_ref, callback, mask);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_set_parameter_by_id_with_label(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: id_data1, type: Float64
    double id_data1 = gm::wire::codec::readValue<double>(__br);

    // field: id_data2, type: Float64
    double id_data2 = gm::wire::codec::readValue<double>(__br);

    // field: label, type: String
    std::string_view label = gm::wire::codec::readValue<std::string_view>(__br);

    // field: ignore_seek_speed, type: Float64
    double ignore_seek_speed = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_event_instance_set_parameter_by_id_with_label(instance_ref, id_data1, id_data2, label, ignore_seek_speed);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_set_parameter_by_name_with_label(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: name, type: String
    std::string_view name = gm::wire::codec::readValue<std::string_view>(__br);

    // field: label, type: String
    std::string_view label = gm::wire::codec::readValue<std::string_view>(__br);

    // field: ignore_seek_speed, type: Float64
    double ignore_seek_speed = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_event_instance_set_parameter_by_name_with_label(instance_ref, name, label, ignore_seek_speed);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_set_3d_attributes(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: x, type: Float64
    double x = gm::wire::codec::readValue<double>(__br);

    // field: y, type: Float64
    double y = gm::wire::codec::readValue<double>(__br);

    // field: z, type: Float64
    double z = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_event_instance_set_3d_attributes(instance_ref, x, y, z);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_get_3d_attributes(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_instance_get_3d_attributes(instance_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodStudioChannelControl3DAttributes
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_get_min_max_distance(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_instance_get_min_max_distance(instance_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodStudioMinMaxDistance
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_get_listener_mask(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_instance_get_listener_mask(instance_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_set_listener_mask(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: mask, type: Float64
    double mask = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_event_instance_set_listener_mask(instance_ref, mask);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_get_reverb_level(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: index, type: Float64
    double index = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_event_instance_get_reverb_level(instance_ref, index);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_set_reverb_level(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: index, type: Float64
    double index = gm::wire::codec::readValue<double>(__br);

    // field: level, type: Float64
    double level = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_event_instance_set_reverb_level(instance_ref, index, level);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_get_property(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: property_type, type: enum FmodStudioEventProperty
    gm_enums::FmodStudioEventProperty property_type = gm::wire::codec::readValue<gm_enums::FmodStudioEventProperty>(__br);

    auto&& __result = fmod_studio_event_instance_get_property(instance_ref, property_type);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_set_property(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: property_type, type: enum FmodStudioEventProperty
    gm_enums::FmodStudioEventProperty property_type = gm::wire::codec::readValue<gm_enums::FmodStudioEventProperty>(__br);

    // field: value, type: Float64
    double value = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_event_instance_set_property(instance_ref, property_type, value);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_get_user_data(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_instance_get_user_data(instance_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_set_user_data(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: user_data, type: Float64
    double user_data = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_event_instance_set_user_data(instance_ref, user_data);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_is_valid(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_instance_is_valid(instance_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_is_virtual(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_instance_is_virtual(instance_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_get_channel_group(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_instance_get_channel_group(instance_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: UInt64
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_get_cpu_usage(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_instance_get_cpu_usage(instance_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodStudioCPUUsage
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_get_memory_usage(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_instance_get_memory_usage(instance_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodStudioMemoryUsage
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_get_description(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_instance_get_description(instance_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: optional<UInt64>
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_event_instance_release(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: instance_ref, type: UInt64
    std::uint64_t instance_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_event_instance_release(instance_ref);
    return static_cast<double>(__result);
}

GMEXPORT char* __EXT_NATIVE__fmod_studio_bus_get_path(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bus_ref, type: UInt64
    std::uint64_t bus_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    static std::string __result;
    __result = fmod_studio_bus_get_path(bus_ref);
    return (char*)__result.c_str();
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bus_get_volume(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bus_ref, type: UInt64
    std::uint64_t bus_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_bus_get_volume(bus_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bus_set_volume(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bus_ref, type: UInt64
    std::uint64_t bus_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: volume, type: Float64
    double volume = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_bus_set_volume(bus_ref, volume);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bus_get_paused(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bus_ref, type: UInt64
    std::uint64_t bus_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_bus_get_paused(bus_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bus_set_paused(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bus_ref, type: UInt64
    std::uint64_t bus_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: paused, type: Float64
    double paused = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_bus_set_paused(bus_ref, paused);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bus_stop_all_events(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bus_ref, type: UInt64
    std::uint64_t bus_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: stop_mode, type: Float64
    double stop_mode = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_bus_stop_all_events(bus_ref, stop_mode);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bus_get_master_bus(char* __ret_buffer, double __ret_buffer_length)
{
    auto&& __result = fmod_studio_bus_get_master_bus();
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: optional<UInt64>
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT char* __EXT_NATIVE__fmod_studio_bus_get_id(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bus_ref, type: UInt64
    std::uint64_t bus_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    static std::string __result;
    __result = fmod_studio_bus_get_id(bus_ref);
    return (char*)__result.c_str();
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bus_is_valid(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bus_ref, type: UInt64
    std::uint64_t bus_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_bus_is_valid(bus_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bus_get_channel_group(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bus_ref, type: UInt64
    std::uint64_t bus_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_bus_get_channel_group(bus_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: UInt64
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bus_lock_channel_group(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bus_ref, type: UInt64
    std::uint64_t bus_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_bus_lock_channel_group(bus_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bus_unlock_channel_group(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bus_ref, type: UInt64
    std::uint64_t bus_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_bus_unlock_channel_group(bus_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bus_get_cpu_usage(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bus_ref, type: UInt64
    std::uint64_t bus_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_bus_get_cpu_usage(bus_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodStudioCPUUsage
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bus_get_memory_usage(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bus_ref, type: UInt64
    std::uint64_t bus_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_bus_get_memory_usage(bus_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodStudioMemoryUsage
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bus_get_mute(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bus_ref, type: UInt64
    std::uint64_t bus_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_bus_get_mute(bus_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bus_set_mute(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bus_ref, type: UInt64
    std::uint64_t bus_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: mute, type: Float64
    double mute = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_bus_set_mute(bus_ref, mute);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bus_get_port_index(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bus_ref, type: UInt64
    std::uint64_t bus_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_bus_get_port_index(bus_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: UInt64
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_bus_set_port_index(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: bus_ref, type: UInt64
    std::uint64_t bus_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: port_index, type: UInt64
    std::uint64_t port_index = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_bus_set_port_index(bus_ref, port_index);
    return static_cast<double>(__result);
}

GMEXPORT char* __EXT_NATIVE__fmod_studio_vca_get_path(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: vca_ref, type: UInt64
    std::uint64_t vca_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    static std::string __result;
    __result = fmod_studio_vca_get_path(vca_ref);
    return (char*)__result.c_str();
}

GMEXPORT double __EXT_NATIVE__fmod_studio_vca_get_volume(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: vca_ref, type: UInt64
    std::uint64_t vca_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_vca_get_volume(vca_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_vca_set_volume(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: vca_ref, type: UInt64
    std::uint64_t vca_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: volume, type: Float64
    double volume = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_vca_set_volume(vca_ref, volume);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_command_replay_get_playback_state(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: replay_ref, type: UInt64
    std::uint64_t replay_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_command_replay_get_playback_state(replay_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_command_replay_get_current_command(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: replay_ref, type: UInt64
    std::uint64_t replay_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_command_replay_get_current_command(replay_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_command_replay_release(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: replay_ref, type: UInt64
    std::uint64_t replay_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_command_replay_release(replay_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_command_replay_get_command_count(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: replay_ref, type: UInt64
    std::uint64_t replay_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_command_replay_get_command_count(replay_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_command_replay_get_length(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: replay_ref, type: UInt64
    std::uint64_t replay_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_command_replay_get_length(replay_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_command_replay_get_system_object(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: replay_ref, type: UInt64
    std::uint64_t replay_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_command_replay_get_system_object(replay_ref);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: UInt64
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT double __EXT_NATIVE__fmod_studio_command_replay_is_valid(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: replay_ref, type: UInt64
    std::uint64_t replay_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_command_replay_is_valid(replay_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_command_replay_get_command_info(char* __arg_buffer, double __arg_buffer_length, char* __ret_buffer, double __ret_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: replay_ref, type: UInt64
    std::uint64_t replay_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: command_index, type: Float64
    double command_index = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_command_replay_get_command_info(replay_ref, command_index);
    gm::byteio::BufferWriter __bw{__ret_buffer, static_cast<size_t>(__ret_buffer_length)};

    // return: __result, type: struct FmodStudioCommandInfo
    gm::wire::codec::writeValue(__bw, __result);
    return 0;
}

GMEXPORT char* __EXT_NATIVE__fmod_studio_command_replay_get_command_string(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: replay_ref, type: UInt64
    std::uint64_t replay_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: command_index, type: Float64
    double command_index = gm::wire::codec::readValue<double>(__br);

    static std::string __result;
    __result = fmod_studio_command_replay_get_command_string(replay_ref, command_index);
    return (char*)__result.c_str();
}

GMEXPORT double __EXT_NATIVE__fmod_studio_command_replay_get_command_at_time(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: replay_ref, type: UInt64
    std::uint64_t replay_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: time, type: Float64
    double time = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_command_replay_get_command_at_time(replay_ref, time);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_command_replay_seek_to_command(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: replay_ref, type: UInt64
    std::uint64_t replay_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: command_index, type: Float64
    double command_index = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_command_replay_seek_to_command(replay_ref, command_index);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_command_replay_seek_to_time(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: replay_ref, type: UInt64
    std::uint64_t replay_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: time, type: Float64
    double time = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_command_replay_seek_to_time(replay_ref, time);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_command_replay_set_bank_path(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: replay_ref, type: UInt64
    std::uint64_t replay_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: path, type: String
    std::string_view path = gm::wire::codec::readValue<std::string_view>(__br);

    auto&& __result = fmod_studio_command_replay_set_bank_path(replay_ref, path);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_command_replay_get_paused(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: replay_ref, type: UInt64
    std::uint64_t replay_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_command_replay_get_paused(replay_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_command_replay_set_paused(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: replay_ref, type: UInt64
    std::uint64_t replay_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: paused, type: Float64
    double paused = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_command_replay_set_paused(replay_ref, paused);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_command_replay_start(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: replay_ref, type: UInt64
    std::uint64_t replay_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_command_replay_start(replay_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_command_replay_stop(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: replay_ref, type: UInt64
    std::uint64_t replay_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_command_replay_stop(replay_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_command_replay_get_user_data(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: replay_ref, type: UInt64
    std::uint64_t replay_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    auto&& __result = fmod_studio_command_replay_get_user_data(replay_ref);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_command_replay_set_user_data(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: replay_ref, type: UInt64
    std::uint64_t replay_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: user_data, type: Float64
    double user_data = gm::wire::codec::readValue<double>(__br);

    auto&& __result = fmod_studio_command_replay_set_user_data(replay_ref, user_data);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_command_replay_set_frame_callback(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: replay_ref, type: UInt64
    std::uint64_t replay_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: callback, type: optional<Function>
    std::optional<gm::wire::GMFunction> callback = std::nullopt;
    if (gm::wire::codec::readValue<bool>(__br))
    {
        callback = gm::wire::codec::readFunction(__br, &__dispatch_queue);
    }

    auto&& __result = fmod_studio_command_replay_set_frame_callback(replay_ref, callback);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_command_replay_set_create_instance_callback(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: replay_ref, type: UInt64
    std::uint64_t replay_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: callback, type: optional<Function>
    std::optional<gm::wire::GMFunction> callback = std::nullopt;
    if (gm::wire::codec::readValue<bool>(__br))
    {
        callback = gm::wire::codec::readFunction(__br, &__dispatch_queue);
    }

    auto&& __result = fmod_studio_command_replay_set_create_instance_callback(replay_ref, callback);
    return static_cast<double>(__result);
}

GMEXPORT double __EXT_NATIVE__fmod_studio_command_replay_set_load_bank_callback(char* __arg_buffer, double __arg_buffer_length)
{
    gm::byteio::BufferReader __br{__arg_buffer, static_cast<size_t>(__arg_buffer_length)};

    // field: replay_ref, type: UInt64
    std::uint64_t replay_ref = gm::wire::codec::readValue<std::uint64_t>(__br);

    // field: callback, type: optional<Function>
    std::optional<gm::wire::GMFunction> callback = std::nullopt;
    if (gm::wire::codec::readValue<bool>(__br))
    {
        callback = gm::wire::codec::readFunction(__br, &__dispatch_queue);
    }

    auto&& __result = fmod_studio_command_replay_set_load_bank_callback(replay_ref, callback);
    return static_cast<double>(__result);
}

