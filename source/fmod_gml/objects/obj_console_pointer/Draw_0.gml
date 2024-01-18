
if (os_type != os_xboxone && os_type != os_xboxseriesxs && os_type != os_ps4 && os_type != os_ps5) {
	return;
}

if(colliding)
	draw_circle_color(x,y,10,c_blue,c_blue,false)
else
	draw_circle_color(x,y,20,c_red,c_red,false)
