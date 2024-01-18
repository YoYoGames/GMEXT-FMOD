	
sound_index = fmod_system_create_sound(fmod_path_bundle("drumloop.wav"), FMOD_MODE.DEFAULT)

channel_index = fmod_system_play_sound(sound_index, false)

//Create some effects to play with

dsp_lowpass = fmod_system_create_dsp_by_type(FMOD_DSP_TYPE.MULTIBAND_EQ) //(FMOD_DSP_TYPE.LOWPASS)
fmod_dsp_set_parameter_int(dsp_lowpass,FMOD_DSP_MULTIBAND_EQ.A_FILTER,FMOD_DSP_MULTIBAND_EQ_FILTER_TYPE.LOWPASS_12DB)
fmod_dsp_set_parameter_float(dsp_lowpass,FMOD_DSP_MULTIBAND_EQ.A_FREQUENCY,2000)
fmod_dsp_set_parameter_float(dsp_lowpass,FMOD_DSP_MULTIBAND_EQ.A_Q,0.707)
fmod_dsp_set_parameter_float(dsp_lowpass,FMOD_DSP_MULTIBAND_EQ.A_GAIN,1000)

dsp_highpass = fmod_system_create_dsp_by_type(FMOD_DSP_TYPE.HIGHPASS)
fmod_dsp_set_parameter_int(dsp_highpass,FMOD_DSP_MULTIBAND_EQ.A_FILTER,FMOD_DSP_MULTIBAND_EQ_FILTER_TYPE.HIGHPASS_12DB)
fmod_dsp_set_parameter_float(dsp_highpass,FMOD_DSP_MULTIBAND_EQ.A_FREQUENCY,8000)
fmod_dsp_set_parameter_float(dsp_highpass,FMOD_DSP_MULTIBAND_EQ.A_Q,0.707)
fmod_dsp_set_parameter_float(dsp_highpass,FMOD_DSP_MULTIBAND_EQ.A_GAIN,1000)

dsp_echo = fmod_system_create_dsp_by_type(FMOD_DSP_TYPE.ECHO)

dsp_flange = fmod_system_create_dsp_by_type(FMOD_DSP_TYPE.FLANGE)

/*
    Add them to the channel group.  Each time an effect is added (to position 0) it pushes the others down the list.
*/
	
fmod_channel_control_add_dsp(channel_index,0,dsp_lowpass)
fmod_channel_control_add_dsp(channel_index,0,dsp_highpass)
fmod_channel_control_add_dsp(channel_index,0,dsp_echo)
fmod_channel_control_add_dsp(channel_index,0,dsp_flange)


/*
By default, bypass all effects.  This means let the original signal go through without processing.
It will sound 'dry' until effects are enabled by the user.
*/
fmod_dsp_set_bypass(dsp_lowpass,true)
fmod_dsp_set_bypass(dsp_highpass,true)
fmod_dsp_set_bypass(dsp_echo,true)
fmod_dsp_set_bypass(dsp_flange,true)

