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
 * @function_partial fmod_path_bundle
 * @param {String} filename
 * @returns {String}
 * @function_end
 */

/**
 * @function_partial fmod_path_user
 * @param {String} filename
 * @returns {String}
 * @function_end
 */

/**
 * @function_partial fmod_channel_set_frequency
 * @param {Struct.FmodChannelRef} channel_ref
 * @param {Real} frequency
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_get_frequency
 * @param {Struct.FmodChannelRef} channel_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_set_priority
 * @param {Struct.FmodChannelRef} channel_ref
 * @param {Real} priority
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_get_priority
 * @param {Struct.FmodChannelRef} channel_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_set_position
 * @param {Struct.FmodChannelRef} channel_ref
 * @param {Real} position
 * @param {Real} time_unit
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_get_position
 * @param {Struct.FmodChannelRef} channel_ref
 * @param {Real} time_unit
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_set_channel_group
 * @param {Struct.FmodChannelRef} channel_ref
 * @param {Struct.FmodChannelGroupRef} channel_group_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_get_channel_group
 * @param {Struct.FmodChannelRef} channel_ref
 * @returns {Struct.FmodChannelGroupRef}
 * @function_end
 */

/**
 * @function_partial fmod_channel_set_loop_count
 * @param {Struct.FmodChannelRef} channel_ref
 * @param {Real} loop_count
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_get_loop_count
 * @param {Struct.FmodChannelRef} channel_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_set_loop_points
 * @param {Struct.FmodChannelRef} channel_ref
 * @param {Real} loop_start
 * @param {Real} loop_start_type
 * @param {Real} loop_end
 * @param {Real} loop_end_type
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_is_virtual
 * @param {Struct.FmodChannelRef} channel_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_get_index
 * @param {Struct.FmodChannelRef} channel_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_get_current_sound
 * @param {Struct.FmodChannelRef} channel_ref
 * @returns {Struct.FmodSoundRef}
 * @function_end
 */

/**
 * @function_partial fmod_channel_get_system_object
 * @param {Struct.FmodChannelRef} channel_ref
 * @returns {Struct.FmodSystemRef}
 * @function_end
 */

/**
 * @function_partial fmod_system_create
 * @returns {Struct.FmodSystemRef}
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
 * @param {Struct.FmodSystemRef} system_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_system_close
 * @param {Struct.FmodSystemRef} system_ref
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
 * @returns {Struct.FmodChannelRef}
 * @function_end
 */

/**
 * @function_partial fmod_system_get_master_channel_group
 * @returns {Struct.FmodChannelGroupRef}
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
 * @param {Any} position
 * @param {Any} velocity
 * @param {Any} forward
 * @param {Any} up
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
 * @param {Struct.FmodSoundRef} sound_ref
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
 * @function_partial fmod_system_create_sound
 * @param {String} name_or_data
 * @param {Real} mode
 * @returns {Struct.FmodSoundRef}
 * @function_end
 */

/**
 * @function_partial fmod_system_create_stream
 * @param {String} name_or_data
 * @param {Real} mode
 * @returns {Struct.FmodSoundRef}
 * @function_end
 */

/**
 * @function_partial fmod_system_play_sound
 * @param {Struct.FmodSoundRef} sound_ref
 * @param {Struct.FmodChannelGroupRef} channel_group_ref
 * @param {Real} pause
 * @returns {Struct.FmodChannelRef}
 * @function_end
 */

/**
 * @function_partial fmod_sound_get_length
 * @param {Struct.FmodSoundRef} sound_ref
 * @param {Real} length_type
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_set_defaults
 * @param {Struct.FmodSoundRef} sound_ref
 * @param {Real} frequency
 * @param {Real} priority
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_set_mode
 * @param {Struct.FmodSoundRef} sound_ref
 * @param {Real} mode
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_get_mode
 * @param {Struct.FmodSoundRef} sound_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_get_format
 * @param {Struct.FmodSoundRef} sound_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_get_name
 * @param {Struct.FmodSoundRef} sound_ref
 * @returns {String}
 * @function_end
 */

