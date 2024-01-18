
draw_set_halign(fa_left)
draw_set_valign(fa_top)
draw_set_font(fnt_gm_20);

draw_text(50,100,string(selected+1) + "/" + string(array_length(array_systems)))

draw_text(50,125,fmod_system_get_driver_info(selected))

