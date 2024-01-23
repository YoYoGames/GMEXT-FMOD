

/**
 * @func fmod_channel_set_frequency
 * @desc 
 * @param {real} channel_ref
 * @param {real} frequency
 * @returns {real}
 */
function fmod_channel_set_frequency(channel_ref, frequency) {}


/**
 * @func fmod_channel_get_frequency
 * @desc 
 * @param {real} channel_ref
 * @returns {real}
 */
function fmod_channel_get_frequency(channel_ref) {}


/**
 * @func fmod_channel_set_priority
 * @desc 
 * @param {real} channel_ref
 * @param {real} priority
 * @returns {real}
 */
function fmod_channel_set_priority(channel_ref, priority) {}


/**
 * @func fmod_channel_get_priority
 * @desc 
 * @param {real} channel_ref
 * @returns {real}
 */
function fmod_channel_get_priority(channel_ref) {}


/**
 * @func fmod_channel_set_position
 * @desc 
 * @param {real} channel_ref
 * @param {real} position
 * @param {real} time_unit
 * @returns {real}
 */
function fmod_channel_set_position(channel_ref, position, time_unit) {}


/**
 * @func fmod_channel_get_position
 * @desc 
 * @param {real} channel_ref
 * @param {real} time_unit
 * @returns {real}
 */
function fmod_channel_get_position(channel_ref, time_unit) {}


/**
 * @func fmod_channel_set_channel_group
 * @desc 
 * @param {real} channel_ref
 * @param {real} channel_group_ref
 * @returns {real}
 */
function fmod_channel_set_channel_group(channel_ref, channel_group_ref) {}


/**
 * @func fmod_channel_get_channel_group
 * @desc 
 * @param {real} channel_ref
 * @returns {real}
 */
function fmod_channel_get_channel_group(channel_ref) {}


/**
 * @func fmod_channel_set_loop_count
 * @desc 
 * @param {real} channel_ref
 * @param {real} loop_count
 * @returns {real}
 */
function fmod_channel_set_loop_count(channel_ref, loop_count) {}


/**
 * @func fmod_channel_get_loop_count
 * @desc 
 * @param {real} channel_ref
 * @returns {real}
 */
function fmod_channel_get_loop_count(channel_ref) {}


/**
 * @func fmod_channel_set_loop_points
 * @desc 
 * @param {real} channel_ref
 * @param {real} loop_start
 * @param {real} loop_start_type
 * @param {real} loop_end
 * @param {real} loop_end_type
 * @returns {real}
 */
function fmod_channel_set_loop_points(channel_ref, loop_start, loop_start_type, loop_end, loop_end_type) {}


/**
 * @func fmod_channel_get_loop_points_multiplatform
 * @desc 
 * @param {real} channel_ref
 * @param {real} loop_start_type
 * @param {real} loop_end_type
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_channel_get_loop_points_multiplatform(channel_ref, loop_start_type, loop_end_type, buff_return) {} // FIXME 


/**
 * @func fmod_channel_is_virtual
 * @desc 
 * @param {real} channel_ref
 * @returns {real}
 */
function fmod_channel_is_virtual(channel_ref) {}


/**
 * @func fmod_channel_get_current_sound
 * @desc 
 * @param {real} channel_ref
 * @returns {real}
 */
function fmod_channel_get_current_sound(channel_ref) {}


/**
 * @func fmod_channel_get_index
 * @desc 
 * @param {real} channel_ref
 * @returns {real}
 */
function fmod_channel_get_index(channel_ref) {}


/**
 * @func fmod_channel_get_system_object
 * @desc 
 * @param {real} channel_ref
 * @returns {real}
 */
function fmod_channel_get_system_object(channel_ref) {}


/**
 * @func fmod_channel_control_is_playing
 * @desc 
 * @param {real} channel_control_ref
 * @returns {real}
 */
function fmod_channel_control_is_playing(channel_control_ref) {}


/**
 * @func fmod_channel_control_stop
 * @desc 
 * @param {real} channel_control_ref
 * @returns {real}
 */
function fmod_channel_control_stop(channel_control_ref) {}


/**
 * @func fmod_channel_control_set_paused
 * @desc 
 * @param {real} channel_control_ref
 * @param {real} paused
 * @returns {real}
 */
function fmod_channel_control_set_paused(channel_control_ref, paused) {}


/**
 * @func fmod_channel_control_get_paused
 * @desc 
 * @param {real} channel_control_ref
 * @returns {real}
 */
function fmod_channel_control_get_paused(channel_control_ref) {}


/**
 * @func fmod_channel_control_set_mode
 * @desc 
 * @param {real} channel_control_ref
 * @param {real} mode
 * @returns {real}
 */
function fmod_channel_control_set_mode(channel_control_ref, mode) {}


/**
 * @func fmod_channel_control_get_mode
 * @desc 
 * @param {real} channel_control_ref
 * @returns {real}
 */
function fmod_channel_control_get_mode(channel_control_ref) {}


/**
 * @func fmod_channel_control_set_pitch
 * @desc 
 * @param {real} channel_control_ref
 * @param {real} pitch
 * @returns {real}
 */
function fmod_channel_control_set_pitch(channel_control_ref, pitch) {}


/**
 * @func fmod_channel_control_get_pitch
 * @desc 
 * @param {real} channel_control_ref
 * @returns {real}
 */
function fmod_channel_control_get_pitch(channel_control_ref) {}


/**
 * @func fmod_channel_control_get_audibility
 * @desc 
 * @param {real} channel_control_ref
 * @returns {real}
 */
function fmod_channel_control_get_audibility(channel_control_ref) {}


/**
 * @func fmod_channel_control_set_volume
 * @desc 
 * @param {real} channel_control_ref
 * @param {real} volume
 * @returns {real}
 */
function fmod_channel_control_set_volume(channel_control_ref, volume) {}


/**
 * @func fmod_channel_control_get_volume
 * @desc 
 * @param {real} channel_control_ref
 * @returns {real}
 */
function fmod_channel_control_get_volume(channel_control_ref) {}


/**
 * @func fmod_channel_control_set_volume_ramp
 * @desc 
 * @param {real} channel_control_ref
 * @param {real} ramp
 * @returns {real}
 */
function fmod_channel_control_set_volume_ramp(channel_control_ref, ramp) {}


/**
 * @func fmod_channel_control_get_volume_ramp
 * @desc 
 * @param {real} channel_control_ref
 * @returns {real}
 */
function fmod_channel_control_get_volume_ramp(channel_control_ref) {}


/**
 * @func fmod_channel_control_set_mute
 * @desc 
 * @param {real} channel_control_ref
 * @param {real} mute
 * @returns {real}
 */
function fmod_channel_control_set_mute(channel_control_ref, mute) {}


/**
 * @func fmod_channel_control_get_mute
 * @desc 
 * @param {real} channel_control_ref
 * @returns {real}
 */
function fmod_channel_control_get_mute(channel_control_ref) {}


/**
 * @func fmod_channel_control_set_3d_attributes_multiplatform
 * @desc 
 * @param {real} channel_control_ref
 * @param {Id.Buffer} buff_args
 * @returns {real}
 */
function fmod_channel_control_set_3d_attributes_multiplatform(channel_control_ref, buff_args) {} // FIXME 


/**
 * @func fmod_channel_control_get_3d_attributes_multiplatform
 * @desc 
 * @param {real} channel_control_ref
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_channel_control_get_3d_attributes_multiplatform(channel_control_ref, buff_return) {} // FIXME 


/**
 * @func fmod_channel_control_set_3d_cone_orientation_multiplatform
 * @desc 
 * @param {real} channel_control_ref
 * @param {Id.Buffer} buff_args
 * @returns {real}
 */
function fmod_channel_control_set_3d_cone_orientation_multiplatform(channel_control_ref, buff_args) {} // FIXME 


/**
 * @func fmod_channel_control_get_3d_cone_orientation_multiplatform
 * @desc 
 * @param {real} channel_control_ref
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_channel_control_get_3d_cone_orientation_multiplatform(channel_control_ref, buff_return) {} // FIXME 


/**
 * @func fmod_channel_control_set_3d_cone_settings
 * @desc 
 * @param {real} channel_control_ref
 * @param {real} inside_cone_angle
 * @param {real} outside_cone_angle
 * @param {real} outside_volume
 * @returns {real}
 */
function fmod_channel_control_set_3d_cone_settings(channel_control_ref, inside_cone_angle, outside_cone_angle, outside_volume) {}


/**
 * @func fmod_channel_control_get_3d_cone_settings_multiplatform
 * @desc 
 * @param {real} channel_control_ref
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_channel_control_get_3d_cone_settings_multiplatform(channel_control_ref, buff_return) {} // FIXME 


/**
 * @func fmod_channel_control_set_3d_custom_rolloff_multiplatform
 * @desc 
 * @param {real} channel_control_ref
 * @param {Id.Buffer} buff_args
 * @returns {real}
 */
function fmod_channel_control_set_3d_custom_rolloff_multiplatform(channel_control_ref, buff_args) {} // FIXME 


/**
 * @func fmod_channel_control_get_3d_custom_rolloff_multiplatform
 * @desc 
 * @param {real} channel_control_ref
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_channel_control_get_3d_custom_rolloff_multiplatform(channel_control_ref, buff_return) {} // FIXME 


/**
 * @func fmod_channel_control_set_3d_distance_filter
 * @desc 
 * @param {real} channel_control_ref
 * @param {real} custom
 * @param {real} custom_level
 * @param {real} center_freq
 * @returns {real}
 */
function fmod_channel_control_set_3d_distance_filter(channel_control_ref, custom, custom_level, center_freq) {}


/**
 * @func fmod_channel_control_get_3d_distance_filter_multiplatform
 * @desc 
 * @param {real} channel_control_ref
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_channel_control_get_3d_distance_filter_multiplatform(channel_control_ref, buff_return) {} // FIXME 


/**
 * @func fmod_channel_control_set_3d_doppler_level
 * @desc 
 * @param {real} channel_control_ref
 * @param {real} level
 * @returns {real}
 */
function fmod_channel_control_set_3d_doppler_level(channel_control_ref, level) {}


/**
 * @func fmod_channel_control_get_3d_doppler_level
 * @desc 
 * @param {real} channel_control_ref
 * @returns {real}
 */
function fmod_channel_control_get_3d_doppler_level(channel_control_ref) {}


/**
 * @func fmod_channel_control_set_3d_level
 * @desc 
 * @param {real} channel_control_ref
 * @param {real} level
 * @returns {real}
 */
function fmod_channel_control_set_3d_level(channel_control_ref, level) {}


/**
 * @func fmod_channel_control_get_3d_level
 * @desc 
 * @param {real} channel_control_ref
 * @returns {real}
 */
function fmod_channel_control_get_3d_level(channel_control_ref) {}


/**
 * @func fmod_channel_control_set_3d_min_max_distance
 * @desc 
 * @param {real} channel_control_ref
 * @param {real} min
 * @param {real} max
 * @returns {real}
 */
function fmod_channel_control_set_3d_min_max_distance(channel_control_ref, min, max) {}


/**
 * @func fmod_channel_control_get_3d_min_max_distance_multiplatform
 * @desc 
 * @param {real} channel_control_ref
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_channel_control_get_3d_min_max_distance_multiplatform(channel_control_ref, buff_return) {} // FIXME 


/**
 * @func fmod_channel_control_set_3d_occlusion
 * @desc 
 * @param {real} channel_control_ref
 * @param {real} direct_occlusion
 * @param {real} reverb_occlusion
 * @returns {real}
 */
function fmod_channel_control_set_3d_occlusion(channel_control_ref, direct_occlusion, reverb_occlusion) {}


/**
 * @func fmod_channel_control_get_3d_occlusion_multiplatform
 * @desc 
 * @param {real} channel_control_ref
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_channel_control_get_3d_occlusion_multiplatform(channel_control_ref, buff_return) {} // FIXME 


/**
 * @func fmod_channel_control_set_3d_spread
 * @desc 
 * @param {real} channel_control_ref
 * @param {real} angle
 * @returns {real}
 */
function fmod_channel_control_set_3d_spread(channel_control_ref, angle) {}


/**
 * @func fmod_channel_control_get_3d_spread
 * @desc 
 * @param {real} channel_control_ref
 * @returns {real}
 */
function fmod_channel_control_get_3d_spread(channel_control_ref) {}


/**
 * @func fmod_channel_control_set_pan
 * @desc 
 * @param {real} channel_control_ref
 * @param {real} pan
 * @returns {real}
 */
function fmod_channel_control_set_pan(channel_control_ref, pan) {}


/**
 * @func fmod_channel_control_set_mix_levels_input_multiplatform
 * @desc 
 * @param {real} channel_control_ref
 * @param {Id.Buffer} buff_args
 * @returns {real}
 */
function fmod_channel_control_set_mix_levels_input_multiplatform(channel_control_ref, buff_args) {} // FIXME 


/**
 * @func fmod_channel_control_set_mix_levels_output
 * @desc 
 * @param {real} channel_control_ref
 * @param {real} front_left
 * @param {real} front_right
 * @param {real} center
 * @param {real} lfe
 * @param {real} surround_left
 * @param {real} surround_right
 * @param {real} back_left
 * @param {real} back_right
 * @returns {real}
 */
function fmod_channel_control_set_mix_levels_output(channel_control_ref, front_left, front_right, center, lfe, surround_left, surround_right, back_left, back_right) {}


/**
 * @func fmod_channel_control_set_mix_matrix_multiplatform
 * @desc 
 * @param {real} channel_control_ref
 * @param {Id.Buffer} buff_args
 * @returns {real}
 */
function fmod_channel_control_set_mix_matrix_multiplatform(channel_control_ref, buff_args) {} // FIXME 


/**
 * @func fmod_channel_control_get_mix_matrix_multiplatform
 * @desc 
 * @param {real} channel_control_ref
 * @param {real} in_channel_hop
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_channel_control_get_mix_matrix_multiplatform(channel_control_ref, in_channel_hop, buff_return) {} // FIXME 


/**
 * @func fmod_channel_control_set_reverb_properties
 * @desc 
 * @param {real} channel_control_ref
 * @param {real} reverb_instance
 * @param {real} wet
 * @returns {real}
 */