/**
 * @function_partial fmod_sound_get_defaults
 * @param {Struct.FmodSoundRef} sound_ref
 * @returns {Struct.FmodSoundDefaults}
 * @function_end
 */

/**
 * @function_partial fmod_sound_set_loop_count
 * @param {Struct.FmodSoundRef} sound_ref
 * @param {Real} count
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_get_loop_count
 * @param {Struct.FmodSoundRef} sound_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_set_loop_points
 * @param {Struct.FmodSoundRef} sound_ref
 * @param {Real} loop_start
 * @param {Real} loop_start_type
 * @param {Real} loop_end
 * @param {Real} loop_end_type
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_get_loop_points
 * @param {Struct.FmodSoundRef} sound_ref
 * @param {Real} start_type
 * @param {Real} end_type
 * @returns {Struct.FmodLoopPoints}
 * @function_end
 */

/**
 * @function_partial fmod_sound_set_3d_min_max_distance
 * @param {Struct.FmodSoundRef} sound_ref
 * @param {Real} min
 * @param {Real} max
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_get_3d_min_max_distance
 * @param {Struct.FmodSoundRef} sound_ref
 * @returns {Struct.FmodSoundMinMaxDistance}
 * @function_end
 */

/**
 * @function_partial fmod_sound_set_3d_cone_settings
 * @param {Struct.FmodSoundRef} sound_ref
 * @param {Real} inside_cone_angle
 * @param {Real} outside_cone_angle
 * @param {Real} outside_volume
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_get_3d_cone_settings
 * @param {Struct.FmodSoundRef} sound_ref
 * @returns {Struct.FmodConeSettings}
 * @function_end
 */

/**
 * @function_partial fmod_sound_set_3d_custom_rolloff
 * @param {Struct.FmodSoundRef} sound_ref
 * @param {Any} points
 * @param {Real} num_points
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_get_3d_custom_rolloff
 * @param {Struct.FmodSoundRef} sound_ref
 * @returns {Any}
 * @function_end
 */

/**
 * @function_partial fmod_sound_get_num_sync_points
 * @param {Struct.FmodSoundRef} sound_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_get_sync_point
 * @param {Struct.FmodSoundRef} sound_ref
 * @param {Real} sync_point_index
 * @param {Real} offset_type
 * @returns {Struct.FmodSyncPointInfo}
 * @function_end
 */

/**
 * @function_partial fmod_sound_add_sync_point
 * @param {Struct.FmodSoundRef} sound_ref
 * @param {Real} offset
 * @param {Real} offset_type
 * @param {String} name
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_delete_sync_point
 * @param {Struct.FmodSoundRef} sound_ref
 * @param {Real} sync_point_index
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_get_music_num_channels
 * @param {Struct.FmodSoundRef} sound_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_set_music_channel_volume
 * @param {Struct.FmodSoundRef} sound_ref
 * @param {Real} channel_index
 * @param {Real} volume
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_get_music_channel_volume
 * @param {Struct.FmodSoundRef} sound_ref
 * @param {Real} channel_index
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_set_music_speed
 * @param {Struct.FmodSoundRef} sound_ref
 * @param {Real} speed
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_get_music_speed
 * @param {Struct.FmodSoundRef} sound_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_set_sound_group
 * @param {Struct.FmodSoundRef} sound_ref
 * @param {Struct.FmodSoundGroupRef} sound_group_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_get_sound_group
 * @param {Struct.FmodSoundRef} sound_ref
 * @returns {Struct.FmodSoundGroupRef}
 * @function_end
 */

/**
 * @function_partial fmod_sound_release
 * @param {Struct.FmodSoundRef} sound_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_get_system_object
 * @param {Struct.FmodSoundRef} sound_ref
 * @returns {Struct.FmodSystemRef}
 * @function_end
 */

