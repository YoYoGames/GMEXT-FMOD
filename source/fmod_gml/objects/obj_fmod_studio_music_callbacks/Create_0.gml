
master_bank_index = fmod_studio_system_load_bank_file(fmod_path_bundle("master.bank"),FmodStudioLoadBankFlags.Normal)
show_debug_message("master: " + string(fmod_last_result()))
master_strings_bank_index = fmod_studio_system_load_bank_file(fmod_path_bundle("master.strings.bank"),FmodStudioLoadBankFlags.Normal)
show_debug_message("masterstrings: " + string(fmod_last_result()))
music_bank_index = fmod_studio_system_load_bank_file(fmod_path_bundle("music.bank"),FmodStudioLoadBankFlags.Normal)
show_debug_message("music: " + string(fmod_last_result()))


event_guid = fmod_studio_system_get_event("event:/Music/Level 01")
event_ins_index = fmod_studio_event_description_create_instance(event_guid)

// The callback is a plain GML function. It receives the event instance that
// raised it and the FmodStudioEventCallbackType that fired, and is dispatched
// from fmod_studio_system_update().
fmod_studio_event_instance_set_callback(event_ins_index,
	function(_instance, _type)
	{
		switch (_type)
		{
			case FmodStudioEventCallbackType.TimelineMarker: show_debug_message("[fmod] timeline marker") break;
			case FmodStudioEventCallbackType.TimelineBeat:   show_debug_message("[fmod] timeline beat")   break;
			case FmodStudioEventCallbackType.SoundPlayed:    show_debug_message("[fmod] sound played")    break;
			case FmodStudioEventCallbackType.SoundStopped:   show_debug_message("[fmod] sound stopped")   break;
		}
	},
	FmodStudioEventCallbackType.TimelineMarker | FmodStudioEventCallbackType.TimelineBeat |
	FmodStudioEventCallbackType.SoundPlayed | FmodStudioEventCallbackType.SoundStopped)
show_debug_message(string(fmod_last_result()))

fmod_studio_event_instance_start(event_ins_index)
show_debug_message(string(fmod_last_result()))

parameter_description_struct = fmod_studio_event_description_get_parameter_description_by_name(event_guid,"Progression")
show_debug_message(fmod_error_string(fmod_last_result()))

fmod_studio_event_instance_set_parameter_by_id(event_ins_index,parameter_description_struct.id_data1, parameter_description_struct.id_data2, 0)
show_debug_message(string(fmod_last_result()))


 