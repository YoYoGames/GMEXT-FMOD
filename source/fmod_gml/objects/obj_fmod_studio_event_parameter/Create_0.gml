
master_bank_index = fmod_studio_system_load_bank_file(fmod_path_bundle("Master.bank"),FmodStudioLoadBankFlags.Normal);
show_debug_message("master: " + fmod_error_string(fmod_last_result()));
master_strings_bank_index = fmod_studio_system_load_bank_file(fmod_path_bundle("Master.strings.bank"),FmodStudioLoadBankFlags.Normal);
show_debug_message("masterstrings: " + fmod_error_string(fmod_last_result()));
sfx_bank_index = fmod_studio_system_load_bank_file(fmod_path_bundle("SFX.bank"),FmodStudioLoadBankFlags.Normal);
show_debug_message("SFX: " + fmod_error_string(fmod_last_result()));

footsteps_event = fmod_studio_system_get_event("event:/Character/Player Footsteps")
show_debug_message(fmod_error_string(fmod_last_result()));

// Find the parameter once and then set by handle
// Or we can just find by name every time but by handle is more efficient if we are setting lots of parameters
// The returned FmodStudioParameterDescription splits the parameter id across
// two reals, id_data1 and id_data2, which the *_by_id calls take separately.
param_description = fmod_studio_event_description_get_parameter_description_by_name(footsteps_event, "Surface")

footsteps_index = fmod_studio_event_description_create_instance(footsteps_event)
show_debug_message(fmod_error_string(fmod_last_result()));

// Make the event audible to start with
parameter_description_value = 1.0
fmod_studio_event_instance_set_parameter_by_id(footsteps_index, param_description.id_data1, param_description.id_data2, parameter_description_value);
show_debug_message(fmod_error_string(fmod_last_result()));
