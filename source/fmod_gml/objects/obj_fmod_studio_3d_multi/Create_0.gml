
show_debug_message("3D multi")

//fmod_system_set_software_format(0,FMOD_SPEAKERMODE._5POINT1,0)

master_bank_index = fmod_studio_system_load_bank_file(fmod_path_bundle("master.bank"),FMOD_STUDIO_LOAD_BANK.NORMAL)
show_debug_message("master: " + string(fmod_last_result()))
master_strings_bank_index = fmod_studio_system_load_bank_file(fmod_path_bundle("master.strings.bank"),FMOD_STUDIO_LOAD_BANK.NORMAL)
show_debug_message("masterstrings: " + string(fmod_last_result()))
vehicles_bank_index = fmod_studio_system_load_bank_file(fmod_path_bundle("vehicles.bank"),FMOD_STUDIO_LOAD_BANK.NORMAL)
show_debug_message("vehicles: " + string(fmod_last_result()));

vehicle_event_desc = fmod_studio_system_get_event("event:/Vehicles/Ride-on Mower")
show_debug_message(vehicle_event_desc);
show_debug_message(string(fmod_last_result()))
vehicle_event_inst = fmod_studio_event_description_create_instance(vehicle_event_desc)
show_debug_message(string(fmod_last_result()))

fmod_studio_event_instance_set_parameter_by_name(vehicle_event_inst,"RPM", 650, false);
show_debug_message(fmod_last_result())


fmod_studio_event_instance_start(vehicle_event_inst)


active_listener = 0;


fmod_studio_system_set_num_listeners(2)

listener_dist = 8;
listener_weight = [1.0, 0.0];

listener_attributes = [
	// Listener 1
	{
		position: {x: -listener_dist, y: 0, z: 0},
		velocity: {x:0,y:0,z:0},
		forward: {x:0,y:0,z:1.0},
		up: {x:0,y:1.0,z:0},
	},
	// Listener 2
	{
		position: {x: listener_dist, y: 0, z: 0},
		velocity: {x: 0, y: 0, z: 0},
		forward: {x: 0, y: 0, z: 1.0},
		up: {x:0,y:1.0,z:0},
	}
]
		

fmod_studio_system_set_listener_attributes(0, listener_attributes[0]);
fmod_studio_system_set_listener_weight(0, listener_weight[0]);
fmod_studio_system_set_listener_attributes(1, listener_attributes[1]);
fmod_studio_system_set_listener_weight(1, listener_weight[1]);


// Position the event 2 units in front of the listener
car_attributes = {
	position: {x: 0, y: 0, z: 0},
	velocity: {x: 0, y: 0, z: 0},
	forward: {x:0,y:0,z:1.0},
	up: {x:0,y:1.0,z:0},
}

fmod_studio_event_instance_set_3d_attributes(vehicle_event_inst, car_attributes);
