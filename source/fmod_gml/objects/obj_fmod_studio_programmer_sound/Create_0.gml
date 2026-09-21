// Port of the SDK's programmer_sound example. A single "Dialogue" event carries a
// programmer instrument; the game tells the extension which audio table key it
// should play and FMOD gets the sound from there, in whichever language bank is
// loaded. Each language is its own bank and every bank shares the same keys.

master_bank_index = fmod_studio_system_load_bank_file(fmod_path_bundle("Master.bank"), FmodStudioLoadBankFlags.Normal)
show_debug_message("master: " + string(fmod_studio_last_result()))
master_strings_bank_index = fmod_studio_system_load_bank_file(fmod_path_bundle("Master.strings.bank"), FmodStudioLoadBankFlags.Normal)
show_debug_message("masterstrings: " + string(fmod_studio_last_result()))
sfx_bank_index = fmod_studio_system_load_bank_file(fmod_path_bundle("SFX.bank"), FmodStudioLoadBankFlags.Normal)
show_debug_message("sfx: " + string(fmod_studio_last_result()))

banks = ["Dialogue_EN.bank", "Dialogue_JP.bank", "Dialogue_CN.bank"]
bank_index = 0
localized_bank_index = fmod_studio_system_load_bank_file(fmod_path_bundle(banks[bank_index]), FmodStudioLoadBankFlags.Normal)
show_debug_message("dialogue: " + string(fmod_studio_last_result()))

dialogue = ["welcome", "main menu", "goodbye"]
dialogue_index = 0

event_guid = fmod_studio_system_get_event("event:/Character/Dialogue")
show_debug_message("event: " + string(fmod_studio_last_result()))
event_ins_index = fmod_studio_event_description_create_instance(event_guid)
show_debug_message("instance: " + string(fmod_studio_last_result()))

// The key the programmer instrument plays. The sound itself is created and
// released natively when FMOD asks for it, so nothing else is needed here.
fmod_studio_event_instance_set_programmer_sound(event_ins_index, dialogue[dialogue_index])
show_debug_message("programmer sound: " + string(fmod_studio_last_result()))

// Purely informational: the two programmer-sound callbacks report whether the
// create and the release worked. The sound was already handed to FMOD by then.
// _props.name is the programmer instrument's name from FMOD Studio, which this
// example project leaves empty, so the key registered above is printed instead.
fmod_studio_event_instance_set_callback(event_ins_index,
	function(_instance, _type, _props)
	{
		switch (_type)
		{
			case FmodStudioEventCallbackType.CreateProgrammerSound:
				show_debug_message($"[fmod] programmer sound '{dialogue[dialogue_index]}' created: subsound {_props.sub_sound_index}, {fmod_error_string(_props.result)}")
				break;

			case FmodStudioEventCallbackType.DestroyProgrammerSound:
				show_debug_message($"[fmod] programmer sound '{dialogue[dialogue_index]}' released: {fmod_error_string(_props.result)}")
				break;

			default:
				show_debug_message($"[fmod] event callback {_type}")
				break;
		}
	},
	FmodStudioEventCallbackType.CreateProgrammerSound | FmodStudioEventCallbackType.DestroyProgrammerSound)
show_debug_message("callback: " + string(fmod_studio_last_result()))