function fmod_channel_control_set_reverb_properties(channel_control_ref, reverb_instance, wet) {}


/**
 * @func fmod_channel_control_get_reverb_properties
 * @desc 
 * @param {real} channel_control_ref
 * @param {real} reverb_instance
 * @returns {real}
 */
function fmod_channel_control_get_reverb_properties(channel_control_ref, reverb_instance) {}


/**
 * @func fmod_channel_control_set_low_pass_gain
 * @desc 
 * @param {real} channel_control_ref
 * @param {real} gain
 * @returns {real}
 */
function fmod_channel_control_set_low_pass_gain(channel_control_ref, gain) {}


/**
 * @func fmod_channel_control_get_low_Pass_gain
 * @desc 
 * @param {real} channel_control_ref
 * @returns {real}
 */
function fmod_channel_control_get_low_Pass_gain(channel_control_ref) {}


/**
 * @func fmod_channel_control_add_dsp
 * @desc 
 * @param {real} channel_control_ref
 * @param {real} dsp_chain_offset
 * @param {real} dsp_ref
 * @returns {real}
 */
function fmod_channel_control_add_dsp(channel_control_ref, dsp_chain_offset, dsp_ref) {}


/**
 * @func fmod_channel_control_remove_dsp
 * @desc 
 * @param {real} channel_control_ref
 * @param {real} dsp_ref
 * @returns {real}
 */
function fmod_channel_control_remove_dsp(channel_control_ref, dsp_ref) {}


/**
 * @func fmod_channel_control_get_num_dsps
 * @desc 
 * @param {real} channel_control_ref
 * @returns {real}
 */
function fmod_channel_control_get_num_dsps(channel_control_ref) {}


/**
 * @func fmod_channel_control_get_dsp
 * @desc 
 * @param {real} channel_control_ref
 * @param {real} index
 * @returns {real}
 */
function fmod_channel_control_get_dsp(channel_control_ref, index) {}


/**
 * @func fmod_channel_control_set_dsp_index
 * @desc 
 * @param {real} channel_control_ref
 * @param {real} dsp_ref
 * @param {real} chain_index
 * @returns {real}
 */
function fmod_channel_control_set_dsp_index(channel_control_ref, dsp_ref, chain_index) {}


/**
 * @func fmod_channel_control_get_dsp_index
 * @desc 
 * @param {real} channel_control_ref
 * @param {real} dsp_ref
 * @returns {real}
 */
function fmod_channel_control_get_dsp_index(channel_control_ref, dsp_ref) {}


/**
 * @func fmod_channel_control_get_dsp_clock_multiplatform
 * @desc 
 * @param {real} channel_control_ref
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_channel_control_get_dsp_clock_multiplatform(channel_control_ref, buff_return) {} // FIXME 


/**
 * @func fmod_channel_control_set_delay_multiplatform
 * @desc 
 * @param {real} channel_control_ref
 * @param {Id.Buffer} buff_args
 * @returns {real}
 */
function fmod_channel_control_set_delay_multiplatform(channel_control_ref, buff_args) {} // FIXME 


/**
 * @func fmod_channel_control_get_delay_multiplatform
 * @desc 
 * @param {real} channel_control_ref
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_channel_control_get_delay_multiplatform(channel_control_ref, buff_return) {} // FIXME 


/**
 * @func fmod_channel_control_add_fade_point_multiplatform
 * @desc 
 * @param {real} channel_control_ref
 * @param {Id.Buffer} buff_args
 * @returns {real}
 */
function fmod_channel_control_add_fade_point_multiplatform(channel_control_ref, buff_args) {} // FIXME 


/**
 * @func fmod_channel_control_set_fade_point_ramp_multiplatform
 * @desc 
 * @param {real} channel_control_ref
 * @param {Id.Buffer} buff_args
 * @returns {real}
 */
function fmod_channel_control_set_fade_point_ramp_multiplatform(channel_control_ref, buff_args) {} // FIXME 


/**
 * @func fmod_channel_control_remove_fade_points_multiplatform
 * @desc 
 * @param {real} channel_control_ref
 * @param {Id.Buffer} buff_args
 * @returns {real}
 */
function fmod_channel_control_remove_fade_points_multiplatform(channel_control_ref, buff_args) {} // FIXME 


/**
 * @func fmod_channel_control_get_fade_points_multiplatform
 * @desc 
 * @param {real} channel_control_ref
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_channel_control_get_fade_points_multiplatform(channel_control_ref, buff_return) {} // FIXME 


/**
 * @func fmod_channel_control_set_callback
 * @desc 
 * @param {real} channel_control_ref
 * @returns {real}
 */
function fmod_channel_control_set_callback(channel_control_ref) {}


/**
 * @func fmod_channel_control_get_system_object
 * @desc 
 * @param {real} channel_control_ref
 * @returns {real}
 */
function fmod_channel_control_get_system_object(channel_control_ref) {}


/**
 * @func fmod_channel_control_set_user_data
 * @desc 
 * @param {real} channel_control_ref
 * @param {real} data
 * @returns {real}
 */
function fmod_channel_control_set_user_data(channel_control_ref, data) {}


/**
 * @func fmod_channel_control_get_user_data
 * @desc 
 * @param {real} channel_control_ref
 * @returns {real}
 */
function fmod_channel_control_get_user_data(channel_control_ref) {}


/**
 * @func fmod_channel_group_get_num_channels
 * @desc 
 * @param {real} channel_group_ref
 * @returns {real}
 */
function fmod_channel_group_get_num_channels(channel_group_ref) {}


/**
 * @func fmod_channel_group_get_channel
 * @desc 
 * @param {real} channel_group_ref
 * @param {real} index
 * @returns {real}
 */
function fmod_channel_group_get_channel(channel_group_ref, index) {}


/**
 * @func fmod_channel_group_add_group_multiplatform
 * @desc 
 * @param {real} channel_group_ref
 * @param {real} child_channel_group_ref
 * @param {real} propagate_dsp_clock
 * @returns {real}
 */
function fmod_channel_group_add_group_multiplatform(channel_group_ref, child_channel_group_ref, propagate_dsp_clock) {}


/**
 * @func fmod_channel_group_get_num_groups
 * @desc 
 * @param {real} channel_group_ref
 * @returns {real}
 */
function fmod_channel_group_get_num_groups(channel_group_ref) {}


/**
 * @func fmod_channel_group_get_group
 * @desc 
 * @param {real} channel_group_ref
 * @param {real} group_index
 * @returns {real}
 */
function fmod_channel_group_get_group(channel_group_ref, group_index) {}


/**
 * @func fmod_channel_group_get_parent_group
 * @desc 
 * @param {real} channel_group_ref
 * @returns {real}
 */
function fmod_channel_group_get_parent_group(channel_group_ref) {}


/**
 * @func fmod_channel_group_get_name
 * @desc 
 * @param {real} channel_group_ref
 * @returns {string}
 */
function fmod_channel_group_get_name(channel_group_ref) {}


/**
 * @func fmod_channel_group_release
 * @desc 
 * @param {real} channel_group_ref
 * @returns {real}
 */
function fmod_channel_group_release(channel_group_ref) {}


/**
 * @func fmod_channel_group_get_system_object
 * @desc 
 * @param {real} channel_group_ref
 * @returns {real}
 */
function fmod_channel_group_get_system_object(channel_group_ref) {}


/**
 * @func fmod_file_get_disk_busy
 * @desc 
 * @returns {real}
 */
function fmod_file_get_disk_busy() {}


/**
 * @func fmod_file_set_disk_busy
 * @desc 
 * @param {real} busy
 * @returns {real}
 */
function fmod_file_set_disk_busy(busy) {}


/**
 * @func fmod_memory_get_stats_multiplatform
 * @desc 
 * @param {real} blocking
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_memory_get_stats_multiplatform(blocking, buff_return) {} // FIXME 


/**
 * @func fmod_debug_initialize_multiplatform
 * @desc 
 * @param {real} flags
 * @param {real} mode
 * @param {string} filename
 * @returns {real}
 */
function fmod_debug_initialize_multiplatform(flags, mode, filename) {}


/**
 * @func fmod_thread_set_attributes
 * @desc 
 * @param {real} type
 * @param {real} affinity
 * @param {real} priority
 * @param {real} stacksize
 * @returns {real}
 */
function fmod_thread_set_attributes(type, affinity, priority, stacksize) {}


/**
 * @func fmod_dsp_add_input_multiplatform
 * @desc 
 * @param {real} dsp_ref
 * @param {real} dsp_input_ref
 * @param {real} dsp_connection_type
 * @returns {real}
 */
function fmod_dsp_add_input_multiplatform(dsp_ref, dsp_input_ref, dsp_connection_type) {}


/**
 * @func fmod_dsp_get_input_multiplatform
 * @desc 
 * @param {real} dsp_ref
 * @param {real} dsp_input_index
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_dsp_get_input_multiplatform(dsp_ref, dsp_input_index, buff_return) {} // FIXME 


/**
 * @func fmod_dsp_get_output_multiplatform
 * @desc 
 * @param {real} dsp_ref
 * @param {real} dsp_output_index
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_dsp_get_output_multiplatform(dsp_ref, dsp_output_index, buff_return) {} // FIXME 


/**
 * @func fmod_dsp_get_num_inputs
 * @desc 
 * @param {real} dsp_ref
 * @returns {real}
 */
function fmod_dsp_get_num_inputs(dsp_ref) {}


/**
 * @func fmod_dsp_get_num_outputs
 * @desc 
 * @param {real} dsp_ref
 * @returns {real}
 */
function fmod_dsp_get_num_outputs(dsp_ref) {}


/**
 * @func fmod_dsp_disconnect_all
 * @desc 
 * @param {real} dsp_ref
 * @param {real} inputs
 * @param {real} outputs
 * @returns {real}
 */
function fmod_dsp_disconnect_all(dsp_ref, inputs, outputs) {}


/**
 * @func fmod_dsp_disconnect_from_mutliplatform
 * @desc 
 * @param {real} dsp_ref
 * @param {real} dsp_other_ref
 * @param {real} dsp_connection_ref
 * @returns {real}
 */
function fmod_dsp_disconnect_from_mutliplatform(dsp_ref, dsp_other_ref, dsp_connection_ref) {}


/**
 * @func fmod_dsp_get_data_parameter_index
 * @desc 
 * @param {real} dsp_ref
 * @param {real} data_type
 * @returns {real}
 */
function fmod_dsp_get_data_parameter_index(dsp_ref, data_type) {}


/**
 * @func fmod_dsp_get_num_parameters
 * @desc 
 * @param {real} dsp_ref
 * @returns {real}
 */
function fmod_dsp_get_num_parameters(dsp_ref) {}


/**
 * @func fmod_dsp_set_parameter_bool
 * @desc 
 * @param {real} dsp_ref
 * @param {real} parameter_index
 * @param {real} value
 * @returns {real}
 */
function fmod_dsp_set_parameter_bool(dsp_ref, parameter_index, value) {}


/**
 * @func fmod_dsp_get_parameter_bool
 * @desc 
 * @param {real} dsp_ref
 * @param {real} parameter_index
 * @returns {real}
 */
function fmod_dsp_get_parameter_bool(dsp_ref, parameter_index) {}


/**
 * @func fmod_dsp_set_parameter_data_multiplatform
 * @desc 
 * @param {real} dsp_ref
 * @param {real} parameter_index
 * @param {Id.Buffer} buff
 * @param {real} length
 * @returns {real}
 */
function fmod_dsp_set_parameter_data_multiplatform(dsp_ref, parameter_index, buff, length) {} // FIXME 


/**
 * @func fmod_dsp_get_parameter_data_multiplatform
 * @desc 
 * @param {real} dsp_ref
 * @param {real} parameter_index
 * @param {Id.Buffer} buff
 * @param {real} length
 * @returns {real}
 */
function fmod_dsp_get_parameter_data_multiplatform(dsp_ref, parameter_index, buff, length) {} // FIXME 


/**
 * @func fmod_dsp_set_parameter_float
 * @desc 
 * @param {real} dsp_ref
 * @param {real} parameter_index
 * @param {real} value
 * @returns {real}
 */
function fmod_dsp_set_parameter_float(dsp_ref, parameter_index, value) {}


/**
 * @func fmod_dsp_get_parameter_float
 * @desc 
 * @param {real} dsp_ref
 * @param {real} parameter_index
 * @returns {real}
 */
function fmod_dsp_get_parameter_float(dsp_ref, parameter_index) {}


/**
 * @func fmod_dsp_set_parameter_int
 * @desc 
 * @param {real} dsp_ref
 * @param {real} parameter_index
 * @param {real} value
 * @returns {real}
 */
function fmod_dsp_set_parameter_int(dsp_ref, parameter_index, value) {}


/**
 * @func fmod_dsp_get_parameter_int
 * @desc 
 * @param {real} dsp_ref
 * @param {real} parameter_index
 * @returns {real}
 */
function fmod_dsp_get_parameter_int(dsp_ref, parameter_index) {}


/**
 * @func fmod_dsp_get_parameter_info_multiplatform
 * @desc 
 * @param {real} dsp_ref
 * @param {real} parameter_index
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_dsp_get_parameter_info_multiplatform(dsp_ref, parameter_index, buff_return) {} // FIXME 


/**
 * @func fmod_dsp_set_channel_format
 * @desc 
 * @param {real} dsp_ref
 * @param {real} channel_mask
 * @param {real} num_channels
 * @param {real} speaker_mode
 * @returns {real}
 */
function fmod_dsp_set_channel_format(dsp_ref, channel_mask, num_channels, speaker_mode) {}


/**
 * @func fmod_dsp_get_channel_format_multiplatform
 * @desc 
 * @param {real} dsp_ref
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_dsp_get_channel_format_multiplatform(dsp_ref, buff_return) {} // FIXME 


/**
 * @func fmod_dsp_get_output_channel_format_multiplatform
 * @desc 
 * @param {real} dsp_ref
 * @param {Id.Buffer} buff_args
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_dsp_get_output_channel_format_multiplatform(dsp_ref, buff_args, buff_return) {} // FIXME 


/**
 * @func fmod_dsp_get_metering_info_multiplatform
 * @desc 
 * @param {real} dsp_ref
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_dsp_get_metering_info_multiplatform(dsp_ref, buff_return) {} // FIXME 


/**
 * @func fmod_dsp_set_metering_enabled
 * @desc 
 * @param {real} dsp_ref
 * @param {real} enabled_in
 * @param {real} enabled_out
 * @returns {real}
 */
