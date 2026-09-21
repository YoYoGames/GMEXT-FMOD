
channel_index = fmod_system_play_sound(sound_index, fmod_system_get_master_channel_group(), false)
show_debug_message(channel_index)

// Channel callbacks fire from fmod_system_update(), on the thread that calls it.
// The callback receives the ref it was set on, a FmodChannelControlCallbackType,
// and that type's payload: undefined for End, 0/1 for VirtualVoice (1 = the
// channel just went virtual), the sync point index for SyncPoint, and a
// FmodOcclusion struct for Occlusion.
fmod_channel_control_set_callback(channel_index, function(_channel_control, _type, _payload)
{
	show_debug_message($"[fmod] channel callback, type {_type}, payload {_payload}");
});
