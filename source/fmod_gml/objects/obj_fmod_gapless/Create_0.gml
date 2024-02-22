enum NOTE
{
    C,
    D,
    E,
};

var note = 
[
    NOTE.E,   /* Ma-    */
    NOTE.D,   /* ry     */
    NOTE.C,   /* had    */
    NOTE.D,   /* a      */
    NOTE.E,   /* lit-   */
    NOTE.E,   /* tle    */
    NOTE.E,   /* lamb,  */
    NOTE.E,   /* .....  */
    NOTE.D,   /* lit-   */
    NOTE.D,   /* tle    */
    NOTE.D,   /* lamb,  */
    NOTE.D,   /* .....  */
    NOTE.E,   /* lit-   */
    NOTE.E,   /* tle    */
    NOTE.E,   /* lamb,  */
    NOTE.E,   /* .....  */

    NOTE.E,   /* Ma-    */
    NOTE.D,   /* ry     */
    NOTE.C,   /* had    */
    NOTE.D,   /* a      */
    NOTE.E,   /* lit-   */
    NOTE.E,   /* tle    */
    NOTE.E,   /* lamb,  */
    NOTE.E,   /* its    */
    NOTE.D,   /* fleece */
    NOTE.D,   /* was    */
    NOTE.E,   /* white  */
    NOTE.D,   /* as     */
    NOTE.C,   /* snow.  */
    NOTE.C,   /* .....  */
    NOTE.C,   /* .....  */
    NOTE.C,   /* .....  */
];


/*
    Get information needed later for scheduling.  The mixer block size, and the output rate of the mixer.
*/
dsp_block_len = fmod_system_get_dsp_buffer_size()
outputrate = fmod_system_get_software_format()

/*
    Load 3 sounds - these are just sine wave tones at different frequencies.  C, D and E on the musical scale.
*/
sound_note_c = fmod_system_create_sound(fmod_path_bundle("c.ogg"),FMOD_MODE.DEFAULT)
sound_note_d = fmod_system_create_sound(fmod_path_bundle("d.ogg"),FMOD_MODE.DEFAULT)
sound_note_e = fmod_system_create_sound(fmod_path_bundle("e.ogg"),FMOD_MODE.DEFAULT)
	
var numsounds = array_length(note)

/*
    Play all the sounds at once! Space them apart with set delay though so that they sound like they play in order.
*/
	
clock_start = 0;
for (var count = 0; count < numsounds; count++)
{
	var sound = -1;
	
	switch(note[count])
	{
		case NOTE.C: sound = sound_note_c break;
		case NOTE.D: sound = sound_note_d break;
		case NOTE.E: sound = sound_note_e break;
	}
	
    channel = fmod_system_play_sound(sound, true);/* Play the sound on the channelgroup we want to use as the parent clock reference (for setDelay further down) */

    if(!clock_start)
    {
		var struct = fmod_channel_control_get_dsp_clock(channel)//Soemthing wrong here? sound fine but long delay comapration with the example
        clock_start = struct.parent_clock
		clock_start += outputrate.sample_rate*2;
            clock_start += (dsp_block_len.buff_size * 2);	/* Start the sound into the future, by 2 mixer blocks worth. */
                                                /* Should be enough to avoid the mixer catching up and hitting the clock value before we've finished setting up everything. */
                                                /* Alternatively the channelgroup we're basing the clock on could be paused to stop it ticking. */
    }
    else
    {
		var slen = fmod_sound_get_length(sound, FMOD_TIMEUNIT.PCM) /* Get the length of the sound in samples. */
		var struct = fmod_sound_get_defaults(sound)/* Get the default frequency that the sound was recorded at. */
		
        slen = (slen / struct.frequency * outputrate.sample_rate);/* Convert the length of the sound to 'output samples' for the output timeline. */
        clock_start += slen; /* Place the sound clock start time to this value after the last one. */
    }

	fmod_channel_control_set_delay(channel,clock_start,0,false) /* Schedule the channel to start in the future at the newly calculated channelgroup clock value. */
	fmod_channel_control_set_paused(channel,false) /* Unpause the sound.  Note that you won't hear the sounds, they are scheduled into the future. */
}

