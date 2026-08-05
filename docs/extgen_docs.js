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
 * @function_partial fmod_sound_set_3d_min_max_distance
 * @param {Struct.FmodSoundRef} sound_ref
 * @param {Real} min
 * @param {Real} max
 * @returns {Real}
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
 * @const_partial macros
 * @const_end
 */

