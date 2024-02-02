
with(obj_fmod_studio_simple_event)
{
	explosion_index = fmod_studio_event_description_create_instance(explosion_guid)
	show_debug_message(string(fmod_last_result()))
	fmod_studio_event_instance_start(explosion_index)
	show_debug_message(string(fmod_last_result()))
	fmod_studio_event_instance_release(explosion_index)
	show_debug_message(string(fmod_last_result()))
}
