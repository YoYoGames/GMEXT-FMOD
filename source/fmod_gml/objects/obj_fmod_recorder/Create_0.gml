
if(os_type == os_android)
{
	if(!os_check_permission("android.permission.RECORD_AUDIO"))
		os_request_permission("android.permission.RECORD_AUDIO")
}

#macro LATENCY_MS (50) /* Some devices will require higher latency to avoid glitches */
#macro DRIFT_MS (1)
#macro DEVICE_INDEX (0)

var _num_drivers = fmod_system_get_record_num_drivers()

show_debug_message($"drivers_num: {_num_drivers}");

if (_num_drivers == 0)
{
    instance_destroy();
	show_debug_message("[FMOD] No recording devices found/plugged in! Aborting...")
	exit;
}

var _driver_info_struct = fmod_system_get_record_driver_info(DEVICE_INDEX);

    /*
        Determine latency in samples.
    */
native_rate = _driver_info_struct.sample_rate;
native_channels = _driver_info_struct.speaker_mode_channels;

// A user created sound has no file to describe it, so the format has to be
// spelled out - hence create_sound_ex instead of create_sound. Matching the
// driver's own rate and channel count keeps FMOD from inserting a resampler.
var _extras = new FmodCreateSoundExInfo();
_extras.num_channels = native_channels;
_extras.format = FmodSoundFormat.Pcm16;
_extras.default_frequency = native_rate;
_extras.length = native_rate * buffer_sizeof(buffer_u16) * native_channels;

    /*
        Create user sound to record into, then start recording.
    */
sound_index = fmod_system_create_sound_ex("", FmodMode.LoopOn | FmodMode.OpenUser, _extras)

fmod_system_record_start(DEVICE_INDEX, sound_index, true);

sound_length = fmod_sound_get_length(sound_index, FmodTimeUnit.Pcm);

samples_recorded = 0;
samples_played = 0;

last_record_pos = 0;
min_record_delta = infinity;    /* Any real delta is smaller, so the first one seeds the granularity */
last_play_pos = 0;

drift_threshold = (native_rate * DRIFT_MS) / 1000;       /* The point where we start compensating for drift */
desired_latency = (native_rate * LATENCY_MS) / 1000;     /* User specified latency */
adjusted_latency = desired_latency;                      /* User specified latency adjusted for driver update granularity */
actual_latency = desired_latency;                        /* Latency measured once playback begins (smoothened for jitter) */

channel = -1;
