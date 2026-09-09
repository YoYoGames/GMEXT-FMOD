/**
 * @function_partial fmod_last_result
 * @returns {Enum.FmodResult}
 * @function_end
 */

/**
 * @function_partial fmod_debug_initialize
 * @param {Enum.FmodDebugFlags} flags
 * @param {Enum.FmodDebugMode} mode
 * @function_end
 */

/**
 * @function_partial fmod_error_string
 * @param {Enum.FmodResult} result
 * @returns {String}
 * @function_end
 */

/**
 * @function_partial fmod_fetch_callbacks
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_shutdown
 * @function_end
 */

/**
 * @function_partial fmod_file_get_disk_busy
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_file_set_disk_busy
 * @param {Real} busy
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_memory_get_stats
 * @param {Real} blocking
 * @returns {Struct.FmodMemoryStats}
 * @function_end
 */

/**
 * @function_partial fmod_thread_set_attributes
 * @param {Real} thread_type
 * @param {Real} affinity
 * @param {Real} priority
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_set_frequency
 * @param {Real} channel_ref
 * @param {Real} frequency
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_get_frequency
 * @param {Real} channel_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_set_priority
 * @param {Real} channel_ref
 * @param {Real} priority
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_get_priority
 * @param {Real} channel_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_set_position
 * @param {Real} channel_ref
 * @param {Real} position
 * @param {Real} time_unit
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_get_position
 * @param {Real} channel_ref
 * @param {Real} time_unit
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_set_channel_group
 * @param {Real} channel_ref
 * @param {Real} channel_group_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_get_channel_group
 * @param {Real} channel_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_set_loop_count
 * @param {Real} channel_ref
 * @param {Real} loop_count
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_get_loop_count
 * @param {Real} channel_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_set_loop_points
 * @param {Real} channel_ref
 * @param {Real} loop_start
 * @param {Real} loop_start_type
 * @param {Real} loop_end
 * @param {Real} loop_end_type
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_get_loop_points
 * @param {Real} channel_ref
 * @param {Real} start_type
 * @param {Real} end_type
 * @returns {Struct.FmodLoopPoints}
 * @function_end
 */

/**
 * @function_partial fmod_channel_is_virtual
 * @param {Real} channel_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_get_index
 * @param {Real} channel_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_get_current_sound
 * @param {Real} channel_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_get_system_object
 * @param {Real} channel_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_create
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_init
 * @param {Real} max_channels
 * @param {Real} flags
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_release
 * @param {Real} system_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_close
 * @param {Real} system_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_update
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_get_channels_playing
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_get_channel
 * @param {Real} index
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_get_master_channel_group
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_set_output
 * @param {Real} output
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_get_output
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_get_num_drivers
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_set_driver
 * @param {Real} driver
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_get_driver
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_set_software_channels
 * @param {Real} software_channels
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_get_software_channels
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_set_3d_settings
 * @param {Real} doppler_scale
 * @param {Real} distance_factor
 * @param {Real} rolloff_scale
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_get_3d_settings
 * @returns {Struct.FmodSystem3DSettings}
 * @function_end
 */

/**
 * @function_partial fmod_system_set_3d_listener_attributes
 * @param {Real} listener_index
 * @param {Struct.FmodVec3} position
 * @param {Struct.FmodVec3} velocity
 * @param {Struct.FmodVec3} forward
 * @param {Struct.FmodVec3} up
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_get_3d_listener_attributes
 * @param {Real} listener_index
 * @returns {Struct.FmodListener3DAttributes}
 * @function_end
 */

/**
 * @function_partial fmod_system_get_record_num_drivers
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_get_record_driver_info
 * @param {Real} record_driver_index
 * @returns {Struct.FmodRecordDriverInfo}
 * @function_end
 */

/**
 * @function_partial fmod_system_get_record_position
 * @param {Real} device_index
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_record_start
 * @param {Real} device_index
 * @param {Real} sound_ref
 * @param {Real} loop
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_record_stop
 * @param {Real} device_index
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_is_recording
 * @param {Real} device_index
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_create_dsp
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_create_dsp_by_type
 * @param {Enum.FmodDspType} dsp_type
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_get_dsp_buffer_size
 * @returns {Struct.FmodDSPBufferSize}
 * @function_end
 */

/**
 * @function_partial fmod_system_set_dsp_buffer_size
 * @param {Real} buff_size
 * @param {Real} num_buffers
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_get_software_format
 * @returns {Struct.FmodSoftwareFormat}
 * @function_end
 */

/**
 * @function_partial fmod_system_set_software_format
 * @param {Real} sample_rate
 * @param {Enum.FmodSpeakerMode} speaker_mode
 * @param {Real} num_raw_speakers
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_set_stream_buffer_size
 * @param {Real} file_buffer_size
 * @param {Real} file_buffer_size_type
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_get_driver_info
 * @param {Real} driver_id
 * @returns {Struct.FmodDriverInfo}
 * @function_end
 */

/**
 * @function_partial fmod_system_create_channel_group
 * @param {String} name
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_play_dsp
 * @param {Real} dsp_ref
 * @param {Real} channel_group_ref
 * @param {Real} paused
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_select
 * @param {Real} system_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_adopt
 * @param {Real} system_ptr
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_count
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_get_version
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_get_master_sound_group
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_get_advanced_settings
 * @returns {Struct.FmodAdvancedSettings}
 * @function_end
 */

/**
 * @function_partial fmod_system_set_advanced_settings
 * @param {Struct.FmodAdvancedSettings} settings
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_get_network_proxy
 * @returns {String}
 * @function_end
 */

/**
 * @function_partial fmod_system_set_network_proxy
 * @param {String} proxy
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_get_network_timeout
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_set_network_timeout
 * @param {Real} timeout_ms
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_get_speaker_mode_channels
 * @param {Enum.FmodSpeakerMode} mode
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_get_speaker_position
 * @param {Real} speaker
 * @returns {Struct.FmodSpeakerPosition}
 * @function_end
 */

/**
 * @function_partial fmod_system_set_speaker_position
 * @param {Real} speaker
 * @param {Real} x
 * @param {Real} y
 * @param {Real} active
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_get_reverb_properties
 * @param {Real} instance
 * @returns {Struct.FmodReverbProperties}
 * @function_end
 */

/**
 * @function_partial fmod_system_set_reverb_properties
 * @param {Real} instance
 * @param {Struct.FmodReverbProperties} props
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_get_default_mix_matrix
 * @param {Enum.FmodSpeakerMode} source_speaker_mode
 * @param {Enum.FmodSpeakerMode} target_speaker_mode
 * @returns {Struct.FmodDSPMixMatrix}
 * @function_end
 */

