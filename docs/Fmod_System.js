/**
 * @func fmod_system_create
 * @desc Creates an instance of the FMOD system.
 * @func_end
*/
function fmod_system_create() {}


/**
 * @func fmod_system_select
 * @desc YYNULL
 * @param {double} index 
 * @func_end
*/
function fmod_system_select(index) {}


/**
 * @func fmod_system_count
 * @desc YYNULL
 * @returns {double}
 * @func_end
*/
function fmod_system_count() {}


/**
 * @func fmod_system_init
 * @desc Initialize the system object and prepare FMOD for playback.
 * @param {double} max_channels Maximum number of Channel objects available for playback, also known as virtual voices. Virtual voices will play with minimal overhead, with a subset of 'real' voices that are mixed, and selected based on priority and audibility. 
 * @param {double} flags Initialization flags. More than one mode can be set at once by combining them with the OR operator. 
 * @func_end
*/
function fmod_system_init(max_channels,flags) {}


/**
 * @func fmod_system_release
 * @desc Closes and frees this object and its resources.
 * @param {double} index Identifier of the system
 * @func_end
*/
function fmod_system_release(index) {}


/**
 * @func fmod_system_update
 * @desc Updates the FMOD system.
 * @func_end
*/
function fmod_system_update() {}


/**
 * @func fmod_system_mixer_suspend
 * @desc Suspend mixer thread and relinquish usage of audio hardware while maintaining internal state.
 * @func_end
*/
function fmod_system_mixer_suspend() {}


/**
 * @func fmod_system_mixer_resume
 * @desc Resume mixer thread and reacquire access to audio hardware.
 * @func_end
*/
function fmod_system_mixer_resume() {}


/**
 * @func fmod_system_set_output
 * @desc Sets the type of output interface used to run the mixer.
 * @param {constant.FMOD_OUTPUTTYPE} output Output type.
 * @func_end
*/
function fmod_system_set_output(output) {}


/**
 * @func fmod_system_get_output
 * @desc Retrieves the type of output interface used to run the mixer.
 * @returns {double}
 * @func_end
*/
function fmod_system_get_output() {}


/**
 * @func fmod_system_get_num_drivers
 * @desc Retrieves the number of output drivers available for the selected output type.
 * @returns {double}
 * @func_end
*/
function fmod_system_get_num_drivers() {}


/**
 * @func fmod_system_get_driver_info_multiplatform
 * @desc Retrieves identification information about a sound device specified by its index, and specific to the selected output mode.
 * @param {double} id Index of the sound driver device.
 * @returns {struct} {_id:int,name:string,guid:string,system_rate:int,speaker_mode:int,speaker_mode_channels:int}
 * @func_end
*/
function fmod_system_get_driver_info_multiplatform(id_,buff_return_) {}


/**
 * @func fmod_system_set_driver
 * @desc Sets the output driver for the selected output type.
 * @param {double} driver Driver index where 0 represents the default for the output type.
 * @returns {double}
 * @func_end
*/
function fmod_system_set_driver(driver) {}


/**
 * @func fmod_system_get_driver
 * @desc Retrieves the output driver for the selected output type.
 * @func_end
*/
function fmod_system_get_driver() {}


/**
 * @func fmod_system_set_software_channels
 * @desc Sets the maximum number of software mixed Channels possible.
 * @param {double} SoftwareChannels The maximum number of real Channels to be allocated by FMOD.
 * @func_end
*/
function fmod_system_set_software_channels(SoftwareChannels) {}


/**
 * @func fmod_system_get_software_channels
 * @desc  Retrieves the maximum number of software mixed Channels possible.
 * @returns {double}
 * @func_end
*/
function fmod_system_get_software_channels() {}


/**
 * @func fmod_system_set_software_format
 * @desc Sets the output format for the software mixer.
 * @param {int} sample_rate Sample rate of the mixer.
 * @param {constant.FMOD_SPEAKERMODE} speaker_mode Speaker setup of the mixer.
 * @param {int} num_raw_speakers Number of speakers for FMOD_SPEAKERMODE_RAW 
 * @func_end
*/
function fmod_system_set_software_format(sample_rate,speaker_mode,num_raw_speakers) {}


