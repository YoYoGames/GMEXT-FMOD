
with(obj_fmod_studio_recording_playback)
{
	var _result = fmod_studio_system_flush_commands()
	show_debug_message(_result);
	_result = fmod_studio_system_start_command_capture(fmod_path_user(RECORD_FILENAME),FMOD_STUDIO_COMMANDCAPTURE.NORMAL)
	show_debug_message(_result);
	_result = fmod_studio_event_instance_start(vehicle_ins_index)
	show_debug_message(_result);
}
