

var _x = obj_console_pointer.x;
var _y = obj_console_pointer.y;

var pos = new FmodVec3()
pos.x = x
pos.y = y
pos.z = 0

var vel = new FmodVec3()
vel.x = 0
vel.y = 0
vel.z = 0

var forward = new FmodVec3()
forward.x = 0
forward.y = 0
forward.z = 0

var up = new FmodVec3()
up.x = 0
up.y = 0
up.z = 0

fmod_system_set_3d_listener_attributes(
		0,
		pos,
		vel,
		forward,
		up
	)

show_debug_message(json_stringify(fmod_system_get_3d_listener_attributes(0)))
