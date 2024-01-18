
with(obj_fmod_dsp_speaker)
{
	panning = clamp(panning + 0.1, -1, 1);
	fmod_channel_control_set_pan(master_group_channel, panning);
}