/**
 * @function_partial fmod_system_get_cpu_usage
 * @returns {Struct.FmodCPUUsage}
 * @function_end
 */

/**
 * @function_partial fmod_system_get_file_usage
 * @returns {Struct.FmodFileUsage}
 * @function_end
 */

/**
 * @function_partial fmod_system_get_stream_buffer_size
 * @returns {Struct.FmodStreamBufferSize}
 * @function_end
 */

/**
 * @function_partial fmod_system_get_3d_num_listeners
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_set_3d_num_listeners
 * @param {Real} num
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_set_3d_rolloff_callback
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_mixer_suspend
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_mixer_resume
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_lock_dsp
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_unlock_dsp
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_get_user_data
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_set_user_data
 * @param {Real} user_data
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_attach_channel_group_to_port
 * @param {Real} port_type
 * @param {Real} port_index
 * @param {Real} channel_group_ref
 * @param {Real} pass_thru
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_detach_channel_group_from_port
 * @param {Real} channel_group_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_create_sound_group
 * @param {String} name
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_create_geometry
 * @param {Real} max_polygons
 * @param {Real} max_vertices
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_load_geometry
 * @param {Buffer} data
 * @param {Real} data_size
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_get_geometry_occlusion
 * @param {Struct.FmodVec3} listener
 * @param {Struct.FmodVec3} source
 * @returns {Struct.FmodOcclusion}
 * @function_end
 */

/**
 * @function_partial fmod_system_get_geometry_settings
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_set_geometry_settings
 * @param {Real} max_world_size
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_create_reverb_3d
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_create_sound
 * @param {String} name_or_data
 * @param {Real} mode
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_create_sound_ex
 * @param {String} name_or_data
 * @param {Real} mode
 * @param {Struct.FmodCreateSoundExInfo} ex_info
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_create_stream
 * @param {String} name_or_data
 * @param {Real} mode
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_play_sound
 * @param {Real} sound_ref
 * @param {Real} channel_group_ref
 * @param {Real} pause
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_get_length
 * @param {Real} sound_ref
 * @param {Real} length_type
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_set_defaults
 * @param {Real} sound_ref
 * @param {Real} frequency
 * @param {Real} priority
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_set_mode
 * @param {Real} sound_ref
 * @param {Real} mode
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_get_mode
 * @param {Real} sound_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_get_format
 * @param {Real} sound_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_get_name
 * @param {Real} sound_ref
 * @returns {String}
 * @function_end
 */

/**
 * @function_partial fmod_sound_get_defaults
 * @param {Real} sound_ref
 * @returns {Struct.FmodSoundDefaults}
 * @function_end
 */

/**
 * @function_partial fmod_sound_set_loop_count
 * @param {Real} sound_ref
 * @param {Real} count
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_get_loop_count
 * @param {Real} sound_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_set_loop_points
 * @param {Real} sound_ref
 * @param {Real} loop_start
 * @param {Real} loop_start_type
 * @param {Real} loop_end
 * @param {Real} loop_end_type
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_get_loop_points
 * @param {Real} sound_ref
 * @param {Real} start_type
 * @param {Real} end_type
 * @returns {Struct.FmodLoopPoints}
 * @function_end
 */

/**
 * @function_partial fmod_sound_set_3d_min_max_distance
 * @param {Real} sound_ref
 * @param {Real} min
 * @param {Real} max
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_get_3d_min_max_distance
 * @param {Real} sound_ref
 * @returns {Struct.FmodSoundMinMaxDistance}
 * @function_end
 */

/**
 * @function_partial fmod_sound_set_3d_cone_settings
 * @param {Real} sound_ref
 * @param {Real} inside_cone_angle
 * @param {Real} outside_cone_angle
 * @param {Real} outside_volume
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_get_3d_cone_settings
 * @param {Real} sound_ref
 * @returns {Struct.FmodConeSettings}
 * @function_end
 */

/**
 * @function_partial fmod_sound_set_3d_custom_rolloff
 * @param {Real} sound_ref
 * @param {Any} points
 * @param {Real} num_points
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_get_3d_custom_rolloff
 * @param {Real} sound_ref
 * @function_end
 */

/**
 * @function_partial fmod_sound_get_num_sync_points
 * @param {Real} sound_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_get_sync_point
 * @param {Real} sound_ref
 * @param {Real} sync_point_index
 * @param {Real} offset_type
 * @returns {Struct.FmodSyncPointInfo}
 * @function_end
 */

/**
 * @function_partial fmod_sound_add_sync_point
 * @param {Real} sound_ref
 * @param {Real} offset
 * @param {Real} offset_type
 * @param {String} name
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_delete_sync_point
 * @param {Real} sound_ref
 * @param {Real} sync_point_index
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_get_music_num_channels
 * @param {Real} sound_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_set_music_channel_volume
 * @param {Real} sound_ref
 * @param {Real} channel_index
 * @param {Real} volume
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_get_music_channel_volume
 * @param {Real} sound_ref
 * @param {Real} channel_index
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_set_music_speed
 * @param {Real} sound_ref
 * @param {Real} speed
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_get_music_speed
 * @param {Real} sound_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_set_sound_group
 * @param {Real} sound_ref
 * @param {Real} sound_group_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_get_sound_group
 * @param {Real} sound_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_set_user_data
 * @param {Real} sound_ref
 * @param {Real} user_data
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_get_user_data
 * @param {Real} sound_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_release
 * @param {Real} sound_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_get_system_object
 * @param {Real} sound_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_get_open_state
 * @param {Real} sound_ref
 * @returns {Struct.FmodSoundOpenState}
 * @function_end
 */

/**
 * @function_partial fmod_sound_get_num_tags
 * @param {Real} sound_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_get_tag
 * @param {Real} sound_ref
 * @param {String} name
 * @param {Real} index
 * @returns {Struct.FmodSoundTag}
 * @function_end
 */

/**
 * @function_partial fmod_sound_get_num_sub_sounds
 * @param {Real} sound_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_get_sub_sound
 * @param {Real} sound_ref
 * @param {Real} index
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_get_sub_sound_parent
 * @param {Real} sound_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_read_data
 * @param {Real} sound_ref
 * @param {Buffer} data
 * @param {Real} length
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_seek_data
 * @param {Real} sound_ref
 * @param {Real} pcm
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_lock
 * @param {Real} sound_ref
 * @param {Real} offset
 * @param {Real} length
 * @param {Buffer} buffer1
 * @param {Buffer} buffer2
 * @returns {Struct.FmodSoundLockLengths}
 * @function_end
 */

