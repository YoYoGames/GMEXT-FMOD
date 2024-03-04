///@desc Draw Spectrum

var _x = 100
var _y = 400
var _l = 500

draw_set_halign(fa_left);
draw_set_valign(fa_top);

// Get the dominant frequency (and display it)
var _dom_freq = round(fmod_dsp_get_parameter_float(dsp_fft,FMOD_DSP_FFT.DOMINANT_FREQ));
draw_text(_x, _y - 130, $"Dominant Frequency: {_dom_freq}Hz");

// Since it's a buffer, good practice to seek to beginning
buffer_seek(fft_buffer, buffer_seek_start, 0);

// Data inside the buffer is stored as follows:
//
// structure: [ length, num_channels,  |-- channel_0 --|, |-- channel_1 --| ]
// types:         s32       s32               f32                f32    
//                                     |--------- spectrum data ----------|
// offsets:        0         4         8           
// 
// The buffer contents are:
// - an int32 with the 'length' (window size)
// - an int32 with the 'num_channels' (channel count)
// - blocks of channel_data (amount = 'num_channels') each containing 'length' number of f32 float values.

_x = 200
_y = 500

// First two values check out if called late enough after playback
var _data_size = buffer_read(fft_buffer, buffer_s32); // window size
var _channels_num = buffer_read(fft_buffer, buffer_s32); // channels


draw_set_color(c_white);
		
// For this sample we are just reading one channel
// Since vocal frequencies usually peak at 4.8K we don't need the extra data
// The max frequency is 48khz, so we can devide by 15 (data of interest)
var _interest_data_size = _data_size/15;
for(var _i = 0 ; _i < _interest_data_size; _i++)
{
	var _value = buffer_read(fft_buffer, buffer_f32);
	draw_circle(_x + _i, _y - 40000 * _value , 2, false);
}

