
with (obj_fmod_studio_programmer_sound)
{
	// Same keys, different bank: unload the current language and load the next.
	fmod_studio_bank_unload(localized_bank_index)
	show_debug_message("unload: " + string(fmod_studio_last_result()))
	bank_index = (bank_index + 1) mod array_length(banks)
	localized_bank_index = fmod_studio_system_load_bank_file(fmod_path_bundle(banks[bank_index]), FmodStudioLoadBankFlags.Normal)
	show_debug_message("load " + banks[bank_index] + ": " + string(fmod_studio_last_result()))
}
