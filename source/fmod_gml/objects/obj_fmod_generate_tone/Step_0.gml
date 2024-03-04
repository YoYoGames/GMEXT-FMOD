

frequency = obj_console_pointer.x;
volume = obj_console_pointer.y/(room_height)

fmod_dsp_set_parameter_float(dsp_index,FMOD_DSP_OSCILLATOR.RATE,frequency)
fmod_channel_control_set_volume(channel_index,volume)

