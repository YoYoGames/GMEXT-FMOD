
var _x = (obj_console_pointer.x - room_width/2) / 37.5;
var _y = (obj_console_pointer.y - room_height/2) / 37.5;

car_attributes.position.x = _x;
car_attributes.position.y = _y;

fmod_studio_event_instance_set_3d_attributes(vehicle_event_inst, car_attributes);

for (var _i = 0; _i < 2; ++_i)
{
    var _target = (active_listener == _i || active_listener == 2); // 0 = left, 1 = right, 2 = both

    var _dist = (_target - listener_weight[_i]);
    var _step = 50.0 / 1000.0;

    if (_dist >= -_step && _dist <= _step)
        listener_weight[_i] = real(_target);
    else if (_dist > 0.0)
        listener_weight[_i] += _step;
    else
        listener_weight[_i] += -_step;
}

listener_attributes[0].position.x = -listener_dist;
listener_attributes[1].position.x = listener_dist;

fmod_studio_system_set_listener_attributes(0, listener_attributes[0]);
fmod_studio_system_set_listener_weight(0, listener_weight[0]);
fmod_studio_system_set_listener_attributes(1, listener_attributes[1]);
fmod_studio_system_set_listener_weight(1, listener_weight[1]);