/**
 * @function_partial fmod_sound_unlock
 * @param {Real} sound_ref
 * @param {Buffer} buffer1
 * @param {Buffer} buffer2
 * @param {Real} length1
 * @param {Real} length2
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_group_get_num_channels
 * @param {Real} channel_group_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_group_get_channel
 * @param {Real} channel_group_ref
 * @param {Real} index
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_group_add_group
 * @param {Real} channel_group_ref
 * @param {Real} child_channel_group_ref
 * @param {Real} propagate_dsp_clock
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_group_get_num_groups
 * @param {Real} channel_group_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_group_get_group
 * @param {Real} channel_group_ref
 * @param {Real} group_index
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_group_get_parent_group
 * @param {Real} channel_group_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_group_get_name
 * @param {Real} channel_group_ref
 * @returns {String}
 * @function_end
 */

/**
 * @function_partial fmod_channel_group_release
 * @param {Real} channel_group_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_group_get_system_object
 * @param {Real} channel_group_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_group_set_max_audible
 * @param {Real} sound_group_ref
 * @param {Real} max_audible
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_group_get_max_audible
 * @param {Real} sound_group_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_group_set_max_audible_behavior
 * @param {Real} sound_group_ref
 * @param {Real} behavior
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_group_get_max_audible_behavior
 * @param {Real} sound_group_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_group_set_mute_fade_speed
 * @param {Real} sound_group_ref
 * @param {Real} speed
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_group_get_mute_fade_speed
 * @param {Real} sound_group_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_group_set_volume
 * @param {Real} sound_group_ref
 * @param {Real} volume
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_group_get_volume
 * @param {Real} sound_group_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_group_get_num_sounds
 * @param {Real} sound_group_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_group_get_sound
 * @param {Real} sound_group_ref
 * @param {Real} sound_index
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_group_get_num_playing
 * @param {Real} sound_group_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_group_stop
 * @param {Real} sound_group_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_group_set_user_data
 * @param {Real} sound_group_ref
 * @param {Real} user_data
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_group_get_user_data
 * @param {Real} sound_group_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_group_get_name
 * @param {Real} sound_group_ref
 * @returns {String}
 * @function_end
 */

/**
 * @function_partial fmod_sound_group_release
 * @param {Real} sound_group_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_group_get_system_object
 * @param {Real} sound_group_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_reverb_3d_set_active
 * @param {Real} reverb_3d_ref
 * @param {Real} active
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_reverb_3d_get_active
 * @param {Real} reverb_3d_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_reverb_3d_set_properties
 * @param {Real} reverb_3d_ref
 * @param {Real} decay_time
 * @param {Real} early_delay
 * @param {Real} late_delay
 * @param {Real} hf_reference
 * @param {Real} hf_decay_ratio
 * @param {Real} diffusion
 * @param {Real} density
 * @param {Real} low_shelf_frequency
 * @param {Real} low_shelf_gain
 * @param {Real} high_cut
 * @param {Real} early_late_mix
 * @param {Real} wet_level
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_reverb_3d_get_properties
 * @param {Real} reverb_3d_ref
 * @returns {Struct.FmodReverbProperties}
 * @function_end
 */

/**
 * @function_partial fmod_reverb_3d_set_3d_attributes
 * @param {Real} reverb_3d_ref
 * @param {Struct.FmodVec3} position
 * @param {Real} min_distance
 * @param {Real} max_distance
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_reverb_3d_get_3d_attributes
 * @param {Real} reverb_3d_ref
 * @returns {Struct.FmodReverb3DAttributes}
 * @function_end
 */