function fmod_dsp_set_metering_enabled(dsp_ref, enabled_in, enabled_out) {}


/**
 * @func fmod_dsp_get_metering_enabled_multiplatform
 * @desc 
 * @param {real} dsp_ref
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_dsp_get_metering_enabled_multiplatform(dsp_ref, buff_return) {} // FIXME 


/**
 * @func fmod_dsp_set_active
 * @desc 
 * @param {real} dsp_ref
 * @param {real} active
 * @returns {real}
 */
function fmod_dsp_set_active(dsp_ref, active) {}


/**
 * @func fmod_dsp_get_active
 * @desc 
 * @param {real} dsp_ref
 * @returns {real}
 */
function fmod_dsp_get_active(dsp_ref) {}


/**
 * @func fmod_dsp_set_bypass
 * @desc 
 * @param {real} dsp_ref
 * @param {real} bypass
 * @returns {real}
 */
function fmod_dsp_set_bypass(dsp_ref, bypass) {}


/**
 * @func fmod_dsp_get_bypass
 * @desc 
 * @param {real} dsp_ref
 * @returns {real}
 */
function fmod_dsp_get_bypass(dsp_ref) {}


/**
 * @func fmod_dsp_set_wet_dry_mix
 * @desc 
 * @param {real} dsp_ref
 * @param {real} prewet
 * @param {real} postwet
 * @param {real} dry
 * @returns {real}
 */
function fmod_dsp_set_wet_dry_mix(dsp_ref, prewet, postwet, dry) {}


/**
 * @func fmod_dsp_get_wet_dry_mix_multiplatform
 * @desc 
 * @param {real} dsp_ref
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_dsp_get_wet_dry_mix_multiplatform(dsp_ref, buff_return) {} // FIXME 


/**
 * @func fmod_dsp_get_idle
 * @desc 
 * @param {real} dsp_ref
 * @returns {real}
 */
function fmod_dsp_get_idle(dsp_ref) {}


/**
 * @func fmod_dsp_reset
 * @desc 
 * @param {real} dsp_ref
 * @returns {real}
 */
function fmod_dsp_reset(dsp_ref) {}


/**
 * @func fmod_dsp_release
 * @desc 
 * @param {real} dsp_ref
 * @returns {real}
 */
function fmod_dsp_release(dsp_ref) {}


/**
 * @func fmod_dsp_get_type
 * @desc 
 * @param {real} dsp_ref
 * @returns {real}
 */
function fmod_dsp_get_type(dsp_ref) {}


/**
 * @func fmod_dsp_get_info_multiplatform
 * @desc 
 * @param {real} dsp_ref
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_dsp_get_info_multiplatform(dsp_ref, buff_return) {} // FIXME 


/**
 * @func fmod_dsp_get_cpu_usage_multiplatform
 * @desc 
 * @param {real} dsp_ref
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_dsp_get_cpu_usage_multiplatform(dsp_ref, buff_return) {} // FIXME 


/**
 * @func fmod_dsp_set_user_data
 * @desc 
 * @param {real} dsp_ref
 * @param {real} data
 * @returns {real}
 */
function fmod_dsp_set_user_data(dsp_ref, data) {}


/**
 * @func fmod_dsp_get_user_data
 * @desc 
 * @param {real} dsp_ref
 * @returns {real}
 */
function fmod_dsp_get_user_data(dsp_ref) {}


/**
 * @func fmod_dsp_set_callback
 * @desc 
 * @param {real} dsp_ref
 * @returns {real}
 */
function fmod_dsp_set_callback(dsp_ref) {}


/**
 * @func fmod_dsp_get_system_object
 * @desc 
 * @param {real} dsp_ref
 * @returns {real}
 */
function fmod_dsp_get_system_object(dsp_ref) {}


/**
 * @func fmod_dsp_connection_set_mix
 * @desc 
 * @param {real} dsp_connection_ref
 * @param {real} volume
 * @returns {real}
 */
function fmod_dsp_connection_set_mix(dsp_connection_ref, volume) {}


/**
 * @func fmod_dsp_connection_get_mix
 * @desc 
 * @param {real} dsp_connection_ref
 * @returns {real}
 */
function fmod_dsp_connection_get_mix(dsp_connection_ref) {}


/**
 * @func fmod_dsp_connection_set_mix_matrix_multiplatform
 * @desc 
 * @param {real} dsp_connection_ref
 * @param {Id.Buffer} buff_args
 * @returns {real}
 */
function fmod_dsp_connection_set_mix_matrix_multiplatform(dsp_connection_ref, buff_args) {} // FIXME 


/**
 * @func fmod_dsp_connection_get_mix_matrix_multiplatform
 * @desc 
 * @param {real} dsp_connection_ref
 * @param {real} inchannel_hop
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_dsp_connection_get_mix_matrix_multiplatform(dsp_connection_ref, inchannel_hop, buff_return) {} // FIXME 


/**
 * @func fmod_dsp_connection_get_input
 * @desc 
 * @param {real} dsp_connection_ref
 * @returns {real}
 */
function fmod_dsp_connection_get_input(dsp_connection_ref) {}


/**
 * @func fmod_dsp_connection_get_output
 * @desc 
 * @param {real} dsp_connection_ref
 * @returns {real}
 */
function fmod_dsp_connection_get_output(dsp_connection_ref) {}


/**
 * @func fmod_dsp_connection_get_type
 * @desc 
 * @param {real} dsp_connection_ref
 * @returns {real}
 */
function fmod_dsp_connection_get_type(dsp_connection_ref) {}


/**
 * @func fmod_dsp_connection_set_user_data
 * @desc 
 * @param {real} dsp_connection_ref
 * @param {real} data
 * @returns {real}
 */
function fmod_dsp_connection_set_user_data(dsp_connection_ref, data) {}


/**
 * @func fmod_dsp_connection_get_user_data
 * @desc 
 * @param {real} dsp_connection_ref
 * @returns {real}
 */
function fmod_dsp_connection_get_user_data(dsp_connection_ref) {}


/**
 * @func fmod_geometry_set_polygon_attributes
 * @desc 
 * @param {real} geometry_ref
 * @param {real} polygon_index
 * @param {real} direct_occlusion
 * @param {real} reverb_occlusion
 * @param {real} double_sided
 * @returns {real}
 */
function fmod_geometry_set_polygon_attributes(geometry_ref, polygon_index, direct_occlusion, reverb_occlusion, double_sided) {}


/**
 * @func fmod_geometry_get_polygon_attributes_multiplatform
 * @desc 
 * @param {real} geometry_ref
 * @param {real} polygon_index
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_geometry_get_polygon_attributes_multiplatform(geometry_ref, polygon_index, buff_return) {} // FIXME 


/**
 * @func fmod_geometry_get_polygon_mum_vertices
 * @desc 
 * @param {real} geometry_ref
 * @param {real} polygon_index
 * @returns {real}
 */
function fmod_geometry_get_polygon_mum_vertices(geometry_ref, polygon_index) {}


/**
 * @func fmod_geometry_set_polygon_vertex_multiplatform
 * @desc 
 * @param {real} geometry_ref
 * @param {real} polygon_index
 * @param {real} vertex_index
 * @param {Id.Buffer} buff_args
 * @returns {real}
 */
function fmod_geometry_set_polygon_vertex_multiplatform(geometry_ref, polygon_index, vertex_index, buff_args) {} // FIXME 


/**
 * @func fmod_geometry_get_polygon_vertex_multiplatform
 * @desc 
 * @param {real} geometry_ref
 * @param {real} polygon_index
 * @param {real} vertex_index
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_geometry_get_polygon_vertex_multiplatform(geometry_ref, polygon_index, vertex_index, buff_return) {} // FIXME 


/**
 * @func fmod_geometry_set_position_multiplatform
 * @desc 
 * @param {real} geometry_ref
 * @param {Id.Buffer} buff_args
 * @returns {real}
 */
function fmod_geometry_set_position_multiplatform(geometry_ref, buff_args) {} // FIXME 


/**
 * @func fmod_geometry_get_position_multiplatform
 * @desc 
 * @param {real} geometry_ref
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_geometry_get_position_multiplatform(geometry_ref, buff_return) {} // FIXME 


/**
 * @func fmod_geometry_set_rotation_multiplatform
 * @desc 
 * @param {real} geometry_ref
 * @param {Id.Buffer} buff_args
 * @returns {real}
 */
function fmod_geometry_set_rotation_multiplatform(geometry_ref, buff_args) {} // FIXME 


/**
 * @func fmod_geometry_get_rotation_multiplatform
 * @desc 
 * @param {real} geometry_ref
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_geometry_get_rotation_multiplatform(geometry_ref, buff_return) {} // FIXME 


/**
 * @func fmod_geometry_set_scale_multiplatform
 * @desc 
 * @param {real} geometry_ref
 * @param {Id.Buffer} buff_args
 * @returns {real}
 */
function fmod_geometry_set_scale_multiplatform(geometry_ref, buff_args) {} // FIXME 


/**
 * @func fmod_geometry_get_scale_multiplatform
 * @desc 
 * @param {real} geometry_ref
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_geometry_get_scale_multiplatform(geometry_ref, buff_return) {} // FIXME 


/**
 * @func fmod_geometry_add_polygon_multiplatform
 * @desc 
 * @param {real} geometry_ref
 * @param {Id.Buffer} buff_args
 * @returns {real}
 */
function fmod_geometry_add_polygon_multiplatform(geometry_ref, buff_args) {} // FIXME 


/**
 * @func fmod_geometry_set_active
 * @desc 
 * @param {real} geometry_ref
 * @param {real} active
 * @returns {real}
 */
function fmod_geometry_set_active(geometry_ref, active) {}


/**
 * @func fmod_geometry_get_active
 * @desc 
 * @param {real} geometry_ref
 * @returns {real}
 */
function fmod_geometry_get_active(geometry_ref) {}


/**
 * @func fmod_geometry_get_max_polygons
 * @desc 
 * @param {real} geometry_ref
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_geometry_get_max_polygons(geometry_ref, buff_return) {} // FIXME 


/**
 * @func fmod_geometry_get_num_polygons
 * @desc 
 * @param {real} geometry_ref
 * @returns {real}
 */
function fmod_geometry_get_num_polygons(geometry_ref) {}


/**
 * @func fmod_geometry_set_user_data
 * @desc 
 * @param {real} geometry_ref
 * @param {real} data
 * @returns {real}
 */
function fmod_geometry_set_user_data(geometry_ref, data) {}


/**
 * @func fmod_geometry_get_user_data
 * @desc 
 * @param {real} geometry_ref
 * @returns {real}
 */
function fmod_geometry_get_user_data(geometry_ref) {}


/**
 * @func fmod_geometry_release
 * @desc 
 * @param {real} geometry_ref
 * @returns {real}
 */
function fmod_geometry_release(geometry_ref) {}


/**
 * @func fmod_geometry_save
 * @desc 
 * @param {real} geometry_ref
 * @param {Id.Buffer} buff
 * @returns {real}
 */
function fmod_geometry_save(geometry_ref, buff) {} // FIXME 


/**
 * @func fmod_reverb_3d_set_3d_attributes_multiplatform
 * @desc 
 * @param {real} reverb_3d_ref
 * @param {Id.Buffer} buff_args
 * @param {real} min_distance
 * @param {real} max_distance
 * @returns {real}
 */
function fmod_reverb_3d_set_3d_attributes_multiplatform(reverb_3d_ref, buff_args, min_distance, max_distance) {} // FIXME 


/**
 * @func fmod_reverb_3d_get_3d_attributes_multiplatform
 * @desc 
 * @param {real} reverb_3d_ref
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_reverb_3d_get_3d_attributes_multiplatform(reverb_3d_ref, buff_return) {} // FIXME 


/**
 * @func fmod_reverb_3d_set_properties
 * @desc 
 * @param {real} reverb_3d_ref
 * @param {real} decay_time
 * @param {real} early_delay
 * @param {real} late_delay
 * @param {real} hf_reference
 * @param {real} hf_decay_ratio
 * @param {real} diffusion
 * @param {real} density
 * @param {real} low_shelf_frequency
 * @param {real} low_shelf_gain
 * @param {real} high_cut
 * @param {real} early_late_mix
 * @param {real} wet_level
 * @returns {real}
 */
function fmod_reverb_3d_set_properties(reverb_3d_ref, decay_time, early_delay, late_delay, hf_reference, hf_decay_ratio, diffusion, density, low_shelf_frequency, low_shelf_gain, high_cut, early_late_mix, wet_level) {}


/**
 * @func fmod_reverb_3d_get_properties_multiplatform
 * @desc 
 * @param {real} reverb_3d_ref
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_reverb_3d_get_properties_multiplatform(reverb_3d_ref, buff_return) {} // FIXME 


/**
 * @func fmod_reverb_3d_set_active
 * @desc 
 * @param {real} reverb_3d_ref
 * @param {real} active
 * @returns {real}
 */
function fmod_reverb_3d_set_active(reverb_3d_ref, active) {}


/**
 * @func fmod_reverb_3d_get_active
 * @desc 
 * @param {real} reverb_3d_ref
 * @returns {real}
 */
function fmod_reverb_3d_get_active(reverb_3d_ref) {}


/**
 * @func fmod_reverb_3d_release
 * @desc 
 * @param {real} reverb_3d_ref
 * @returns {real}
 */
function fmod_reverb_3d_release(reverb_3d_ref) {}


/**
 * @func fmod_reverb_3d_set_user_data
 * @desc 
 * @param {real} reverb_3d_ref
 * @param {real} data
 * @returns {real}
 */
function fmod_reverb_3d_set_user_data(reverb_3d_ref, data) {}