/**
 * @func fmod_system_get_software_format
 * @desc Retrieves the output format for the software mixer.
 * @returns {double} {sample_rate:int,speaker_mode:FMOD_SPEAKERMODE,num_raw_speakers:int}
 * @func_end
*/
function fmod_system_get_software_format(buff_return_) {}


/**
 * @func fmod_system_set_dsp_buffer_size
 * @desc Sets the buffer size for the FMOD software mixing engine.
 * @param {double} buff_size The mixer engine block size. Use this to adjust mixer update granularity. See below for more information on buffer length vs latency.
 * @param {double} num_buffers The mixer engine number of buffers used. Use this to adjust mixer latency. See below for more information on number of buffers vs latency.
 * @func_end
*/
function fmod_system_set_dsp_buffer_size(buff_size_,num_buffers_) {}


/**
 * @func fmod_system_get_dsp_buffer_size_multiplatform
 * @desc Retrieves the buffer size settings for the FMOD software mixing engine.
 * @returns {struct}{buff_size:int,num_buffers:int}
 * @func_end
*/
function fmod_system_get_dsp_buffer_size_multiplatform(buff_return_) {}


/**
 * @func fmod_system_set_stream_buffer_size
 * @desc Sets the default file buffer size for newly opened streams.
 * @param {double} file_buffer_size Buffer size.
 * @param {constant.FMOD_TIMEUNIT} file_buffer_size_type Type of units for filebuffersize.
 * @func_end
*/
function fmod_system_set_stream_buffer_size(file_buffer_size,file_buffer_size_type) {}


/**
 * @func fmod_system_get_stream_buffer_size_multiplatform
 * @desc Retrieves the default file buffer size for newly opened streams.
 * @param {struct} buff_return_ {file_buffer_size: int,file_buffer_size_type:FMOD_TIMEUNIT}
 * @func_end
*/
function fmod_system_get_stream_buffer_size_multiplatform(buff_return_) {}


/**
 * @func fmod_system_set_advanced_settings
 * @desc Sets advanced settings for the system object, typically to allow adjusting of settings related to resource usage or audio quality.
 * @param {int} maxMPEGCodecs Maximum MPEG Sounds created as FMOD_CREATECOMPRESSEDSAMPLE.
 * @param {int} maxADPCMCodecs Maximum IMA-ADPCM Sounds created as FMOD_CREATECOMPRESSEDSAMPLE.
 * @param {int} maxXMACodecs Maximum XMA Sounds created as FMOD_CREATECOMPRESSEDSAMPLE.
 * @param {int} maxVorbisCodecs Maximum Vorbis Sounds created as FMOD_CREATECOMPRESSEDSAMPLE.
 * @param {int} maxAT9Codecs Maximum AT9 Sounds created as FMOD_CREATECOMPRESSEDSAMPLE.
 * @param {int} maxFADPCMCodecs Maximum FADPCM Sounds created as FMOD_CREATECOMPRESSEDSAMPLE.
 * @param {int} maxPCMCodecs Deprecated.
 * @param {int} ASIONumChannels Number of elements in ASIOSpeakerList on input, number of elements in ASIOChannelList on output.
 * @param {double} vol0virtualvol For use with FMOD_INIT_VOL0_BECOMES_VIRTUAL, Channels with audibility below this will become virtual. See the Virtual Voices guide for more information.
 * @param {int} defaultDecodeBufferSize For use with Streams, the default size of the double buffer.
 * @param {int} profilePort For use with FMOD_INIT_PROFILE_ENABLE, specify the port to listen on for connections by FMOD Studio or FMOD Profiler.
 * @param {int} geometryMaxFadeTime For use with Geometry, the maximum time it takes for a Channel to fade to the new volume level when its occlusion changes.
 * @param {double} distanceFilterCenterFreq For use with FMOD_INIT_CHANNEL_DISTANCEFILTER, the default center frequency for the distance filtering effect.
 * @param {int} reverb3Dinstance For use with Reverb3D, selects which global reverb instance to use.
 * @param {int} DSPBufferPoolSize Number of intermediate mixing buffers in the 'DSP buffer pool'. Each buffer in bytes will be bufferlength (See System::getDSPBufferSize) * sizeof(float) * output mode speaker count (See FMOD_SPEAKERMODE). ie 7.1 @ 1024 DSP block size = 1024 * 4 * 8 = 32KB.
 * @param {constant.DSP_RESAMPLER} resamplerMethod Resampling method used by Channels.
 * @param {int} randomSeed Seed value to initialize the internal random number generator.
 * @param {int} maxConvolutionThreads Maximum number of CPU threads to use for FMOD_DSP_TYPE_CONVOLUTIONREVERB effect. 1 = effect is entirely processed inside the FMOD_THREAD_TYPE_MIXER thread. 2 and 3 offloads different parts of the convolution processing into different threads (FMOD_THREAD_TYPE_CONVOLUTION1 and FMOD_THREAD_TYPE_CONVOLUTION2 to increase throughput.
 * @param {int} maxOpusCodecs Maximum Opus Sounds created as FMOD_CREATECOMPRESSEDSAMPLE.
 * @func_end
*/
function fmod_system_set_advanced_settings() {}


