
/*
    Release sound
*/
fmod_sound_release(sound_index)

/*
    Release main sound group
*/
fmod_channel_group_release(main_channel_group_index)

/*
    Remove and release DSP from reverb group sound
*/
fmod_channel_control_remove_dsp(reverb_channel_group_index, reverb_dsp);
fmod_dsp_disconnect_all(reverb_dsp, true, true);
fmod_dsp_release(reverb_dsp);

/*
    Release reverb sound group
*/
fmod_channel_group_release(reverb_channel_group_index);

