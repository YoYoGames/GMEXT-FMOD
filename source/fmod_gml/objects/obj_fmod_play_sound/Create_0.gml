
event_inherited();

text = sound_file

sound_index = fmod_system_create_sound(fmod_path_bundle(sound_file),FMOD_MODE.DEFAULT)
show_debug_message("fmod_system_create_sound: " + string(fmod_last_result()))
fmod_sound_set_mode(sound_index,FMOD_MODE.LOOP_OFF)

//channel_index = fmod_channel_create()

sound_lenght = fmod_sound_get_length(sound_index,FMOD_TIMEUNIT.MS)

channel_index = -1