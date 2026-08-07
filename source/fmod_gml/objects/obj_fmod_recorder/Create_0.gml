
if(os_type == os_android)
{
	if(!os_check_permission("android.permission.RECORD_AUDIO"))
		os_request_permission("android.permission.RECORD_AUDIO")
}

#macro LATENCY_MS (50) /* Some devices will require higher latency to avoid glitches */
#macro DRIFT_MS (1)
#macro DEVICE_INDEX (0)

// fmod_system_get_record_num_drivers returns the driver count directly.
var _num_drivers = fmod_system_get_record_num_drivers()

show_debug_message($"drivers_num: {_num_drivers}");

if (_num_drivers == 0)
{
    instance_destroy();
	show_debug_message("[FMOD] No recording devices found/plugged in! Aborting...")
}

// FmodRecordDriverInfo carries { name, speaker_mode, sample_rate }.
var _driver_info_struct = fmod_system_get_record_driver_info(0);

    /*
        Determine latency in samples.
    */
native_rate = _driver_info_struct.sample_rate;

// The driver's channel count is not reported, so derive it from the speaker mode.
switch (_driver_info_struct.speaker_mode)
{
	case FmodSpeakerMode.Mono:           native_channels = 1;  break;
	case FmodSpeakerMode.Quad:           native_channels = 4;  break;
	case FmodSpeakerMode.Surround:       native_channels = 5;  break;
	case FmodSpeakerMode._5Point1:       native_channels = 6;  break;
	case FmodSpeakerMode._7Point1:       native_channels = 8;  break;
	case FmodSpeakerMode._7Point1Point4: native_channels = 12; break;
	default:                             native_channels = 2;  break;
}

// TODO: FMOD_CREATESOUNDEXINFO is not exposed by the ExtGen port yet, so the
// user-created sound cannot be described. Re-enable once fmod_system_create_sound
// accepts an ex_info argument again.
//var _extras = {
//	num_channels: native_channels,
//	format: FmodSoundFormat.Pcm16,
//	default_frequency: native_rate,
//	length: native_rate * buffer_sizeof(buffer_u16) * native_channels
//}

    /*
        Create user sound to record into, then start recording.
    */
sound_index = fmod_system_create_sound("", FmodMode.LoopOn | FmodMode.OpenUser /*, _extras*/)

fmod_system_record_start(DEVICE_INDEX, sound_index, true);

sound_length = fmod_sound_get_length(sound_index, FmodTimeUnit.Pcm);

samples_recorded = 0;
samples_played = 0;

last_record_pos = 0;
min_record_delta = -1;
last_play_pos = 0;

drift_threshold = (native_rate * DRIFT_MS) / 1000;       /* The point where we start compensating for drift */
desired_latency = (native_rate * LATENCY_MS) / 1000;     /* User specified latency */
adjusted_latency = desired_latency;                      /* User specified latency adjusted for driver update granularity */
actual_latency = desired_latency;                        /* Latency measured once playback begins (smoothened for jitter) */

channel = -1;
