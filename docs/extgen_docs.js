/**
 * @function_partial fmod_studio_system_create
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_init
 * @param {Real} max_channels
 * @param {Real} studio_flags
 * @param {Real} core_flags
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_release
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_update
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_flush_commands
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_flush_sample_loading
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_load_bank_file
 * @param {String} filename
 * @param {Real} flags
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_load_bank_memory
 * @param {String} data
 * @param {Real} flags
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_unload_all
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_get_bank_count
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_get_bank_at
 * @param {Real} index
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_get_bank
 * @param {String} path
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_get_bank_by_id
 * @param {String} str_guid
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_get_event
 * @param {String} path
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_create_event_instance
 * @param {String} path
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_get_bus
 * @param {String} path
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_get_master_bus
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_get_bus_by_id
 * @param {String} str_guid
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_get_vca
 * @param {String} path
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_get_vca_by_id
 * @param {String} str_guid
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_set_listener_attributes
 * @param {Real} listener_index
 * @param {Real} x
 * @param {Real} y
 * @param {Real} z
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_set_listener_weight
 * @param {Real} listener_index
 * @param {Real} weight
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_get_num_listeners
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_get_listener_attributes
 * @param {Real} listener_index
 * @returns {Struct.FmodStudioListenerAttributes}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_get_listener_weight
 * @param {Real} listener_index
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_set_parameter_by_name
 * @param {String} name
 * @param {Real} value
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_get_parameter_by_name
 * @param {String} name
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_get_core_system
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_set_num_listeners
 * @param {Real} count
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_lookup_id
 * @param {String} path
 * @returns {String}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_lookup_path
 * @param {String} str_guid
 * @returns {String}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_get_event_by_id
 * @param {String} id
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_is_valid
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_start_command_capture
 * @param {String} filename
 * @param {Enum.FmodStudioCommandCaptureFlags} flags
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_stop_command_capture
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_load_command_replay
 * @param {String} filename
 * @param {Enum.FmodStudioCommandReplayFlags} flags
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_get_sound_info
 * @param {String} key
 * @returns {Struct.FmodStudioSoundInfo}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_get_parameter_by_id
 * @param {Real} id_data1
 * @param {Real} id_data2
 * @returns {Struct.FmodStudioParameterValue}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_set_parameter_by_id
 * @param {Real} id_data1
 * @param {Real} id_data2
 * @param {Real} value
 * @param {Real} ignore_seek_speed
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_get_parameter_description_by_id
 * @param {Real} id_data1
 * @param {Real} id_data2
 * @returns {Struct.FmodStudioParameterDescription}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_get_parameter_description_by_name
 * @param {String} name
 * @returns {Struct.FmodStudioParameterDescription}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_get_parameter_description_count
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_get_parameter_description_at
 * @param {Real} index
 * @returns {Struct.FmodStudioParameterDescription}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_get_parameter_label_by_id
 * @param {Real} id_data1
 * @param {Real} id_data2
 * @param {Real} label_index
 * @returns {String}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_get_parameter_label_by_name
 * @param {String} name
 * @param {Real} label_index
 * @returns {String}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_set_parameter_by_id_with_label
 * @param {Real} id_data1
 * @param {Real} id_data2
 * @param {String} label
 * @param {Real} ignore_seek_speed
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_set_parameter_by_name_with_label
 * @param {String} name
 * @param {String} label
 * @param {Real} ignore_seek_speed
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_get_cpu_usage
 * @returns {Struct.FmodStudioSystemCPUUsage}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_get_buffer_usage
 * @returns {Struct.FmodStudioBufferUsage}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_reset_buffer_usage
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_get_memory_usage
 * @returns {Struct.FmodStudioMemoryUsage}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_get_advanced_settings
 * @returns {Struct.FmodStudioAdvancedSettings}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_set_advanced_settings
 * @param {Struct.FmodStudioAdvancedSettings} settings
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_set_callback
 * @param {Real} callback_mask
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_get_user_data
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_set_user_data
 * @param {Real} user_data
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_bank_unload
 * @param {Real} bank_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_bank_get_loading_state
 * @param {Real} bank_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_bank_get_sample_loading_state
 * @param {Real} bank_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_bank_get_path
 * @param {Real} bank_ref
 * @returns {String}
 * @function_end
 */

