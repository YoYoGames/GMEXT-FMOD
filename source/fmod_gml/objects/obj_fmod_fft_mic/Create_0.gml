///@desc Init Variables

if(os_type == os_android)
{
	if(!os_check_permission("android.permission.RECORD_AUDIO"))
		os_request_permission("android.permission.RECORD_AUDIO")
}

var _num_drivers = fmod_system_get_record_num_drivers()

show_debug_message($"drivers_num: {_num_drivers}");

if (_num_drivers.num_drivers == 0)
{
    instance_destroy();
	show_debug_message("[FMOD] No recording devices found/plugged in! Aborting...")
}

var _driver_info_struct = fmod_system_get_record_driver_info(0);

/*
    Determine latency in samples.
*/
native_rate = _driver_info_struct.system_rate;
native_channels = _driver_info_struct.speaker_mode_channels;

var _extras = {
	num_channels: native_channels,
	format: FMOD_SOUND_FORMAT.PCM16,
	default_frequency: native_rate,
	length: native_rate * buffer_sizeof(buffer_u16) * native_channels / 4
}

/*
    Create user sound to record into, then start recording.
*/
sound = fmod_system_create_sound("", FMOD_MODE.LOOP_NORMAL | FMOD_MODE.OPENUSER, _extras)

fmod_system_record_start(DEVICE_INDEX, sound, true);

length = fmod_sound_get_length(sound,FMOD_TIMEUNIT.PCM);
ms = fmod_sound_get_length(sound,FMOD_TIMEUNIT.MS);

music = fmod_system_play_sound(sound, false);

// FFT DSP
dsp_fft = fmod_system_create_dsp_by_type(FMOD_DSP_TYPE.FFT);
fmod_channel_control_add_dsp(music, FMOD_CHANNELCONTROL_DSP_INDEX.FADER, dsp_fft);
fmod_dsp_set_parameter_int(dsp_fft, FMOD_DSP_FFT.WINDOWTYPE, FMOD_DSP_FFT_WINDOW.RECT);
windows_size = 16384
fmod_dsp_set_parameter_int(dsp_fft, FMOD_DSP_FFT.WINDOWSIZE, 16384);

// Create buffer for parameter data
fft_buffer = buffer_create(18000, buffer_grow, 1);

// Set the post_wet and dry as 0 to mute the DSP output (avoid feeback)
fmod_dsp_set_wet_dry_mix(dsp_fft, 1, 0, 0);

// Output some debug info regarding the FFT DSP's parameters
var _param_count = fmod_dsp_get_num_parameters(dsp_fft);
var _in = fmod_dsp_get_num_inputs(dsp_fft);
var _out = fmod_dsp_get_num_outputs(dsp_fft);
show_debug_message($"total params: {_param_count}, inputs: {_in}, outputs: {_out}");
for (var _i = 0; _i < _param_count ; _i++) {
	show_debug_message($"parameter {_i}: {fmod_dsp_get_parameter_info(dsp_fft, _i)}");
}