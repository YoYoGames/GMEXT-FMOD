
freq_struct = fmod_studio_event_instance_get_parameter_by_name(ins_index, "Freq")
spatializer_struct = fmod_studio_event_instance_get_parameter_by_name(ins_index, "Spatializer")

show_debug_message(freq_struct)
show_debug_message(spatializer_struct)

t += 0.03;

var Struct_3D_ATTRIBUTES = {
			position: {x: sin(t)*3.0,y: isOnGround ? 0.0 : 5.0, z: cos(t)*3.0},
			velocity: {x:0,y:0,z:0},
			forward: {x:0,y:0,z:1.0},
			up: {x:0,y:1.0,z:0},
		}

fmod_studio_event_instance_set_3d_attributes(ins_index,Struct_3D_ATTRIBUTES)
show_debug_message("fmod_studio_event_instance_set_3d_attributes: " + string(fmod_last_result()))

var _attenuation = new FmodVector();

if(useListenerAttenuationPosition)
{
	_attenuation = Struct_3D_ATTRIBUTES.position
	_attenuation.z = -10
}

fmod_studio_system_set_listener_attributes(0,
		{
			position:{x:0,y:0,z:0},
			velocity:{x:0,y:0,z:0},
			forward:{x:0,y:0,z:1.0},
			up:{x:0,y:1.0,z:0},
		},
		_attenuation
	)
