
freq_value = 0;
spatializer_value = 0;

t = 0;
isOnGround = false
useListenerAttenuationPosition = false

//This 2 functions break Android and Ubuntu... maybe more
//fmod_system_set_software_format(0,FmodSpeakerMode._5Point1,0)
//fmod_system_set_output(FmodOutputType.Audio3D)

// Attempt to initialize with a compatible object panning output
if(fmod_last_result() != FmodResult.Ok)
{
	fmod_system_set_output(FmodOutputType.WinSonic)
	if(fmod_last_result() == FmodResult.Ok)
		fmod_system_set_software_format(0,8/*setSoftwareFormat*/,0)
}

num_drivers = fmod_system_get_num_drivers()

if(num_drivers == 0)
{
	fmod_system_set_dsp_buffer_size(512,4)
	fmod_system_set_output(FmodOutputType.AutoDetect)
}

master_bank_index = fmod_studio_system_load_bank_file(fmod_path_bundle("master.bank"),FmodStudioLoadBankFlags.Normal)
show_debug_message("master: " + string(fmod_last_result()))
master_strings_bank_index = fmod_studio_system_load_bank_file(fmod_path_bundle("master.strings.bank"),FmodStudioLoadBankFlags.Normal)
show_debug_message("masterstrings: " + string(fmod_last_result()))
music_bank_index = fmod_studio_system_load_bank_file(fmod_path_bundle("music.bank"),FmodStudioLoadBankFlags.Normal)
show_debug_message("music: " + string(fmod_last_result()))

event_guid = fmod_studio_system_get_event("event:/Music/Radio Station")
show_debug_message(string(fmod_last_result()))
ins_index = fmod_studio_event_description_create_instance(event_guid)
show_debug_message(string(fmod_last_result()))

fmod_studio_event_instance_start(ins_index)

