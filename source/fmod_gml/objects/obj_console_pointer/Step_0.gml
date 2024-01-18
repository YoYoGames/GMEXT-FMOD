
if (os_type != os_xboxone && os_type != os_xboxseriesxs && os_type != os_ps4 && os_type != os_ps5) {
	x = mouse_x;
	y = mouse_y;
	return;
}

colliding = false;

for(var _controller_id = 0 ; _controller_id < gamepad_get_device_count() ; _controller_id++) {
	
	if (gamepad_is_connected(_controller_id))
	{
		gamepad_set_axis_deadzone(_controller_id, 0.15);
			
		x += gamepad_axis_value(_controller_id, gp_axislh) * 10;
		y += gamepad_axis_value(_controller_id, gp_axislv) * 10;
			
		x = clamp(x, 0, room_width);
		y = clamp(y, 0, room_height);
	
		var _list = ds_list_create()
		var _count = collision_circle_list(x, y, 10, all, false, true, _list ,false)
	
		for(var _it = 0; _it < _count; _it++)
		{
			colliding = true
		
			with(_list[|_it])
			{
				
				if(gamepad_button_check_pressed(_controller_id, gp_face1))
				{
					event_perform(ev_mouse, ev_left_release);
				}
	
				if(gamepad_button_check_released(_controller_id, gp_face1))
				{
					// Do nothing
				}
			}
		}
		
		ds_list_destroy(_list)
	}
}