/**
 * @function_partial fmod_studio_bank_get_parent_studio_system
 * @param {Real} bank_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_bank_get_event_count
 * @param {Real} bank_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_bank_get_event_at
 * @param {Real} bank_ref
 * @param {Real} index
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_bank_get_bus_count
 * @param {Real} bank_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_bank_get_bus_at
 * @param {Real} bank_ref
 * @param {Real} index
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_bank_get_vca_count
 * @param {Real} bank_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_bank_get_vca_at
 * @param {Real} bank_ref
 * @param {Real} index
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_bank_get_string_count
 * @param {Real} bank_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_bank_get_id
 * @param {Real} bank_ref
 * @returns {String}
 * @function_end
 */

/**
 * @function_partial fmod_studio_bank_is_valid
 * @param {Real} bank_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_bank_get_string_info
 * @param {Real} bank_ref
 * @param {Real} string_index
 * @returns {Struct.FmodStudioStringInfo}
 * @function_end
 */

/**
 * @function_partial fmod_studio_bank_load_sample_data
 * @param {Real} bank_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_bank_unload_sample_data
 * @param {Real} bank_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_bank_get_user_data
 * @param {Real} bank_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_bank_set_user_data
 * @param {Real} bank_ref
 * @param {Real} user_data
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_description_get_path
 * @param {Real} event_desc_ref
 * @returns {String}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_description_create_instance
 * @param {Real} event_desc_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_description_get_instance_count
 * @param {Real} event_desc_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_description_get_instance_at
 * @param {Real} event_desc_ref
 * @param {Real} index
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_description_is_snapshot
 * @param {Real} event_desc_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_description_is_one_shot
 * @param {Real} event_desc_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_description_has_sustain_point
 * @param {Real} event_desc_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_description_get_length
 * @param {Real} event_desc_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_description_get_parameter_count
 * @param {Real} event_desc_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_description_release_all_instances
 * @param {Real} event_desc_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_description_get_parameter_description_by_name
 * @param {Real} event_desc_ref
 * @param {String} name
 * @returns {Struct.FmodStudioParameterDescription}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_description_load_sample_data
 * @param {Real} event_desc_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_description_is_valid
 * @param {Real} event_desc_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_description_is_3d
 * @param {Real} event_desc_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_description_is_stream
 * @param {Real} event_desc_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_description_is_doppler_enabled
 * @param {Real} event_desc_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_description_get_id
 * @param {Real} event_desc_ref
 * @returns {String}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_description_get_min_max_distance
 * @param {Real} event_desc_ref
 * @returns {Struct.FmodStudioMinMaxDistance}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_description_get_sound_size
 * @param {Real} event_desc_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_description_get_sample_loading_state
 * @param {Real} event_desc_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_description_unload_sample_data
 * @param {Real} event_desc_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_description_set_callback
 * @param {Real} event_desc_ref
 * @param {Real} callback_mask
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_description_get_user_data
 * @param {Real} event_desc_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_description_set_user_data
 * @param {Real} event_desc_ref
 * @param {Real} user_data
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_description_get_user_property
 * @param {Real} event_desc_ref
 * @param {String} name
 * @returns {Struct.FmodStudioUserProperty}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_description_get_user_property_at
 * @param {Real} event_desc_ref
 * @param {Real} index
 * @returns {Struct.FmodStudioUserProperty}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_description_get_user_property_count
 * @param {Real} event_desc_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_description_get_parameter_description_by_id
 * @param {Real} event_desc_ref
 * @param {Real} id_data1
 * @param {Real} id_data2
 * @returns {Struct.FmodStudioParameterDescription}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_description_get_parameter_description_at
 * @param {Real} event_desc_ref
 * @param {Real} index
 * @returns {Struct.FmodStudioParameterDescription}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_description_get_parameter_label_by_id
 * @param {Real} event_desc_ref
 * @param {Real} id_data1
 * @param {Real} id_data2
 * @param {Real} label_index
 * @returns {String}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_description_get_parameter_label_at
 * @param {Real} event_desc_ref
 * @param {Real} index
 * @param {Real} label_index
 * @returns {String}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_description_get_parameter_label_by_name
 * @param {Real} event_desc_ref
 * @param {String} name
 * @param {Real} label_index
 * @returns {String}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_instance_start
 * @param {Real} instance_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_instance_stop
 * @param {Real} instance_ref
 * @param {Real} stop_mode
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_instance_get_playback_state
 * @param {Real} instance_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_instance_get_paused
 * @param {Real} instance_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_instance_set_paused
 * @param {Real} instance_ref
 * @param {Real} paused
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_instance_get_timeline_position
 * @param {Real} instance_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_instance_set_timeline_position
 * @param {Real} instance_ref
 * @param {Real} position
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_instance_keyoff
 * @param {Real} instance_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_instance_get_volume
 * @param {Real} instance_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_instance_set_volume
 * @param {Real} instance_ref
 * @param {Real} volume
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_instance_get_pitch
 * @param {Real} instance_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_instance_set_pitch
 * @param {Real} instance_ref
 * @param {Real} pitch
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_instance_set_parameter_by_name
 * @param {Real} instance_ref
 * @param {String} name
 * @param {Real} value
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_instance_get_parameter_by_name
 * @param {Real} instance_ref
 * @param {String} name
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_instance_get_parameter_count
 * @param {Real} instance_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_instance_get_parameter_by_id
 * @param {Real} instance_ref
 * @param {Real} id_data1
 * @param {Real} id_data2
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_instance_set_parameter_by_id
 * @param {Real} instance_ref
 * @param {Real} id_data1
 * @param {Real} id_data2
 * @param {Real} value
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_instance_set_callback
 * @param {Real} instance_ref
 * @param {Function} [callback]
 * @param {Enum.FmodStudioEventCallbackType} mask
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_instance_set_parameter_by_id_with_label
 * @param {Real} instance_ref
 * @param {Real} id_data1
 * @param {Real} id_data2
 * @param {String} label
 * @param {Real} ignore_seek_speed
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_instance_set_parameter_by_name_with_label
 * @param {Real} instance_ref
 * @param {String} name
 * @param {String} label
 * @param {Real} ignore_seek_speed
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_instance_set_3d_attributes
 * @param {Real} instance_ref
 * @param {Real} x
 * @param {Real} y
 * @param {Real} z
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_instance_get_3d_attributes
 * @param {Real} instance_ref
 * @returns {Struct.FmodStudioChannelControl3DAttributes}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_instance_get_min_max_distance
 * @param {Real} instance_ref
 * @returns {Struct.FmodStudioMinMaxDistance}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_instance_get_listener_mask
 * @param {Real} instance_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_instance_set_listener_mask
 * @param {Real} instance_ref
 * @param {Real} mask
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_instance_get_reverb_level
 * @param {Real} instance_ref
 * @param {Real} index
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_instance_set_reverb_level
 * @param {Real} instance_ref
 * @param {Real} index
 * @param {Real} level
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_instance_get_property
 * @param {Real} instance_ref
 * @param {Enum.FmodStudioEventProperty} property_type
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_instance_set_property
 * @param {Real} instance_ref
 * @param {Enum.FmodStudioEventProperty} property_type
 * @param {Real} value
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_instance_get_user_data
 * @param {Real} instance_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_instance_set_user_data
 * @param {Real} instance_ref
 * @param {Real} user_data
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_instance_is_valid
 * @param {Real} instance_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_instance_is_virtual
 * @param {Real} instance_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_instance_get_channel_group
 * @param {Real} instance_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_instance_get_cpu_usage
 * @param {Real} instance_ref
 * @returns {Struct.FmodStudioCPUUsage}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_instance_get_memory_usage
 * @param {Real} instance_ref
 * @returns {Struct.FmodStudioMemoryUsage}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_instance_get_description
 * @param {Real} instance_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_instance_release
 * @param {Real} instance_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_bus_get_path
 * @param {Real} bus_ref
 * @returns {String}
 * @function_end
 */

