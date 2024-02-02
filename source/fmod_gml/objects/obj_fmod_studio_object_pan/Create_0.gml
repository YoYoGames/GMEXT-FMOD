
freq_struct = {};
spatializer_struct = {};

t = 0;
isOnGround = false
useListenerAttenuationPosition = false

//This 2 functions break Android and Ubuntu... maybe more
//fmod_system_set_software_format(0,FMOD_SPEAKERMODE._5POINT1,0)
//fmod_system_set_output(FMOD_OUTPUTTYPE.AUDIO3D)

// Attempt to initialize with a compatible object panning output
if(fmod_last_result() != FMOD_RESULT.OK)
{
	fmod_system_set_output(FMOD_OUTPUTTYPE.WINSONIC)
	if(fmod_last_result() == FMOD_RESULT.OK)
		fmod_system_set_software_format(0,8/*setSoftwareFormat*/,0)
}

num_drivers = fmod_system_get_num_drivers()

if(num_drivers == 0)
{
	fmod_system_set_dsp_buffer_size(512,4)
	fmod_system_set_output(FMOD_OUTPUTTYPE.AUTODETECT)
}

master_bank_index = fmod_studio_system_load_bank_file(fmod_path_bundle("master.bank"),FMOD_STUDIO_LOAD_BANK.NORMAL)
show_debug_message("master: " + string(fmod_last_result()))
master_strings_bank_index = fmod_studio_system_load_bank_file(fmod_path_bundle("master.strings.bank"),FMOD_STUDIO_LOAD_BANK.NORMAL)
show_debug_message("masterstrings: " + string(fmod_last_result()))
music_bank_index = fmod_studio_system_load_bank_file(fmod_path_bundle("music.bank"),FMOD_STUDIO_LOAD_BANK.NORMAL)
show_debug_message("music: " + string(fmod_last_result()))

event_guid = fmod_studio_system_get_event("event:/Music/Radio Station")
show_debug_message(string(fmod_last_result()))
ins_index = fmod_studio_event_description_create_instance(event_guid)
show_debug_message(string(fmod_last_result()))

fmod_studio_event_instance_start(ins_index)

