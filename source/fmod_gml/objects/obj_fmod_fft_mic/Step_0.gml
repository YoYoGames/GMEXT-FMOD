///@desc Fetch Spectrum

// The function returns the required size to hold all the data
var _required_size = fmod_dsp_get_parameter_data(dsp_fft, FMOD_DSP_FFT.SPECTRUMDATA, fft_buffer);
if (buffer_get_size(fft_buffer) < _required_size) {
	buffer_resize(fft_buffer, _required_size);
}

// Since it's a buffer, good practice to seek to beginning
buffer_seek(fft_buffer, buffer_seek_start,0);

