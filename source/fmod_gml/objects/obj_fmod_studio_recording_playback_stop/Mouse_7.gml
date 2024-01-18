
with(obj_fmod_studio_recording_playback)
{
	fmod_studio_system_flush_commands()
	fmod_studio_system_stop_command_capture()
	fmod_studio_event_instance_stop(vehicle_ins_index,FMOD_STUDIO_STOP_MODE.IMMEDIATE)
}
