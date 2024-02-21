
event_inherited();

var open_state_str = ""

switch(state.open_state)
{
	case FMOD_OPENSTATE.BUFFERING: open_state_str = "BUFFERING" break;
	case FMOD_OPENSTATE.CONNECTING: open_state_str = "CONNECTING" break;
	case FMOD_OPENSTATE.ERROR: open_state_str = "ERROR" break;
	//case FMOD_OPENSTATE.FORCEINT: open_state_str = "FORCEINT" break;
	case FMOD_OPENSTATE.LOADING: open_state_str = "LOADING" break;
	case FMOD_OPENSTATE.MAX: open_state_str = "MAX" break;
	case FMOD_OPENSTATE.PLAYING: open_state_str = "PLAYING" break;
	case FMOD_OPENSTATE.READY: open_state_str = "READY" break;
	case FMOD_OPENSTATE.SEEKING: open_state_str = "SEEKING" break;
	case FMOD_OPENSTATE.SETPOSITION: open_state_str = "SETPOSITION" break;
}

draw_set_valign(fa_top);
draw_set_halign(fa_left);
draw_set_font(fnt_gm_20);
draw_text(10, 100, "State: " + open_state_str + " " + (state.starving ? "(Starving)" : ""));
draw_text(10, 130, "Percent Buffered: " + string(state.percent_buffered));

draw_text(10, 160, "Position: " + string(pos) + "ms");


for (var _i = 0; _i < tag_count; _i++)
{
	draw_text(10, 220 + 30 * _i, tag_strings[(tag_index + _i) % tag_count]);
}