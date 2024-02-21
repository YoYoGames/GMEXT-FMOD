	
sound_index = fmod_system_create_sound(fmod_path_bundle(sound_file), FMOD_MODE.DEFAULT | FMOD_MODE.LOOP_OFF);
show_debug_message(fmod_last_result())

channel_index = fmod_system_play_sound(sound_index, false)
show_debug_message(fmod_last_result())