/**
 * @function_partial fmod_channel_group_get_num_channels
 * @param {Struct.FmodChannelGroupRef} channel_group_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_group_get_channel
 * @param {Struct.FmodChannelGroupRef} channel_group_ref
 * @param {Real} index
 * @returns {Struct.FmodChannelRef}
 * @function_end
 */

/**
 * @function_partial fmod_channel_group_add_group
 * @param {Struct.FmodChannelGroupRef} channel_group_ref
 * @param {Struct.FmodChannelGroupRef} child_channel_group_ref
 * @param {Real} propagate_dsp_clock
 * @returns {Struct.FmodDSPConnectionRef}
 * @function_end
 */

/**
 * @function_partial fmod_channel_group_get_num_groups
 * @param {Struct.FmodChannelGroupRef} channel_group_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_group_get_group
 * @param {Struct.FmodChannelGroupRef} channel_group_ref
 * @param {Real} group_index
 * @returns {Struct.FmodChannelGroupRef}
 * @function_end
 */

/**
 * @function_partial fmod_channel_group_get_parent_group
 * @param {Struct.FmodChannelGroupRef} channel_group_ref
 * @returns {Struct.FmodChannelGroupRef}
 * @function_end
 */

/**
 * @function_partial fmod_channel_group_get_name
 * @param {Struct.FmodChannelGroupRef} channel_group_ref
 * @returns {String}
 * @function_end
 */

/**
 * @function_partial fmod_channel_group_release
 * @param {Struct.FmodChannelGroupRef} channel_group_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_group_get_system_object
 * @param {Struct.FmodChannelGroupRef} channel_group_ref
 * @returns {Struct.FmodSystemRef}
 * @function_end
 */

/**
 * @function_partial fmod_sound_group_set_max_audible
 * @param {Struct.FmodSoundGroupRef} sound_group_ref
 * @param {Real} max_audible
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_group_get_max_audible
 * @param {Struct.FmodSoundGroupRef} sound_group_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_group_set_max_audible_behavior
 * @param {Struct.FmodSoundGroupRef} sound_group_ref
 * @param {Real} behavior
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_group_get_max_audible_behavior
 * @param {Struct.FmodSoundGroupRef} sound_group_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_group_set_mute_fade_speed
 * @param {Struct.FmodSoundGroupRef} sound_group_ref
 * @param {Real} speed
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_group_get_mute_fade_speed
 * @param {Struct.FmodSoundGroupRef} sound_group_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_group_set_volume
 * @param {Struct.FmodSoundGroupRef} sound_group_ref
 * @param {Real} volume
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_group_get_volume
 * @param {Struct.FmodSoundGroupRef} sound_group_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_group_get_num_sounds
 * @param {Struct.FmodSoundGroupRef} sound_group_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_group_get_sound
 * @param {Struct.FmodSoundGroupRef} sound_group_ref
 * @param {Real} sound_index
 * @returns {Struct.FmodSoundRef}
 * @function_end
 */

/**
 * @function_partial fmod_sound_group_get_num_playing
 * @param {Struct.FmodSoundGroupRef} sound_group_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_group_stop
 * @param {Struct.FmodSoundGroupRef} sound_group_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_group_get_name
 * @param {Struct.FmodSoundGroupRef} sound_group_ref
 * @returns {String}
 * @function_end
 */

/**
 * @function_partial fmod_sound_group_release
 * @param {Struct.FmodSoundGroupRef} sound_group_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_sound_group_get_system_object
 * @param {Struct.FmodSoundGroupRef} sound_group_ref
 * @returns {Struct.FmodSystemRef}
 * @function_end
 */

