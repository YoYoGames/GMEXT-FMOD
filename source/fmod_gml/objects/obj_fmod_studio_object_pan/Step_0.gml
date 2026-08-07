
// The by-name getters now return the parameter's current value directly.
freq_value = fmod_studio_event_instance_get_parameter_by_name(ins_index, "Freq")
spatializer_value = fmod_studio_event_instance_get_parameter_by_name(ins_index, "Spatializer")

show_debug_message($"Freq: {freq_value}")
show_debug_message($"Spatializer: {spatializer_value}")

t += 0.03;

var _position = new FmodVec3()
_position.x = sin(t) * 3.0
_position.y = isOnGround ? 0.0 : 5.0
_position.z = cos(t) * 3.0

fmod_studio_event_instance_set_3d_attributes(ins_index,
	_position.x,
	_position.y,
	_position.z)
show_debug_message("fmod_studio_event_instance_set_3d_attributes: " + string(fmod_last_result()))

// The Studio listener takes a plain world position. The separate attenuation
// position of the C++ API is not exposed by the extension, so toggling
// useListenerAttenuationPosition just moves the listener itself instead.
var _listener = new FmodVec3()
_listener.x = 0
_listener.y = 0
_listener.z = 0

if (useListenerAttenuationPosition)
{
	_listener.x = _position.x
	_listener.y = _position.y
	_listener.z = -10
}

fmod_studio_system_set_listener_attributes(0, _listener.x, _listener.y, _listener.z)