/**
 * @function_partial fmod_studio_bus_get_volume
 * @param {Real} bus_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_bus_set_volume
 * @param {Real} bus_ref
 * @param {Real} volume
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_bus_get_paused
 * @param {Real} bus_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_bus_set_paused
 * @param {Real} bus_ref
 * @param {Real} paused
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_bus_stop_all_events
 * @param {Real} bus_ref
 * @param {Real} stop_mode
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_bus_get_master_bus
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_bus_get_id
 * @param {Real} bus_ref
 * @returns {String}
 * @function_end
 */

/**
 * @function_partial fmod_studio_bus_is_valid
 * @param {Real} bus_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_bus_get_channel_group
 * @param {Real} bus_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_bus_lock_channel_group
 * @param {Real} bus_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_bus_unlock_channel_group
 * @param {Real} bus_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_bus_get_cpu_usage
 * @param {Real} bus_ref
 * @returns {Struct.FmodStudioCPUUsage}
 * @function_end
 */

/**
 * @function_partial fmod_studio_bus_get_memory_usage
 * @param {Real} bus_ref
 * @returns {Struct.FmodStudioMemoryUsage}
 * @function_end
 */

/**
 * @function_partial fmod_studio_bus_get_mute
 * @param {Real} bus_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_bus_set_mute
 * @param {Real} bus_ref
 * @param {Real} mute
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_bus_get_port_index
 * @param {Real} bus_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_bus_set_port_index
 * @param {Real} bus_ref
 * @param {Real} port_index
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_vca_get_path
 * @param {Real} vca_ref
 * @returns {String}
 * @function_end
 */