/**
 * @function_partial fmod_reverb_3d_set_active
 * @param {Struct.FmodReverb3DRef} reverb_3d_ref
 * @param {Real} active
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_reverb_3d_get_active
 * @param {Struct.FmodReverb3DRef} reverb_3d_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_reverb_3d_set_properties
 * @param {Struct.FmodReverb3DRef} reverb_3d_ref
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
 * @function_partial fmod_reverb_3d_release
 * @param {Struct.FmodReverb3DRef} reverb_3d_ref
 * @returns {Real}
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
 * @function_partial fmod_channel_control_set_3d_cone_settings
 * @param {Real} channel_control_ref
 * @param {Real} inside_cone_angle
 * @param {Real} outside_cone_angle
 * @param {Real} outside_volume
 * @returns {Real}
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
 * @param {Struct.FmodDSPRef} dsp_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_remove_dsp
 * @param {Real} channel_control_ref
 * @param {Struct.FmodDSPRef} dsp_ref
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
 * @returns {Struct.FmodDSPRef}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_set_dsp_index
 * @param {Real} channel_control_ref
 * @param {Struct.FmodDSPRef} dsp_ref
 * @param {Real} chain_index
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_get_dsp_index
 * @param {Real} channel_control_ref
 * @param {Struct.FmodDSPRef} dsp_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_channel_control_get_system_object
 * @param {Real} channel_control_ref
 * @returns {Struct.FmodSystemRef}
 * @function_end
 */

/**
 * @function_partial fmod_dsp_add_input
 * @param {Struct.FmodDSPRef} dsp_ref
 * @param {Struct.FmodDSPRef} dsp_input_ref
 * @param {Real} dsp_connection_type
 * @returns {Struct.FmodDSPConnectionRef}
 * @function_end
 */

/**
 * @function_partial fmod_dsp_get_num_inputs
 * @param {Struct.FmodDSPRef} dsp_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_dsp_get_num_outputs
 * @param {Struct.FmodDSPRef} dsp_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_dsp_disconnect_all
 * @param {Struct.FmodDSPRef} dsp_ref
 * @param {Real} inputs
 * @param {Real} outputs
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_dsp_get_num_parameters
 * @param {Struct.FmodDSPRef} dsp_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_dsp_set_parameter_float
 * @param {Struct.FmodDSPRef} dsp_ref
 * @param {Real} index
 * @param {Real} value
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_dsp_get_parameter_float
 * @param {Struct.FmodDSPRef} dsp_ref
 * @param {Real} index
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_dsp_set_parameter_int
 * @param {Struct.FmodDSPRef} dsp_ref
 * @param {Real} index
 * @param {Real} value
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_dsp_get_parameter_int
 * @param {Struct.FmodDSPRef} dsp_ref
 * @param {Real} index
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_dsp_set_parameter_bool
 * @param {Struct.FmodDSPRef} dsp_ref
 * @param {Real} index
 * @param {Real} value
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_dsp_get_parameter_bool
 * @param {Struct.FmodDSPRef} dsp_ref
 * @param {Real} index
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_dsp_release
 * @param {Struct.FmodDSPRef} dsp_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_dsp_get_system_object
 * @param {Struct.FmodDSPRef} dsp_ref
 * @returns {Struct.FmodSystemRef}
 * @function_end
 */

/**
 * @function_partial fmod_dsp_connection_set_mix
 * @param {Struct.FmodDSPConnectionRef} connection_ref
 * @param {Real} volume
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_dsp_connection_get_mix
 * @param {Struct.FmodDSPConnectionRef} connection_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_dsp_connection_set_mix_matrix
 * @param {Struct.FmodDSPConnectionRef} connection_ref
 * @param {Real} matrix
 * @param {Real} out_channels
 * @param {Real} in_channels
 * @param {Real} in_channel_hop
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_dsp_connection_get_mix_matrix
 * @param {Struct.FmodDSPConnectionRef} connection_ref
 * @param {Real} in_channel_hop
 * @returns {Struct.FmodDSPMixMatrix}
 * @function_end
 */

/**
 * @function_partial fmod_dsp_connection_get_input
 * @param {Struct.FmodDSPConnectionRef} connection_ref
 * @returns {Struct.FmodDSPRef}
 * @function_end
 */

/**
 * @function_partial fmod_dsp_connection_get_output
 * @param {Struct.FmodDSPConnectionRef} connection_ref
 * @returns {Struct.FmodDSPRef}
 * @function_end
 */

