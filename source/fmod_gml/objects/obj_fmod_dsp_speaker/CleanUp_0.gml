
/* 
	Release the sound
*/
fmod_sound_release(sound)

/* 
	Release the DSP effects
*/
fmod_dsp_release(dsp_lowpass);
fmod_dsp_release(dsp_highpass);

/* 
	Reset the panning of the master group channel
*/
fmod_channel_control_set_pan(master_group_channel, 0);