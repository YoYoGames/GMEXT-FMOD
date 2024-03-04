///@desc Draw Spectrum

// Fix offsetss
var _x = 100;
var _y = 400;
var _l = 500;
draw_line(_x, _y, _x + _l, _y);

draw_set_halign(fa_center);
draw_set_valign(fa_middle);

draw_line(_x, _y - 20, _x, _y + 20);
draw_text(_x, _y + 30, "0")
draw_line(_x + _l, _y - 20, _x + _l, _y + 20);
draw_text(_x + _l, _y + 30, ms)

draw_text(_x+_l/2,_y+20,"(ms)")

var _pos = fmod_channel_get_position(music, FMOD_TIMEUNIT.PCM) / length;
draw_line(_x + _l*_pos, _y - 10, _x + _l*_pos, _y + 10);

// Grabbing parameter data via float
draw_set_halign(fa_left);
draw_set_valign(fa_top);

var _dom_freq = round(fmod_dsp_get_parameter_float(dsp_fft,FMOD_DSP_FFT.DOMINANT_FREQ));
draw_text(_x, _y-130, $"Dominant Frequency: {_dom_freq}Hz");

// Since it's a buffer, good practice to seek to beginning
buffer_seek(fft_buffer, buffer_seek_start,0);

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

// Fix offsets
_x = 800
_y = 200

draw_set_color(c_white);

// First two values check out if called late enough after playback
var _data_size = buffer_read(fft_buffer, buffer_s32); // window size
var _channels_num = buffer_read(fft_buffer, buffer_s32); // channels

for(var _i = 0 ; _i < _channels_num ; _i++)
{
	draw_text(_x , _y + _i*150, "Channel: " + string(_i))
	
	var _data_size_channel = _data_size;	
	for(var _j = 0 ; _j < _data_size_channel; _j++)
	{
		var _value = buffer_read(fft_buffer, buffer_f32);
		draw_circle(_x + _j*2, _y + _i*150 - (100 * _value), 2, false);
	}
}