/**
 * @function_partial fmod_dsp_connection_get_type
 * @param {Struct.FmodDSPConnectionRef} connection_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_dsp_connection_set_user_data
 * @param {Struct.FmodDSPConnectionRef} connection_ref
 * @param {Real} user_data
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_dsp_connection_get_user_data
 * @param {Struct.FmodDSPConnectionRef} connection_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_geometry_set_polygon_attributes
 * @param {Struct.FmodGeometryRef} geometry_ref
 * @param {Real} polygon_index
 * @param {Real} direct_occlusion
 * @param {Real} reverb_occlusion
 * @param {Real} double_sided
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_geometry_get_polygon_num_vertices
 * @param {Struct.FmodGeometryRef} geometry_ref
 * @param {Real} polygon_index
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_geometry_set_position
 * @param {Struct.FmodGeometryRef} geometry_ref
 * @param {Real} x
 * @param {Real} y
 * @param {Real} z
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_geometry_set_rotation
 * @param {Struct.FmodGeometryRef} geometry_ref
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
 * @function_partial fmod_geometry_set_scale
 * @param {Struct.FmodGeometryRef} geometry_ref
 * @param {Real} scale_x
 * @param {Real} scale_y
 * @param {Real} scale_z
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_geometry_save
 * @param {Struct.FmodGeometryRef} geometry_ref
 * @param {String} filename
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_geometry_release
 * @param {Struct.FmodGeometryRef} geometry_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_create
 * @returns {Struct.FmodStudioSystemRef}
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
 * @returns {Struct.FmodStudioBankRef}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_load_bank_memory
 * @param {String} data
 * @param {Real} flags
 * @returns {Struct.FmodStudioBankRef}
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
 * @returns {Struct.FmodStudioBankRef}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_get_bank
 * @param {String} path
 * @returns {Struct.FmodStudioBankRef}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_get_event
 * @param {String} path
 * @returns {Struct.FmodStudioEventDescriptionRef}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_create_event_instance
 * @param {String} path
 * @returns {Struct.FmodStudioEventInstanceRef}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_get_bus
 * @param {String} path
 * @returns {Struct.FmodStudioBusRef}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_get_master_bus
 * @returns {Struct.FmodStudioBusRef}
 * @function_end
 */

/**
 * @function_partial fmod_studio_system_get_vca
 * @param {String} path
 * @returns {Struct.FmodStudioVCARef}
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
 * @returns {Struct.FmodSystemRef}
 * @function_end
 */

/**
 * @function_partial fmod_studio_bank_unload
 * @param {Struct.FmodStudioBankRef} bank_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_bank_get_loading_state
 * @param {Struct.FmodStudioBankRef} bank_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_bank_get_sample_loading_state
 * @param {Struct.FmodStudioBankRef} bank_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_bank_get_path
 * @param {Struct.FmodStudioBankRef} bank_ref
 * @returns {String}
 * @function_end
 */

/**
 * @function_partial fmod_studio_bank_get_parent_studio_system
 * @param {Struct.FmodStudioBankRef} bank_ref
 * @returns {Struct.FmodStudioSystemRef}
 * @function_end
 */

/**
 * @function_partial fmod_studio_bank_get_event_count
 * @param {Struct.FmodStudioBankRef} bank_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_bank_get_event_at
 * @param {Struct.FmodStudioBankRef} bank_ref
 * @param {Real} index
 * @returns {Struct.FmodStudioEventDescriptionRef}
 * @function_end
 */

/**
 * @function_partial fmod_studio_bank_get_bus_count
 * @param {Struct.FmodStudioBankRef} bank_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_bank_get_bus_at
 * @param {Struct.FmodStudioBankRef} bank_ref
 * @param {Real} index
 * @returns {Struct.FmodStudioBusRef}
 * @function_end
 */

/**
 * @function_partial fmod_studio_bank_get_vca_count
 * @param {Struct.FmodStudioBankRef} bank_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_bank_get_vca_at
 * @param {Struct.FmodStudioBankRef} bank_ref
 * @param {Real} index
 * @returns {Struct.FmodStudioVCARef}
 * @function_end
 */

