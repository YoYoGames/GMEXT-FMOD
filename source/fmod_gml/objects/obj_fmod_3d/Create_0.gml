
point_1 = [room_width/3,room_height/2,0]
point_2 = [room_width*2/3,room_height/2,0]

var DISTANCEFACTOR = 100;//1.0; // Units per meter.  I.e feet would = 3.28.  centimeters would = 100.

//Set the distance units. (meters/feet etc).
fmod_system_set_3d_settings(1,DISTANCEFACTOR,1)


//Load some sound 1

sound_index_1 = fmod_system_create_sound(fmod_path_bundle("drumloop.wav"), FMOD_MODE.AS_3D | FMOD_MODE.LOOP_NORMAL)

fmod_sound_set_3d_min_max_distance(sound_index_1,DISTANCEFACTOR*0.5,DISTANCEFACTOR*5000)

channel1 = fmod_system_play_sound(sound_index_1,true)

fmod_channel_control_set_3d_attributes(channel1,{x:point_1[0],y:point_1[1],z:point_1[2]},{x:0,y:0,z:0})

fmod_channel_control_set_paused(channel1,false)


//Load some sound 2


sound_index_2 = fmod_system_create_sound(fmod_path_bundle("jaguar.wav"),FMOD_MODE.AS_3D | FMOD_MODE.LOOP_NORMAL)

fmod_sound_set_3d_min_max_distance(sound_index_2,DISTANCEFACTOR*0.5,DISTANCEFACTOR*5000)

channel2 = fmod_system_play_sound(sound_index_2,true)

fmod_channel_control_set_3d_attributes(channel2, {x:point_2[0],y:point_2[1],z:point_2[2]},{x:0,y:0,z:0})

fmod_channel_control_set_paused(channel2, false)

//////////////////

