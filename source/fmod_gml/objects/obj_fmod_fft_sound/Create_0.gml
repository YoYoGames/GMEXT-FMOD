///@desc Init Variables

// Create sound
sound = fmod_system_create_sound(fmod_path_bundle("wave.mp3"),FMOD_MODE.LOOP_NORMAL);

// Get length in both samples and ms
length = fmod_sound_get_length(sound, FMOD_TIMEUNIT.PCM);
ms = fmod_sound_get_length(sound, FMOD_TIMEUNIT.MS);

// Play sound
music = fmod_system_play_sound(sound, false);

// Create and setup FFT dsp.
dsp_fft = fmod_system_create_dsp_by_type(FMOD_DSP_TYPE.FFT);
fmod_channel_control_add_dsp(music, FMOD_CHANNELCONTROL_DSP_INDEX.HEAD, dsp_fft);
fmod_dsp_set_parameter_int(dsp_fft, FMOD_DSP_FFT.WINDOWTYPE, FMOD_DSP_FFT_WINDOW.RECT);
fmod_dsp_set_parameter_int(dsp_fft, FMOD_DSP_FFT.WINDOWSIZE, 128);

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