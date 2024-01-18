
/*
This example shows how you can play a string of sounds together without gaps,
using the setDelay command, to produce a granular synthesis style truck engine 
effect.

The basic operation is:

 * Play 2 sounds initially at the same time, the first sound immediately, and
   the 2nd sound with a delay calculated by the length of the first sound.
 * Call setDelay to initiate the delayed playback. setDelay is sample accurate
   and uses -output- samples as the time frame, not source samples. These
   samples are a fixed amount per second regardless of the source sound format,
   for example, 48000 samples per second if FMOD is initialized to 48khz output.
 * Output samples are calculated from source samples with a simple
   source->output sample rate conversion. i.e.
        sound_length *= output_rate
        sound_length /= sound_frequency
 * When the first sound finishes, the second one should have automatically
   started. This is a good oppurtunity to queue up the next sound. Repeat
   step 2.
 * Make sure the framerate is high enough to queue up a new sound before the
   other one finishes otherwise you will get gaps.

These sounds are not limited by format, channel count or bit depth like the 
realtimestitching example is, and can also be modified to allow for overlap,
by reducing the delay from the first sound playing to the second by the overlap
amount.

    #define USE_STREAMS = Use 2 stream instances, created while they play.
    #define USE_STREAMS = Use 6 static wavs, all loaded into memory.
*/

channel_group_index = fmod_system_create_channel_group("main")

user_pause = false

channels = [-1, -1];

function queue_next_sound(outputrate, playingchannel, newindex, slot)
{
	var new_sound = sounds[newindex]
	var new_channel = fmod_system_play_sound(new_sound,true,channel_group_index)
	
	var playing_sound;
	
	if(playingchannel != -1)
	{
        /*
            Get the start time of the playing channel.
        */
		var struct = fmod_channel_control_get_delay(playingchannel)
		startdelay = struct.dsp_clock_start
		
        /*
            Grab the length of the playing sound, and its frequency, so we can caluate where to place the new sound on the time line.
        */
		playing_sound = fmod_channel_get_current_sound(playingchannel)
		
		soundlength = fmod_sound_get_length(playing_sound, FMOD_TIMEUNIT.PCM);

        soundfrequency = fmod_channel_get_frequency(playingchannel)
		
        /* 
            Now calculate the length of the sound in 'output samples'.  
            Ie if a 44khz sound is 22050 samples long, and the output rate is 48khz, then we want to delay by 24000 output samples.
        */
        soundlength *= outputrate;   
        soundlength /= soundfrequency;
        
        startdelay += soundlength;

		fmod_channel_control_set_delay(new_channel,startdelay,0,true)
	}
	else
	{
		bufferlength = fmod_system_get_dsp_buffer_size().buff_size
        startdelay = fmod_channel_control_get_dsp_clock(new_channel).parent_clock
        startdelay += (2 * bufferlength);
		fmod_channel_control_set_delay(new_channel,startdelay,0,true)
	}
	
        /*
            Randomize pitch/volume to make it sound more realistic / random.
        */
    var val = fmod_channel_get_frequency(new_channel)
	
    var variation = random_range(-1,1)/* -1.0 to +1.0 */
    val *= (1.0 + (variation * 0.02)); /* @22khz, range fluctuates from 21509 to 22491 */
    
    val = fmod_channel_set_frequency(new_channel,val)
	
    val = fmod_channel_control_get_volume(new_channel)
    
    variation = random(1)
    val *= (1.0 - (variation * 0.2));                     /*  0.8 to 1.0 */

    fmod_channel_control_set_volume(new_channel,val)
        
    fmod_channel_control_set_paused(new_channel,false)
       
    return new_channel;
}

slot = 0

soundname = [ fmod_path_bundle("granular/truck_idle_off_01.wav"),
	fmod_path_bundle("granular/truck_idle_off_02.wav"),
	fmod_path_bundle("granular/truck_idle_off_03.wav"),
	fmod_path_bundle("granular/truck_idle_off_04.wav"),
	fmod_path_bundle("granular/truck_idle_off_05.wav"),
	fmod_path_bundle("granular/truck_idle_off_06.wav") ]

system_format = fmod_system_get_software_format()
   
sounds = []
for(var count = 0; count < array_length(soundname) ; count++) {
	sounds[count] = fmod_system_create_sound(soundname[count],FMOD_MODE.IGNORETAGS)
}

/*
    Kick off the first 2 sounds.  First one is immediate, second one will be triggered to start after the first one.
*/
channels[slot] = queue_next_sound(system_format.sample_rate, channels[1-slot], irandom(array_length(soundname)-1), slot);
slot = 1-slot;  /* flip */
channels[slot] = queue_next_sound(system_format.sample_rate, channels[1-slot], irandom(array_length(soundname)-1), slot);
slot = 1-slot;  /* flip */
	
	