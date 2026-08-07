
event_inherited();

/* Increase the file buffer size a little bit to account for Internet lag. */
fmod_system_set_stream_buffer_size(4*1024, FmodTimeUnit.RawBytes);

// Increase the default file chunk size to handle seeking inside large playlist files that may be over 2kb. */
// TODO: FMOD_CREATESOUNDEXINFO is not exposed by the ExtGen port yet.
// Re-enable once fmod_system_create_sound accepts an ex_info argument again.
//extra = new FmodSystemCreateSoundExInfo();
//extra.file_buffer_size = 4*1024;
sound_index = fmod_system_create_sound("http://live-radio01.mediahubaustralia.com/2TJW/mp3/", FmodMode.CreateStream | FmodMode.NonBlocking);
channel_index = 0;

tag_count = 4;
tag_index = 0;
tag_strings = array_create(tag_count, "");

state = undefined
paused = false;
playing = false;
pos = 0;

text = "Pause";
