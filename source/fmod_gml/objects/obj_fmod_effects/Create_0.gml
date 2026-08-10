	
sound_index = fmod_system_create_sound(fmod_path_bundle("drumloop.wav"), FmodMode.Default)

channel_index = fmod_system_play_sound(sound_index, fmod_system_get_master_channel_group(), false)

//Create some effects to play with

dsp_lowpass = fmod_system_create_dsp_by_type(FmodDspType.LowPass)
fmod_dsp_set_parameter_float(dsp_lowpass,FmodDspLowPass.Cutoff,2000)
fmod_dsp_set_parameter_float(dsp_lowpass,FmodDspLowPass.Resonance,0.707)

dsp_highpass = fmod_system_create_dsp_by_type(FmodDspType.HighPass)
fmod_dsp_set_parameter_float(dsp_highpass,FmodDspHighPass.Cutoff,8000)
fmod_dsp_set_parameter_float(dsp_highpass,FmodDspHighPass.Resonance,0.707)

dsp_echo = fmod_system_create_dsp_by_type(FmodDspType.Echo)

dsp_flange = fmod_system_create_dsp_by_type(FmodDspType.Flange)

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


