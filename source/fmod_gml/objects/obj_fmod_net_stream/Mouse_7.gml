
if (locked) return;

if (channel_index != 0)
{
	paused = !paused;
	fmod_channel_control_set_paused(channel_index, paused);
}

text = paused ? "Resume" : "Pause";
