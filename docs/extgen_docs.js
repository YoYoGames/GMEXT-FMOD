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
 * @const_partial macros
 * @const_end
 */