/**
 * @func fmod_system_get_advanced_settings_multiplatform
 * @desc Retrieves the advanced settings for the system object.
 * @returns {double}  {maxMPEGCodecs:double,maxADPCMCodecs:double,maxXMACodecs:double,maxVorbisCodecs:double,maxAT9Codecs:double,maxFADPCMCodecs:double,maxPCMCodecs:double,ASIONumChannels:double,vol0virtualvol:double,defaultDecodeBufferSize:double,profilePort:double,geometryMaxFadeTime:double,distanceFilterCenterFreq:double,reverb3Dinstance:double,DSPBufferPoolSize:double,resamplerMethod:double,randomSeed:double,maxConvolutionThreads:double,maxOpusCodecs:double}
 * @func_end
*/
function fmod_system_get_advanced_settings_multiplatform(buff_return_) {}


/**
 * @func fmod_system_set_speaker_position
 * @desc Sets the position of the specified speaker for the current speaker mode.
 * @param {constant.FMOD_SPEAKER} speaker Speaker.
 * @param {double} x 2D X position relative to the listener. -1 = left, 0 = middle, +1 = right.
 * @param {double} y 2D Y position relative to the listener. -1 = back, 0 = middle, +1 = front.
 * @param {double} active Active state of a speaker. True = included in 3D calculations, False = ignored.
 * @func_end
*/
function fmod_system_set_speaker_position(speaker_,x_,y_,active_) {}


/**
 * @func fmod_system_get_speaker_position
 * @desc Retrieves the position of the specified speaker for the current speaker mode.
 * @param {constant.FMOD_SPEAKER} speaker Speaker.
 * @returns {struct} {x:double,y:double,active:bool}
 * @func_end
*/
function fmod_system_get_speaker_position(speaker_,buff_return_) {}


/**
 * @func fmod_system_set_3d_settings
 * @desc Sets the global doppler scale, distance factor and log roll-off scale for all 3D sound in FMOD.
 * @param {double} doppler_scale A scaling factor for doppler shift.
 * @param {double} distance_factor A factor for converting game distance units to FMOD distance units.
 * @param {double} rolloff_scale A scaling factor for distance attenuation. When a sound uses a roll-off mode other than FMOD_3D_CUSTOMROLLOFF and the distance is greater than the sound's minimum distance, the distance is scaled by the roll-off scale.
 * @func_end
*/
function fmod_system_set_3d_settings(doppler_scale_,distance_factor_,rolloff_scale_) {}


