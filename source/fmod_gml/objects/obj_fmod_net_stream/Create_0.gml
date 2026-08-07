
event_inherited();

/* Increase the file buffer size a little bit to account for Internet lag. */
fmod_system_set_stream_buffer_size(64*1024, FmodTimeUnit.RawBytes);

// Increase the default file chunk size to handle seeking inside large playlist files that may be over 2kb. */
// TODO: FMOD_CREATESOUNDEXINFO is not exposed by the ExtGen port yet.
// Re-enable once fmod_system_create_sound accepts an ex_info argument again.
//extra = new FmodSystemCreateSoundExInfo();
//extra.file_buffer_size = 4*1024;

/*
    Picking a station for this example:
      - Must be plain http://. FMOD's built-in network layer speaks no TLS, so a
        host that 301s to https:// ends up in FmodOpenState.Error, never connecting.
      - Must be MP3. FMOD cannot decode the raw HE-AAC ("audio/aacp") that many
        stations now serve; those reach Buffering and then fail with a format error.
      - Some Icecast builds (SomaFM's, for one) fail FMOD's open with an EOF error
        even over plain http, so a station is worth testing before relying on it.
*/
sound_index = fmod_system_create_sound("http://stream.radioparadise.com/mp3-128", FmodMode.CreateStream | FmodMode.NonBlocking);
channel_index = 0;

tag_count = 4;
tag_index = 0;
tag_strings = array_create(tag_count, "");

state = undefined
paused = false;
playing = false;
pos = 0;

text = "Pause";
