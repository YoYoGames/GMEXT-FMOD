
var is_paused = fmod_channel_control_get_paused(channel_index)
fmod_channel_control_set_paused(channel_index,!is_paused)

text = is_paused?"Pause":"Resume"