/**
 * @func fmod_system_get_3d_settings_multiplatform
 * @desc Retrieves the global doppler scale, distance factor and roll-off scale for all 3D sounds.
 * @returns {double} {doppler_scale:double,distance_factor:double,rolloff_scale:double}
 * @func_end
*/
function fmod_system_get_3d_settings_multiplatform(doppler_scale,distance_factor,rolloff_scale) {}


/**
 * @func fmod_system_set_3d_num_listeners
 * @desc Sets the number of 3D 'listeners' in the 3D sound scene.
 * @param {double} num Number of listeners in the scene.
 * @func_end
*/
function fmod_system_set_3d_num_listeners(num) {}


/**
 * @func fmod_system_get_3d_num_listeners
 * @desc Retrieves the number of 3D listeners.
 * @returns {double}
 * @func_end
*/
function fmod_system_get_3d_num_listeners() {}


/**
 * @func fmod_system_set_3d_rolloff_callback
 * @desc Sets a callback to allow custom calculation of distance attenuation.
 * @func_end
*/
function fmod_system_set_3d_rolloff_callback() {}


/**
 * @func fmod_system_set_network_proxy
 * @desc Set a proxy server to use for all subsequent internet connections.
 * @param {string} proxy Proxy server URL.
 * @func_end
*/
function fmod_system_set_network_proxy(proxy) {}

/**
 * @func fmod_system_get_network_proxy
 * @desc Retrieves the URL of the proxy server used in internet streaming.
 * @func_end
*/
function fmod_system_get_network_proxy() {}


/**
 * @func fmod_system_set_network_timeout
 * @desc Set the timeout for network streams.
 * @param {double} timeout Timeout value. Milliseconds
 * @func_end
*/
function fmod_system_set_network_timeout(timeout) {}


/**
 * @func fmod_system_get_network_timeout
 * @desc Retrieve the timeout value for network streams
 * @returns {double}
 * @func_end
*/
function fmod_system_get_network_timeout() {}


/**
 * @func fmod_system_get_version
 * @desc Retrieves the FMOD version number.
 * @returns {double}
 * @func_end
*/
function fmod_system_get_version() {}


/**
 * @func fmod_system_get_channels_playing
 * @desc Retrieves the number of currently playing Channels.
 * @returns {struct} {channels:Number of playing Channels (both real and virtual).,realchannels:Number of playing real (non-virtual) Channels.}
 * @func_end
*/
function fmod_system_get_channels_playing() {}


/**
 * @func fmod_system_get_cpu_usage
 * @desc Retrieves the amount of CPU used for different parts of the Core engine.
 * @returns {struct} {dsp,:double,stream:double,geometry:double,update:double,convolution1:double,convolution2:double}
 * @func_end
*/
function fmod_system_get_cpu_usage() {}


/**
 * @func fmod_system_get_file_usage
 * @desc Retrieves information about file reads.
 * @returns {struct} {sample_bytes_read:uint64,stream_bytes_read:uint64,other_bytes_read:uint64}
 * @func_end
*/
function fmod_system_get_file_usage() {}


/**
 * @func fmod_system_get_default_mix_matrix
 * @desc Retrieves the default matrix used to convert from one speaker mode to another.
 * @param {constant.FMOD_SPEAKERMODE} source_speaker_mode The speaker mode being converted from.
 * @param {constant.FMOD_SPEAKERMODE} target_speaker_mode The speaker mode being converted to.
 * @param {double} matrix_hop The output matrix. Its minimum size in number of floats must be the number of source channels multiplied by the number of target channels. Source and target channels cannot exceed FMOD_MAX_CHANNEL_WIDTH.
 * @returns {double}
 * @func_end
*/
function fmod_system_get_default_mix_matrix(source_speaker_mode,target_speaker_mode,matrix_hop) {}


/**
 * @func fmod_system_get_speaker_mode_channels
 * @desc Retrieves the channel count for a given speaker mode.
 * @param {constant.FMOD_SPEAKERMODE} mode Speaker mode to query.
 * @returns {double} 
 * @func_end
*/
function fmod_system_get_speaker_mode_channels(mode) {}


