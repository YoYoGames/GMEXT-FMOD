

sound_index_A_1 = fmod_system_create_sound(fmod_path_bundle("drumloop.wav"),FMOD_MODE.LOOP_NORMAL)
sound_index_A_2 = fmod_system_create_sound(fmod_path_bundle("jaguar.wav"),FMOD_MODE.LOOP_NORMAL)
sound_index_A_3 = fmod_system_create_sound(fmod_path_bundle("swish.wav"),FMOD_MODE.LOOP_NORMAL)

sound_index_B_1 = fmod_system_create_sound(fmod_path_bundle("c.ogg"),FMOD_MODE.LOOP_NORMAL)
sound_index_B_2 = fmod_system_create_sound(fmod_path_bundle("d.ogg"),FMOD_MODE.LOOP_NORMAL)
sound_index_B_3 = fmod_system_create_sound(fmod_path_bundle("e.ogg"),FMOD_MODE.LOOP_NORMAL)

channel_group_A_index = fmod_system_create_channel_group("groupA")
channel_group_B_index = fmod_system_create_channel_group("groupB")
channel_group_C_index = fmod_system_get_master_channel_group();

/*
    Instead of being independent, set the group A and B to be children of the master group.
*/
fmod_channel_group_add_group(channel_group_C_index,channel_group_A_index)
fmod_channel_group_add_group(channel_group_C_index,channel_group_B_index)


/*
    Start all the sounds.
*/
fmod_system_play_sound(sound_index_A_1,false,channel_group_A_index)
fmod_system_play_sound(sound_index_A_2,false,channel_group_A_index)
fmod_system_play_sound(sound_index_A_3,false,channel_group_A_index)

fmod_system_play_sound(sound_index_B_1,false,channel_group_B_index)
fmod_system_play_sound(sound_index_B_2,false,channel_group_B_index)
fmod_system_play_sound(sound_index_B_3,false,channel_group_B_index)

channel_groups = {
	groupA: channel_group_A_index,
	groupB: channel_group_B_index,
	master: channel_group_C_index
}
