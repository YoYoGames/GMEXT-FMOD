
if(!user_pause)
if(!fmod_channel_control_is_playing(channels[slot]))
{
	channels[slot] = queue_next_sound(system_format.sample_rate, channels[1-slot], irandom(array_length(soundname)-1), slot);
	slot = 1-slot;  /* flip */
}
