
master_bank_index = fmod_studio_system_load_bank_file(fmod_path_bundle("master.bank"),FMOD_STUDIO_LOAD_BANK.NORMAL)
show_debug_message("master: " + string(fmod_last_result()))
master_strings_bank_index = fmod_studio_system_load_bank_file(fmod_path_bundle("master.strings.bank"),FMOD_STUDIO_LOAD_BANK.NORMAL)
show_debug_message("masterstrings: " + string(fmod_last_result()))
music_bank_index = fmod_studio_system_load_bank_file(fmod_path_bundle("music.bank"),FMOD_STUDIO_LOAD_BANK.NORMAL)
show_debug_message("music: " + string(fmod_last_result()))


event_guid = fmod_studio_system_get_event("event:/Music/Level 01")
event_ins_index = fmod_studio_event_description_create_instance(event_guid)

fmod_studio_event_instance_set_callback(event_ins_index,
	FMOD_STUDIO_EVENT_CALLBACK.TIMELINE_MARKER | FMOD_STUDIO_EVENT_CALLBACK.TIMELINE_BEAT |
	FMOD_STUDIO_EVENT_CALLBACK.SOUND_PLAYED | FMOD_STUDIO_EVENT_CALLBACK.SOUND_STOPPED)
show_debug_message(string(fmod_last_result()))

fmod_studio_event_instance_start(event_ins_index)
show_debug_message(string(fmod_last_result()))

parameter_description_struct = fmod_studio_event_description_get_parameter_description_by_name(event_guid,"Progression")
show_debug_message(fmod_error_string(fmod_last_result()))

fmod_studio_event_instance_set_parameter_by_id(event_ins_index,parameter_description_struct.parameter_id, 0)
show_debug_message(string(fmod_last_result()))


 