/**
 * @function_partial fmod_studio_vca_get_volume
 * @param {Real} vca_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_vca_set_volume
 * @param {Real} vca_ref
 * @param {Real} volume
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_command_replay_get_playback_state
 * @param {Real} replay_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_command_replay_get_current_command
 * @param {Real} replay_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_command_replay_release
 * @param {Real} replay_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_command_replay_get_command_count
 * @param {Real} replay_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_command_replay_get_length
 * @param {Real} replay_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_command_replay_get_system_object
 * @param {Real} replay_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_command_replay_is_valid
 * @param {Real} replay_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_command_replay_get_command_info
 * @param {Real} replay_ref
 * @param {Real} command_index
 * @returns {Struct.FmodStudioCommandInfo}
 * @function_end
 */

/**
 * @function_partial fmod_studio_command_replay_get_command_string
 * @param {Real} replay_ref
 * @param {Real} command_index
 * @returns {String}
 * @function_end
 */

/**
 * @function_partial fmod_studio_command_replay_get_command_at_time
 * @param {Real} replay_ref
 * @param {Real} time
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_command_replay_seek_to_command
 * @param {Real} replay_ref
 * @param {Real} command_index
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_command_replay_seek_to_time
 * @param {Real} replay_ref
 * @param {Real} time
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_command_replay_set_bank_path
 * @param {Real} replay_ref
 * @param {String} path
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_command_replay_get_paused
 * @param {Real} replay_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_command_replay_set_paused
 * @param {Real} replay_ref
 * @param {Real} paused
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_command_replay_start
 * @param {Real} replay_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_command_replay_stop
 * @param {Real} replay_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_command_replay_get_user_data
 * @param {Real} replay_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_command_replay_set_user_data
 * @param {Real} replay_ref
 * @param {Real} user_data
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_command_replay_set_frame_callback
 * @param {Real} replay_ref
 * @param {Function} [callback]
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_command_replay_set_create_instance_callback
 * @param {Real} replay_ref
 * @param {Function} [callback]
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_command_replay_set_load_bank_callback
 * @param {Real} replay_ref
 * @param {Function} [callback]
 * @returns {Real}
 * @function_end
 */

