
with(obj_fmod_studio_recording_playback)
{
	var _result = fmod_studio_system_flush_commands()
	show_debug_message(_result);
	// FMOD opens the capture file on its own thread and reports Ok even when the folder
	// does not exist yet, so make sure the save folder is there before recording into it.
	directory_create(game_save_id)
	_result = fmod_studio_system_start_command_capture(fmod_path_user(RECORD_FILENAME),FmodStudioCommandCaptureFlags.Normal)
	show_debug_message(_result);
	_result = fmod_studio_event_instance_start(vehicle_ins_index)
	show_debug_message(_result);
}
