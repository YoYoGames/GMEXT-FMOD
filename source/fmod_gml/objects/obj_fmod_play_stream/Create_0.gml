
event_inherited();

text = "Pause"

var sound_file = "wave_vorbis.fsb"

/*
    Because getNumSubSounds is called here the example would work with both types of sound file (packed vs single).
    This could just as easily be exchanged with a wav/mp3/ogg file for example, but in this case you wouldnt need to call getSubSound.
    This example uses an FSB file, which is a preferred pack format for fmod containing multiple sounds.
*/
sound_index = fmod_system_create_stream(fmod_path_bundle(sound_file), FmodMode.LoopOn | FmodMode._2D)

sound_lenght = fmod_sound_get_length(sound_index,FmodTimeUnit.Ms)

fmod_sound_get_num_sub_sounds(sound_index)

var play_this_sound = fmod_sound_get_sub_sound(sound_index, 0)

//Play the sound.
channel_index = fmod_system_play_sound(play_this_sound, fmod_system_get_master_channel_group(), false)

// TODO: channel callbacks are not implemented in the ExtGen port yet.
// Re-enable once fmod_channel_control_set_callback is exposed again.
//fmod_channel_control_set_callback(channel_index);

