
#include "Fmod_Tools.h"

// https://www.fmod.com/docs/2.03/api/studio-api-eventinstance.html

// Playback Control :
//
func double fmod_studio_event_instance_start(double event_instance_ref)
{
	FMOD::Studio::EventInstance* event_instance = nullptr;
	validate_fmod_studio_event_instance(event_instance_ref, event_instance);

	g_fmod_last_result = event_instance->start();
	return 0;
}

func double fmod_studio_event_instance_stop(double event_instance_ref, double mode)
{
	FMOD::Studio::EventInstance* event_instance = nullptr;
	validate_fmod_studio_event_instance(event_instance_ref, event_instance);

	g_fmod_last_result = event_instance->stop((FMOD_STUDIO_STOP_MODE)mode);
	return 0;
}

func double fmod_studio_event_instance_get_playback_state(double event_instance_ref)
{
	FMOD::Studio::EventInstance* event_instance = nullptr;
	validate_fmod_studio_event_instance(event_instance_ref, event_instance);

	FMOD_STUDIO_PLAYBACK_STATE state;
	g_fmod_last_result = event_instance->getPlaybackState(&state);
	return (double)state;
}

func double fmod_studio_event_instance_set_paused(double event_instance_ref, double pause)
{
	FMOD::Studio::EventInstance* event_instance = nullptr;
	validate_fmod_studio_event_instance(event_instance_ref, event_instance);

	g_fmod_last_result = event_instance->setPaused(pause >= 0.5);
	return 0;
}

func double fmod_studio_event_instance_get_paused(double event_instance_ref)
{
	FMOD::Studio::EventInstance* event_instance = nullptr;
	validate_fmod_studio_event_instance(event_instance_ref, event_instance);

	bool pause;
	g_fmod_last_result = event_instance->getPaused(&pause);
	return pause ? 1.0 : 0.0;
}

func double fmod_studio_event_instance_keyoff(double event_instance_ref)
{
	FMOD::Studio::EventInstance* event_instance = nullptr;
	validate_fmod_studio_event_instance(event_instance_ref, event_instance);

	g_fmod_last_result = event_instance->keyOff();
	return 0;
}

// Playback Properties :

func double fmod_studio_event_instance_set_pitch(double event_instance_ref, double pitch)
{
	FMOD::Studio::EventInstance* event_instance = nullptr;
	validate_fmod_studio_event_instance(event_instance_ref, event_instance);

	g_fmod_last_result = event_instance->setPitch((float)pitch);
	return 0;
}

func double fmod_studio_event_instance_get_pitch(double event_instance_ref)
{
	FMOD::Studio::EventInstance* event_instance = nullptr;
	validate_fmod_studio_event_instance(event_instance_ref, event_instance);

	float pitch;
	g_fmod_last_result = event_instance->getPitch(&pitch);
	return (double)pitch;
}

func double fmod_studio_event_instance_set_property(double event_instance_ref, double property, double value)
{
	FMOD::Studio::EventInstance* event_instance = nullptr;
	validate_fmod_studio_event_instance(event_instance_ref, event_instance);

	g_fmod_last_result = event_instance->setProperty((FMOD_STUDIO_EVENT_PROPERTY)property, (float)value);
	return 0;
}

func double fmod_studio_event_instance_get_property(double event_instance_ref, double property)
{
	FMOD::Studio::EventInstance* event_instance = nullptr;
	validate_fmod_studio_event_instance(event_instance_ref, event_instance);

	float value;
	g_fmod_last_result = event_instance->getProperty((FMOD_STUDIO_EVENT_PROPERTY)property, &value);
	return value;
}

func double fmod_studio_event_instance_set_timeline_position(double event_instance_ref, double position)
{
	FMOD::Studio::EventInstance* event_instance = nullptr;
	validate_fmod_studio_event_instance(event_instance_ref, event_instance);

	g_fmod_last_result = event_instance->setTimelinePosition((int)position);
	return 0;
}

func double fmod_studio_event_instance_get_timeline_position(double event_instance_ref)
{
	FMOD::Studio::EventInstance* event_instance = nullptr;
	validate_fmod_studio_event_instance(event_instance_ref, event_instance);

	int position;
	g_fmod_last_result = event_instance->getTimelinePosition(&position);
	return (double)position;
}

func double fmod_studio_event_instance_set_volume(double event_instance_ref, double volume)
{
	FMOD::Studio::EventInstance* event_instance = nullptr;
	validate_fmod_studio_event_instance(event_instance_ref, event_instance);

	g_fmod_last_result = event_instance->setVolume((float)volume);
	return 0;
}