/**
 * @function_partial fmod_reverb_3d_set_user_data
 * @param {Real} reverb_3d_ref
 * @param {Real} user_data
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_reverb_3d_get_user_data
 * @param {Real} reverb_3d_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_reverb_3d_release
 * @param {Real} reverb_3d_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_add_fade_point
 * @param {Real} channel_control_ref
 * @param {Real} dsp_clock
 * @param {Real} volume
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_remove_fade_points
 * @param {Real} channel_control_ref
 * @param {Real} dsp_clock_start
 * @param {Real} dsp_clock_end
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_set_fade_point_ramp
 * @param {Real} channel_control_ref
 * @param {Real} dsp_clock
 * @param {Real} volume
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_get_fade_point_count
 * @param {Real} channel_control_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_get_fade_point_at
 * @param {Real} channel_control_ref
 * @param {Real} index
 * @returns {Struct.FmodFadePoint}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_is_playing
 * @param {Real} channel_control_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_stop
 * @param {Real} channel_control_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_set_paused
 * @param {Real} channel_control_ref
 * @param {Real} paused
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_get_paused
 * @param {Real} channel_control_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_set_mode
 * @param {Real} channel_control_ref
 * @param {Real} mode
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_get_mode
 * @param {Real} channel_control_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_set_pitch
 * @param {Real} channel_control_ref
 * @param {Real} pitch
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_get_pitch
 * @param {Real} channel_control_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_get_audibility
 * @param {Real} channel_control_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_set_volume
 * @param {Real} channel_control_ref
 * @param {Real} volume
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_get_volume
 * @param {Real} channel_control_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_set_volume_ramp
 * @param {Real} channel_control_ref
 * @param {Real} ramp
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_get_volume_ramp
 * @param {Real} channel_control_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_set_mute
 * @param {Real} channel_control_ref
 * @param {Real} mute
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_get_mute
 * @param {Real} channel_control_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_set_3d_doppler_level
 * @param {Real} channel_control_ref
 * @param {Real} level
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_get_3d_doppler_level
 * @param {Real} channel_control_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_set_3d_level
 * @param {Real} channel_control_ref
 * @param {Real} level
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_get_3d_level
 * @param {Real} channel_control_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_set_3d_min_max_distance
 * @param {Real} channel_control_ref
 * @param {Real} min_dist
 * @param {Real} max_dist
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_get_3d_min_max_distance
 * @param {Real} channel_control_ref
 * @returns {Struct.FmodMinMaxDistance}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_set_3d_cone_settings
 * @param {Real} channel_control_ref
 * @param {Real} inside_cone_angle
 * @param {Real} outside_cone_angle
 * @param {Real} outside_volume
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_get_3d_cone_settings
 * @param {Real} channel_control_ref
 * @returns {Struct.FmodConeSettings}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_set_3d_cone_orientation
 * @param {Real} channel_control_ref
 * @param {Struct.FmodVec3} orientation
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_get_3d_cone_orientation
 * @param {Real} channel_control_ref
 * @returns {Struct.FmodVec3}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_set_3d_occlusion
 * @param {Real} channel_control_ref
 * @param {Real} direct_occlusion
 * @param {Real} reverb_occlusion
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_get_3d_occlusion
 * @param {Real} channel_control_ref
 * @returns {Struct.FmodOcclusion}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_set_3d_attributes
 * @param {Real} channel_control_ref
 * @param {Struct.FmodVec3} position
 * @param {Struct.FmodVec3} velocity
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_get_3d_attributes
 * @param {Real} channel_control_ref
 * @returns {Struct.FmodChannelControl3DAttributes}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_set_3d_spread
 * @param {Real} channel_control_ref
 * @param {Real} angle
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_get_3d_spread
 * @param {Real} channel_control_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_set_3d_distance_filter
 * @param {Real} channel_control_ref
 * @param {Real} custom
 * @param {Real} custom_level
 * @param {Real} center_freq
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_get_3d_distance_filter
 * @param {Real} channel_control_ref
 * @returns {Struct.FmodDistanceFilter}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_set_3d_custom_rolloff
 * @param {Real} channel_control_ref
 * @param {Any} points
 * @param {Real} num_points
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_get_3d_custom_rolloff_count
 * @param {Real} channel_control_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_get_3d_custom_rolloff_at
 * @param {Real} channel_control_ref
 * @param {Real} index
 * @returns {Struct.FmodVec3}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_set_pan
 * @param {Real} channel_control_ref
 * @param {Real} pan
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_set_mix_levels_output
 * @param {Real} channel_control_ref
 * @param {Real} front_left
 * @param {Real} front_right
 * @param {Real} center
 * @param {Real} lfe
 * @param {Real} surround_left
 * @param {Real} surround_right
 * @param {Real} back_left
 * @param {Real} back_right
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_set_mix_levels_input
 * @param {Real} channel_control_ref
 * @param {Real} levels
 * @param {Real} num_levels
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_set_mix_matrix
 * @param {Real} channel_control_ref
 * @param {Real} matrix
 * @param {Real} out_channels
 * @param {Real} in_channels
 * @param {Real} in_channel_hop
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_get_mix_matrix
 * @param {Real} channel_control_ref
 * @param {Real} in_channel_hop
 * @returns {Struct.FmodDSPMixMatrix}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_set_reverb_properties
 * @param {Real} channel_control_ref
 * @param {Real} reverb_instance
 * @param {Real} wet
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_get_reverb_properties
 * @param {Real} channel_control_ref
 * @param {Real} reverb_instance
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_set_low_pass_gain
 * @param {Real} channel_control_ref
 * @param {Real} gain
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_get_low_pass_gain
 * @param {Real} channel_control_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_add_dsp
 * @param {Real} channel_control_ref
 * @param {Real} dsp_chain_offset
 * @param {Real} dsp_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_remove_dsp
 * @param {Real} channel_control_ref
 * @param {Real} dsp_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_get_num_dsps
 * @param {Real} channel_control_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_get_dsp
 * @param {Real} channel_control_ref
 * @param {Real} index
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_set_dsp_index
 * @param {Real} channel_control_ref
 * @param {Real} dsp_ref
 * @param {Real} chain_index
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_get_dsp_index
 * @param {Real} channel_control_ref
 * @param {Real} dsp_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_set_user_data
 * @param {Real} channel_control_ref
 * @param {Real} user_data
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_get_user_data
 * @param {Real} channel_control_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_get_system_object
 * @param {Real} channel_control_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_get_delay
 * @param {Real} channel_ref
 * @returns {Struct.FmodDelay}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_set_delay
 * @param {Real} channel_ref
 * @param {Real} dspclock_start
 * @param {Real} dspclock_end
 * @param {Real} stop_channels
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_get_dsp_clock
 * @param {Real} channel_ref
 * @returns {Struct.FmodDSPClock}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_set_callback
 * @param {Real} channel_ref
 * @param {Function} [callback]
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_dsp_add_input
 * @param {Real} dsp_ref
 * @param {Real} dsp_input_ref
 * @param {Real} dsp_connection_type
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_dsp_get_num_inputs
 * @param {Real} dsp_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_dsp_get_num_outputs
 * @param {Real} dsp_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_dsp_disconnect_all
 * @param {Real} dsp_ref
 * @param {Real} inputs
 * @param {Real} outputs
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_dsp_get_num_parameters
 * @param {Real} dsp_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_dsp_set_parameter_float
 * @param {Real} dsp_ref
 * @param {Real} index
 * @param {Real} value
 * @function_end
 */

/**
 * @function_partial fmod_dsp_get_parameter_float
 * @param {Real} dsp_ref
 * @param {Real} index
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_dsp_set_parameter_int
 * @param {Real} dsp_ref
 * @param {Real} index
 * @param {Real} value
 * @function_end
 */

/**
 * @function_partial fmod_dsp_get_parameter_int
 * @param {Real} dsp_ref
 * @param {Real} index
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_dsp_set_parameter_bool
 * @param {Real} dsp_ref
 * @param {Real} index
 * @param {Real} value
 * @function_end
 */

/**
 * @function_partial fmod_dsp_get_parameter_bool
 * @param {Real} dsp_ref
 * @param {Real} index
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_dsp_release
 * @param {Real} dsp_ref
 * @function_end
 */

/**
 * @function_partial fmod_dsp_get_system_object
 * @param {Real} dsp_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_dsp_get_input
 * @param {Real} dsp_ref
 * @param {Real} index
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_dsp_get_output
 * @param {Real} dsp_ref
 * @param {Real} index
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_dsp_disconnect_from
 * @param {Real} dsp_ref
 * @param {Real} target_dsp
 * @function_end
 */

/**
 * @function_partial fmod_dsp_get_data_parameter_index
 * @param {Real} dsp_ref
 * @param {Real} data_type
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_dsp_set_parameter_data
 * @param {Real} dsp_ref
 * @param {Real} index
 * @param {Buffer} buffer
 * @param {Real} length
 * @function_end
 */

/**
 * @function_partial fmod_dsp_get_parameter_data
 * @param {Real} dsp_ref
 * @param {Real} index
 * @param {Buffer} buffer
 * @param {Real} length
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_dsp_get_parameter_info
 * @param {Real} dsp_ref
 * @param {Real} index
 * @returns {Struct.FmodDSPParameterInfo}
 * @function_end
 */

/**
 * @function_partial fmod_dsp_set_channel_format
 * @param {Real} dsp_ref
 * @param {Real} channel_mask
 * @param {Real} num_channels
 * @function_end
 */

/**
 * @function_partial fmod_dsp_get_channel_format
 * @param {Real} dsp_ref
 * @returns {Struct.FmodDSPChannelFormat}
 * @function_end
 */

/**
 * @function_partial fmod_dsp_get_output_channel_format
 * @param {Real} dsp_ref
 * @returns {Struct.FmodDSPChannelFormat}
 * @function_end
 */

