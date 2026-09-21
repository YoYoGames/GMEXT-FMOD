
with (obj_fmod_studio_programmer_sound)
{
	dialogue_index = (dialogue_index + 1) mod array_length(dialogue)
	fmod_studio_event_instance_set_programmer_sound(event_ins_index, dialogue[dialogue_index])
	show_debug_message("programmer sound '" + dialogue[dialogue_index] + "': " + string(fmod_studio_last_result()))
}
