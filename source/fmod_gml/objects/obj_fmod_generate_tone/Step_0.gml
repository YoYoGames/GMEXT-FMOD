

var _x = obj_console_pointer.x;
var _y = obj_console_pointer.y;

fmod_dsp_set_parameter_float(dsp_index,FMOD_DSP_OSCILLATOR.RATE,_x)
fmod_channel_control_set_volume(channel_index,_y/(room_height/2))