/**
 * @func fmod_system_create_sound_multiplatform
 * @desc Loads a sound into memory, opens it for streaming or sets it up for callback based sounds.
 * @param {string} name_or_buff Name of the file or URL to open (UTF-8 string) or a pointer to a preloaded sound memory block if FMOD_OPENMEMORY / FMOD_OPENMEMORY_POINT is used.
 * @param {constant.FMOD_MODE} mode Behavior modifier for opening the sound.
 * @param {struct} extra TODO
 * @returns {double} 
 * @func_end
*/
function fmod_system_create_sound_multiplatform(name_or_buff,mode,extra) {}


/**
 * @func fmod_system_create_stream_multiplatform
 * @desc Opens a sound for streaming.
 * @param {string} name_or_buff Name of the file or URL to open (UTF-8 string) or a pointer to a preloaded sound memory block if FMOD_OPENMEMORY / FMOD_OPENMEMORY_POINT is used.
 * @param {double} mode Behavior modifier for opening the sound.
 * @param {buffer} extra TODO
 * @returns {double} 
 * @func_end
*/
function fmod_system_create_stream_multiplatform(,name_or_buff,mode,extra) {}


/**
 * @func fmod_system_create_dsp
 * @desc Create a DSP object given a plugin description structure.
 * @returns {double} 
 * @func_end
*/
function fmod_system_create_dsp() {}


/**
 * @func fmod_system_create_dsp_by_type
 * @desc Create a DSP object given a built in type index.
 * @param {constant.FMOD_DSP_TYPE} type Type of built in unit.
 * @returns {double} 
 * @func_end
*/
function fmod_system_create_dsp_by_type(type) {}


/**
 * @func fmod_system_create_channel_group
 * @desc Create a ChannelGroup object.
 * @param {string} name 
 * @returns {string} 
 * @func_end
*/
function fmod_system_create_channel_group(name) {}


/**
 * @func fmod_system_create_sound_group
 * @desc Creates a SoundGroup object.
 * @param {string} name Name of SoundGroup.
 * @func_end
*/
function fmod_system_create_sound_group(name) {}


/**
 * @func fmod_system_create_reverb_3d
 * @desc Creates a 'virtual reverb' object. This object reacts to 3D location and morphs the reverb environment based on how close it is to the reverb object's center.
 * @func_end
*/
function fmod_system_create_reverb_3d() {}


/**
 * @func fmod_system_play_sound
 * @desc Plays a Sound on a Channel.
 * @param {double} sound_index Sound to play
 * @param {string} channel_group Group to output to instead of the master.
 * @param {double} pause Whether to start in the paused state. Start a Channel paused to allow altering attributes without it being audible, then follow it up with a call to ChannelControl::setPaused with paused = False.
 * @param {string} channel_index Newly playing Channel
 * @func_end
*/
function fmod_system_play_sound(sound_index_,channel_group,pause_,channel_index) {}


/**
 * @func fmod_system_play_dsp_multiplatform
 * @desc Plays a DSP along with any of its inputs on a Channel.
 * @param {double} dsp_index Unit to play.
 * @param {string} channel_group_name Group to output to instead of the master.
 * @param {double} pause Whether to start in the paused state. Start a Channel paused to allow altering attributes without it being audible, then follow it up with a call to ChannelControl::setPaused with paused = False.
 * @param {string} channel_index Newly playing
 * @func_end
*/
function fmod_system_play_dsp_multiplatform(dsp_index_,channel_group_name,pause_,channel_index) {}


/**
 * @func fmod_system_get_master_channel_group
 * @desc Retrieves the master ChannelGroup that all sounds ultimately route to.
 * @returns {string}
 * @func_end
*/
function fmod_system_get_master_channel_group() {}


/**
 * @func fmod_system_get_master_sound_group
 * @desc Retrieves the default SoundGroup, where all sounds are placed when they are created.
 * @returns {string}
 * @func_end
*/
function fmod_system_get_master_sound_group() {}


