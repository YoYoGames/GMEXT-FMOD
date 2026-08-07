///@desc Fetch Spectrum

// fmod_dsp_get_parameter_data(dsp_ref, index, buffer, length) returns the size
// required to hold all the data.
//
// NOTE: the native side still returns FMOD_ERR_UNSUPPORTED for this call (the
// GML buffer argument is not unwrapped yet), so the spectrum buffer stays empty
// and the Draw event plots nothing. The call is left in place so the example
// starts working again as soon as the extension unwraps the buffer.
var _required_size = fmod_dsp_get_parameter_data(dsp_fft, FmodDspFft.SpectrumData, fft_buffer, buffer_get_size(fft_buffer));
if (buffer_get_size(fft_buffer) < _required_size) {
	buffer_resize(fft_buffer, _required_size);
}

// Since it's a buffer, good practice to seek to beginning
buffer_seek(fft_buffer, buffer_seek_start,0);
