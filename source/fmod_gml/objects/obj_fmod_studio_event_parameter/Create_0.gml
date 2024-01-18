
master_bank_index = fmod_studio_system_load_bank_file(fmod_path_bundle("master.bank"),FMOD_STUDIO_LOAD_BANK.NORMAL);
show_debug_message("master: " + fmod_error_string());
master_strings_bank_index = fmod_studio_system_load_bank_file(fmod_path_bundle("master.strings.bank"),FMOD_STUDIO_LOAD_BANK.NORMAL);
show_debug_message("masterstrings: " + fmod_error_string());
sfx_bank_index = fmod_studio_system_load_bank_file(fmod_path_bundle("sfx.bank"),FMOD_STUDIO_LOAD_BANK.NORMAL);
show_debug_message("SFX: " + fmod_error_string());

footsteps_event = fmod_studio_system_get_event("event:/Character/Player Footsteps")
show_debug_message(fmod_error_string());

// Find the parameter once and then set by handle
// Or we can just find by name every time but by handle is more efficient if we are setting lots of parameters
param_description = fmod_studio_event_description_get_parameter_description_by_name(footsteps_event, "Surface")

footsteps_index = fmod_studio_event_description_create_instance(footsteps_event)
show_debug_message(fmod_error_string());

// Make the event audible to start with
parameter_description_value = 1.0
fmod_studio_event_instance_set_parameter_by_id(footsteps_index, param_description.parameter_id, parameter_description_value, false);
show_debug_message(fmod_error_string());