/**
 * @function_partial fmod_dsp_get_metering_info
 * @param {Real} dsp_ref
 * @returns {Struct.FmodDSPMeteringInfo}
 * @function_end
 */

/**
 * @function_partial fmod_dsp_set_metering_enabled
 * @param {Real} dsp_ref
 * @param {Real} input_enabled
 * @param {Real} output_enabled
 * @function_end
 */

/**
 * @function_partial fmod_dsp_get_metering_enabled
 * @param {Real} dsp_ref
 * @returns {Struct.FmodDSPMeteringEnabled}
 * @function_end
 */

/**
 * @function_partial fmod_dsp_set_active
 * @param {Real} dsp_ref
 * @param {Real} active
 * @function_end
 */

/**
 * @function_partial fmod_dsp_get_active
 * @param {Real} dsp_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_dsp_set_bypass
 * @param {Real} dsp_ref
 * @param {Real} bypass
 * @function_end
 */

/**
 * @function_partial fmod_dsp_get_bypass
 * @param {Real} dsp_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_dsp_set_wet_dry_mix
 * @param {Real} dsp_ref
 * @param {Real} prewet
 * @param {Real} postwet
 * @param {Real} dry
 * @function_end
 */

/**
 * @function_partial fmod_dsp_get_wet_dry_mix
 * @param {Real} dsp_ref
 * @returns {Struct.FmodDSPWetDryMix}
 * @function_end
 */

/**
 * @function_partial fmod_dsp_get_idle
 * @param {Real} dsp_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_dsp_reset
 * @param {Real} dsp_ref
 * @function_end
 */

/**
 * @function_partial fmod_dsp_get_type
 * @param {Real} dsp_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_dsp_get_info
 * @param {Real} dsp_ref
 * @returns {Struct.FmodDSPInfo}
 * @function_end
 */

/**
 * @function_partial fmod_dsp_get_cpu_usage
 * @param {Real} dsp_ref
 * @returns {Struct.FmodDSPCPUUsage}
 * @function_end
 */

/**
 * @function_partial fmod_dsp_set_user_data
 * @param {Real} dsp_ref
 * @param {Real} user_data
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_dsp_get_user_data
 * @param {Real} dsp_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_dsp_set_callback
 * @param {Real} dsp_ref
 * @param {Function} [callback]
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_dsp_connection_set_mix
 * @param {Real} connection_ref
 * @param {Real} volume
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_dsp_connection_get_mix
 * @param {Real} connection_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_dsp_connection_set_mix_matrix
 * @param {Real} connection_ref
 * @param {Real} matrix
 * @param {Real} out_channels
 * @param {Real} in_channels
 * @param {Real} in_channel_hop
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_dsp_connection_get_mix_matrix
 * @param {Real} connection_ref
 * @param {Real} in_channel_hop
 * @returns {Struct.FmodDSPMixMatrix}
 * @function_end
 */

/**
 * @function_partial fmod_dsp_connection_get_input
 * @param {Real} connection_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_dsp_connection_get_output
 * @param {Real} connection_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_dsp_connection_get_type
 * @param {Real} connection_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_dsp_connection_set_user_data
 * @param {Real} connection_ref
 * @param {Real} user_data
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_dsp_connection_get_user_data
 * @param {Real} connection_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_geometry_add_polygon
 * @param {Real} geometry_ref
 * @param {Real} direct_occlusion
 * @param {Real} reverb_occlusion
 * @param {Real} double_sided
 * @param {Real} num_vertices
 * @param {Buffer} vertices
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_geometry_set_polygon_attributes
 * @param {Real} geometry_ref
 * @param {Real} polygon_index
 * @param {Real} direct_occlusion
 * @param {Real} reverb_occlusion
 * @param {Real} double_sided
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_geometry_get_polygon_attributes
 * @param {Real} geometry_ref
 * @param {Real} polygon_index
 * @returns {Struct.FmodPolygonAttributes}
 * @function_end
 */

/**
 * @function_partial fmod_geometry_get_polygon_num_vertices
 * @param {Real} geometry_ref
 * @param {Real} polygon_index
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_geometry_set_polygon_vertex
 * @param {Real} geometry_ref
 * @param {Real} polygon_index
 * @param {Real} vertex_index
 * @param {Struct.FmodVec3} vertex
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_geometry_get_polygon_vertex
 * @param {Real} geometry_ref
 * @param {Real} polygon_index
 * @param {Real} vertex_index
 * @returns {Struct.FmodVec3}
 * @function_end
 */

/**
 * @function_partial fmod_geometry_get_num_polygons
 * @param {Real} geometry_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_geometry_get_max_polygons
 * @param {Real} geometry_ref
 * @returns {Struct.FmodGeometryMaxPolygons}
 * @function_end
 */

/**
 * @function_partial fmod_geometry_set_position
 * @param {Real} geometry_ref
 * @param {Real} x
 * @param {Real} y
 * @param {Real} z
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_geometry_get_position
 * @param {Real} geometry_ref
 * @returns {Struct.FmodVec3}
 * @function_end
 */

/**
 * @function_partial fmod_geometry_set_rotation
 * @param {Real} geometry_ref
 * @param {Real} forward_x
 * @param {Real} forward_y
 * @param {Real} forward_z
 * @param {Real} up_x
 * @param {Real} up_y
 * @param {Real} up_z
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_geometry_get_rotation
 * @param {Real} geometry_ref
 * @returns {Struct.FmodGeometryRotation}
 * @function_end
 */

/**
 * @function_partial fmod_geometry_set_scale
 * @param {Real} geometry_ref
 * @param {Real} scale_x
 * @param {Real} scale_y
 * @param {Real} scale_z
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_geometry_get_scale
 * @param {Real} geometry_ref
 * @returns {Struct.FmodVec3}
 * @function_end
 */

/**
 * @function_partial fmod_geometry_set_user_data
 * @param {Real} geometry_ref
 * @param {Real} user_data
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_geometry_get_user_data
 * @param {Real} geometry_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_geometry_get_active
 * @param {Real} geometry_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_geometry_set_active
 * @param {Real} geometry_ref
 * @param {Real} active
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_geometry_save
 * @param {Real} geometry_ref
 * @param {String} filename
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_geometry_release
 * @param {Real} geometry_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @struct_partial FmodSoundDefaults
 * @member {Real} frequency
 * @member {Real} priority
 * @struct_end
 */

/**
 * @struct_partial FmodLoopPoints
 * @member {Real} loop_start
 * @member {Real} loop_end
 * @struct_end
 */

