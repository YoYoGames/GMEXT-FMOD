
// FMOD callbacks are no longer routed through the Async - Social event. They are
// plain GML methods now, passed to fmod_channel_control_set_callback /
// fmod_studio_event_instance_set_callback and dispatched from fmod_system_update().
