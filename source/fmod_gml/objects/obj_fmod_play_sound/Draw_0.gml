
draw_self()

event_inherited()

draw_set_halign(fa_left)
draw_set_valign(fa_top)
draw_text(10, 100, fmod_system_get_channels_playing())

if(channel_index == -1) exit;

var pos = fmod_channel_get_position(channel_index, FMOD_TIMEUNIT.MS);

var Y
if(sound_file == "drumloop.wav")
	Y = 230
else
	Y = 200
draw_text(10,Y,string(pos)+"/"+string(sound_lenght)+"ms")

