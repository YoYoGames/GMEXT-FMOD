
draw_set_valign(fa_top);
draw_set_halign(fa_left);
draw_set_font(fnt_gm_20);

draw_text(10,100,"Current value is " + string(LATENCY_MS) + "ms");
        
draw_text(10,130,"Adjusted latency: " + string(adjusted_latency));
draw_text(10,160,"Actual latency:   " + string(actual_latency));
        
draw_text(10,190,"Recorded: " + string(samples_recorded));
draw_text(10,220,"Played: " + string(samples_played));
		
		