/**
 * @struct_partial FmodSoundMinMaxDistance
 * @member {Real} min_distance
 * @member {Real} max_distance
 * @struct_end
 */

/**
 * @struct_partial FmodConeSettings
 * @member {Real} inside_cone_angle
 * @member {Real} outside_cone_angle
 * @member {Real} outside_volume
 * @struct_end
 */

/**
 * @struct_partial FmodSystem3DSettings
 * @member {Real} doppler_scale
 * @member {Real} distance_factor
 * @member {Real} rolloff_scale
 * @struct_end
 */

/**
 * @struct_partial FmodVec3
 * @member {Real} x
 * @member {Real} y
 * @member {Real} z
 * @struct_end
 */

/**
 * @struct_partial FmodSyncPointInfo
 * @member {String} name
 * @member {Real} offset
 * @struct_end
 */

/**
 * @struct_partial FmodRecordDriverInfo
 * @member {String} name
 * @member {Enum.FmodSpeakerMode} speaker_mode
 * @member {Real} speaker_mode_channels
 * @member {Real} sample_rate
 * @member {Enum.FmodDriverState} state
 * @struct_end
 */

/**
 * @struct_partial FmodDSPMixMatrix
 * @member {Real} out_channels
 * @member {Real} in_channels
 * @member {Real} matrix
 * @struct_end
 */

/**
 * @struct_partial FmodDSPChannelFormat
 * @member {Real} channel_mask
 * @member {Real} num_channels
 * @struct_end
 */

/**
 * @struct_partial FmodDSPMeteringInfo
 * @member {Real} num_samples_analysed
 * @struct_end
 */

/**
 * @struct_partial FmodDSPMeteringEnabled
 * @member {Real} input_enabled
 * @member {Real} output_enabled
 * @struct_end
 */

/**
 * @struct_partial FmodDSPParameterInfo
 * @member {String} name
 * @member {String} label
 * @member {String} description
 * @struct_end
 */

/**
 * @struct_partial FmodDSPWetDryMix
 * @member {Real} prewet
 * @member {Real} postwet
 * @member {Real} dry
 * @struct_end
 */

/**
 * @struct_partial FmodDSPInfo
 * @member {String} name
 * @member {Real} version
 * @member {Real} channels
 * @member {Real} configwidth
 * @member {Real} configheight
 * @struct_end
 */

/**
 * @struct_partial FmodDSPCPUUsage
 * @member {Real} exclusive
 * @member {Real} inclusive
 * @struct_end
 */

/**
 * @struct_partial FmodMinMaxDistance
 * @member {Real} min_distance
 * @member {Real} max_distance
 * @struct_end
 */

/**
 * @struct_partial FmodSyncPoint
 * @member {Real} offset
 * @member {String} name
 * @struct_end
 */

/**
 * @struct_partial FmodDSPBufferSize
 * @member {Real} buff_size
 * @member {Real} num_buffers
 * @struct_end
 */

/**
 * @struct_partial FmodSoftwareFormat
 * @member {Real} sample_rate
 * @member {Enum.FmodSpeakerMode} speaker_mode
 * @member {Real} num_raw_speakers
 * @struct_end
 */

/**
 * @struct_partial FmodDriverInfo
 * @member {String} name
 * @member {Enum.FmodSpeakerMode} speaker_mode
 * @member {Real} sample_rate
 * @member {Real} speaker_mode_channels
 * @struct_end
 */

/**
 * @struct_partial FmodDelay
 * @member {Real} dspclock_start
 * @member {Real} dspclock_end
 * @member {Real} stop_channels
 * @struct_end
 */

/**
 * @struct_partial FmodDSPClock
 * @member {Real} dspclock
 * @member {Real} parent_clock
 * @struct_end
 */

/**
 * @struct_partial FmodSoundOpenState
 * @member {Enum.FmodOpenState} open_state
 * @member {Real} percent_buffered
 * @member {Real} starving
 * @member {Real} disk_busy
 * @struct_end
 */

/**
 * @struct_partial FmodSoundTag
 * @member {Enum.FmodTagType} type
 * @member {Enum.FmodTagDataType} datatype
 * @member {String} name
 * @member {String} data
 * @member {Real} datalen
 * @member {Real} updated
 * @struct_end
 */

/**
 * @struct_partial FmodFadePoint
 * @member {Real} dsp_clock
 * @member {Real} volume
 * @struct_end
 */

/**
 * @struct_partial FmodDistanceFilter
 * @member {Real} custom
 * @member {Real} custom_level
 * @member {Real} center_freq
 * @struct_end
 */

/**
 * @struct_partial FmodOcclusion
 * @member {Real} direct
 * @member {Real} reverb
 * @struct_end
 */

/**
 * @struct_partial FmodGeometryMaxPolygons
 * @member {Real} max_polygons
 * @member {Real} max_vertices
 * @struct_end
 */

/**
 * @struct_partial FmodPolygonAttributes
 * @member {Real} direct_occlusion
 * @member {Real} reverb_occlusion
 * @member {Real} double_sided
 * @struct_end
 */

/**
 * @struct_partial FmodReverbProperties
 * @member {Real} decay_time
 * @member {Real} early_delay
 * @member {Real} late_delay
 * @member {Real} hf_reference
 * @member {Real} hf_decay_ratio
 * @member {Real} diffusion
 * @member {Real} density
 * @member {Real} low_shelf_frequency
 * @member {Real} low_shelf_gain
 * @member {Real} high_cut
 * @member {Real} early_late_mix
 * @member {Real} wet_level
 * @struct_end
 */

/**
 * @struct_partial FmodSoundLockLengths
 * @member {Real} length1
 * @member {Real} length2
 * @struct_end
 */

/**
 * @struct_partial FmodMemoryStats
 * @member {Real} current_alloced
 * @member {Real} max_alloced
 * @struct_end
 */

/**
 * @struct_partial FmodAdvancedSettings
 * @member {Real} max_mpeg_codecs
 * @member {Real} max_adpcm_codecs
 * @member {Real} max_xma_codecs
 * @member {Real} max_vorbis_codecs
 * @member {Real} max_at9_codecs
 * @member {Real} max_fadpcm_codecs
 * @member {Real} max_pcm_codecs
 * @member {Real} asio_num_channels
 * @member {Real} vol0_virtualvol
 * @member {Real} default_decode_buffer_size
 * @member {Real} profile_port
 * @member {Real} geometry_max_fade_time
 * @member {Real} distance_filter_center_freq
 * @member {Real} reverb3d_instance
 * @member {Real} dsp_buffer_pool_size
 * @member {Real} resampler_method
 * @member {Real} random_seed
 * @member {Real} max_convolution_threads
 * @member {Real} max_opus_codecs
 * @struct_end
 */

