
/*
    Determine how much has been recorded since we last checked
*/
		
var _record_pos = fmod_system_get_record_position(DEVICE_INDEX);

var _record_delta = (_record_pos >= last_record_pos) ? (_record_pos - last_record_pos) : (_record_pos + sound_length - last_record_pos);
last_record_pos = _record_pos;
samples_recorded += _record_delta;


if (_record_delta && (_record_delta < min_record_delta))
{
    min_record_delta = _record_delta;	/* Smallest driver granularity seen so far */
    adjusted_latency = (_record_delta <= desired_latency) ? desired_latency : _record_delta;	/* Adjust our latency if driver granularity is high */
}

/*
Delay playback until our desired latency is reached.
*/
if ((channel == -1) && (samples_recorded >= adjusted_latency))
{
	show_debug_message("Started Playback...");
    channel = fmod_system_play_sound(sound_index, false);
}

if (channel) {
	
    /*
        Stop playback if recording stops.
    */
	var _is_recording = fmod_system_is_recording(DEVICE_INDEX);
	
	if (!_is_recording) {
		fmod_channel_control_set_paused(channel, true);
		show_debug_message("Stopped Recording...");
	}
	
    /*
        Determine how much has been played since we last checked.
    */
	var _play_pos = fmod_channel_get_position(channel, FMOD_TIMEUNIT.PCM);
	
	var _play_delta = (_play_pos >= last_play_pos) ? (_play_pos - last_play_pos) : (_play_pos + sound_length - last_play_pos);
	last_play_pos = _play_pos;
	samples_played += _play_delta;
	
    /*
        Compensate for any drift.
    */
	var _latency = samples_recorded - samples_played;
	actual_latency = (0.97 * actual_latency) + (0.03 * _latency);
	
	var _playback_rate = native_rate;
	if (actual_latency < (adjusted_latency - drift_threshold)) {
		/* Play position is catching up to the record position, slow playback down by 2% */
		_playback_rate = native_rate - (native_rate / 50); 
	}
	else if (actual_latency > (adjusted_latency - drift_threshold)) {
		/* Play position is falling behind the record position, speed playback up by 2% */
		_playback_rate = native_rate + (native_rate / 50); 
	}
	
	fmod_channel_set_frequency(channel, _playback_rate);
}