/**
 * @function_partial fmod_studio_bank_get_string_count
 * @param {Struct.FmodStudioBankRef} bank_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_description_get_path
 * @param {Struct.FmodStudioEventDescriptionRef} event_desc_ref
 * @returns {String}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_description_create_instance
 * @param {Struct.FmodStudioEventDescriptionRef} event_desc_ref
 * @returns {Struct.FmodStudioEventInstanceRef}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_description_get_instance_count
 * @param {Struct.FmodStudioEventDescriptionRef} event_desc_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_description_get_instance_at
 * @param {Struct.FmodStudioEventDescriptionRef} event_desc_ref
 * @param {Real} index
 * @returns {Struct.FmodStudioEventInstanceRef}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_description_is_snapshot
 * @param {Struct.FmodStudioEventDescriptionRef} event_desc_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_description_is_one_shot
 * @param {Struct.FmodStudioEventDescriptionRef} event_desc_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_description_has_sustain_point
 * @param {Struct.FmodStudioEventDescriptionRef} event_desc_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_description_get_length
 * @param {Struct.FmodStudioEventDescriptionRef} event_desc_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_description_get_parameter_count
 * @param {Struct.FmodStudioEventDescriptionRef} event_desc_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_description_release_all_instances
 * @param {Struct.FmodStudioEventDescriptionRef} event_desc_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_instance_start
 * @param {Struct.FmodStudioEventInstanceRef} instance_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_instance_stop
 * @param {Struct.FmodStudioEventInstanceRef} instance_ref
 * @param {Real} stop_mode
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_instance_get_playback_state
 * @param {Struct.FmodStudioEventInstanceRef} instance_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_instance_get_paused
 * @param {Struct.FmodStudioEventInstanceRef} instance_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_instance_set_paused
 * @param {Struct.FmodStudioEventInstanceRef} instance_ref
 * @param {Real} paused
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_instance_get_timeline_position
 * @param {Struct.FmodStudioEventInstanceRef} instance_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_instance_set_timeline_position
 * @param {Struct.FmodStudioEventInstanceRef} instance_ref
 * @param {Real} position
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_instance_get_volume
 * @param {Struct.FmodStudioEventInstanceRef} instance_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_instance_set_volume
 * @param {Struct.FmodStudioEventInstanceRef} instance_ref
 * @param {Real} volume
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_instance_get_pitch
 * @param {Struct.FmodStudioEventInstanceRef} instance_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_instance_set_pitch
 * @param {Struct.FmodStudioEventInstanceRef} instance_ref
 * @param {Real} pitch
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_instance_set_parameter_by_name
 * @param {Struct.FmodStudioEventInstanceRef} instance_ref
 * @param {String} name
 * @param {Real} value
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_instance_get_parameter_by_name
 * @param {Struct.FmodStudioEventInstanceRef} instance_ref
 * @param {String} name
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_instance_get_parameter_count
 * @param {Struct.FmodStudioEventInstanceRef} instance_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_instance_set_3d_attributes
 * @param {Struct.FmodStudioEventInstanceRef} instance_ref
 * @param {Real} x
 * @param {Real} y
 * @param {Real} z
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_instance_get_description
 * @param {Struct.FmodStudioEventInstanceRef} instance_ref
 * @returns {Struct.FmodStudioEventDescriptionRef}
 * @function_end
 */

/**
 * @function_partial fmod_studio_event_instance_release
 * @param {Struct.FmodStudioEventInstanceRef} instance_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_bus_get_path
 * @param {Struct.FmodStudioBusRef} bus_ref
 * @returns {String}
 * @function_end
 */

/**
 * @function_partial fmod_studio_bus_get_volume
 * @param {Struct.FmodStudioBusRef} bus_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_bus_set_volume
 * @param {Struct.FmodStudioBusRef} bus_ref
 * @param {Real} volume
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_bus_get_paused
 * @param {Struct.FmodStudioBusRef} bus_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_bus_set_paused
 * @param {Struct.FmodStudioBusRef} bus_ref
 * @param {Real} paused
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_bus_stop_all_events
 * @param {Struct.FmodStudioBusRef} bus_ref
 * @param {Real} stop_mode
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_bus_get_master_bus
 * @returns {Struct.FmodStudioBusRef}
 * @function_end
 */

