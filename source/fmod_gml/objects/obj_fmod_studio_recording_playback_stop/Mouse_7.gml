
with(obj_fmod_studio_recording_playback)
{
	var _result = fmod_studio_system_flush_commands()
	show_debug_message(_result);
	_result = fmod_studio_system_stop_command_capture()
	show_debug_message(_result);
	_result = fmod_studio_event_instance_stop(vehicle_ins_index,FmodStudioStopMode.Immediate)
	show_debug_message(_result);
}
