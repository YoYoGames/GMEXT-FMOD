///@desc Fetch Spectrum

// Start playback once the record buffer actually holds something
if (!playback_started) {
	var _record_pos = fmod_system_get_record_position(DEVICE_INDEX);
	if (_record_pos > 5000) { // Wait for at least 5000 samples recorded
		fmod_channel_set_position(music, _record_pos % length, FmodTimeUnit.Pcm);
		fmod_channel_control_set_paused(music, false);
		playback_started = true;
	}
}

// The function returns the required size to hold all the data
var _required_size = fmod_dsp_get_parameter_data(dsp_fft, FmodDspFft.SpectrumData, fft_buffer, buffer_get_size(fft_buffer));
if (buffer_get_size(fft_buffer) < _required_size) {
	buffer_resize(fft_buffer, _required_size);
}

// Since it's a buffer, good practice to seek to beginning
buffer_seek(fft_buffer, buffer_seek_start, 0);