/**
 * @func fmod_system_set_3d_listener_attributes_multiplatform
 * @desc Sets the position, velocity and orientation of the specified 3D sound listener.
 * @param {double} listener_ Index of listener to set 3D attributes on. Listeners are indexed from 0, to FMOD_MAX_LISTENERS - 1, in a multi-listener environment.
 * @param {constant.FMOD_VECTOR} pos Position in 3D world space used for panning and attenuation.
 * @param {constant.FMOD_VECTOR} vel Velocity in 3D space used for doppler.
 * @param {constant.FMOD_VECTOR} forward Forwards orientation.
 * @param {constant.FMOD_VECTOR} up Upwards orientation.
 * @func_end
*/
function fmod_system_set_3d_listener_attributes_multiplatform(listener_,pos,vel,forwards,up) {}


/**
 * @func fmod_system_get_3d_listener_attributes_multiplatform
 * @desc Retrieves the position, velocity and orientation of the specified 3D sound listener.
 * @param {double} listener_ 
 * @returns {struct} {pos:FMOD_VECTOR,vel:FMOD_VECTOR,forward:FMOD_VECTOR,up:FMOD_VECTOR}
 * @func_end
*/
function fmod_system_get_3d_listener_attributes_multiplatform(listener_,pos,vel,forward,up) {}


/**
 * @func fmod_system_set_reverb_properties
 * @desc Sets parameters for the global reverb environment.
 * @param {double} instance Index of the particular reverb instance to target.
 * @param {double} DecayTime Reverberation decay time.
 * @param {double} EarlyDelay Initial reflection delay time.
 * @param {double} LateDelay Late reverberation delay time relative to initial reflection.
 * @param {double} HFReference Reference high frequency.
 * @param {double} HFDecayRatio High-frequency to mid-frequency decay time ratio.
 * @param {double} Diffusion Value that controls the echo density in the late reverberation decay.
 * @param {double} Density Value that controls the modal density in the late reverberation decay.
 * @param {double} LowShelfFrequency Reference low frequency
 * @param {double} LowShelfGain Relative room effect level at low frequencies.
 * @param {double} HighCut Relative room effect level at high frequencies.
 * @param {double} EarlyLateMix Early reflections level relative to room effect.
 * @param {double} WetLevel Room effect level at mid frequencies.
 * @func_end
*/
function fmod_system_set_reverb_properties(instance,DecayTime,EarlyDelay,LateDelay,HFReference,HFDecayRatio,Diffusion,Density,LowShelfFrequency,LowShelfGain,HighCut,EarlyLateMix,WetLevel) {}


/**
 * @func fmod_system_get_reverb_properties
 * @desc Retrieves the current reverb environment for the specified reverb instance.
 * @param {double} instance 
 * @returns {struct} {DecayTime:double,EarlyDelay:double,LateDelay:double,HFReference:double,HFDecayRatio:double,Diffusion:double,Density:double,LowShelfFrequency:double,LowShelfGain:double,HighCut:double,EarlyLateMix:double,WetLevel:double}
 * @func_end
*/
function fmod_system_get_reverb_properties(instance,buff_return_) {}


/**
 * @func fmod_system_attach_channel_group_to_port
 * @desc Connect the output of the specified ChannelGroup to an audio port on the output driver.
 * @param {constant.FMOD_PORT_TYPE} portType Port type (output mode specific).
 * @param {constant.FMOD_PORT_INDEX} portIndex Index to specify which instance of the specified portType to use (output mode specific)
 * @param {constant.ChannelGroup} channel_group Group to attach the port to.
 * @param {bool} passThru Whether signal should additionally route to the existing ChannelGroup output.
 * @returns {double}
 * @func_end
*/
function fmod_system_attach_channel_group_to_port(portType,portIndex,channel_group,passThru) {}


/**
 * @func fmod_system_detach_channel_group_from_port
 * @desc Disconnect the output of the specified ChannelGroup from an audio port on the output driver.
 * @param {string} channel_group_ Group to detach the port from.
 * @func_end
*/
function fmod_system_detach_channel_group_from_port(channel_group) {}


