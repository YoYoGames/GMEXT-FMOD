
for(var i = 0 ; i < array_length(sounds) ; i ++) {
	fmod_sound_release(sounds[i]);
}

fmod_channel_group_release(channel_group_index);