/**
 * @func fmod_reverb_3d_get_user_data
 * @desc 
 * @param {real} reverb_3d_ref
 * @returns {real}
 */
function fmod_reverb_3d_get_user_data(reverb_3d_ref) {}


/**
 * @func fmod_sound_get_name
 * @desc 
 * @param {real} sound_ref
 * @returns {string}
 */
function fmod_sound_get_name(sound_ref) {}


/**
 * @func fmod_sound_get_format_multiplatform
 * @desc 
 * @param {real} sound_ref
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_sound_get_format_multiplatform(sound_ref, buff_return) {} // FIXME 


/**
 * @func fmod_sound_get_length
 * @desc 
 * @param {real} sound_ref
 * @param {real} length_type
 * @returns {real}
 */
function fmod_sound_get_length(sound_ref, length_type) {}


/**
 * @func fmod_sound_get_num_tags_multiplatform
 * @desc 
 * @param {real} sound_ref
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_sound_get_num_tags_multiplatform(sound_ref, buff_return) {} // FIXME 


/**
 * @func fmod_sound_get_tag_multiplatform
 * @desc 
 * @param {real} sound_ref
 * @param {real} tag_index
 * @param {Id.Buffer} buff_args
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_sound_get_tag_multiplatform(sound_ref, tag_index, buff_args, buff_return) {} // FIXME 


/**
 * @func fmod_sound_set_3d_cone_settings
 * @desc 
 * @param {real} sound_ref
 * @param {real} inside_cone_angle
 * @param {real} outside_cone_angle
 * @param {real} outside_volume
 * @returns {real}
 */
function fmod_sound_set_3d_cone_settings(sound_ref, inside_cone_angle, outside_cone_angle, outside_volume) {}


/**
 * @func fmod_sound_get_3d_cone_settings_multiplatform
 * @desc 
 * @param {real} sound_ref
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_sound_get_3d_cone_settings_multiplatform(sound_ref, buff_return) {} // FIXME 


/**
 * @func fmod_sound_set_3d_custom_rolloff_multiplatform
 * @desc 
 * @param {real} sound_ref
 * @param {Id.Buffer} buff_args
 * @returns {real}
 */
function fmod_sound_set_3d_custom_rolloff_multiplatform(sound_ref, buff_args) {} // FIXME 


/**
 * @func fmod_sound_get_3d_custom_rolloff_multiplatform
 * @desc 
 * @param {real} sound_ref
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_sound_get_3d_custom_rolloff_multiplatform(sound_ref, buff_return) {} // FIXME 


/**
 * @func fmod_sound_set_3d_min_max_distance
 * @desc 
 * @param {real} sound_ref
 * @param {real} min
 * @param {real} max
 * @returns {real}
 */
function fmod_sound_set_3d_min_max_distance(sound_ref, min, max) {}


/**
 * @func fmod_sound_get_3d_min_max_distance_multiplatform
 * @desc 
 * @param {real} sound_ref
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_sound_get_3d_min_max_distance_multiplatform(sound_ref, buff_return) {} // FIXME 


/**
 * @func fmod_sound_set_defaults
 * @desc 
 * @param {real} sound_ref
 * @param {real} frequency
 * @param {real} priority
 * @returns {real}
 */
function fmod_sound_set_defaults(sound_ref, frequency, priority) {}


/**
 * @func fmod_sound_get_defaults_multiplatform
 * @desc 
 * @param {real} sound_ref
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_sound_get_defaults_multiplatform(sound_ref, buff_return) {} // FIXME 


/**
 * @func fmod_sound_set_mode
 * @desc 
 * @param {real} sound_ref
 * @param {real} mode
 * @returns {real}
 */
function fmod_sound_set_mode(sound_ref, mode) {}


/**
 * @func fmod_sound_get_mode
 * @desc 
 * @param {real} sound_ref
 * @returns {real}
 */
function fmod_sound_get_mode(sound_ref) {}


/**
 * @func fmod_sound_set_loop_count
 * @desc 
 * @param {real} sound_ref
 * @param {real} count
 * @returns {real}
 */
function fmod_sound_set_loop_count(sound_ref, count) {}


/**
 * @func fmod_sound_get_loop_count
 * @desc 
 * @param {real} sound_ref
 * @returns {real}
 */
function fmod_sound_get_loop_count(sound_ref) {}


/**
 * @func fmod_sound_set_loop_points
 * @desc 
 * @param {real} sound_ref
 * @param {real} loop_start
 * @param {real} loop_start_type
 * @param {real} loop_end
 * @param {real} loop_end_type
 * @returns {real}
 */
function fmod_sound_set_loop_points(sound_ref, loop_start, loop_start_type, loop_end, loop_end_type) {}


/**
 * @func fmod_sound_get_loop_points_multiplatform
 * @desc 
 * @param {real} sound_ref
 * @param {real} loop_start_type
 * @param {real} loop_end_type
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_sound_get_loop_points_multiplatform(sound_ref, loop_start_type, loop_end_type, buff_return) {} // FIXME 


/**
 * @func fmod_sound_set_sound_group
 * @desc 
 * @param {real} sound_ref
 * @param {real} sound_group_ref
 * @returns {real}
 */
function fmod_sound_set_sound_group(sound_ref, sound_group_ref) {}


/**
 * @func fmod_sound_get_sound_group
 * @desc 
 * @param {real} sound_ref
 * @returns {real}
 */
function fmod_sound_get_sound_group(sound_ref) {}


/**
 * @func fmod_sound_get_num_sub_sounds
 * @desc 
 * @param {real} sound_ref
 * @returns {real}
 */
function fmod_sound_get_num_sub_sounds(sound_ref) {}


/**
 * @func fmod_sound_get_sub_sound
 * @desc 
 * @param {real} sound_ref
 * @param {real} sub_sound_index
 * @returns {real}
 */
function fmod_sound_get_sub_sound(sound_ref, sub_sound_index) {}


/**
 * @func fmod_sound_get_sub_sound_parent
 * @desc 
 * @param {real} sound_ref
 * @returns {real}
 */
function fmod_sound_get_sub_sound_parent(sound_ref) {}


/**
 * @func fmod_sound_get_open_state_multiplatform
 * @desc 
 * @param {real} sound_ref
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_sound_get_open_state_multiplatform(sound_ref, buff_return) {} // FIXME 


/**
 * @func fmod_sound_read_data_multiplatform
 * @desc 
 * @param {real} sound_ref
 * @param {Id.Buffer} buff_args
 * @returns {real}
 */
function fmod_sound_read_data_multiplatform(sound_ref, buff_args) {} // FIXME 


/**
 * @func fmod_sound_seek_data
 * @desc 
 * @param {real} sound_ref
 * @param {real} pcm
 * @returns {real}
 */
function fmod_sound_seek_data(sound_ref, pcm) {}


/**
 * @func fmod_sound_lock_multiplatform
 * @desc 
 * @param {real} sound_ref
 * @param {Id.Buffer} buff_args
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_sound_lock_multiplatform(sound_ref, buff_args, buff_return) {} // FIXME 


/**
 * @func fmod_sound_unlock_multiplatform
 * @desc 
 * @param {real} sound_ref
 * @param {Id.Buffer} buff_args
 * @returns {real}
 */
function fmod_sound_unlock_multiplatform(sound_ref, buff_args) {} // FIXME 


/**
 * @func fmod_sound_get_music_num_channels
 * @desc 
 * @param {real} sound_ref
 * @returns {real}
 */
function fmod_sound_get_music_num_channels(sound_ref) {}


/**
 * @func fmod_sound_set_music_channel_volume
 * @desc 
 * @param {real} sound_ref
 * @param {real} channel_index
 * @param {real} volume
 * @returns {real}
 */
function fmod_sound_set_music_channel_volume(sound_ref, channel_index, volume) {}


/**
 * @func fmod_sound_get_music_channel_volume
 * @desc 
 * @param {real} sound_ref
 * @param {real} channel_index
 * @returns {real}
 */
function fmod_sound_get_music_channel_volume(sound_ref, channel_index) {}


/**
 * @func fmod_sound_set_music_speed
 * @desc 
 * @param {real} sound_ref
 * @param {real} speed
 * @returns {real}
 */
function fmod_sound_set_music_speed(sound_ref, speed) {}


/**
 * @func fmod_sound_get_music_speed
 * @desc 
 * @param {real} sound_ref
 * @returns {real}
 */
function fmod_sound_get_music_speed(sound_ref) {}


/**
 * @func fmod_sound_get_sync_point_multiplatform
 * @desc 
 * @param {real} sound_ref
 * @param {real} point_index
 * @param {real} offset_type
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_sound_get_sync_point_multiplatform(sound_ref, point_index, offset_type, buff_return) {} // FIXME 


/**
 * @func fmod_sound_get_num_sync_points
 * @desc 
 * @param {real} sound_ref
 * @returns {real}
 */
function fmod_sound_get_num_sync_points(sound_ref) {}


/**
 * @func fmod_sound_add_sync_point
 * @desc 
 * @param {real} sound_ref
 * @param {real} offset
 * @param {real} offset_type
 * @param {string} name
 * @returns {real}
 */
function fmod_sound_add_sync_point(sound_ref, offset, offset_type, name) {}


/**
 * @func fmod_sound_delete_sync_point
 * @desc 
 * @param {real} sound_ref
 * @param {real} point_index
 * @returns {real}
 */
function fmod_sound_delete_sync_point(sound_ref, point_index) {}


/**
 * @func fmod_sound_release
 * @desc 
 * @param {real} sound_ref
 * @returns {real}
 */
function fmod_sound_release(sound_ref) {}


/**
 * @func fmod_sound_get_system_object
 * @desc 
 * @param {real} sound_ref
 * @returns {real}
 */
function fmod_sound_get_system_object(sound_ref) {}


/**
 * @func fmod_sound_set_user_data
 * @desc 
 * @param {real} sound_ref
 * @param {real} data
 * @returns {real}
 */
function fmod_sound_set_user_data(sound_ref, data) {}


/**
 * @func fmod_sound_get_user_data
 * @desc 
 * @param {real} sound_ref
 * @returns {real}
 */
function fmod_sound_get_user_data(sound_ref) {}


/**
 * @func fmod_sound_group_set_max_audible
 * @desc 
 * @param {real} sound_group_ref
 * @param {real} max_audible
 * @returns {real}
 */
function fmod_sound_group_set_max_audible(sound_group_ref, max_audible) {}


/**
 * @func fmod_sound_group_get_max_audible
 * @desc 
 * @param {real} sound_group_ref
 * @returns {real}
 */
function fmod_sound_group_get_max_audible(sound_group_ref) {}


/**
 * @func fmod_sound_group_set_max_audible_behavior
 * @desc 
 * @param {real} sound_group_ref
 * @param {real} behavior
 * @returns {real}
 */
function fmod_sound_group_set_max_audible_behavior(sound_group_ref, behavior) {}


/**
 * @func fmod_sound_group_get_max_audible_behavior
 * @desc 
 * @param {real} sound_group_ref
 * @returns {real}
 */
function fmod_sound_group_get_max_audible_behavior(sound_group_ref) {}


/**
 * @func fmod_sound_group_set_mute_fade_speed
 * @desc 
 * @param {real} sound_group_ref
 * @param {real} speed
 * @returns {real}
 */
function fmod_sound_group_set_mute_fade_speed(sound_group_ref, speed) {}


/**
 * @func fmod_sound_group_get_mute_fade_speed
 * @desc 
 * @param {real} sound_group_ref
 * @returns {real}
 */
function fmod_sound_group_get_mute_fade_speed(sound_group_ref) {}


/**
 * @func fmod_sound_group_set_volume
 * @desc 
 * @param {real} sound_group_ref
 * @param {real} volume
 * @returns {real}
 */
function fmod_sound_group_set_volume(sound_group_ref, volume) {}


/**
 * @func fmod_sound_group_get_volume
 * @desc 
 * @param {real} sound_group_ref
 * @returns {real}
 */
function fmod_sound_group_get_volume(sound_group_ref) {}


/**
 * @func fmod_sound_group_get_num_sounds
 * @desc 
 * @param {real} sound_group_ref
 * @returns {real}
 */
function fmod_sound_group_get_num_sounds(sound_group_ref) {}


/**
 * @func fmod_sound_group_get_sound
 * @desc 
 * @param {real} sound_group_ref
 * @param {real} sound_index
 * @returns {real}
 */
function fmod_sound_group_get_sound(sound_group_ref, sound_index) {}


/**
 * @func fmod_sound_group_get_num_playing
 * @desc 
 * @param {real} sound_group_ref
 * @returns {real}
 */
function fmod_sound_group_get_num_playing(sound_group_ref) {}


/**
 * @func fmod_sound_group_stop
 * @desc 
 * @param {real} sound_group_ref
 * @returns {real}
 */
function fmod_sound_group_stop(sound_group_ref) {}


/**
 * @func fmod_sound_group_get_name
 * @desc 
 * @param {real} sound_group_ref
 * @returns {string}
 */
function fmod_sound_group_get_name(sound_group_ref) {}


/**
 * @func fmod_sound_group_release
 * @desc 
 * @param {real} sound_group_ref
 * @returns {real}
 */
function fmod_sound_group_release(sound_group_ref) {}


/**
 * @func fmod_sound_group_get_system_object
 * @desc 
 * @param {real} sound_group_ref
 * @returns {real}
 */
function fmod_sound_group_get_system_object(sound_group_ref) {}


/**
 * @func fmod_sound_group_set_user_data
 * @desc 
 * @param {real} sound_group_ref
 * @param {real} data
 * @returns {real}
 */
function fmod_sound_group_set_user_data(sound_group_ref, data) {}


/**
 * @func fmod_sound_group_get_user_data
 * @desc 
 * @param {real} sound_group_ref
 * @returns {real}
 */
function fmod_sound_group_get_user_data(sound_group_ref) {}


/**
 * @func fmod_studio_bank_get_loading_state
 * @desc 
 * @param {real} bank_ref
 * @returns {real}
 */
function fmod_studio_bank_get_loading_state(bank_ref) {}


/**
 * @func fmod_studio_bank_load_sample_data
 * @desc 
 * @param {real} bank_ref
 * @returns {real}
 */
