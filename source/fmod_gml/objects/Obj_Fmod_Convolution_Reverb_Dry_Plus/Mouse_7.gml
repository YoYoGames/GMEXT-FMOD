
with(obj_fmod_convolution_reverb)
{
	vol = min(vol + .1, 1);
	fmod_channel_control_set_volume(channel_index, vol);
}

