
channel_index = fmod_system_play_sound(sound_index, false)
show_debug_message(channel_index)
fmod_channel_control_set_callback(channel_index)
