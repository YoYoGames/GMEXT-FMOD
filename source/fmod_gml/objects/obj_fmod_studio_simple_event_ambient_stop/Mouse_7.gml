
with(obj_fmod_studio_simple_event)
{
	fmod_studio_event_instance_stop(AmbienceInstance_index,FMOD_STUDIO_STOP_MODE.IMMEDIATE)
	show_debug_message(string(fmod_last_result()))
}