/**
 * @function_partial fmod_studio_vca_get_path
 * @param {Struct.FmodStudioVCARef} vca_ref
 * @returns {String}
 * @function_end
 */

/**
 * @function_partial fmod_studio_vca_get_volume
 * @param {Struct.FmodStudioVCARef} vca_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_vca_set_volume
 * @param {Struct.FmodStudioVCARef} vca_ref
 * @param {Real} volume
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_command_replay_get_playback_state
 * @param {Struct.FmodStudioCommandReplayRef} replay_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_command_replay_get_current_command
 * @param {Struct.FmodStudioCommandReplayRef} replay_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_command_replay_release
 * @param {Struct.FmodStudioCommandReplayRef} replay_ref
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_command_replay_set_frame_callback
 * @param {Struct.FmodStudioCommandReplayRef} replay_ref
 * @param {Function} [callback]
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_command_replay_set_create_instance_callback
 * @param {Struct.FmodStudioCommandReplayRef} replay_ref
 * @param {Function} [callback]
 * @returns {Real}
 * @function_end
 */

/**
 * @function_partial fmod_studio_command_replay_set_load_bank_callback
 * @param {Struct.FmodStudioCommandReplayRef} replay_ref
 * @param {Function} [callback]
 * @returns {Real}
 * @function_end
 */

/**
 * @struct_partial FmodChannelRef
 * @member {Real} _ref
 * @struct_end
 */

/**
 * @struct_partial FmodChannelGroupRef
 * @member {Real} _ref
 * @struct_end
 */

/**
 * @struct_partial FmodSoundRef
 * @member {Real} _ref
 * @struct_end
 */

/**
 * @struct_partial FmodSystemRef
 * @member {Real} _ref
 * @struct_end
 */

/**
 * @struct_partial FmodDSPConnectionRef
 * @member {Real} _ref
 * @struct_end
 */

/**
 * @struct_partial FmodSoundGroupRef
 * @member {Real} _ref
 * @struct_end
 */

/**
 * @struct_partial FmodReverb3DRef
 * @member {Real} _ref
 * @struct_end
 */

/**
 * @struct_partial FmodDSPRef
 * @member {Real} _ref
 * @struct_end
 */

/**
 * @struct_partial FmodGeometryRef
 * @member {Real} _ref
 * @struct_end
 */

/**
 * @struct_partial FmodStudioSystemRef
 * @member {Real} _ref
 * @struct_end
 */

/**
 * @struct_partial FmodStudioBankRef
 * @member {Real} _ref
 * @struct_end
 */

/**
 * @struct_partial FmodStudioBusRef
 * @member {Real} _ref
 * @struct_end
 */

/**
 * @struct_partial FmodStudioEventInstanceRef
 * @member {Real} _ref
 * @struct_end
 */

/**
 * @struct_partial FmodStudioEventDescriptionRef
 * @member {Real} _ref
 * @struct_end
 */

/**
 * @struct_partial FmodStudioVCARef
 * @member {Real} _ref
 * @struct_end
 */

