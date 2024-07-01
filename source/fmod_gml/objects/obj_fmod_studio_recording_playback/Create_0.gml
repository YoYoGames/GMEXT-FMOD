

RECORD_FILENAME = "playback.cmd.txt";

master_bank_index = fmod_studio_system_load_bank_file(fmod_path_bundle("master.bank"),FMOD_STUDIO_LOAD_BANK.NORMAL)
show_debug_message("master: " + string(fmod_last_result()))
master_strings_bank_index = fmod_studio_system_load_bank_file(fmod_path_bundle("master.strings.bank"),FMOD_STUDIO_LOAD_BANK.NORMAL)
show_debug_message("masterstrings: " + string(fmod_last_result()))
sfx_bank_index = fmod_studio_system_load_bank_file(fmod_path_bundle("sfx.bank"),FMOD_STUDIO_LOAD_BANK.NORMAL)
show_debug_message("sfx: " + string(fmod_last_result()))
vehicles_bank_index = fmod_studio_system_load_bank_file(fmod_path_bundle("vehicles.bank"),FMOD_STUDIO_LOAD_BANK.NORMAL)
show_debug_message("vehicles: " + string(fmod_last_result()))
vehicle_guid = fmod_studio_system_get_event("event:/Vehicles/Ride-on Mower")
show_debug_message(vehicle_guid);
show_debug_message(string(fmod_last_result()))
vehicle_ins_index = fmod_studio_event_description_create_instance(vehicle_guid)
show_debug_message(string(fmod_last_result()))

fmod_studio_event_instance_set_parameter_by_name(vehicle_ins_index,"RPM", 650, false)
show_debug_message(fmod_last_result())

weapon_event_id = fmod_studio_system_lookup_id("event:/Weapons/Explosion")

weapon_event = fmod_studio_system_get_event_by_id(weapon_event_id)
show_debug_message(string(fmod_last_result()))
	
weapon_instance_index = fmod_studio_event_description_create_instance(weapon_event);