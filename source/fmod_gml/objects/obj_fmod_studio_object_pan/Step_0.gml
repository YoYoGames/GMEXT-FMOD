
// The by-name getters now return the parameter's current value directly.
freq_value = fmod_studio_event_instance_get_parameter_by_name(ins_index, "Freq")
spatializer_value = fmod_studio_event_instance_get_parameter_by_name(ins_index, "Spatializer")

show_debug_message($"Freq: {freq_value}")
show_debug_message($"Spatializer: {spatializer_value}")

t += 0.03;

var _zero = new FmodStudioVec3()
_zero.x = 0
_zero.y = 0
_zero.z = 0

var _forward = new FmodStudioVec3()
_forward.x = 0
_forward.y = 0
_forward.z = 1

var _up = new FmodStudioVec3()
_up.x = 0
_up.y = 1
_up.z = 0

var _position = new FmodStudioVec3()
_position.x = sin(t) * 3.0
_position.y = isOnGround ? 0.0 : 5.0
_position.z = cos(t) * 3.0

fmod_studio_event_instance_set_3d_attributes(ins_index, _position, _zero, _forward, _up)
show_debug_message("fmod_studio_event_instance_set_3d_attributes: " + string(fmod_last_result()))

// The listener stays at the origin. With useListenerAttenuationPosition set, the
// panning is still computed from the origin but the volume is attenuated as if
// the listener stood below the event - that is what the attenuation position is
// for, and it no longer has to be faked by moving the listener.
var _listener = new FmodStudioVec3()
_listener.x = 0
_listener.y = 0
_listener.z = 0

var _attenuation = undefined

if (useListenerAttenuationPosition)
{
	_attenuation = new FmodStudioVec3()
	_attenuation.x = _position.x
	_attenuation.y = _position.y
	_attenuation.z = -10
}

fmod_studio_system_set_listener_attributes(0, _listener, _zero, _forward, _up, _attenuation)
