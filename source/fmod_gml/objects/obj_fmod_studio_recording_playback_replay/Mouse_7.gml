
with(obj_fmod_studio_recording_playback)
{
	show_debug_message("--- Starting Replay ---");
	replay = fmod_studio_system_load_command_replay(fmod_path_user(RECORD_FILENAME),FMOD_STUDIO_COMMANDREPLAY.NORMAL)
	show_debug_message(fmod_last_result())
	count = fmod_studio_command_replay_get_command_count(replay)
	show_debug_message(fmod_last_result())
	length = fmod_studio_command_replay_get_length(replay)
	show_debug_message(fmod_last_result())
	fmod_studio_command_replay_start(replay)
	show_debug_message(fmod_last_result())
}