func double fmod_studio_event_instance_get_volume_multiplatform(double event_instance_ref, char* buff_return)
{
	FMOD::Studio::EventInstance* event_instance = nullptr;
	validate_fmod_studio_event_instance(event_instance_ref, event_instance);

	float volume;
	float final_volume;

	g_fmod_last_result = event_instance->getVolume(&volume, &final_volume);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = {};
	map_return.addKeyValue("volume", volume);
	map_return.addKeyValue("final_volume", final_volume);

	map_return.writeTo(buff_return);

	return 0;
}

func double fmod_studio_event_instance_is_virtual(double event_instance_ref)
{
	FMOD::Studio::EventInstance* event_instance = nullptr;
	validate_fmod_studio_event_instance(event_instance_ref, event_instance);

	bool is_virtual;
	g_fmod_last_result = event_instance->isVirtual(&is_virtual);

	return is_virtual ? 1.0 : 0.0;
}
// 3D Attributes :

func double fmod_studio_event_instance_set_3d_attributes_multiplatform(double event_instance_ref, char* buff_args)
{
	FMOD::Studio::EventInstance* event_instance = nullptr;
	validate_fmod_studio_event_instance(event_instance_ref, event_instance);

	auto args = buffer_unpack((uint8_t*)buff_args);
	auto map_attributes = YYGetStruct(args[0]);
	FMOD_3D_ATTRIBUTES attributes = Fmod3DAttributesFromMap(map_attributes);

	g_fmod_last_result = event_instance->set3DAttributes(&attributes);
	return 0;
}

func double fmod_studio_event_instance_get_3d_attributes_multiplatform(double event_instance_ref, char* buff_return)
{
	FMOD::Studio::EventInstance* event_instance = nullptr;
	validate_fmod_studio_event_instance(event_instance_ref, event_instance);

	FMOD_3D_ATTRIBUTES attributes;
	g_fmod_last_result = event_instance->get3DAttributes(&attributes);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = Fmod3DAttributesToGMStruct(attributes);
	map_return.writeTo(buff_return);

	return 0;
}

func double fmod_studio_event_instance_set_listener_mask(double event_instance_ref, double mask)
{
	FMOD::Studio::EventInstance* event_instance = nullptr;
	validate_fmod_studio_event_instance(event_instance_ref, event_instance);

	g_fmod_last_result = event_instance->setListenerMask((unsigned int)mask);
	return 0;
}

func double fmod_studio_event_instance_get_listener_mask(double event_instance_ref)
{
	FMOD::Studio::EventInstance* event_instance = nullptr;
	validate_fmod_studio_event_instance(event_instance_ref, event_instance);

	unsigned int mask;
	g_fmod_last_result = event_instance->getListenerMask(&mask);
	return (double)mask;
}

func double fmod_studio_event_instance_get_min_max_distance_multiplatform(double event_instance_ref, char* buff_return)
{
	FMOD::Studio::EventInstance* event_instance = nullptr;
	validate_fmod_studio_event_instance(event_instance_ref, event_instance);

	float min;
	float max;

	g_fmod_last_result = event_instance->getMinMaxDistance(&min, &max);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = {};
	map_return.addKeyValue("min", min);
	map_return.addKeyValue("max", max);

	map_return.writeTo(buff_return);

	return 0;
}

// Parameters:

func double fmod_studio_event_instance_set_parameter_by_name_multiplatform(double event_instance_ref, char* name, double value, double ignore_seek_speed)
{
	FMOD::Studio::EventInstance* event_instance = nullptr;
	validate_fmod_studio_event_instance(event_instance_ref, event_instance);

	g_fmod_last_result = event_instance->setParameterByName(name, (float)value, ignore_seek_speed >= 0.5);
	return 0;
}

func double fmod_studio_event_instance_set_parameter_by_name_with_label(double event_instance_ref, char* name, char* label, double ignore_seek_speed)
{
	FMOD::Studio::EventInstance* event_instance = nullptr;
	validate_fmod_studio_event_instance(event_instance_ref, event_instance);

	g_fmod_last_result = event_instance->setParameterByNameWithLabel(name, label, ignore_seek_speed >= 0.5);
	return 0;
}

func double fmod_studio_event_instance_get_parameter_by_name_multiplatform(double event_instance_ref, char* name, char* buff_return)
{
	FMOD::Studio::EventInstance* event_instance = nullptr;
	validate_fmod_studio_event_instance(event_instance_ref, event_instance);

	float value;
	float final_value;

	g_fmod_last_result = event_instance->getParameterByName(name, &value, &final_value);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = {};
	map_return.addKeyValue("value", value);
	map_return.addKeyValue("final_value", final_value);

	map_return.writeTo(buff_return);

	return 0;
}

