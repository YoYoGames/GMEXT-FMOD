
event_inherited();

state = fmod_sound_get_open_state(sound_index);
if (fmod_last_result() != FmodResult.Ok) {
	show_debug_message(fmod_error_string(fmod_last_result()));
}

if (channel_index != 0)
{            
	playing = fmod_channel_control_is_playing(channel_index);
            
	pos = fmod_channel_get_position(channel_index, FmodTimeUnit.Ms);
		    
    /* Silence the stream until we have sufficient data for smooth playback. */
	fmod_channel_control_set_mute(channel_index, state.starving);
}
else
{
    /* This may fail if the stream isn't ready yet, so check the error code. */
    channel_index = fmod_system_play_sound(sound_index, fmod_system_get_master_channel_group(), false);

	/*
	    Keep this channel out of the virtual voice system.

	    A paused (or muted) channel has zero audibility, so FMOD happily makes it
	    virtual. Coming back from virtual, FMOD seeks the stream to where playback
	    should have reached - and a live HTTP stream cannot seek, so the sound flips
	    to FmodOpenState.Error with FmodResult.ErrFileCouldNotSeek the instant you
	    un-pause. Priority 0 (the highest) keeps the voice real for its whole life.
	*/
	if (channel_index != 0)
	{
		fmod_channel_set_priority(channel_index, 0);
	}
}

/*
    Read any tags that have arrived, this could happen if a radio station switches
    to a new song. This loop only runs IF there is an update to the tags.
*/

/*
    fmod_sound_get_tag(sound_ref, name, index) - an empty name means "any tag" and an
    index of -1 asks for the next tag that was updated, so the loop drains the queue.
    The returned FmodSoundTag already flattens the payload into the string `data`, so
    no scratch buffer is needed any more.
*/
var _tag = fmod_sound_get_tag(sound_index, "", -1);
while (fmod_last_result() == FmodResult.Ok)
{
	if (_tag.datatype == FmodTagDataType.String)
	{
		var _value = _tag.data;
		tag_strings[tag_index] = $"{_tag.name}: {_value}";
		tag_index = (tag_index + 1) % tag_count;

	    if (_tag.type == FmodTagType.Playlist && _tag.name == "FILE")
	    {
	        var _url = _value;
			fmod_sound_release(sound_index);

	        sound_index = fmod_system_create_sound(_url, FmodMode.CreateStream | FmodMode.NonBlocking);
	    }
	}
	else if (_tag.type == FmodTagType.Fmod)
	{
	    /* When a song changes, the sample rate may also change, so compensate here. */
	    if ((_tag.name == "Sample Rate Change") && channel_index != 0)
	    {
	        // Float tags arrive as their decimal text.
	        var _frequency = real(_tag.data);
	        fmod_channel_set_frequency(channel_index, _frequency);
	    }
	}
	_tag = fmod_sound_get_tag(sound_index, "", -1);
}


