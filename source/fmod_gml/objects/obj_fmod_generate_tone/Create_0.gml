
/*
    Create an oscillator DSP units for the tone.
*/

dsp_index = fmod_system_create_dsp_by_type(FmodDspType.Oscillator)

fmod_dsp_set_parameter_int(dsp_index,FmodDspOscillator.Type, 0);

channel_index = fmod_system_play_dsp(dsp_index, false);

frequency = 0
volume = 0