/**
 * @struct_partial FmodSpeakerPosition
 * @member {Real} x
 * @member {Real} y
 * @member {Real} active
 * @struct_end
 */

/**
 * @struct_partial FmodCPUUsage
 * @member {Real} dsp
 * @member {Real} stream
 * @member {Real} geometry
 * @member {Real} update
 * @member {Real} convolution1
 * @member {Real} convolution2
 * @struct_end
 */

/**
 * @struct_partial FmodFileUsage
 * @member {Real} sample_bytes_read
 * @member {Real} stream_bytes_read
 * @member {Real} other_bytes_read
 * @struct_end
 */

/**
 * @struct_partial FmodStreamBufferSize
 * @member {Real} file_buffer_size
 * @member {Real} file_buffer_size_type
 * @struct_end
 */

/**
 * @struct_partial FmodCreateSoundExInfo
 * @member {Real} length
 * @member {Real} file_offset
 * @member {Real} num_channels
 * @member {Real} default_frequency
 * @member {Enum.FmodSoundFormat} format
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
 * @struct_partial FmodListener3DAttributes
 * @member {Struct.FmodVec3} position
 * @member {Struct.FmodVec3} velocity
 * @member {Struct.FmodVec3} forward
 * @member {Struct.FmodVec3} up
 * @struct_end
 */

/**
 * @struct_partial FmodChannelControl3DAttributes
 * @member {Struct.FmodVec3} position
 * @member {Struct.FmodVec3} velocity
 * @struct_end
 */

/**
 * @struct_partial FmodGeometryRotation
 * @member {Struct.FmodVec3} forward
 * @member {Struct.FmodVec3} up
 * @struct_end
 */

/**
 * @struct_partial FmodReverb3DAttributes
 * @member {Struct.FmodVec3} position
 * @member {Real} min_distance
 * @member {Real} max_distance
 * @struct_end
 */

/**
 * @enum_partial FmodResult
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
 * @enum_partial FmodInitFlags
 * @member Normal
 * @member StreamFromUpdate
 * @member MixFromUpdate
 * @member RightHanded3D
 * @member ClipOutput
 * @member ChannelLowpass
 * @member ChannelDistanceFilter
 * @member ProfileEnable
 * @member Vol0BecomesVirtual
 * @member GeometryUseClosest
 * @member PreferDolbyDownmix
 * @member ThreadUnsafe
 * @member ProfileMeterAll
 * @member MemoryTracking
 * @enum_end
 */

/**
 * @enum_partial FmodMode
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
 * @enum_partial FmodTimeUnit
 * @member Ms
 * @member Pcm
 * @member PcmBytes
 * @member RawBytes
 * @member PcmFraction
 * @member ModOrder
 * @member ModRow
 * @member ModPattern
 * @enum_end
 */

/**
 * @enum_partial FmodDspType
 * @member Unknown
 * @member Mixer
 * @member Oscillator
 * @member LowPass
 * @member ItLowPass
 * @member HighPass
 * @member Echo
 * @member Fader
 * @member Flange
 * @member Distortion
 * @member Normalize
 * @member Limiter
 * @member ParamEq
 * @member PitchShift
 * @member Chorus
 * @member ItEcho
 * @member Compressor
 * @member SfxReverb
 * @member LowPassSimple
 * @member Delay
 * @member Tremolo
 * @member Send
 * @member Return
 * @member HighPassSimple
 * @member Pan
 * @member ThreeEq
 * @member FFT
 * @member LoudnessMeter
 * @member ConvolutionReverb
 * @member ChannelMix
 * @member Transceiver
 * @member ObjectPan
 * @member MultibandEq
 * @member MultibandDynamics
 * @enum_end
 */

/**
 * @enum_partial FmodDspConnectionType
 * @member Standard
 * @member Sidechain
 * @member Send
 * @member SendSidechain
 * @enum_end
 */

/**
 * @enum_partial FmodDspLowPass
 * @member Cutoff
 * @member Resonance
 * @enum_end
 */

/**
 * @enum_partial FmodDspHighPass
 * @member Cutoff
 * @member Resonance
 * @enum_end
 */

/**
 * @enum_partial FmodDspItLowPass
 * @member Cutoff
 * @member Resonance
 * @enum_end
 */

/**
 * @enum_partial FmodDspEcho
 * @member Delay
 * @member Feedback
 * @member DryLevel
 * @member WetLevel
 * @member DelayChangeMode
 * @enum_end
 */

/**
 * @enum_partial FmodDspEchoDelayChangeMode
 * @member Fade
 * @member Lerp
 * @member None
 * @enum_end
 */

/**
 * @enum_partial FmodDspFlange
 * @member Mix
 * @member Depth
 * @member Rate
 * @enum_end
 */

/**
 * @enum_partial FmodDspDistortion
 * @member Level
 * @enum_end
 */

/**
 * @enum_partial FmodDspNormalize
 * @member FadeTime
 * @member Threshold
 * @member MaxAmplitude
 * @enum_end
 */

/**
 * @enum_partial FmodDspLimiter
 * @member ReleaseTime
 * @member Ceiling
 * @member MaximizerGain
 * @member Mode
 * @enum_end
 */

/**
 * @enum_partial FmodDspParamEq
 * @member Center
 * @member Bandwidth
 * @member Gain
 * @enum_end
 */

/**
 * @enum_partial FmodDspPitchShift
 * @member Pitch
 * @member FftSize
 * @member Overlap
 * @member MaxChannels
 * @enum_end
 */

/**
 * @enum_partial FmodDspChorus
 * @member Mix
 * @member Rate
 * @member Depth
 * @enum_end
 */

/**
 * @enum_partial FmodDspMultibandEq
 * @member AFilter
 * @member AFrequency
 * @member AQ
 * @member AGain
 * @member BFilter
 * @member BFrequency
 * @member BQ
 * @member BGain
 * @member CFilter
 * @member CFrequency
 * @member CQ
 * @member CGain
 * @member DFilter
 * @member DFrequency
 * @member DQ
 * @member DGain
 * @member EFilter
 * @member EFrequency
 * @member EQ
 * @member EGain
 * @enum_end
 */

/**
 * @enum_partial FmodDspMultibandEqFilterType
 * @member Disabled
 * @member Lowpass12db
 * @member Lowpass24db
 * @member Lowpass48db
 * @member Highpass12db
 * @member Highpass24db
 * @member Highpass48db
 * @member Lowshelf
 * @member Highshelf
 * @member Peaking
 * @member Bandpass
 * @member Notch
 * @member Allpass
 * @member Lowpass6db
 * @member Highpass6db
 * @enum_end
 */

