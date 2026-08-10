///@desc Init Variables

if(os_type == os_android)
{
	if(!os_check_permission("android.permission.RECORD_AUDIO"))
		os_request_permission("android.permission.RECORD_AUDIO")
}

var _num_drivers = fmod_system_get_record_num_drivers()

show_debug_message($"drivers_num: {_num_drivers}");

if (_num_drivers == 0)
{
    instance_destroy();
	show_debug_message("[FMOD] No recording devices found/plugged in! Aborting...")
	exit;
}

var _driver_info_struct = fmod_system_get_record_driver_info(0);

/*
    Determine latency in samples.
*/
native_rate = _driver_info_struct.sample_rate;
native_channels = _driver_info_struct.speaker_mode_channels;

// A user created sound has no file to describe it, so the format has to be
// spelled out - hence create_sound_ex instead of create_sound.
var _extras = new FmodCreateSoundExInfo();
_extras.num_channels = native_channels;
_extras.format = FmodSoundFormat.Pcm16;
_extras.default_frequency = native_rate;
_extras.length = native_rate * buffer_sizeof(buffer_u16) * native_channels / 4;

/*
    Create user sound to record into, then start recording.
*/
sound = fmod_system_create_sound_ex("", FmodMode.LoopOn | FmodMode.OpenUser, _extras)

fmod_system_record_start(DEVICE_INDEX, sound, true);

length = fmod_sound_get_length(sound,FmodTimeUnit.Pcm);
ms = fmod_sound_get_length(sound,FmodTimeUnit.Ms);

// Start paused - playback begins in Step once there is recorded data to read
music = fmod_system_play_sound(sound, fmod_system_get_master_channel_group(), true);
playback_started = false;

// FFT DSP
dsp_fft = fmod_system_create_dsp_by_type(FmodDspType.FFT);
fmod_channel_control_add_dsp(music, FmodChannelControlDspIndex.Fader, dsp_fft);
fmod_dsp_set_parameter_int(dsp_fft, FmodDspFft.WindowType, FmodDspFftWindowType.Rect);
windows_size = 16384
fmod_dsp_set_parameter_int(dsp_fft, FmodDspFft.WindowSize, windows_size);

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
