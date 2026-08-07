///@desc Init Variables

// Create sound
sound = fmod_system_create_sound(fmod_path_bundle("wave.mp3"),FmodMode.LoopOn);

// Get length in both samples and ms
length = fmod_sound_get_length(sound, FmodTimeUnit.Pcm);
ms = fmod_sound_get_length(sound, FmodTimeUnit.Ms);

// Play sound
music = fmod_system_play_sound(sound, fmod_system_get_master_channel_group(), false);

// Create and setup FFT dsp.
dsp_fft = fmod_system_create_dsp_by_type(FmodDspType.FFT);
fmod_channel_control_add_dsp(music, FmodChannelControlDspIndex.Head, dsp_fft);
fmod_dsp_set_parameter_int(dsp_fft, FmodDspFft.WindowType, FmodDspFftWindowType.Rect);
fmod_dsp_set_parameter_int(dsp_fft, FmodDspFft.WindowSize, 128);

// Create buffer for parameter data
fft_buffer = buffer_create(18000, buffer_grow, 1);

// Output some debug info regarding the FFT DSP's parameters
var _param_count = fmod_dsp_get_num_parameters(dsp_fft);
var _in = fmod_dsp_get_num_inputs(dsp_fft);
var _out = fmod_dsp_get_num_outputs(dsp_fft);
show_debug_message($"total params: {_param_count}, inputs: {_in}, outputs: {_out}");
for (var _i = 0; _i < _param_count ; _i++) {
	show_debug_message($"parameter {_i}: {fmod_dsp_get_parameter_info(dsp_fft, _i)}");
}
