

var _x = obj_console_pointer.x;
var _y = obj_console_pointer.y;

fmod_system_set_3d_listener_attributes(
		0,
		{ x: _x, y: _y, z: 0 },
		{ x: 0, y: 0, z: 0 },
		{ x: 0, y: 0, z: 1 },
		{ x: 0, y: 1, z: 0 }
	)

show_debug_message(json_stringify(fmod_system_get_3d_listener_attributes(0)))