/**
 * @struct_partial FmodStudioParameterDescription
 * @member {String} name
 * @member {Real} id_data1
 * @member {Real} id_data2
 * @member {Real} minimum
 * @member {Real} maximum
 * @member {Real} defaultvalue
 * @member {Enum.FmodStudioUserPropertyType} type
 * @member {Enum.FmodStudioParameterFlags} flags
 * @struct_end
 */

/**
 * @struct_partial FmodStudioStringInfo
 * @member {String} guid
 * @member {String} path
 * @struct_end
 */

/**
 * @struct_partial FmodStudioCPUUsage
 * @member {Real} exclusive
 * @member {Real} inclusive
 * @struct_end
 */

/**
 * @struct_partial FmodStudioMemoryUsage
 * @member {Real} exclusive
 * @member {Real} inclusive
 * @member {Real} sample_data
 * @struct_end
 */

/**
 * @struct_partial FmodStudioCommandInfo
 * @member {String} command_name
 * @member {Real} parent_command_index
 * @member {Real} frame_time
 * @member {Real} instance_type
 * @member {Real} output_type
 * @member {Real} instance_handle
 * @member {Real} output_handle
 * @struct_end
 */

/**
 * @struct_partial FmodStudioCurrentCommand
 * @member {Real} command_index
 * @member {Real} current_time
 * @struct_end
 */

/**
 * @struct_partial FmodStudioUserProperty
 * @member {String} name
 * @member {Enum.FmodStudioUserPropertyType} type
 * @member {String} string_value
 * @member {Real} int_value
 * @member {Real} bool_value
 * @member {Real} float_value
 * @struct_end
 */

/**
 * @struct_partial FmodStudioVec3
 * @member {Real} x
 * @member {Real} y
 * @member {Real} z
 * @struct_end
 */

/**
 * @struct_partial FmodStudioMinMaxDistance
 * @member {Real} min_distance
 * @member {Real} max_distance
 * @struct_end
 */

/**
 * @struct_partial FmodStudioCoreCPUUsage
 * @member {Real} dsp
 * @member {Real} stream
 * @member {Real} geometry
 * @member {Real} update
 * @member {Real} convolution1
 * @member {Real} convolution2
 * @struct_end
 */

/**
 * @struct_partial FmodStudioCreateSoundExInfo
 * @member {Real} length
 * @member {Real} file_offset
 * @member {Real} num_channels
 * @member {Real} default_frequency
 * @member {Enum.FmodStudioSoundFormat} format
 * @member {Real} decode_buffer_size
 * @member {Real} initial_subsound
 * @member {Real} num_subsounds
 * @member {Real} inclusion_list_num
 * @member {String} dls_name
 * @member {String} encryption_key
 * @member {Real} max_polyphony
 * @member {Real} suggested_sound_type
 * @member {Real} file_buffer_size
 * @member {Real} channel_order
 * @member {Real} initial_sound_group
 * @member {Real} initial_seek_position
 * @member {Real} initial_seek_pos_type
 * @member {Real} ignore_set_filesystem
 * @member {Real} audio_queue_policy
 * @member {Real} min_midi_granularity
 * @member {Real} non_block_thread_id
 * @struct_end
 */

/**
 * @struct_partial FmodStudioBufferInfo
 * @member {Real} current_usage
 * @member {Real} peak_usage
 * @member {Real} capacity
 * @member {Real} stall_count
 * @member {Real} stall_time
 * @struct_end
 */

/**
 * @struct_partial FmodStudioAdvancedSettings
 * @member {Real} command_queue_size
 * @member {Real} handle_initial_size
 * @member {Real} studio_update_period
 * @member {Real} idle_sampledata_pool_size
 * @member {Real} streaming_schedule_delay
 * @member {String} encryption_key
 * @struct_end
 */

/**
 * @struct_partial FmodStudioParameterValue
 * @member {Real} value
 * @member {Real} final_value
 * @struct_end
 */

/**
 * @struct_partial FmodStudioListener3DAttributes
 * @member {Struct.FmodStudioVec3} position
 * @member {Struct.FmodStudioVec3} velocity
 * @member {Struct.FmodStudioVec3} forward
 * @member {Struct.FmodStudioVec3} up
 * @struct_end
 */

