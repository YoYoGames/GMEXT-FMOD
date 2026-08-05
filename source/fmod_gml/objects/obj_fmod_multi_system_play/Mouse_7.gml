	
sound_index = fmod_system_create_sound(fmod_path_bundle(sound_file), FmodMode.Default | FmodMode.LoopOff);
show_debug_message(fmod_last_result())
if(fmod_last_result() == FMOD_RESULT.OK)
{
	channel_index = fmod_system_play_sound(sound_index, false)
	show_debug_message(fmod_last_result())
}