function fmod_studio_bank_load_sample_data(bank_ref) {}


/**
 * @func fmod_studio_bank_unload_sample_data
 * @desc 
 * @param {real} bank_ref
 * @returns {real}
 */
function fmod_studio_bank_unload_sample_data(bank_ref) {}


/**
 * @func fmod_studio_bank_get_sample_loading_state
 * @desc 
 * @param {real} bank_ref
 * @returns {real}
 */
function fmod_studio_bank_get_sample_loading_state(bank_ref) {}


/**
 * @func fmod_studio_bank_unload
 * @desc 
 * @param {real} bank_ref
 * @returns {real}
 */
function fmod_studio_bank_unload(bank_ref) {}


/**
 * @func fmod_studio_bank_get_bus_count
 * @desc 
 * @param {real} bank_ref
 * @returns {real}
 */
function fmod_studio_bank_get_bus_count(bank_ref) {}


/**
 * @func fmod_studio_bank_get_bus_list_multiplatform
 * @desc 
 * @param {real} bank_ref
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_studio_bank_get_bus_list_multiplatform(bank_ref, buff_return) {} // FIXME 


/**
 * @func fmod_studio_bank_get_event_count
 * @desc 
 * @param {real} bank_ref
 * @returns {real}
 */
function fmod_studio_bank_get_event_count(bank_ref) {}


/**
 * @func fmod_studio_bank_get_event_description_list_multiplatform
 * @desc 
 * @param {real} bank_ref
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_studio_bank_get_event_description_list_multiplatform(bank_ref, buff_return) {} // FIXME 


/**
 * @func fmod_studio_bank_get_string_count
 * @desc 
 * @param {real} bank_ref
 * @returns {real}
 */
function fmod_studio_bank_get_string_count(bank_ref) {}


/**
 * @func fmod_studio_bank_get_string_info_multiplatform
 * @desc 
 * @param {real} bank_ref
 * @param {real} string_index
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_studio_bank_get_string_info_multiplatform(bank_ref, string_index, buff_return) {} // FIXME 


/**
 * @func fmod_studio_bank_get_vca_count
 * @desc 
 * @param {real} bank_ref
 * @returns {real}
 */
function fmod_studio_bank_get_vca_count(bank_ref) {}


/**
 * @func fmod_studio_bank_get_vca_list_multiplatform
 * @desc 
 * @param {real} bank_ref
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_studio_bank_get_vca_list_multiplatform(bank_ref, buff_return) {} // FIXME 


/**
 * @func fmod_studio_bank_get_id
 * @desc 
 * @param {real} bank_ref
 * @returns {string}
 */
function fmod_studio_bank_get_id(bank_ref) {}


/**
 * @func fmod_studio_bank_get_path
 * @desc 
 * @param {real} bank_ref
 * @returns {string}
 */
function fmod_studio_bank_get_path(bank_ref) {}


/**
 * @func fmod_studio_bank_is_valid
 * @desc 
 * @param {real} bank_ref
 * @returns {real}
 */
function fmod_studio_bank_is_valid(bank_ref) {}


/**
 * @func fmod_studio_bank_set_user_data
 * @desc 
 * @param {real} bank_ref
 * @param {real} data
 * @returns {real}
 */
function fmod_studio_bank_set_user_data(bank_ref, data) {}


/**
 * @func fmod_studio_bank_get_user_data
 * @desc 
 * @param {real} bank_ref
 * @returns {real}
 */
function fmod_studio_bank_get_user_data(bank_ref) {}


/**
 * @func fmod_studio_bus_set_paused
 * @desc 
 * @param {real} bus_ref
 * @param {real} pause
 * @returns {real}
 */
function fmod_studio_bus_set_paused(bus_ref, pause) {}


/**
 * @func fmod_studio_bus_get_paused
 * @desc 
 * @param {real} bus_ref
 * @returns {real}
 */
function fmod_studio_bus_get_paused(bus_ref) {}


/**
 * @func fmod_studio_bus_stop_all_events
 * @desc 
 * @param {real} bus_ref
 * @param {real} stop_mode
 * @returns {real}
 */
function fmod_studio_bus_stop_all_events(bus_ref, stop_mode) {}


/**
 * @func fmod_studio_bus_set_volume
 * @desc 
 * @param {real} bus_ref
 * @param {real} volumen
 * @returns {real}
 */
function fmod_studio_bus_set_volume(bus_ref, volumen) {}


/**
 * @func fmod_studio_bus_get_volume
 * @desc 
 * @param {real} bus_ref
 * @returns {real}
 */
function fmod_studio_bus_get_volume(bus_ref) {}


/**
 * @func fmod_studio_bus_set_mute
 * @desc 
 * @param {real} bus_ref
 * @param {real} mute
 * @returns {real}
 */
function fmod_studio_bus_set_mute(bus_ref, mute) {}


/**
 * @func fmod_studio_bus_get_mute
 * @desc 
 * @param {real} bus_ref
 * @returns {real}
 */
function fmod_studio_bus_get_mute(bus_ref) {}


/**
 * @func fmod_studio_bus_set_port_index_multiplatform
 * @desc 
 * @param {real} bus_ref
 * @param {Id.Buffer} buff_args
 * @returns {real}
 */
function fmod_studio_bus_set_port_index_multiplatform(bus_ref, buff_args) {} // FIXME 


/**
 * @func fmod_studio_bus_get_port_index_multiplatform
 * @desc 
 * @param {real} bus_ref
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_studio_bus_get_port_index_multiplatform(bus_ref, buff_return) {} // FIXME 


/**
 * @func fmod_studio_bus_get_channel_group
 * @desc 
 * @param {real} bus_ref
 * @returns {real}
 */
function fmod_studio_bus_get_channel_group(bus_ref) {}


/**
 * @func fmod_studio_bus_lock_channel_group
 * @desc 
 * @param {real} bus_ref
 * @returns {real}
 */
function fmod_studio_bus_lock_channel_group(bus_ref) {}


/**
 * @func fmod_studio_bus_unlock_channel_group
 * @desc 
 * @param {real} bus_ref
 * @returns {real}
 */
function fmod_studio_bus_unlock_channel_group(bus_ref) {}


/**
 * @func fmod_studio_bus_get_cpu_usage_multiplatform
 * @desc 
 * @param {real} bus_ref
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_studio_bus_get_cpu_usage_multiplatform(bus_ref, buff_return) {} // FIXME 


/**
 * @func fmod_studio_bus_get_memory_usage
 * @desc 
 * @param {real} bus_ref
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_studio_bus_get_memory_usage(bus_ref, buff_return) {} // FIXME 


/**
 * @func fmod_studio_bus_get_id
 * @desc 
 * @param {real} bus_ref
 * @returns {string}
 */
function fmod_studio_bus_get_id(bus_ref) {}


/**
 * @func fmod_studio_bus_get_path
 * @desc 
 * @param {real} bus_ref
 * @returns {string}
 */
function fmod_studio_bus_get_path(bus_ref) {}


/**
 * @func fmod_studio_bus_is_valid
 * @desc 
 * @param {real} bus_ref
 * @returns {real}
 */
function fmod_studio_bus_is_valid(bus_ref) {}


/**
 * @func fmod_studio_command_replay_set_bank_path
 * @desc 
 * @param {real} command_replay_ref
 * @param {string} path
 * @returns {real}
 */
function fmod_studio_command_replay_set_bank_path(command_replay_ref, path) {}


/**
 * @func fmod_studio_command_replay_set_create_instance_callback
 * @desc 
 * @param {real} command_replay_ref
 * @returns {real}
 */
function fmod_studio_command_replay_set_create_instance_callback(command_replay_ref) {}


/**
 * @func fmod_studio_command_replay_set_frame_callback
 * @desc 
 * @param {real} command_replay_ref
 * @returns {real}
 */
function fmod_studio_command_replay_set_frame_callback(command_replay_ref) {}


/**
 * @func fmod_studio_command_replay_set_load_bank_callback
 * @desc 
 * @param {real} command_replay_ref
 * @param {string} path
 * @returns {real}
 */
function fmod_studio_command_replay_set_load_bank_callback(command_replay_ref, path) {}


/**
 * @func fmod_studio_command_replay_start
 * @desc 
 * @param {real} command_replay_ref
 * @returns {real}
 */
function fmod_studio_command_replay_start(command_replay_ref) {}


/**
 * @func fmod_studio_command_replay_stop
 * @desc 
 * @param {real} command_replay_ref
 * @returns {real}
 */
function fmod_studio_command_replay_stop(command_replay_ref) {}


/**
 * @func fmod_studio_command_replay_get_current_command_multiplatform
 * @desc 
 * @param {real} command_replay_ref
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_studio_command_replay_get_current_command_multiplatform(command_replay_ref, buff_return) {} // FIXME 


/**
 * @func fmod_studio_command_replay_get_playback_state
 * @desc 
 * @param {real} command_replay_ref
 * @returns {real}
 */
function fmod_studio_command_replay_get_playback_state(command_replay_ref) {}


/**
 * @func fmod_studio_command_replay_set_paused
 * @desc 
 * @param {real} command_replay_ref
 * @param {real} pause
 * @returns {real}
 */
function fmod_studio_command_replay_set_paused(command_replay_ref, pause) {}


/**
 * @func fmod_studio_command_replay_get_paused
 * @desc 
 * @param {real} command_replay_ref
 * @returns {real}
 */
function fmod_studio_command_replay_get_paused(command_replay_ref) {}


/**
 * @func fmod_studio_command_replay_seek_to_command
 * @desc 
 * @param {real} command_replay_ref
 * @param {real} command_index
 * @returns {real}
 */
function fmod_studio_command_replay_seek_to_command(command_replay_ref, command_index) {}


/**
 * @func fmod_studio_command_replay_seek_to_time
 * @desc 
 * @param {real} command_replay_ref
 * @param {real} time
 * @returns {real}
 */
function fmod_studio_command_replay_seek_to_time(command_replay_ref, time) {}


/**
 * @func fmod_studio_command_replay_get_command_at_time
 * @desc 
 * @param {real} command_replay_ref
 * @param {real} time
 * @returns {real}
 */
function fmod_studio_command_replay_get_command_at_time(command_replay_ref, time) {}


/**
 * @func fmod_studio_command_replay_get_command_count
 * @desc 
 * @param {real} command_replay_ref
 * @returns {real}
 */
function fmod_studio_command_replay_get_command_count(command_replay_ref) {}


/**
 * @func fmod_studio_command_replay_get_command_info_multiplatform
 * @desc 
 * @param {real} command_replay_ref
 * @param {real} command_index
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_studio_command_replay_get_command_info_multiplatform(command_replay_ref, command_index, buff_return) {} // FIXME 


/**
 * @func fmod_studio_command_replay_get_command_string
 * @desc 
 * @param {real} command_replay_ref
 * @param {real} command_index
 * @returns {string}
 */
function fmod_studio_command_replay_get_command_string(command_replay_ref, command_index) {}


/**
 * @func fmod_studio_command_replay_get_length
 * @desc 
 * @param {real} command_replay_ref
 * @returns {real}
 */
function fmod_studio_command_replay_get_length(command_replay_ref) {}


/**
 * @func fmod_studio_command_replay_get_system_object
 * @desc 
 * @param {real} command_replay_ref
 * @returns {real}
 */
function fmod_studio_command_replay_get_system_object(command_replay_ref) {}


/**
 * @func fmod_studio_command_replay_is_valid
 * @desc 
 * @param {real} command_replay_ref
 * @returns {real}
 */
function fmod_studio_command_replay_is_valid(command_replay_ref) {}


/**
 * @func fmod_studio_command_replay_set_user_data
 * @desc 
 * @param {real} command_replay_ref
 * @param {real} data
 * @returns {real}
 */
function fmod_studio_command_replay_set_user_data(command_replay_ref, data) {}


/**
 * @func fmod_studio_command_replay_get_user_data
 * @desc 
 * @param {real} command_replay_ref
 * @returns {real}
 */
function fmod_studio_command_replay_get_user_data(command_replay_ref) {}


/**
 * @func fmod_studio_command_replay_release
 * @desc 
 * @param {real} command_replay_ref
 * @returns {real}
 */
function fmod_studio_command_replay_release(command_replay_ref) {}


/**
 * @func fmod_studio_event_description_create_instance
 * @desc 
 * @param {real} event_description_ref
 * @returns {real}
 */
function fmod_studio_event_description_create_instance(event_description_ref) {}


/**
 * @func fmod_studio_event_description_get_instance_count
 * @desc 
 * @param {real} event_description_ref
 * @returns {real}
 */
function fmod_studio_event_description_get_instance_count(event_description_ref) {}


/**
 * @func fmod_studio_event_description_get_instance_list_multiplatform
 * @desc 
 * @param {real} event_description_ref
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_studio_event_description_get_instance_list_multiplatform(event_description_ref, buff_return) {} // FIXME 


/**
 * @func fmod_studio_event_description_release_all_instances
 * @desc 
 * @param {real} event_description_ref
 * @returns {real}
 */
function fmod_studio_event_description_release_all_instances(event_description_ref) {}


/**
 * @func fmod_studio_event_description_load_sample_data
 * @desc 
 * @param {real} event_description_ref
 * @returns {real}
 */
function fmod_studio_event_description_load_sample_data(event_description_ref) {}


/**
 * @func fmod_studio_event_description_unload_sample_data
 * @desc 
 * @param {real} event_description_ref
 * @returns {real}
 */
function fmod_studio_event_description_unload_sample_data(event_description_ref) {}


/**
 * @func fmod_studio_event_description_get_sample_loading_state
 * @desc 
 * @param {real} event_description_ref
 * @returns {real}
 */
function fmod_studio_event_description_get_sample_loading_state(event_description_ref) {}


/**
 * @func fmod_studio_event_description_is_3d
 * @desc 
 * @param {real} event_description_ref
 * @returns {real}
 */
function fmod_studio_event_description_is_3d(event_description_ref) {}


/**
 * @func fmod_studio_event_description_is_doppler_enabled
 * @desc 
 * @param {real} event_description_ref
 * @returns {real}
 */