/**
 * @struct_partial FmodStudioChannelControl3DAttributes
 * @member {Struct.FmodStudioVec3} position
 * @member {Struct.FmodStudioVec3} velocity
 * @struct_end
 */

/**
 * @struct_partial FmodStudioSystemCPUUsage
 * @member {Real} studio_update
 * @member {Struct.FmodStudioCoreCPUUsage} core
 * @struct_end
 */

/**
 * @struct_partial FmodStudioSoundInfo
 * @member {Struct.FmodStudioCreateSoundExInfo} ext_info
 * @member {String} name_or_data
 * @member {Enum.FmodStudioMode} mode
 * @member {Real} sub_sound_index
 * @struct_end
 */

/**
 * @struct_partial FmodStudioBufferUsage
 * @member {Struct.FmodStudioBufferInfo} command_queue
 * @member {Struct.FmodStudioBufferInfo} handle
 * @struct_end
 */

/**
 * @struct_partial FmodStudioListenerAttributes
 * @member {Struct.FmodStudioListener3DAttributes} attributes
 * @member {Struct.FmodStudioVec3} attenuation
 * @struct_end
 */

/**
 * @enum_partial FmodStudioResult
 * @member Ok
 * @member BadCommand
 * @member ChannelAlloc
 * @member ChannelStolen
 * @member Dma
 * @member DspConnection
 * @member DspDontProcess
 * @member DspFormat
 * @member DspInUse
 * @member DspNotFound
 * @member DspReserved
 * @member DspSilence
 * @member DspType
 * @member FileBad
 * @member FileCouldNotSeek
 * @member FileDiskEjected
 * @member FileEof
 * @member FileEndOfData
 * @member FileNotFound
 * @member Format
 * @member HeaderMismatch
 * @member Http
 * @member HttpAccess
 * @member HttpProxyAuth
 * @member HttpServerError
 * @member HttpTimeout
 * @member Initialization
 * @member Initialized
 * @member Internal
 * @member InvalidFloat
 * @member InvalidHandle
 * @member InvalidParam
 * @member InvalidPosition
 * @member InvalidSpeaker
 * @member InvalidSyncPoint
 * @member InvalidThread
 * @member InvalidVector
 * @member MaxAudible
 * @member Memory
 * @member MemoryCantPoint
 * @member Needs3D
 * @member NeedsHardware
 * @member NetConnect
 * @member NetSocketError
 * @member NetUrl
 * @member NetWouldBlock
 * @member NotReady
 * @member OutputAllocated
 * @member OutputCreateBuffer
 * @member OutputDriverCall
 * @member OutputFormat
 * @member OutputInit
 * @member OutputNoDriver
 * @member Plugin
 * @member PluginMissing
 * @member PluginResource
 * @member PluginVersion
 * @member Record
 * @member ReverbChannelGroup
 * @member ReverbInstance
 * @member SubSounds
 * @member SubSoundAllocated
 * @member SubSoundCantMove
 * @member TagNotFound
 * @member TooManyChannels
 * @member TruncatedData
 * @member Unimplemented
 * @member Uninitialized
 * @member Unsupported
 * @member Version
 * @member EventAlreadyLoaded
 * @member EventLiveUpdateBusy
 * @member EventLiveUpdateMismatch
 * @member EventLiveUpdateTimeout
 * @member EventNotFound
 * @member StudioUninitialized
 * @member StudioNotLoaded
 * @member InvalidString
 * @member AlreadyLocked
 * @member NotLocked
 * @member RecordDisconnected
 * @member TooManySamples
 * @enum_end
 */

/**
 * @enum_partial FmodStudioDebugFlags
 * @member LevelNone
 * @member LevelError
 * @member LevelWarning
 * @member LevelLog
 * @member TypeMemory
 * @member TypeFile
 * @member TypeCodec
 * @member TypeTrace
 * @member DisplayTimestamps
 * @member DisplayLineNumbers
 * @member DisplayThread
 * @enum_end
 */