/**
 * @struct_partial FmodStudioCommandReplayRef
 * @member {Real} _ref
 * @struct_end
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
 * @struct_partial FmodListener3DAttributes
 * @member {Real} position
 * @member {Real} velocity
 * @member {Real} forward
 * @member {Real} up
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
 * @member {Real} speaker_mode
 * @member {Real} sample_rate
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
 * @member FileUnwanted
 * @member FormatUnsupported
 * @member Generic
 * @member InvalidHandle
 * @member InvalidParam
 * @member InvalidPosition
 * @member InvalidSpeakerMode
 * @member InvalidThread
 * @member InvalidVector
 * @member MaxAudioEngines
 * @member Memory
 * @member MemoryCantPoint
 * @member Needs3D
 * @member NeedsSoftware
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
 * @member Record
 * @member ReverseStereo
 * @member Threading
 * @member TooManyChannels
 * @member TruncatedData
 * @member Unimplemented
 * @member Uninitialized
 * @member Unsupported
 * @member Update
 * @member Version
 * @member EventAlreadyLoaded
 * @member InternalError
 * @member InvalidSecret
 * @member MissingCallback
 * @member SampleMissing
 * @member Plugin
 * @member PluginMissing
 * @member PluginResource
 * @member PluginVersion
 * @member ReverbChannelGroup
 * @member ReverbInstance
 * @member SubSounds
 * @member SubSoundAllocated
 * @member SubSoundCantMove
 * @member TagNotFound
 * @member Http
 * @member HttpAccess
 * @member HttpProxyAuth
 * @member HttpServerError
 * @member HttpTimeout
 * @member InvalidFloat
 * @member InvalidSyncPoint
 * @member InvalidSpeaker
 * @member InvalidString
 * @member AlreadyLocked
 * @member NotLocked
 * @member RecordDisconnected
 * @member TooManySamples
 * @member StudioUninitialized
 * @member StudioNotLoaded
 * @member EventNotFound
 * @member EventLiveUpdateBusy
 * @member EventLiveUpdateMismatch
 * @member EventLiveUpdateTimeout
 * @member Format
 * @member Initialization
 * @member Initialized
 * @member Internal
 * @member MaxAudible
 * @member NeedsHardware
 * @enum_end
 */

/**
 * @enum_partial FmodInitFlags
 * @member Normal
 * @member StreamFromUpdate
 * @member IgnoreTags
 * @member SyncMixDown
 * @member ProfileEnable
 * @member Vol0BecomesVirtual
 * @member GeometryUseCheap
 * @member ClipOutput
 * @member Unicode
 * @member TimerTickBaseClockSource
 * @member ProfileMeterAll
 * @member MemoryTracking
 * @member ThreadUnsafe
 * @member ProfileMeterThreadLocks
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
 * @member DebugOverlay
 * @member DisableSounds
 * @member DisableAllSamples
 * @member DisableCommandReplay
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
 * @member Flange
 * @member Distortion
 * @member Normalize
 * @member Limiter
 * @member ParamEq
 * @member PitchShift
 * @member Chorus
 * @member VstPlugin
 * @member WinampPlugin
 * @member Convolution
 * @member ChannelMix
 * @member Transceiver
 * @member ObjectPan
 * @member MultibandEq
 * @member CompDynEq
 * @enum_end
 */

/**
 * @enum_partial FmodDspConnectionType
 * @member Default
 * @member Dry
 * @member Wet
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
 * @member DisplayTimeStamps
 * @member DisplayLineNumbers
 * @member DisplayCompress
 * @member DisplayThreadId
 * @member DisplayModule
 * @member DisplaySourceCodeLine
 * @enum_end
 */

/**
 * @enum_partial FmodDebugMode
 * @member Tty
 * @member File
 * @member Callback
 * @member FilePlusTty
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
 * @member _7Point1PointFront
 * @member _5Point1Rears
 * @enum_end
 */

/**
 * @enum_partial FmodSoundType
 * @member Unknown
 * @member Aiff
 * @member Asf
 * @member Dsd
 * @member Flac
 * @member Fsb
 * @member It
 * @member Midi
 * @member Mpeg
 * @member OggVorbis
 * @member Playlist
 * @member Raw
 * @member S3m
 * @member User
 * @member Wav
 * @member Xm
 * @member Xwm
 * @member Ac3
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
 * @member NativeAudio
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
 * @member Interactive
 * @member Labeled
 * @enum_end
 */

/**
 * @enum_partial FmodStudioUserPropertyType
 * @member String
 * @member Integer
 * @member Float
 * @member Boolean
 * @enum_end
 */

/**
 * @const_partial macros
 * @const_end
 */