/**
 * @func fmod_system_get_record_num_drivers
 * @desc Retrieves the number of recording devices available for this output mode. Use this to enumerate all recording devices possible so that the user can select one.
 * @returns {struct} {num_drivers:int,num_connected:int}
 * @func_end
*/
function fmod_system_get_record_num_drivers(buff_return_) {}


/**
 * @func fmod_system_get_record_driver_info
 * @desc Retrieves identification information about an audio device specified by its index, and specific to the output mode.
 * @param {double} id_ 
 * @returns {struct} {name:string, guid:string,system_rate:int,speaker_mode:FMOD_SPEAKERMODE,speaker_mode_channels:int,state:FMOD_DRIVER_STATE}
 * @func_end
*/
function fmod_system_get_record_driver_info(id_,buff_return_) {}


/**
 * @func fmod_system_get_record_position
 * @desc Retrieves the current recording position of the record buffer in PCM samples.
 * @param {double} index_ Index of the recording device.
 * @returns {double} Current recording position.
 * @func_end
*/
function fmod_system_get_record_position(index_) {}


/**
 * @func fmod_system_record_start
 * @desc Starts the recording engine recording to a pre-created Sound object.
 * @param {double} index Index of the recording device.
 * @param {double} sound_index User created sound for the user to record to.
 * @param {bool} loop_ Flag to tell the recording engine whether to continue recording to the provided sound from the start again, after it has reached the end. If this is set to true the data will be continually be overwritten once every loop.
 * @func_end
*/
function fmod_system_record_start(index_,sound_index_,loop_) {}


/**
 * @func fmod_system_record_stop
 * @desc Stops the recording engine from recording to a pre-created Sound object.
 * @param {double} index Index of the recording device.
 * @func_end
*/
function fmod_system_record_stop(index_) {}


/**
 * @func fmod_system_is_recording
 * @desc Retrieves the state of the FMOD recording API, ie if it is currently recording or not.
 * @param {double} index Index of the recording device.
 * @func_end
*/
function fmod_system_is_recording(index) {}


/**
 * @func fmod_system_create_geometry
 * @desc Geometry creation function. This function will create a base geometry object which can then have polygons added to it.
 * @param {double} maxpolygons Maximum number of polygons within this object.
 * @param {double} maxvertices Maximum number of vertices within this object.
 * @returns {double}
 * @func_end
*/
function fmod_system_create_geometry(maxpolygons_,maxvertices_) {}


/**
 * @func fmod_system_set_geometry_settings
 * @desc Sets the maximum world size for the geometry engine for performance / precision reasons.
 * @param {double} maxworldsize Maximum size of the world from the centerpoint to the edge using the same units used in other 3D functions.
 * @func_end
*/
function fmod_system_set_geometry_settings(maxworldsize_) {}


/**
 * @func fmod_system_get_geometry_settings
 * @desc Retrieves the maximum world size for the geometry engine.
 * @returns {double}
 * @func_end
*/
function fmod_system_get_geometry_settings() {}


/**
 * @func fmod_system_load_geometry
 * @desc Creates a geometry object from a block of memory which contains pre-saved geometry data.
 * @param {buffer} Pre-saved geometry data from Geometry::save.
 * @param {double} lenght Size of data.
 * @func_end
*/
function fmod_system_load_geometry(buff_,lenght_) {}


//TODO
/**
 * @func fmod_system_get_geometry_occlusion_multiplatform
 * @desc Calculates geometry occlusion between a listener and a sound source.
 * @param {buffer} buff_return_ 
 * @returns {double}
 * @func_end
*/
function fmod_system_get_geometry_occlusion_multiplatform(buff_return_) {}


/**
 * @func fmod_system_lock_dsp
 * @desc Mutual exclusion function to lock the FMOD DSP engine (which runs asynchronously in another thread), so that it will not execute.
 * @func_end
*/
function fmod_system_lock_dsp() {}