func double fmod_studio_event_instance_set_parameter_by_id_multiplatform(double event_instance_ref, char* buff_args, double value, double ignore_seek_speed)
{
	FMOD::Studio::EventInstance* event_instance = nullptr;
	validate_fmod_studio_event_instance(event_instance_ref, event_instance);

	auto args = buffer_unpack((uint8_t*)buff_args);
	auto map_paramaters = YYGetStruct(args[0]);

	FMOD_STUDIO_PARAMETER_ID parameter_id = FmodParamaterIdFromMap(map_paramaters);

	g_fmod_last_result = event_instance->setParameterByID(parameter_id, (float)value, ignore_seek_speed >= 0.5);
	return 0;
}

func double fmod_studio_event_instance_set_parameter_by_id_with_label_multiplatform(double event_instance_ref,
																					char* buff_args,
																					char* label,
																					double ignore_seek_speed)
{
	FMOD::Studio::EventInstance* event_instance = nullptr;
	validate_fmod_studio_event_instance(event_instance_ref, event_instance);

	auto args = buffer_unpack((uint8_t*)buff_args);
	auto map_paramaters = YYGetStruct(args[0]);

	FMOD_STUDIO_PARAMETER_ID parameter_id = FmodParamaterIdFromMap(map_paramaters);
	g_fmod_last_result = event_instance->setParameterByIDWithLabel(parameter_id, label, ignore_seek_speed >= 0.5);

	return 0;
}

func double fmod_studio_event_instance_get_parameter_by_id_multiplatform(double event_instance_ref, char* buff_args, char* buff_return)
{
	FMOD::Studio::EventInstance* event_instance = nullptr;
	validate_fmod_studio_event_instance(event_instance_ref, event_instance);

	auto args = buffer_unpack((uint8_t*)buff_args);
	auto map_paramaters = YYGetStruct(args[0]);

	FMOD_STUDIO_PARAMETER_ID parameter_id = FmodParamaterIdFromMap(map_paramaters);

	float value;
	float final_value;
	g_fmod_last_result = event_instance->getParameterByID(parameter_id, &value, &final_value);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = {};
	map_return.addKeyValue("value", value);
	map_return.addKeyValue("final_value", final_value);

	map_return.writeTo(buff_return);

	return 0;
}

// ignore same but with arrays....
// func double fmod_studio_event_instance_set_parameters_by_ids(double index_, char* buff_args_, char* label, double ignoreseekspeed)
//{
//	return 0;
// }

func double fmod_studio_event_instance_get_channel_group(double event_instance_ref)
{
	FMOD::Studio::EventInstance* event_instance = nullptr;
	validate_fmod_studio_event_instance(event_instance_ref, event_instance);

	FMOD::ChannelGroup* channel_group = nullptr;
	g_fmod_last_result = event_instance->getChannelGroup(&channel_group);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	auto channel_group_id = registerOrFindResource(channel_group, index_channel_groups, map_channel_groups);

	return (double)packIndexIntoRef(channel_group_id, GM_FMOD_TYPE_CHANNEL_GROUP);
}

func double fmod_studio_event_instance_set_reverb_level(double event_instance_ref, double index, double level)
{
	FMOD::Studio::EventInstance* event_instance = nullptr;
	validate_fmod_studio_event_instance(event_instance_ref, event_instance);

	g_fmod_last_result = event_instance->setReverbLevel((int)index, (float)level);
	return 0;
}

func double fmod_studio_event_instance_get_reverb_level(double event_instance_ref, double index)
{
	FMOD::Studio::EventInstance* event_instance = nullptr;
	validate_fmod_studio_event_instance(event_instance_ref, event_instance);

	float level;
	g_fmod_last_result = event_instance->getReverbLevel((int)index, &level);

	return level;
}

// Profiling :

func double fmod_studio_event_instance_get_cpu_usage_multiplatform(double event_instance_ref, char* buff_return)
{
	FMOD::Studio::EventInstance* event_instance = nullptr;
	validate_fmod_studio_event_instance(event_instance_ref, event_instance);

	unsigned int exclusive;
	unsigned int inclusive;

	g_fmod_last_result = event_instance->getCPUUsage(&exclusive, &inclusive);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = {};
	map_return.addKeyValue("exclusive", (double)exclusive);
	map_return.addKeyValue("inclusive", (double)inclusive);

	map_return.writeTo(buff_return);

	return 0;
}