function fmod_studio_event_description_is_doppler_enabled(event_description_ref) {}


/**
 * @func fmod_studio_event_description_is_oneshot
 * @desc 
 * @param {real} event_description_ref
 * @returns {real}
 */
function fmod_studio_event_description_is_oneshot(event_description_ref) {}


/**
 * @func fmod_studio_event_description_is_snapshot
 * @desc 
 * @param {real} event_description_ref
 * @returns {real}
 */
function fmod_studio_event_description_is_snapshot(event_description_ref) {}


/**
 * @func fmod_studio_event_description_is_stream
 * @desc 
 * @param {real} event_description_ref
 * @returns {real}
 */
function fmod_studio_event_description_is_stream(event_description_ref) {}


/**
 * @func fmod_studio_event_description_has_sustain_point
 * @desc 
 * @param {real} event_description_ref
 * @returns {real}
 */
function fmod_studio_event_description_has_sustain_point(event_description_ref) {}


/**
 * @func fmod_studio_event_description_get_min_max_distance_multiplatform
 * @desc 
 * @param {real} event_description_ref
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_studio_event_description_get_min_max_distance_multiplatform(event_description_ref, buff_return) {} // FIXME 


/**
 * @func fmod_studio_event_description_get_sound_size
 * @desc 
 * @param {real} event_description_ref
 * @returns {real}
 */
function fmod_studio_event_description_get_sound_size(event_description_ref) {}


/**
 * @func fmod_studio_event_description_get_parameter_description_by_name_multiplatform
 * @desc 
 * @param {real} event_description_ref
 * @param {string} name
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_studio_event_description_get_parameter_description_by_name_multiplatform(event_description_ref, name, buff_return) {} // FIXME 


/**
 * @func fmod_studio_event_description_get_parameter_description_by_id_multiplatform
 * @desc 
 * @param {real} event_description_ref
 * @param {Id.Buffer} buff_args
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_studio_event_description_get_parameter_description_by_id_multiplatform(event_description_ref, buff_args, buff_return) {} // FIXME 


/**
 * @func fmod_studio_event_description_get_parameter_description_by_index_multiplatform
 * @desc 
 * @param {real} event_description_ref
 * @param {real} index
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_studio_event_description_get_parameter_description_by_index_multiplatform(event_description_ref, index, buff_return) {} // FIXME 


/**
 * @func fmod_studio_event_description_get_parameter_description_count
 * @desc 
 * @param {real} event_description_ref
 * @returns {real}
 */
function fmod_studio_event_description_get_parameter_description_count(event_description_ref) {}


/**
 * @func fmod_studio_event_description_get_parameter_label_by_name
 * @desc 
 * @param {real} event_description_ref
 * @param {string} name
 * @param {real} label_index
 * @returns {string}
 */
function fmod_studio_event_description_get_parameter_label_by_name(event_description_ref, name, label_index) {}


/**
 * @func fmod_studio_event_description_get_parameter_label_by_id_multiplatform
 * @desc 
 * @param {real} event_description_ref
 * @param {Id.Buffer} buff_args
 * @param {real} label_index
 * @returns {string}
 */
function fmod_studio_event_description_get_parameter_label_by_id_multiplatform(event_description_ref, buff_args, label_index) {} // FIXME 


/**
 * @func fmod_studio_event_description_get_parameter_label_by_index
 * @desc 
 * @param {real} event_description_ref
 * @param {real} index
 * @param {real} label_index
 * @returns {string}
 */
function fmod_studio_event_description_get_parameter_label_by_index(event_description_ref, index, label_index) {}


/**
 * @func fmod_studio_event_description_get_user_property
 * @desc 
 * @param {real} event_description_ref
 * @param {string} name
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_studio_event_description_get_user_property(event_description_ref, name, buff_return) {} // FIXME 


/**
 * @func fmod_studio_event_description_get_user_property_by_index
 * @desc 
 * @param {real} event_description_ref
 * @param {real} index
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_studio_event_description_get_user_property_by_index(event_description_ref, index, buff_return) {} // FIXME 


/**
 * @func fmod_studio_event_description_get_user_property_count
 * @desc 
 * @param {real} event_description_ref
 * @param {string} name
 * @returns {real}
 */
function fmod_studio_event_description_get_user_property_count(event_description_ref, name) {}


/**
 * @func fmod_studio_event_description_get_id
 * @desc 
 * @param {real} event_description_ref
 * @returns {string}
 */
function fmod_studio_event_description_get_id(event_description_ref) {}


/**
 * @func fmod_studio_event_description_get_length
 * @desc 
 * @param {real} event_description_ref
 * @returns {real}
 */
function fmod_studio_event_description_get_length(event_description_ref) {}


/**
 * @func fmod_studio_event_description_get_path
 * @desc 
 * @param {real} event_description_ref
 * @returns {string}
 */
function fmod_studio_event_description_get_path(event_description_ref) {}


/**
 * @func fmod_studio_event_description_set_callback
 * @desc 
 * @param {real} event_description_ref
 * @param {real} type
 * @returns {real}
 */
function fmod_studio_event_description_set_callback(event_description_ref, type) {}


/**
 * @func fmod_studio_event_description_set_user_data
 * @desc 
 * @param {real} event_description_ref
 * @param {real} data
 * @returns {real}
 */
function fmod_studio_event_description_set_user_data(event_description_ref, data) {}


/**
 * @func fmod_studio_event_description_get_user_data
 * @desc 
 * @param {real} event_description_ref
 * @returns {real}
 */
function fmod_studio_event_description_get_user_data(event_description_ref) {}


/**
 * @func fmod_studio_event_description_is_valid
 * @desc 
 * @param {real} event_description_ref
 * @returns {real}
 */
function fmod_studio_event_description_is_valid(event_description_ref) {}


/**
 * @func fmod_studio_event_instance_start
 * @desc 
 * @param {real} event_instance_ref
 * @returns {real}
 */
function fmod_studio_event_instance_start(event_instance_ref) {}


/**
 * @func fmod_studio_event_instance_stop
 * @desc 
 * @param {real} event_instance_ref
 * @param {real} mode
 * @returns {real}
 */
function fmod_studio_event_instance_stop(event_instance_ref, mode) {}


/**
 * @func fmod_studio_event_instance_get_playback_state
 * @desc 
 * @param {real} event_instance_ref
 * @returns {real}
 */
function fmod_studio_event_instance_get_playback_state(event_instance_ref) {}


/**
 * @func fmod_studio_event_instance_set_paused
 * @desc 
 * @param {real} event_instance_ref
 * @param {real} pause
 * @returns {real}
 */
function fmod_studio_event_instance_set_paused(event_instance_ref, pause) {}


/**
 * @func fmod_studio_event_instance_get_paused
 * @desc 
 * @param {real} event_instance_ref
 * @returns {real}
 */
function fmod_studio_event_instance_get_paused(event_instance_ref) {}


/**
 * @func fmod_studio_event_instance_keyoff
 * @desc 
 * @param {real} event_instance_ref
 * @returns {real}
 */
function fmod_studio_event_instance_keyoff(event_instance_ref) {}


/**
 * @func fmod_studio_event_instance_set_pitch
 * @desc 
 * @param {real} event_instance_ref
 * @param {real} pitch
 * @returns {real}
 */
function fmod_studio_event_instance_set_pitch(event_instance_ref, pitch) {}


/**
 * @func fmod_studio_event_instance_get_pitch
 * @desc 
 * @param {real} event_instance_ref
 * @returns {real}
 */
function fmod_studio_event_instance_get_pitch(event_instance_ref) {}


/**
 * @func fmod_studio_event_instance_set_property
 * @desc 
 * @param {real} event_instance_ref
 * @param {real} property
 * @param {real} value
 * @returns {real}
 */
function fmod_studio_event_instance_set_property(event_instance_ref, property, value) {}


/**
 * @func fmod_studio_event_instance_get_property
 * @desc 
 * @param {real} event_instance_ref
 * @param {real} property
 * @returns {real}
 */
function fmod_studio_event_instance_get_property(event_instance_ref, property) {}


/**
 * @func fmod_studio_event_instance_set_timeline_position
 * @desc 
 * @param {real} event_instance_ref
 * @param {real} position
 * @returns {real}
 */
function fmod_studio_event_instance_set_timeline_position(event_instance_ref, position) {}


/**
 * @func fmod_studio_event_instance_get_timeline_position
 * @desc 
 * @param {real} event_instance_ref
 * @returns {real}
 */
function fmod_studio_event_instance_get_timeline_position(event_instance_ref) {}


/**
 * @func fmod_studio_event_instance_set_volume
 * @desc 
 * @param {real} event_instance_ref
 * @param {real} volume
 * @returns {real}
 */
function fmod_studio_event_instance_set_volume(event_instance_ref, volume) {}


/**
 * @func fmod_studio_event_instance_get_volume_multiplatform
 * @desc 
 * @param {real} event_instance_ref
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_studio_event_instance_get_volume_multiplatform(event_instance_ref, buff_return) {} // FIXME 


/**
 * @func fmod_studio_event_instance_is_virtual
 * @desc 
 * @param {real} event_instance_ref
 * @returns {real}
 */
function fmod_studio_event_instance_is_virtual(event_instance_ref) {}


/**
 * @func fmod_studio_event_instance_set_3d_attributes_multiplatform
 * @desc 
 * @param {real} event_instance_ref
 * @param {Id.Buffer} buff_args
 * @returns {real}
 */
function fmod_studio_event_instance_set_3d_attributes_multiplatform(event_instance_ref, buff_args) {} // FIXME 


/**
 * @func fmod_studio_event_instance_get_3d_attributes_multiplatform
 * @desc 
 * @param {real} event_instance_ref
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_studio_event_instance_get_3d_attributes_multiplatform(event_instance_ref, buff_return) {} // FIXME 


/**
 * @func fmod_studio_event_instance_set_listener_mask
 * @desc 
 * @param {real} event_instance_ref
 * @param {real} mask
 * @returns {real}
 */
function fmod_studio_event_instance_set_listener_mask(event_instance_ref, mask) {}


/**
 * @func fmod_studio_event_instance_get_listener_mask
 * @desc 
 * @param {real} event_instance_ref
 * @returns {real}
 */
function fmod_studio_event_instance_get_listener_mask(event_instance_ref) {}


/**
 * @func fmod_studio_event_instance_get_min_max_distance_multiplatform
 * @desc 
 * @param {real} event_instance_ref
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_studio_event_instance_get_min_max_distance_multiplatform(event_instance_ref, buff_return) {} // FIXME 


/**
 * @func fmod_studio_event_instance_set_parameter_by_name_multiplatform
 * @desc 
 * @param {real} event_instance_ref
 * @param {string} name
 * @param {real} value
 * @param {real} ignore_seek_speed
 * @returns {real}
 */
function fmod_studio_event_instance_set_parameter_by_name_multiplatform(event_instance_ref, name, value, ignore_seek_speed) {}


/**
 * @func fmod_studio_event_instance_set_parameter_by_name_with_label
 * @desc 
 * @param {real} event_instance_ref
 * @param {string} name
 * @param {string} label
 * @param {real} ignore_seek_speed
 * @returns {real}
 */
function fmod_studio_event_instance_set_parameter_by_name_with_label(event_instance_ref, name, label, ignore_seek_speed) {}


/**
 * @func fmod_studio_event_instance_get_parameter_by_name_multiplatform
 * @desc 
 * @param {real} event_instance_ref
 * @param {string} name
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_studio_event_instance_get_parameter_by_name_multiplatform(event_instance_ref, name, buff_return) {} // FIXME 


/**
 * @func fmod_studio_event_instance_set_parameter_by_id_multiplatform
 * @desc 
 * @param {real} event_instance_ref
 * @param {Id.Buffer} buff_args
 * @param {real} value
 * @param {real} ignore_seek_speed
 * @returns {real}
 */
function fmod_studio_event_instance_set_parameter_by_id_multiplatform(event_instance_ref, buff_args, value, ignore_seek_speed) {} // FIXME 


/**
 * @func fmod_studio_event_instance_set_parameter_by_id_with_label_multiplatform
 * @desc 
 * @param {real} event_instance_ref
 * @param {Id.Buffer} buff_args
 * @param {string} label
 * @param {real} ignore_seek_speed
 * @returns {real}
 */
function fmod_studio_event_instance_set_parameter_by_id_with_label_multiplatform(event_instance_ref, buff_args, label, ignore_seek_speed) {} // FIXME 


/**
 * @func fmod_studio_event_instance_get_parameter_by_id_multiplatform
 * @desc 
 * @param {real} event_instance_ref
 * @param {Id.Buffer} buff_args
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_studio_event_instance_get_parameter_by_id_multiplatform(event_instance_ref, buff_args, buff_return) {} // FIXME 


/**
 * @func fmod_studio_event_instance_get_channel_group
 * @desc 
 * @param {real} event_instance_ref
 * @returns {real}
 */
function fmod_studio_event_instance_get_channel_group(event_instance_ref) {}


/**
 * @func fmod_studio_event_instance_set_reverb_level
 * @desc 
 * @param {real} event_instance_ref
 * @param {real} index
 * @param {real} level
 * @returns {real}
 */
function fmod_studio_event_instance_set_reverb_level(event_instance_ref, index, level) {}


/**
 * @func fmod_studio_event_instance_get_reverb_level
 * @desc 
 * @param {real} event_instance_ref
 * @param {real} index
 * @returns {real}
 */
function fmod_studio_event_instance_get_reverb_level(event_instance_ref, index) {}


/**
 * @func fmod_studio_event_instance_get_cpu_usage_multiplatform
 * @desc 
 * @param {real} event_instance_ref
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_studio_event_instance_get_cpu_usage_multiplatform(event_instance_ref, buff_return) {} // FIXME 


/**
 * @func fmod_studio_event_instance_get_memory_usage_multiplatform
 * @desc 
 * @param {real} event_instance_ref
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_studio_event_instance_get_memory_usage_multiplatform(event_instance_ref, buff_return) {} // FIXME 


/**
 * @func fmod_studio_event_instance_set_callback
 * @desc 
 * @param {real} event_instance_ref
 * @param {real} type
 * @returns {real}
 */