/**
 * @enum_partial FmodDspChannelMix
 * @member OutputGrouping
 * @member GainCh0
 * @member GainCh1
 * @member GainCh2
 * @member GainCh3
 * @member GainCh4
 * @member GainCh5
 * @member GainCh6
 * @member GainCh7
 * @member GainCh8
 * @member GainCh9
 * @member GainCh10
 * @member GainCh11
 * @member GainCh12
 * @member GainCh13
 * @member GainCh14
 * @member GainCh15
 * @member GainCh16
 * @member GainCh17
 * @member GainCh18
 * @member GainCh19
 * @member GainCh20
 * @member GainCh21
 * @member GainCh22
 * @member GainCh23
 * @member GainCh24
 * @member GainCh25
 * @member GainCh26
 * @member GainCh27
 * @member GainCh28
 * @member GainCh29
 * @member GainCh30
 * @member GainCh31
 * @member OutputCh0
 * @member OutputCh1
 * @member OutputCh2
 * @member OutputCh3
 * @member OutputCh4
 * @member OutputCh5
 * @member OutputCh6
 * @member OutputCh7
 * @member OutputCh8
 * @member OutputCh9
 * @member OutputCh10
 * @member OutputCh11
 * @member OutputCh12
 * @member OutputCh13
 * @member OutputCh14
 * @member OutputCh15
 * @member OutputCh16
 * @member OutputCh17
 * @member OutputCh18
 * @member OutputCh19
 * @member OutputCh20
 * @member OutputCh21
 * @member OutputCh22
 * @member OutputCh23
 * @member OutputCh24
 * @member OutputCh25
 * @member OutputCh26
 * @member OutputCh27
 * @member OutputCh28
 * @member OutputCh29
 * @member OutputCh30
 * @member OutputCh31
 * @enum_end
 */

/**
 * @enum_partial FmodDspChannelMixOutput
 * @member Default
 * @member AllMono
 * @member AllStereo
 * @member AllQuad
 * @member All5Point1
 * @member All7Point1
 * @member AllLfe
 * @member All7Point1Point4
 * @enum_end
 */

/**
 * @enum_partial FmodDspTransceiver
 * @member Transmit
 * @member Gain
 * @member Channel
 * @member TransmitSpeakerMode
 * @enum_end
 */

/**
 * @enum_partial FmodDspTransceiverSpeakerMode
 * @member Auto
 * @member Mono
 * @member Stereo
 * @member Surround
 * @enum_end
 */

/**
 * @enum_partial FmodDspCompDynEq
 * @member Threshold
 * @member Ratio
 * @member Attack
 * @member Release
 * @member GainMakeup
 * @member UseSidechain
 * @member Linked
 * @enum_end
 */

/**
 * @enum_partial FmodDspFft
 * @member WindowSize
 * @member WindowType
 * @member BandStartFreq
 * @member BandStopFreq
 * @member SpectrumData
 * @member Rms
 * @member SpectralCentroid
 * @member ImmediateMode
 * @member Downmix
 * @member Channel
 * @enum_end
 */

/**
 * @enum_partial FmodDspFftWindowType
 * @member Rect
 * @member Triangle
 * @member Hamming
 * @member Hanning
 * @member Blackman
 * @member BlackmanHarris
 * @enum_end
 */

/**
 * @enum_partial FmodDspOscillator
 * @member Type
 * @member Rate
 * @enum_end
 */

/**
 * @enum_partial FmodDspOscillatorType
 * @member Sine
 * @member Square
 * @member Sawup
 * @member Sawdown
 * @member Triangle
 * @member Noise
 * @enum_end
 */

/**
 * @enum_partial FmodDspConvolution
 * @member Ir
 * @member Wet
 * @member Dry
 * @member Linked
 * @enum_end
 */

/**
 * @enum_partial FmodSpeakerMode
 * @member Default
 * @member Raw
 * @member Mono
 * @member Stereo
 * @member Quad
 * @member Surround
 * @member _5Point1
 * @member _7Point1
 * @member _7Point1Point4
 * @enum_end
 */

/**
 * @enum_partial FmodDriverState
 * @member Connected
 * @member Default
 * @enum_end
 */

/**
 * @enum_partial FmodDebugFlags
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
 * @enum_partial FmodDebugMode
 * @member Tty
 * @member File
 * @member Callback
 * @enum_end
 */

/**
 * @enum_partial FmodSoundType
 * @member Unknown
 * @member Aiff
 * @member Asf
 * @member Dls
 * @member Flac
 * @member Fsb
 * @member It
 * @member Midi
 * @member Mod
 * @member Mpeg
 * @member OggVorbis
 * @member Playlist
 * @member Raw
 * @member S3m
 * @member User
 * @member Wav
 * @member Xm
 * @member Xma
 * @member AudioQueue
 * @member At9
 * @member Vorbis
 * @member MediaFoundation
 * @member MediaCodec
 * @member Fadpcm
 * @member Opus
 * @enum_end
 */

/**
 * @enum_partial FmodSoundFormat
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
 * @enum_partial FmodOutputType
 * @member AutoDetect
 * @member Unknown
 * @member NoSound
 * @member WavWriter
 * @member NoSoundNrt
 * @member WavWriterNrt
 * @member Wasapi
 * @member Asio
 * @member PulseAudio
 * @member Alsa
 * @member CoreAudio
 * @member AudioTrack
 * @member OpenSl
 * @member AudioOut
 * @member Audio3D
 * @member WebAudio
 * @member NnAudio
 * @member WinSonic
 * @member AAudio
 * @member AudioWorklet
 * @member Phase
 * @member OhAudio
 * @enum_end
 */

/**
 * @enum_partial FmodChannelControlDspIndex
 * @member Head
 * @member Fader
 * @member Tail
 * @enum_end
 */

/**
 * @enum_partial FmodOpenState
 * @member Ready
 * @member Loading
 * @member Error
 * @member Connecting
 * @member Buffering
 * @member Seeking
 * @member Playing
 * @member SetPosition
 * @member Max
 * @enum_end
 */

/**
 * @enum_partial FmodTagType
 * @member Unknown
 * @member Id3v1
 * @member Id3v2
 * @member VorbisComment
 * @member ShoutCast
 * @member IceCast
 * @member Asf
 * @member Midi
 * @member Playlist
 * @member Fmod
 * @member User
 * @enum_end
 */

/**
 * @enum_partial FmodTagDataType
 * @member Binary
 * @member Int
 * @member Float
 * @member String
 * @member StringUtf16
 * @member StringUtf16Be
 * @member StringUtf8
 * @enum_end
 */

/**
 * @const_partial macros
 * @const_end
 */

