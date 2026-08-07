
channel_index = fmod_system_play_sound(sound_index, fmod_system_get_master_channel_group(), false)
show_debug_message(channel_index)

// Channel callbacks fire from fmod_system_update(), on the thread that calls it.
// The callback receives the channel that raised it and the raw
// FMOD_CHANNELCONTROL_CALLBACK_TYPE value (0 = End, 1 = Virtual Voice,
// 2 = Sync Point, 3 = Occlusion).
fmod_channel_control_set_callback(channel_index, function(_channel, _callback_type)
{
	show_debug_message($"[fmod] channel callback, type {_callback_type}");
});
