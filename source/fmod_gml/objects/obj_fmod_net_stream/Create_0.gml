
event_inherited();

/* Increase the file buffer size a little bit to account for Internet lag. */
fmod_system_set_stream_buffer_size(4*1024, FMOD_TIMEUNIT.RAWBYTES);

// Increase the default file chunk size to handle seeking inside large playlist files that may be over 2kb. */
extra = new FmodSystemCreateSoundExInfo();
extra.file_buffer_size = 4*1024;
sound_index = fmod_system_create_sound("http://live-radio01.mediahubaustralia.com/2TJW/mp3/", FMOD_MODE.CREATESTREAM | FMOD_MODE.NONBLOCKING, extra);
channel_index = 0;

tag_count = 4;
tag_index = 0;
tag_strings = array_create(tag_count, "");
tag_data_buff = buffer_create(255, buffer_fixed, 1);

state = undefined
paused = false;
playing = false;
pos = 0;

text = "Pause";
