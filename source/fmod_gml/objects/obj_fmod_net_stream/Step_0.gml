
event_inherited();

state = fmod_sound_get_open_state(sound_index);
if (fmod_last_result() != FMOD_RESULT.OK) {
	show_debug_message(fmod_error_string(fmod_last_result()));
}

if (channel_index != 0)
{            
	playing = fmod_channel_control_is_playing(channel_index);
            
	pos = fmod_channel_get_position(channel_index, FMOD_TIMEUNIT.MS);
		    
    /* Silence the stream until we have sufficient data for smooth playback. */
	fmod_channel_control_set_mute(channel_index, state.starving);
}
else
{
    /* This may fail if the stream isn't ready yet, so check the error code. */
    channel_index = fmod_system_play_sound(sound_index, false);
}

/*
    Read any tags that have arrived, this could happen if a radio station switches
    to a new song. This loop only runs IF there is an update to the tags.
*/

var _tag = fmod_sound_get_tag(sound_index, -1, tag_data_buff);
while (fmod_last_result() == FMOD_RESULT.OK)
{
	// Move cursor to the begining of the buffer
	buffer_seek(tag_data_buff, buffer_seek_start, 0);
	
	if (_tag.data_type == FMOD_TAGDATATYPE.STRING)
	{
		var _value = buffer_read(tag_data_buff, buffer_string);
		tag_strings[tag_index] = $"{_tag.name}: {_value}";
		tag_index = (tag_index + 1) % tag_count;
			
	    if (_tag.type == FMOD_TAGTYPE.PLAYLIST && _tag.name == "FILE")
	    {
	        var _url = _value;
			fmod_sound_release(sound_index);
		
	        sound_index = fmod_system_create_sound(_url, FMOD_MODE.CREATESTREAM | FMOD_MODE.NONBLOCKING, extra);
	    }
	}
	else if (_tag.type == FMOD_TAGTYPE.FMOD)
	{
	    /* When a song changes, the sample rate may also change, so compensate here. */
	    if ((_tag.name == "Sample Rate Change") && channel_index != -1)
	    {
	        var _frequency = buffer_read(tag_data_buff, buffer_f32);
	        fmod_channel_set_frequency(channel_index, _frequency);
	    }
	}
	_tag = fmod_sound_get_tag(sound_index, -1, tag_data_buff);
}

