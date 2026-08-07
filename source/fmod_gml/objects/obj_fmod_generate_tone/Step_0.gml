

frequency = obj_console_pointer.x;
volume = obj_console_pointer.y/(room_height)

fmod_dsp_set_parameter_float(dsp_index,FmodDspOscillator.Rate,frequency)
fmod_channel_control_set_volume(channel_index,volume)

