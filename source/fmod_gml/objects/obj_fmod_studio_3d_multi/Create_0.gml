
show_debug_message("3D multi")

//fmod_system_set_software_format(0,FmodSpeakerMode._5Point1,0)

master_bank_index = fmod_studio_system_load_bank_file(fmod_path_bundle("Master.bank"),FmodStudioLoadBankFlags.Normal)
show_debug_message("master: " + string(fmod_last_result()))
master_strings_bank_index = fmod_studio_system_load_bank_file(fmod_path_bundle("Master.strings.bank"),FmodStudioLoadBankFlags.Normal)
show_debug_message("masterstrings: " + string(fmod_last_result()))
vehicles_bank_index = fmod_studio_system_load_bank_file(fmod_path_bundle("Vehicles.bank"),FmodStudioLoadBankFlags.Normal)
show_debug_message("vehicles: " + string(fmod_last_result()));

vehicle_event_desc = fmod_studio_system_get_event("event:/Vehicles/Ride-on Mower")
show_debug_message(vehicle_event_desc);
show_debug_message(string(fmod_last_result()))
vehicle_event_inst = fmod_studio_event_description_create_instance(vehicle_event_desc)
show_debug_message(string(fmod_last_result()))

fmod_studio_event_instance_set_parameter_by_name(vehicle_event_inst,"RPM", 650);
show_debug_message(fmod_last_result())


fmod_studio_event_instance_start(vehicle_event_inst)


active_listener = 0;


fmod_studio_system_set_num_listeners(2)

listener_dist = 8;
listener_weight = [1.0, 0.0];

// Neither listener moves or turns in this demo, so velocity stays zero and the
// orientation stays on the default +Z forward / +Y up axes. They are kept as
// instance variables because the step event resends them every frame.
zero_vec = new FmodStudioVec3()
zero_vec.x = 0
zero_vec.y = 0
zero_vec.z = 0

forward_vec = new FmodStudioVec3()
forward_vec.x = 0
forward_vec.y = 0
forward_vec.z = 1

up_vec = new FmodStudioVec3()
up_vec.x = 0
up_vec.y = 1
up_vec.z = 0

var _listener_1 = new FmodStudioVec3()
_listener_1.x = -listener_dist
_listener_1.y = 0
_listener_1.z = 0

var _listener_2 = new FmodStudioVec3()
_listener_2.x = listener_dist
_listener_2.y = 0
_listener_2.z = 0

listener_positions = [_listener_1, _listener_2]

// undefined attenuation position means "attenuate from the listener position".
fmod_studio_system_set_listener_attributes(0, listener_positions[0], zero_vec, forward_vec, up_vec, undefined);
fmod_studio_system_set_listener_weight(0, listener_weight[0]);
fmod_studio_system_set_listener_attributes(1, listener_positions[1], zero_vec, forward_vec, up_vec, undefined);
fmod_studio_system_set_listener_weight(1, listener_weight[1]);


// Position the event 2 units in front of the listener
car_position = new FmodStudioVec3()
car_position.x = 0
car_position.y = 0
car_position.z = 0

fmod_studio_event_instance_set_3d_attributes(vehicle_event_inst, car_position, zero_vec, forward_vec, up_vec);
