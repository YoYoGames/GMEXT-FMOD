
with(obj_fmod_convolution_reverb)
{
	vol = max(vol - .1, 0);
	fmod_channel_control_set_volume(channel_index, vol);
}