function fmod_studio_event_instance_set_callback(event_instance_ref, type) {}


/**
 * @func fmod_studio_event_instance_set_user_data
 * @desc 
 * @param {real} event_instance_ref
 * @param {real} data
 * @returns {real}
 */
function fmod_studio_event_instance_set_user_data(event_instance_ref, data) {}


/**
 * @func fmod_studio_event_instance_get_user_data
 * @desc 
 * @param {real} event_instance_ref
 * @returns {real}
 */
function fmod_studio_event_instance_get_user_data(event_instance_ref) {}


/**
 * @func fmod_studio_event_intance_get_description
 * @desc 
 * @param {real} event_instance_ref
 * @returns {real}
 */
function fmod_studio_event_intance_get_description(event_instance_ref) {}


/**
 * @func fmod_studio_event_instance_release
 * @desc 
 * @param {real} event_instance_ref
 * @returns {real}
 */
function fmod_studio_event_instance_release(event_instance_ref) {}


/**
 * @func fmod_studio_event_instance_is_valid
 * @desc 
 * @param {real} event_instance_ref
 * @returns {real}
 */
function fmod_studio_event_instance_is_valid(event_instance_ref) {}


/**
 * @func fmod_studio_system_create
 * @desc 
 * @returns {real}
 */
function fmod_studio_system_create() {}


/**
 * @func fmod_studio_system_init
 * @desc 
 * @param {real} max_channels
 * @param {real} studio_flags
 * @param {real} core_flags
 * @returns {real}
 */
function fmod_studio_system_init(max_channels, studio_flags, core_flags) {}


/**
 * @func fmod_studio_system_release
 * @desc 
 * @returns {real}
 */
function fmod_studio_system_release() {}


/**
 * @func fmod_studio_system_update_multiplatform
 * @desc 
 * @returns {real}
 */
function fmod_studio_system_update_multiplatform() {}


/**
 * @func fmod_studio_system_flush_commands
 * @desc 
 * @returns {real}
 */
function fmod_studio_system_flush_commands() {}


/**
 * @func fmod_studio_system_flush_sample_loading
 * @desc 
 * @returns {real}
 */
function fmod_studio_system_flush_sample_loading() {}


/**
 * @func fmod_studio_system_load_bank_custom
 * @desc 
 * @param {real} flags
 * @returns {real}
 */
function fmod_studio_system_load_bank_custom(flags) {}


/**
 * @func fmod_studio_system_load_bank_file
 * @desc 
 * @param {string} filename
 * @param {real} flags
 * @returns {real}
 */
function fmod_studio_system_load_bank_file(filename, flags) {}


/**
 * @func fmod_studio_system_load_bank_memory_multiplatform
 * @desc 
 * @param {Id.Buffer} buff_data
 * @param {real} length
 * @param {real} mode
 * @param {real} flags
 * @returns {real}
 */
function fmod_studio_system_load_bank_memory_multiplatform(buff_data, length, mode, flags) {} // FIXME 


/**
 * @func fmod_studio_system_unload_all
 * @desc 
 * @returns {real}
 */
function fmod_studio_system_unload_all() {}


/**
 * @func fmod_studio_system_get_bank
 * @desc 
 * @param {string} path
 * @returns {real}
 */
function fmod_studio_system_get_bank(path) {}


/**
 * @func fmod_studio_system_get_bank_by_id
 * @desc 
 * @param {string} guid_str
 * @returns {real}
 */
function fmod_studio_system_get_bank_by_id(guid_str) {}


/**
 * @func fmod_studio_system_get_bank_count
 * @desc 
 * @returns {real}
 */
function fmod_studio_system_get_bank_count() {}


/**
 * @func fmod_studio_system_get_bank_list_multiplatform
 * @desc 
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_studio_system_get_bank_list_multiplatform(buff_return) {} // FIXME 


/**
 * @func fmod_studio_system_set_listener_attributes_multiplatform
 * @desc 
 * @param {real} listener_index
 * @param {Id.Buffer} buff_args
 * @returns {real}
 */
function fmod_studio_system_set_listener_attributes_multiplatform(listener_index, buff_args) {} // FIXME 


/**
 * @func fmod_studio_system_get_listener_attributes_multiplatform
 * @desc 
 * @param {real} listener_index
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_studio_system_get_listener_attributes_multiplatform(listener_index, buff_return) {} // FIXME 


/**
 * @func fmod_studio_system_set_listener_weight
 * @desc 
 * @param {real} listener_index
 * @param {real} weight
 * @returns {real}
 */
function fmod_studio_system_set_listener_weight(listener_index, weight) {}


/**
 * @func fmod_studio_system_get_listener_weight
 * @desc 
 * @param {real} listener_index
 * @returns {real}
 */
function fmod_studio_system_get_listener_weight(listener_index) {}


/**
 * @func fmod_studio_system_set_num_listeners
 * @desc 
 * @param {real} num
 * @returns {real}
 */
function fmod_studio_system_set_num_listeners(num) {}


/**
 * @func fmod_studio_system_get_num_listeners
 * @desc 
 * @returns {real}
 */
function fmod_studio_system_get_num_listeners() {}


/**
 * @func fmod_studio_system_get_bus
 * @desc 
 * @param {string} path
 * @returns {real}
 */
function fmod_studio_system_get_bus(path) {}


/**
 * @func fmod_studio_system_get_bus_by_id
 * @desc 
 * @param {string} guid
 * @returns {real}
 */
function fmod_studio_system_get_bus_by_id(guid) {}


/**
 * @func fmod_studio_system_get_event
 * @desc 
 * @param {string} path
 * @returns {real}
 */
function fmod_studio_system_get_event(path) {}


/**
 * @func fmod_studio_system_get_event_by_id
 * @desc 
 * @param {string} guid_str
 * @returns {real}
 */
function fmod_studio_system_get_event_by_id(guid_str) {}


/**
 * @func fmod_studio_system_get_parameter_by_id_multiplatform
 * @desc 
 * @param {Id.Buffer} buff_args
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_studio_system_get_parameter_by_id_multiplatform(buff_args, buff_return) {} // FIXME 


/**
 * @func fmod_studio_system_set_parameter_by_id_multiplatform
 * @desc 
 * @param {Id.Buffer} buff_args
 * @param {real} value
 * @param {real} ignore_seek_speed
 * @returns {real}
 */
function fmod_studio_system_set_parameter_by_id_multiplatform(buff_args, value, ignore_seek_speed) {} // FIXME 


/**
 * @func fmod_studio_system_set_parameter_by_id_with_label_multiplatform
 * @desc 
 * @param {Id.Buffer} buff_args
 * @param {string} label
 * @param {real} ignore_seek_speed
 * @returns {real}
 */
function fmod_studio_system_set_parameter_by_id_with_label_multiplatform(buff_args, label, ignore_seek_speed) {} // FIXME 


/**
 * @func fmod_studio_system_get_parameter_by_name_multiplatform
 * @desc 
 * @param {string} name
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_studio_system_get_parameter_by_name_multiplatform(name, buff_return) {} // FIXME 


/**
 * @func fmod_studio_system_set_parameter_by_name_multiplatform
 * @desc 
 * @param {string} name
 * @param {real} value
 * @param {real} ignore_seek_speed
 * @returns {real}
 */
function fmod_studio_system_set_parameter_by_name_multiplatform(name, value, ignore_seek_speed) {}


/**
 * @func fmod_studio_system_set_parameter_by_name_with_label_multiplatform
 * @desc 
 * @param {string} name
 * @param {string} label
 * @param {real} ignore_seek_speed
 * @returns {real}
 */
function fmod_studio_system_set_parameter_by_name_with_label_multiplatform(name, label, ignore_seek_speed) {}


/**
 * @func fmod_studio_system_get_parameter_description_by_name_multiplatform
 * @desc 
 * @param {string} name
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_studio_system_get_parameter_description_by_name_multiplatform(name, buff_return) {} // FIXME 


/**
 * @func fmod_studio_system_get_parameter_description_by_id_multiplatform
 * @desc 
 * @param {Id.Buffer} buff_args
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_studio_system_get_parameter_description_by_id_multiplatform(buff_args, buff_return) {} // FIXME 


/**
 * @func fmod_studio_system_get_parameter_description_count
 * @desc 
 * @returns {real}
 */
function fmod_studio_system_get_parameter_description_count() {}


/**
 * @func fmod_studio_system_get_parameter_description_list_multiplatform
 * @desc 
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_studio_system_get_parameter_description_list_multiplatform(buff_return) {} // FIXME 


/**
 * @func fmod_studio_system_get_parameter_label_by_name
 * @desc 
 * @param {string} name
 * @param {real} labelindex
 * @returns {string}
 */
function fmod_studio_system_get_parameter_label_by_name(name, labelindex) {}


/**
 * @func fmod_studio_system_get_parameter_label_by_id_multiplatform
 * @desc 
 * @param {Id.Buffer} buff_args
 * @param {real} label_index
 * @returns {string}
 */
function fmod_studio_system_get_parameter_label_by_id_multiplatform(buff_args, label_index) {} // FIXME 


/**
 * @func fmod_studio_system_get_vca
 * @desc 
 * @param {string} path
 * @returns {real}
 */
function fmod_studio_system_get_vca(path) {}


/**
 * @func fmod_studio_system_get_vca_by_id
 * @desc 
 * @param {string} guid_str
 * @returns {real}
 */
function fmod_studio_system_get_vca_by_id(guid_str) {}


/**
 * @func fmod_studio_system_set_advanced_settings_multiplatform
 * @desc 
 * @param {Id.Buffer} buff_args
 * @returns {real}
 */
function fmod_studio_system_set_advanced_settings_multiplatform(buff_args) {} // FIXME 


/**
 * @func fmod_studio_system_get_advanced_settings_multiplatform
 * @desc 
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_studio_system_get_advanced_settings_multiplatform(buff_return) {} // FIXME 


/**
 * @func fmod_studio_system_start_command_capture
 * @desc 
 * @param {string} filename
 * @param {real} flags
 * @returns {real}
 */
function fmod_studio_system_start_command_capture(filename, flags) {}


/**
 * @func fmod_studio_system_stop_command_capture
 * @desc 
 * @returns {real}
 */
function fmod_studio_system_stop_command_capture() {}


/**
 * @func fmod_studio_system_load_command_replay
 * @desc 
 * @param {string} filename
 * @param {real} flags
 * @returns {real}
 */
function fmod_studio_system_load_command_replay(filename, flags) {}


/**
 * @func fmod_studio_system_get_buffer_usage_multiplatform
 * @desc 
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_studio_system_get_buffer_usage_multiplatform(buff_return) {} // FIXME 


/**
 * @func fmod_studio_system_reset_buffer_usage
 * @desc 
 * @returns {real}
 */
function fmod_studio_system_reset_buffer_usage() {}


/**
 * @func fmod_studio_system_get_cpu_usage_multiplatform
 * @desc 
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_studio_system_get_cpu_usage_multiplatform(buff_return) {} // FIXME 


/**
 * @func fmod_studio_system_get_memory_usage_multiplatform
 * @desc 
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_studio_system_get_memory_usage_multiplatform(buff_return) {} // FIXME 


/**
 * @func fmod_studio_system_set_callback
 * @desc 
 * @param {real} type
 * @returns {real}
 */
function fmod_studio_system_set_callback(type) {}


/**
 * @func fmod_studio_system_set_user_data
 * @desc 
 * @param {real} data
 * @returns {real}
 */
function fmod_studio_system_set_user_data(data) {}


/**
 * @func fmod_studio_system_get_user_data
 * @desc 
 * @returns {real}
 */
function fmod_studio_system_get_user_data() {}


/**
 * @func fmod_studio_system_get_sound_info_multiplatform
 * @desc 
 * @param {string} key
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_studio_system_get_sound_info_multiplatform(key, buff_return) {} // FIXME 


/**
 * @func fmod_studio_system_get_core_system
 * @desc 
 * @returns {real}
 */
function fmod_studio_system_get_core_system() {}


/**
 * @func fmod_studio_system_lookup_id
 * @desc 
 * @param {string} path
 * @returns {string}
 */
function fmod_studio_system_lookup_id(path) {}


/**
 * @func fmod_studio_system_lookup_path
 * @desc 
 * @param {string} str_guid
 * @returns {string}
 */
function fmod_studio_system_lookup_path(str_guid) {}


/**
 * @func fmod_studio_system_is_valid
 * @desc 
 * @returns {real}
 */
function fmod_studio_system_is_valid() {}


/**
 * @func fmod_studio_vca_set_volume
 * @desc 
 * @param {real} vca_ref
 * @param {real} volume
 * @returns {real}
 */
function fmod_studio_vca_set_volume(vca_ref, volume) {}


/**
 * @func fmod_studio_vca_get_volume
 * @desc 
 * @param {real} vca_ref
 * @returns {real}
 */
function fmod_studio_vca_get_volume(vca_ref) {}


/**
 * @func fmod_studio_vca_get_id
 * @desc 
 * @param {real} vca_ref
 * @returns {string}
 */
function fmod_studio_vca_get_id(vca_ref) {}


/**
 * @func fmod_studio_vca_get_path
 * @desc 
 * @param {real} vca_ref
 * @returns {string}
 */
function fmod_studio_vca_get_path(vca_ref) {}


/**
 * @func fmod_studio_vca_is_valid
 * @desc 
 * @param {real} vca_ref
 * @returns {real}
 */
function fmod_studio_vca_is_valid(vca_ref) {}


/**
 * @func fmod_system_create
 * @desc 
 * @returns {real}
 */
function fmod_system_create() {}


/**
 * @func fmod_system_select
 * @desc 
 * @param {real} system_ref
 * @returns {real}
 */
function fmod_system_select(system_ref) {}


/**
 * @func fmod_system_count
 * @desc 
 * @returns {real}
 */
function fmod_system_count() {}


/**
 * @func fmod_system_init
 * @desc 
 * @param {real} max_channels
 * @param {real} flags
 * @returns {real}
 */
function fmod_system_init(max_channels, flags) {}


/**
 * @func fmod_system_release
 * @desc 
 * @param {real} system_ref
 * @returns {real}
 */
