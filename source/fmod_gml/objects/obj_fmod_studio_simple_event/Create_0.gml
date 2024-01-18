
master_bank_index = fmod_studio_system_load_bank_file(fmod_path_bundle("master.bank"),FMOD_STUDIO_LOAD_BANK.NORMAL)
show_debug_message("master: " + string(fmod_last_error()))
master_strings_bank_index = fmod_studio_system_load_bank_file(fmod_path_bundle("master.strings.bank"),FMOD_STUDIO_LOAD_BANK.NORMAL)
show_debug_message("masterstrings: " + string(fmod_last_error()))
sfx_bank_index = fmod_studio_system_load_bank_file(fmod_path_bundle("sfx.bank"),FMOD_STUDIO_LOAD_BANK.NORMAL)
show_debug_message("sfx: " + string(fmod_last_error()))


// Get the Looping Ambience event
AmbienceDescription_guid = fmod_studio_system_get_event("event:/Ambience/Country")
show_debug_message(string(fmod_last_error()))
AmbienceInstance_index = fmod_studio_event_description_create_instance(AmbienceDescription_guid)
show_debug_message(string(fmod_last_error()))

// Get the 4 Second Surge event
cancel_guid = fmod_studio_system_get_event("event:/UI/Cancel")
show_debug_message(string(fmod_last_error()))
cancel_index = fmod_studio_event_description_create_instance(cancel_guid)
show_debug_message(string(fmod_last_error()))

// Get the Single Explosion event
explosion_guid = fmod_studio_system_get_event("event:/Weapons/Explosion")
show_debug_message(string(fmod_last_error()))

// Start loading explosion sample data and keep it in memory
fmod_studio_event_description_load_sample_data(explosion_guid)
show_debug_message(string(fmod_last_error()))

