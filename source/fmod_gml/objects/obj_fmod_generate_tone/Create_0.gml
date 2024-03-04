
/*
    Create an oscillator DSP units for the tone.
*/

dsp_index = fmod_system_create_dsp_by_type(FMOD_DSP_TYPE.OSCILLATOR)

fmod_dsp_set_parameter_int(dsp_index,FMOD_DSP_OSCILLATOR.TYPE, 0);

channel_index = fmod_system_play_dsp(dsp_index, false);

frequency = 0
volume = 0
