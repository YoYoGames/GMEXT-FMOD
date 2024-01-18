
if (locked) return;

if (channel_index != -1)
{
	paused = !paused;
	fmod_channel_control_set_paused(channel_index, paused);
}

text = paused ? "Resume" : "Pause";
