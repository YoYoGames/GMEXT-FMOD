
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

// Channel callbacks fire from fmod_system_update(). The callback receives the
// ref it was set on, a FmodChannelControlCallbackType, and that type's payload
// (undefined for End, 0/1 for VirtualVoice, the sync point index for SyncPoint,
// a FmodOcclusion struct for Occlusion).
fmod_channel_control_set_callback(channel_index, function(_channel_control, _type, _payload)
{
	show_debug_message($"[fmod] stream channel callback, type {_type}, payload {_payload}");
});