func double fmod_studio_event_instance_get_memory_usage_multiplatform(double event_instance_ref, char* buff_return)
{
	FMOD::Studio::EventInstance* event_instance = nullptr;
	validate_fmod_studio_event_instance(event_instance_ref, event_instance);

	FMOD_STUDIO_MEMORY_USAGE memory_usage;
	g_fmod_last_result = event_instance->getMemoryUsage(&memory_usage);

	StructStream map_return = FmodStudioMemoryUsageToGMStruct(memory_usage);

	map_return.writeTo(buff_return);

	return 0;
}

//	Callbacks :
// This callbacks is exactly the same than in *EventDescription.cpp script, if you mofidy it copy/paste there too
static FMOD_RESULT CALLBACK_fmod_studio_event_instance(FMOD_STUDIO_EVENT_CALLBACK_TYPE type, FMOD_STUDIO_EVENTINSTANCE* event, void* parameters)
{
	StructStream async_map = {};
	async_map.addKeyValue("type", "fmod_studio_event_description_set_callback");
	async_map.addKeyValue("kind", (int)type);

	FMOD::Studio::EventInstance* event_instance = (FMOD::Studio::EventInstance*)event;
	async_map.addKeyValue("event_instance_ref", packIndexIntoRef((uint32_t) reinterpret_cast<intptr_t>(event_instance), GM_FMOD_STUDIO_TYPE_EVENT_INSTANCE));

	switch (type)
	{
		case FMOD_STUDIO_EVENT_CALLBACK_CREATED:
			break;
		case FMOD_STUDIO_EVENT_CALLBACK_DESTROYED:
			break;
		case FMOD_STUDIO_EVENT_CALLBACK_STARTING:
			break;
		case FMOD_STUDIO_EVENT_CALLBACK_STARTED:
			break;
		case FMOD_STUDIO_EVENT_CALLBACK_RESTARTED:
			break;
		case FMOD_STUDIO_EVENT_CALLBACK_STOPPED:
			break;
		case FMOD_STUDIO_EVENT_CALLBACK_START_FAILED:
			break;
		case FMOD_STUDIO_EVENT_CALLBACK_CREATE_PROGRAMMER_SOUND:
		{
			FMOD_STUDIO_PROGRAMMER_SOUND_PROPERTIES* sound_prop = (FMOD_STUDIO_PROGRAMMER_SOUND_PROPERTIES*)parameters;
			async_map.addKeyValue("name", sound_prop->name);
			async_map.addKeyValue("sub_sound_index", (double)sound_prop->subsoundIndex);

			FMOD::Sound* sound = (FMOD::Sound*)sound_prop->sound;
			uint32_t sound_id = registerOrFindResource(sound, index_sounds, map_sounds);

			async_map.addKeyValue("sound_ref", packIndexIntoRef(sound_id, GM_FMOD_TYPE_SOUND));

			break;
		}
		case FMOD_STUDIO_EVENT_CALLBACK_DESTROY_PROGRAMMER_SOUND:
		{
			FMOD_STUDIO_PROGRAMMER_SOUND_PROPERTIES* sound_prop = (FMOD_STUDIO_PROGRAMMER_SOUND_PROPERTIES*)parameters;
			async_map.addKeyValue("name", sound_prop->name);
			async_map.addKeyValue("sub_sound_index", sound_prop->subsoundIndex);

			FMOD::Sound* sound = (FMOD::Sound*)sound_prop->sound;
			uint32_t sound_id = registerOrFindResource(sound, index_sounds, map_sounds);

			async_map.addKeyValue("sound_ref", packIndexIntoRef(sound_id, GM_FMOD_TYPE_SOUND));

			break;
		}
		case FMOD_STUDIO_EVENT_CALLBACK_PLUGIN_CREATED:
		case FMOD_STUDIO_EVENT_CALLBACK_PLUGIN_DESTROYED:
		{
			// getUserData() will crash the app
			// FMOD_STUDIO_PLUGIN_INSTANCE_PROPERTIES* plugin_prop = (FMOD_STUDIO_PLUGIN_INSTANCE_PROPERTIES*)parameters;
			// async_add_string(map, "name", plugin_prop->name);
		}
		break;
		case FMOD_STUDIO_EVENT_CALLBACK_TIMELINE_MARKER:
		{
			FMOD_STUDIO_TIMELINE_MARKER_PROPERTIES* timeline_prop = (FMOD_STUDIO_TIMELINE_MARKER_PROPERTIES*)parameters;
			async_map.addKeyValue("name", timeline_prop->name);
			async_map.addKeyValue("position", timeline_prop->position);
			break;
		}
		case FMOD_STUDIO_EVENT_CALLBACK_TIMELINE_BEAT:
		{
			FMOD_STUDIO_TIMELINE_BEAT_PROPERTIES* properties = (FMOD_STUDIO_TIMELINE_BEAT_PROPERTIES*)parameters;

			async_map.addKeyValue("bar", properties->bar);
			async_map.addKeyValue("beat", properties->beat);
			async_map.addKeyValue("position", properties->position);
			async_map.addKeyValue("tempo", properties->tempo);
			async_map.addKeyValue("time_signature_lower", properties->timesignaturelower);
			async_map.addKeyValue("time_signature_upper", properties->timesignatureupper);
		}
		break;
		case FMOD_STUDIO_EVENT_CALLBACK_SOUND_PLAYED:
			break;
		case FMOD_STUDIO_EVENT_CALLBACK_SOUND_STOPPED:
			break;
		case FMOD_STUDIO_EVENT_CALLBACK_REAL_TO_VIRTUAL:
			break;
		case FMOD_STUDIO_EVENT_CALLBACK_VIRTUAL_TO_REAL:
			break;
		case FMOD_STUDIO_EVENT_CALLBACK_START_EVENT_COMMAND:
			break;
		case FMOD_STUDIO_EVENT_CALLBACK_NESTED_TIMELINE_BEAT:
		{
			FMOD_STUDIO_TIMELINE_NESTED_BEAT_PROPERTIES* properties = (FMOD_STUDIO_TIMELINE_NESTED_BEAT_PROPERTIES*)parameters;
			async_map.addKeyValue("event_id", GUIDtoString(properties->eventid));
			async_map.addKeyValue("bar", properties->properties.bar);
			async_map.addKeyValue("beat", properties->properties.beat);
			async_map.addKeyValue("position", properties->properties.position);
			async_map.addKeyValue("tempo", properties->properties.tempo);
			async_map.addKeyValue("time_signature_lower", properties->properties.timesignaturelower);
			async_map.addKeyValue("time_signature_upper", properties->properties.timesignatureupper);

			break;
		}
		break;
		case FMOD_STUDIO_EVENT_CALLBACK_ALL:
			break;
	}

	async_create_event(async_map);

	return FMOD_OK;
}