function fmod_system_release(system_ref) {}


/**
 * @func fmod_system_close
 * @desc 
 * @param {real} system_ref
 * @returns {real}
 */
function fmod_system_close(system_ref) {}


/**
 * @func fmod_system_update_multiplatform
 * @desc 
 * @returns {real}
 */
function fmod_system_update_multiplatform() {}


/**
 * @func fmod_system_mixer_suspend
 * @desc 
 * @returns {real}
 */
function fmod_system_mixer_suspend() {}


/**
 * @func fmod_system_mixer_resume
 * @desc 
 * @returns {real}
 */
function fmod_system_mixer_resume() {}


/**
 * @func fmod_system_set_output
 * @desc 
 * @param {real} output
 * @returns {real}
 */
function fmod_system_set_output(output) {}


/**
 * @func fmod_system_get_output
 * @desc 
 * @returns {real}
 */
function fmod_system_get_output() {}


/**
 * @func fmod_system_get_num_drivers
 * @desc 
 * @returns {real}
 */
function fmod_system_get_num_drivers() {}


/**
 * @func fmod_system_get_driver_info_multiplatform
 * @desc 
 * @param {real} driver_index
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_system_get_driver_info_multiplatform(driver_index, buff_return) {} // FIXME 


/**
 * @func fmod_system_set_driver
 * @desc 
 * @param {real} driver
 * @returns {real}
 */
function fmod_system_set_driver(driver) {}


/**
 * @func fmod_system_get_driver
 * @desc 
 * @returns {real}
 */
function fmod_system_get_driver() {}


/**
 * @func fmod_system_set_software_channels
 * @desc 
 * @param {real} software_channels
 * @returns {real}
 */
function fmod_system_set_software_channels(software_channels) {}


/**
 * @func fmod_system_get_software_channels
 * @desc 
 * @returns {real}
 */
function fmod_system_get_software_channels() {}


/**
 * @func fmod_system_set_software_format
 * @desc 
 * @param {real} sample_rate
 * @param {real} speaker_mode
 * @param {real} num_raw_speakers
 * @returns {real}
 */
function fmod_system_set_software_format(sample_rate, speaker_mode, num_raw_speakers) {}


/**
 * @func fmod_system_get_software_format_multiplatform
 * @desc 
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_system_get_software_format_multiplatform(buff_return) {} // FIXME 


/**
 * @func fmod_system_set_dsp_buffer_size
 * @desc 
 * @param {real} buff_size
 * @param {real} num_buffers
 * @returns {real}
 */
function fmod_system_set_dsp_buffer_size(buff_size, num_buffers) {}


/**
 * @func fmod_system_get_dsp_buffer_size_multiplatform
 * @desc 
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_system_get_dsp_buffer_size_multiplatform(buff_return) {} // FIXME 


/**
 * @func fmod_system_set_stream_buffer_size
 * @desc 
 * @param {real} file_buffer_size
 * @param {real} file_buffer_size_type
 * @returns {real}
 */
function fmod_system_set_stream_buffer_size(file_buffer_size, file_buffer_size_type) {}


/**
 * @func fmod_system_get_stream_buffer_size_multiplatform
 * @desc 
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_system_get_stream_buffer_size_multiplatform(buff_return) {} // FIXME 


/**
 * @func fmod_system_set_advanced_settings_multiplatform
 * @desc 
 * @param {Id.Buffer} buff_args
 * @returns {real}
 */
function fmod_system_set_advanced_settings_multiplatform(buff_args) {} // FIXME 


/**
 * @func fmod_system_get_advanced_settings_multiplatform
 * @desc 
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_system_get_advanced_settings_multiplatform(buff_return) {} // FIXME 


/**
 * @func fmod_system_set_speaker_position
 * @desc 
 * @param {real} speaker
 * @param {real} x
 * @param {real} y
 * @param {real} active
 * @returns {real}
 */
function fmod_system_set_speaker_position(speaker, x, y, active) {}


/**
 * @func fmod_system_get_speaker_position_multiplatform
 * @desc 
 * @param {real} speaker
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_system_get_speaker_position_multiplatform(speaker, buff_return) {} // FIXME 


/**
 * @func fmod_system_set_3d_settings
 * @desc 
 * @param {real} doppler_scale
 * @param {real} distance_factor
 * @param {real} rolloff_scale
 * @returns {real}
 */
function fmod_system_set_3d_settings(doppler_scale, distance_factor, rolloff_scale) {}


/**
 * @func fmod_system_get_3d_settings_multiplatform
 * @desc 
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_system_get_3d_settings_multiplatform(buff_return) {} // FIXME 


/**
 * @func fmod_system_set_3d_num_listeners
 * @desc 
 * @param {real} num
 * @returns {real}
 */
function fmod_system_set_3d_num_listeners(num) {}


/**
 * @func fmod_system_get_3d_num_listeners
 * @desc 
 * @returns {real}
 */
function fmod_system_get_3d_num_listeners() {}


/**
 * @func fmod_system_set_3d_rolloff_callback
 * @desc 
 * @returns {real}
 */
function fmod_system_set_3d_rolloff_callback() {}


/**
 * @func fmod_system_set_network_proxy
 * @desc 
 * @param {string} proxy
 * @returns {real}
 */
function fmod_system_set_network_proxy(proxy) {}


/**
 * @func fmod_system_get_network_proxy
 * @desc 
 * @returns {string}
 */
function fmod_system_get_network_proxy() {}


/**
 * @func fmod_system_set_network_timeout
 * @desc 
 * @param {real} timeout
 * @returns {real}
 */
function fmod_system_set_network_timeout(timeout) {}


/**
 * @func fmod_system_get_network_timeout
 * @desc 
 * @returns {real}
 */
function fmod_system_get_network_timeout() {}


/**
 * @func fmod_system_get_version
 * @desc 
 * @returns {real}
 */
function fmod_system_get_version() {}


/**
 * @func fmod_system_get_channels_playing_multiplatform
 * @desc 
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_system_get_channels_playing_multiplatform(buff_return) {} // FIXME 


/**
 * @func fmod_system_get_cpu_usage_multiplatform
 * @desc 
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_system_get_cpu_usage_multiplatform(buff_return) {} // FIXME 


/**
 * @func fmod_system_get_file_usage_multiplatform
 * @desc 
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_system_get_file_usage_multiplatform(buff_return) {} // FIXME 


/**
 * @func fmod_system_get_default_mix_matrix
 * @desc 
 * @param {real} source_speaker_mode
 * @param {real} target_speaker_mode
 * @param {real} matrix_hop
 * @returns {real}
 */
function fmod_system_get_default_mix_matrix(source_speaker_mode, target_speaker_mode, matrix_hop) {}


/**
 * @func fmod_system_get_speaker_mode_channels
 * @desc 
 * @param {real} mode
 * @returns {real}
 */
function fmod_system_get_speaker_mode_channels(mode) {}


/**
 * @func fmod_system_create_sound_multiplatform
 * @desc 
 * @param {string} name_or_data
 * @param {real} mode
 * @param {Id.Buffer} buff_extra
 * @returns {real}
 */
function fmod_system_create_sound_multiplatform(name_or_data, mode, buff_extra) {} // FIXME 


/**
 * @func fmod_system_create_stream_multiplatform
 * @desc 
 * @param {string} name_or_data
 * @param {real} mode
 * @param {Id.Buffer} buff_extra
 * @returns {real}
 */
function fmod_system_create_stream_multiplatform(name_or_data, mode, buff_extra) {} // FIXME 


/**
 * @func fmod_system_create_dsp
 * @desc 
 * @returns {real}
 */
function fmod_system_create_dsp() {}


/**
 * @func fmod_system_create_dsp_by_type
 * @desc 
 * @param {real} type
 * @returns {real}
 */
function fmod_system_create_dsp_by_type(type) {}


/**
 * @func fmod_system_create_channel_group
 * @desc 
 * @param {string} name
 * @returns {real}
 */
function fmod_system_create_channel_group(name) {}


/**
 * @func fmod_system_create_sound_group
 * @desc 
 * @param {string} name
 * @returns {real}
 */
function fmod_system_create_sound_group(name) {}


/**
 * @func fmod_system_create_reverb_3d
 * @desc 
 * @returns {real}
 */
function fmod_system_create_reverb_3d() {}


/**
 * @func fmod_system_play_sound_multiplatform
 * @desc 
 * @param {real} sound_ref
 * @param {real} channel_group_ref
 * @param {real} pause
 * @returns {real}
 */
function fmod_system_play_sound_multiplatform(sound_ref, channel_group_ref, pause) {}


/**
 * @func fmod_system_play_dsp_multiplatform
 * @desc 
 * @param {real} dsp_ref
 * @param {real} channel_group_ref
 * @param {real} pause
 * @returns {real}
 */
function fmod_system_play_dsp_multiplatform(dsp_ref, channel_group_ref, pause) {}


/**
 * @func fmod_system_get_channel
 * @desc 
 * @param {real} index
 * @returns {real}
 */
function fmod_system_get_channel(index) {}


/**
 * @func fmod_system_get_master_channel_group
 * @desc 
 * @returns {real}
 */
function fmod_system_get_master_channel_group() {}


/**
 * @func fmod_system_get_master_sound_group
 * @desc 
 * @returns {real}
 */
function fmod_system_get_master_sound_group() {}


/**
 * @func fmod_system_set_3d_listener_attributes_multiplatform
 * @desc 
 * @param {real} listener_index
 * @param {Id.Buffer} buff_args
 * @returns {real}
 */
function fmod_system_set_3d_listener_attributes_multiplatform(listener_index, buff_args) {} // FIXME 


/**
 * @func fmod_system_get_3d_listener_attributes_multiplatform
 * @desc 
 * @param {real} listener_index
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_system_get_3d_listener_attributes_multiplatform(listener_index, buff_return) {} // FIXME 


/**
 * @func fmod_system_set_reverb_properties_multiplatform
 * @desc 
 * @param {real} instance_index
 * @param {Id.Buffer} buff_args
 * @returns {real}
 */
function fmod_system_set_reverb_properties_multiplatform(instance_index, buff_args) {} // FIXME 


/**
 * @func fmod_system_get_reverb_properties_multiplatform
 * @desc 
 * @param {real} instance_index
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_system_get_reverb_properties_multiplatform(instance_index, buff_return) {} // FIXME 


/**
 * @func fmod_system_attach_channel_group_to_port_multiplatform
 * @desc 
 * @param {Id.Buffer} buff_args
 * @returns {real}
 */
function fmod_system_attach_channel_group_to_port_multiplatform(buff_args) {} // FIXME 


/**
 * @func fmod_system_detach_channel_group_from_port
 * @desc 
 * @param {real} channel_group_ref
 * @returns {real}
 */
function fmod_system_detach_channel_group_from_port(channel_group_ref) {}


/**
 * @func fmod_system_get_record_num_drivers_multiplatform
 * @desc 
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_system_get_record_num_drivers_multiplatform(buff_return) {} // FIXME 


/**
 * @func fmod_system_get_record_driver_info_multiplatform
 * @desc 
 * @param {real} recording_device_index
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_system_get_record_driver_info_multiplatform(recording_device_index, buff_return) {} // FIXME 


/**
 * @func fmod_system_get_record_position
 * @desc 
 * @param {real} device_index
 * @returns {real}
 */
function fmod_system_get_record_position(device_index) {}


/**
 * @func fmod_system_record_start
 * @desc 
 * @param {real} device_index
 * @param {real} sound_ref
 * @param {real} loop
 * @returns {real}
 */
function fmod_system_record_start(device_index, sound_ref, loop) {}


/**
 * @func fmod_system_record_stop
 * @desc 
 * @param {real} device_index
 * @returns {real}
 */
function fmod_system_record_stop(device_index) {}


/**
 * @func fmod_system_is_recording
 * @desc 
 * @param {real} device_index
 * @returns {real}
 */
function fmod_system_is_recording(device_index) {}


/**
 * @func fmod_system_create_geometry
 * @desc 
 * @param {real} max_polygons
 * @param {real} max_vertices
 * @returns {real}
 */
function fmod_system_create_geometry(max_polygons, max_vertices) {}


/**
 * @func fmod_system_set_geometry_settings
 * @desc 
 * @param {real} max_world_size
 * @returns {real}
 */
function fmod_system_set_geometry_settings(max_world_size) {}


/**
 * @func fmod_system_get_geometry_settings
 * @desc 
 * @returns {real}
 */
function fmod_system_get_geometry_settings() {}


/**
 * @func fmod_system_load_geometry
 * @desc 
 * @param {Id.Buffer} buff
 * @param {real} length
 * @returns {real}
 */
function fmod_system_load_geometry(buff, length) {} // FIXME 


/**
 * @func fmod_system_get_geometry_occlusion_multiplatform
 * @desc 
 * @param {Id.Buffer} buff_return
 * @returns {real}
 */
function fmod_system_get_geometry_occlusion_multiplatform(buff_return) {} // FIXME 


/**
 * @func fmod_system_lock_dsp
 * @desc 
 * @returns {real}
 */
function fmod_system_lock_dsp() {}


/**
 * @func fmod_system_unlock_dsp
 * @desc 
 * @returns {real}
 */
function fmod_system_unlock_dsp() {}


/**
 * @func fmod_system_set_callback
 * @desc 
 * @param {real} type
 * @returns {real}
 */
function fmod_system_set_callback(type) {}


/**
 * @func fmod_system_set_user_data
 * @desc 
 * @param {real} channel_control_ref
 * @param {real} data
 * @returns {real}
 */
function fmod_system_set_user_data(channel_control_ref, data) {}


/**
 * @func fmod_system_get_user_data
 * @desc 
 * @param {real} channel_control_ref
 * @returns {real}
 */
function fmod_system_get_user_data(channel_control_ref) {}


/**
 * @func fmod_fetch_callbacks
 * @desc 
 * @param {Id.Buffer} buffer
 * @param {real} length
 * @returns {real}
 */
function fmod_fetch_callbacks(buffer, length) {} // FIXME 


/**
 * @func fmod_last_error
 * @desc 
 * @returns {real}
 */
function fmod_last_error() {}