/**
 * @func fmod_system_unlock_dsp
 * @desc Mutual exclusion function to unlock the FMOD DSP engine (which runs asynchronously in another thread) and let it continue executing.
 * @func_end
*/
function fmod_system_unlock_dsp() {}


/**
 * @func fmod_system_set_callback
 * @desc Sets the callback for System level notifications.
 * @param {double} type 
 * @func_end
*/
function fmod_system_set_callback(type) {}




/**
 * @module System
 * @title System
 * @desc The following set of functions are all for checking the availability of certain aspects of the Steam client or server API. This means that these functions should be used before any other Steam API function call to ensure that the client/server setup is correct and communicating with your game:
 * @section_func
 
 * @ref fmod_system_create
 * @ref fmod_system_select
 * @ref fmod_system_count
 * @ref fmod_system_init
 * @ref fmod_system_release
 * @ref fmod_system_update
 * @ref fmod_system_mixer_suspend
 * @ref fmod_system_mixer_resume
 * @ref fmod_system_set_output
 * @ref fmod_system_get_output
 * @ref fmod_system_get_num_drivers
 * @ref fmod_system_get_driver_info
 * @ref fmod_system_set_driver
 * @ref fmod_system_get_driver
 * @ref fmod_system_set_software_channels
 * @ref fmod_system_get_software_channels
 * @ref fmod_system_set_software_format
 * @ref fmod_system_get_software_format
 * @ref fmod_system_set_dsp_buffer_size
 * @ref fmod_system_get_dsp_buffer_size
 * @ref fmod_system_set_stream_buffer_size
 * @ref fmod_system_get_stream_buffer_size
 * @ref fmod_system_set_advanced_settings
 * @ref fmod_system_get_advanced_settings
 * @ref fmod_system_set_speaker_position
 * @ref fmod_system_get_speaker_position
 * @ref fmod_system_set_3d_settings
 * @ref fmod_system_get_3d_settings
 * @ref fmod_system_set_3d_num_listeners
 * @ref fmod_system_get_3d_num_listeners
 * @ref fmod_system_set_3d_rolloff_callback
 * @ref fmod_system_set_network_proxy
 * @ref fmod_system_get_network_proxy
 * @ref fmod_system_set_network_timeout
 * @ref fmod_system_get_network_timeout
 * @ref fmod_system_get_version
 * @ref fmod_system_get_channels_playing
 * @ref fmod_system_get_cpu_usage
 * @ref fmod_system_get_file_usage
 * @ref fmod_system_get_default_mix_matrix
 * @ref fmod_system_get_speaker_mode_channels
 * @ref fmod_system_create_sound
 * @ref fmod_system_create_stream
 * @ref fmod_system_create_dsp
 * @ref fmod_system_create_dsp_by_type
 * @ref fmod_system_create_channel_group
 * @ref fmod_system_create_sound_group
 * @ref fmod_system_create_reverb_3d
 * @ref fmod_system_play_sound
 * @ref fmod_system_play_dsp
 * @ref fmod_system_get_master_channel_group
 * @ref fmod_system_get_master_sound_group
 * @ref fmod_system_set_3d_listener_attributes
 * @ref fmod_system_get_3d_listener_attributes
 * @ref fmod_system_set_reverb_properties
 * @ref fmod_system_get_reverb_properties
 * @ref fmod_system_attach_channel_group_to_port
 * @ref fmod_system_detach_channel_group_from_port
 * @ref fmod_system_get_record_num_drivers
 * @ref fmod_system_get_record_driver_info
 * @ref fmod_system_get_record_position
 * @ref fmod_system_record_start
 * @ref fmod_system_record_stop
 * @ref fmod_system_is_recording
 * @ref fmod_system_create_geometry
 * @ref fmod_system_set_geometry_settings
 * @ref fmod_system_get_geometry_settings
 * @ref fmod_system_load_geometry
 * @ref fmod_system_get_geometry_occlusion
 * @ref fmod_system_lock_dsp
 * @ref fmod_system_unlock_dsp
 * @ref fmod_system_set_callback

 * @section_end
 * @module_end
 */
 
 