
var _id = id
with(obj_fmod_granular)
{
	user_pause = !user_pause

	fmod_channel_control_set_paused(channel_group_index,user_pause)
	//or
	//fmod_channel_control_set_paused(channels[0],user_pause)
	//fmod_channel_control_set_paused(channels[1],user_pause)
	
	if(user_pause)
		_id.text = "Resume"
	else
		_id.text = "Pause"
}
