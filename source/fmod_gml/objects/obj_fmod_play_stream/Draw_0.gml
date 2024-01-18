
draw_self()

event_inherited()

draw_set_valign(fa_top)
draw_set_halign(fa_left)
draw_text(10,100,fmod_system_get_channels_playing())

var pos = fmod_channel_get_position(channel_index,FMOD_TIMEUNIT.MS)
draw_text(10,200,string(pos)+"/"+string(sound_lenght)+"ms")

