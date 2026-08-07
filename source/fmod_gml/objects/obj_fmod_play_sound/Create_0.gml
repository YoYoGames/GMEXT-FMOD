
event_inherited();

text = sound_file

sound_index = fmod_system_create_sound(fmod_path_bundle(sound_file),FmodMode.Default)
show_debug_message("fmod_system_create_sound: " + string(fmod_last_result()))
fmod_sound_set_mode(sound_index,FmodMode.LoopOff)

sound_lenght = fmod_sound_get_length(sound_index,FmodTimeUnit.Ms)

channel_index = 0
