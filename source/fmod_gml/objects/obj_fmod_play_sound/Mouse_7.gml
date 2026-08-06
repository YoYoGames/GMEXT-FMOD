
channel_index = fmod_system_play_sound(sound_index, fmod_system_get_master_channel_group(), false)
show_debug_message(channel_index)

// TODO: channel callbacks are not implemented in the ExtGen port yet.
// Re-enable once fmod_channel_control_set_callback is exposed again.
//fmod_channel_control_set_callback(channel_index)