func double fmod_studio_event_instance_set_callback(double event_instance_ref, double type)
{
	FMOD::Studio::EventInstance* event_instance = nullptr;
	validate_fmod_studio_event_instance(event_instance_ref, event_instance);

	g_fmod_last_result = event_instance->setCallback(CALLBACK_fmod_studio_event_instance, (FMOD_STUDIO_EVENT_CALLBACK_TYPE)type);

	return 0;
}

func double fmod_studio_event_instance_set_user_data(double event_instance_ref, double data)
{
	FMOD::Studio::EventInstance* event_instance = nullptr;
	validate_fmod_studio_event_instance(event_instance_ref, event_instance);

	event_instance->setUserData((void*)(uint64_t)data);
	
	return 0;
}

func double fmod_studio_event_instance_get_user_data(double event_instance_ref)
{
	FMOD::Studio::EventInstance* event_instance = nullptr;
	validate_fmod_studio_event_instance(event_instance_ref, event_instance);

	void* userData = nullptr;
	event_instance->getUserData(&userData);

	return userData ? (double)(uint64_t)userData : NAN;
}

// General

func double fmod_studio_event_instance_get_description(double event_instance_ref)
{
	FMOD::Studio::EventInstance* event_instance = nullptr;
	validate_fmod_studio_event_instance(event_instance_ref, event_instance);

	FMOD::Studio::EventDescription* event_description = nullptr;
	g_fmod_last_result = event_instance->getDescription(&event_description);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	return (double)packIndexIntoRef((uint32_t) reinterpret_cast<intptr_t>(event_description), GM_FMOD_STUDIO_TYPE_EVENT_DESCRIPTION);
}

func double fmod_studio_event_instance_release(double event_instance_ref)
{
	FMOD::Studio::EventInstance* event_instance = nullptr;
	validate_fmod_studio_event_instance(event_instance_ref, event_instance);

	g_fmod_last_result = event_instance->release();
	return 0;
}

func double fmod_studio_event_instance_is_valid(double event_instance_ref)
{
	FMOD::Studio::EventInstance* event_instance = nullptr;
	validate_fmod_studio_event_instance(event_instance_ref, event_instance);

	return event_instance->isValid() ? 1.0 : 0.0;
}