/**
 * @enum_partial FmodStudioDebugMode
 * @member Tty
 * @member File
 * @member Callback
 * @enum_end
 */

/**
 * @enum_partial FmodStudioInitFlags
 * @member Normal
 * @member LiveUpdate
 * @member AllowMissingPlugins
 * @member SynchronousUpdate
 * @member DeferredCallbacks
 * @member LoadFromUpdate
 * @member MemoryTracking
 * @enum_end
 */

/**
 * @enum_partial FmodStudioLoadingState
 * @member Unloading
 * @member Unloaded
 * @member Loading
 * @member Loaded
 * @member Error
 * @enum_end
 */

/**
 * @enum_partial FmodStudioPlaybackState
 * @member Playing
 * @member Sustaining
 * @member Stopped
 * @member Starting
 * @member Stopping
 * @enum_end
 */

/**
 * @enum_partial FmodStudioStopMode
 * @member AllowFadeOut
 * @member Immediate
 * @enum_end
 */

/**
 * @enum_partial FmodStudioEventProperty
 * @member ChannelPriority
 * @member ScheduleDelay
 * @member ScheduleLookAhead
 * @member MinimumDistance
 * @member MaximumDistance
 * @member CoolDown
 * @enum_end
 */

/**
 * @enum_partial FmodStudioParameterFlags
 * @member ReadOnly
 * @member Automatic
 * @member Global
 * @member Discrete
 * @member Labeled
 * @enum_end
 */

/**
 * @enum_partial FmodStudioUserPropertyType
 * @member Integer
 * @member Boolean
 * @member Float
 * @member String
 * @enum_end
 */

/**
 * @enum_partial FmodStudioLoadBankFlags
 * @member Normal
 * @member NonBlocking
 * @member DecompressSamples
 * @member Unencrypted
 * @enum_end
 */

/**
 * @enum_partial FmodStudioCommandCaptureFlags
 * @member Normal
 * @member FileFlush
 * @member SkipInitialState
 * @enum_end
 */

/**
 * @enum_partial FmodStudioCommandReplayFlags
 * @member Normal
 * @member SkipCleanup
 * @member FastForward
 * @member SkipBankLoad
 * @enum_end
 */

/**
 * @enum_partial FmodStudioEventCallbackType
 * @member Created
 * @member Destroyed
 * @member Starting
 * @member Started
 * @member Restarted
 * @member Stopped
 * @member StartFailed
 * @member CreateProgrammerSound
 * @member DestroyProgrammerSound
 * @member PluginCreated
 * @member PluginDestroyed
 * @member TimelineMarker
 * @member TimelineBeat
 * @member SoundPlayed
 * @member SoundStopped
 * @member RealToVirtual
 * @member VirtualToReal
 * @member StartEventCommand
 * @member NestedTimelineBeat
 * @member All
 * @enum_end
 */

/**
 * @enum_partial FmodStudioMode
 * @member Default
 * @member LoopOff
 * @member LoopOn
 * @member LoopBidi
 * @member _2D
 * @member _3D
 * @member CreateStream
 * @member CreateSample
 * @member CreateCompressedSample
 * @member OpenUser
 * @member OpenMemory
 * @member OpenMemoryPoint
 * @member OpenRaw
 * @member OpenOnly
 * @member AccurateTime
 * @member MpegSearch
 * @member NonBlocking
 * @member Unique
 * @member _3DHeadRelative
 * @member _3DWorldRelative
 * @member _3DInverseRollOff
 * @member _3DLinearRollOff
 * @member _3DLinearSquareRollOff
 * @member _3DInverseTaperedRollOff
 * @member _3DCustomRollOff
 * @member _3DIgnoreGeometry
 * @member IgnoreTags
 * @member LowMem
 * @member VirtualPlayFromStart
 * @enum_end
 */

/**
 * @enum_partial FmodStudioSoundFormat
 * @member None
 * @member Pcm8
 * @member Pcm16
 * @member Pcm24
 * @member Pcm32
 * @member PcmFloat
 * @member BitStream
 * @enum_end
 */

/**
 * @const_partial macros
 * @const_end
 */

