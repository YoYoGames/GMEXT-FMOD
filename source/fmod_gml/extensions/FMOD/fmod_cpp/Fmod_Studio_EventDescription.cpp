
#include "Fmod_Tools.h"

// https://www.fmod.com/docs/2.02/api/studio-api-eventdescription.html

// Instances

func double fmod_studio_event_description_create_instance(double event_description_ref)
{
	FMOD::Studio::EventDescription* event_description = nullptr;
	validate_fmod_studio_event_description(event_description_ref, event_description);

	FMOD::Studio::EventInstance* eventInstance = nullptr;
	event_description->createInstance(&eventInstance);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	return (double)packIndexIntoRef((uint32_t) reinterpret_cast<uintptr_t>(eventInstance), GM_FMOD_STUDIO_TYPE_EVENT_INSTANCE);
}

func double fmod_studio_event_description_get_instance_count(double event_description_ref)
{
	FMOD::Studio::EventDescription* event_description = nullptr;
	validate_fmod_studio_event_description(event_description_ref, event_description);

	int count = 0;
	g_fmod_last_result = event_description->getInstanceCount(&count);

	return count;
}

func double fmod_studio_event_description_get_instance_list_multiplatform(double event_description_ref, char* buff_return)
{
	FMOD::Studio::EventDescription* event_description = nullptr;
	validate_fmod_studio_event_description(event_description_ref, event_description);

	int count = 0;
	constexpr int list_capacity = 512;
	FMOD::Studio::EventInstance* event_instances[list_capacity];
	g_fmod_last_result = event_description->getInstanceList(event_instances, list_capacity, &count);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	ArrayStream vec_return(count * sizeof(uint64_t));
	for (int i = 0; i < count; i++)
	{
		vec_return << packIndexIntoRef((uint32_t) reinterpret_cast<uintptr_t>(event_instances[i]), GM_FMOD_STUDIO_TYPE_EVENT_DESCRIPTION);
	}

	vec_return.writeTo(buff_return);

	return 0;
}

func double fmod_studio_event_description_release_all_instances(double event_description_ref)
{
	FMOD::Studio::EventDescription* event_description = nullptr;
	validate_fmod_studio_event_description(event_description_ref, event_description);

	g_fmod_last_result = event_description->releaseAllInstances();

	return 0;
}

// Sample Data :

func double fmod_studio_event_description_load_sample_data(double event_description_ref)
{
	FMOD::Studio::EventDescription* event_description = nullptr;
	validate_fmod_studio_event_description(event_description_ref, event_description);

	g_fmod_last_result = event_description->loadSampleData();

	return 0;
}

func double fmod_studio_event_description_unload_sample_data(double event_description_ref)
{
	FMOD::Studio::EventDescription* event_description = nullptr;
	validate_fmod_studio_event_description(event_description_ref, event_description);

	g_fmod_last_result = event_description->unloadSampleData();

	return 0;
}

func double fmod_studio_event_description_get_sample_loading_state(double event_description_ref)
{
	FMOD::Studio::EventDescription* event_description = nullptr;
	validate_fmod_studio_event_description(event_description_ref, event_description);

	FMOD_STUDIO_LOADING_STATE state = FMOD_STUDIO_LOADING_STATE::FMOD_STUDIO_LOADING_STATE_ERROR;
	g_fmod_last_result = event_description->getSampleLoadingState(&state);

	return (double)state;
}

// Attributes :

func double fmod_studio_event_description_is_3d(double event_description_ref)
{
	FMOD::Studio::EventDescription* event_description = nullptr;
	validate_fmod_studio_event_description(event_description_ref, event_description);

	bool is_3d = false;
	g_fmod_last_result = event_description->is3D(&is_3d);

	return is_3d ? 1.0 : 0.0;
}

func double fmod_studio_event_description_is_doppler_enabled(double event_description_ref)
{
	FMOD::Studio::EventDescription* event_description = nullptr;
	validate_fmod_studio_event_description(event_description_ref, event_description);

	bool is_doppler = false;
	g_fmod_last_result = event_description->isDopplerEnabled(&is_doppler);

	return is_doppler ? 1.0 : 0.0;
}

func double fmod_studio_event_description_is_oneshot(double event_description_ref)
{
	FMOD::Studio::EventDescription* event_description = nullptr;
	validate_fmod_studio_event_description(event_description_ref, event_description);

	bool is_oneshot = false;
	g_fmod_last_result = event_description->isOneshot(&is_oneshot);

	return is_oneshot ? 1.0 : 0.0;
}

func double fmod_studio_event_description_is_snapshot(double event_description_ref)
{
	FMOD::Studio::EventDescription* event_description = nullptr;
	validate_fmod_studio_event_description(event_description_ref, event_description);

	bool is_snapshot = false;
	g_fmod_last_result = event_description->isSnapshot(&is_snapshot);

	return is_snapshot ? 1.0 : 0.0;
}

func double fmod_studio_event_description_is_stream(double event_description_ref)
{
	FMOD::Studio::EventDescription* event_description = nullptr;
	validate_fmod_studio_event_description(event_description_ref, event_description);

	bool is_stream = false;
	g_fmod_last_result = event_description->isStream(&is_stream);

	return is_stream ? 1.0 : 0.0;
}

func double fmod_studio_event_description_has_sustain_point(double event_description_ref)
{
	FMOD::Studio::EventDescription* event_description = nullptr;
	validate_fmod_studio_event_description(event_description_ref, event_description);

	bool has_sustain = false;
	g_fmod_last_result = event_description->hasSustainPoint(&has_sustain);

	return has_sustain ? 1.0 : 0.0;
}

func double fmod_studio_event_description_get_min_max_distance_multiplatform(double event_description_ref, char* buff_return)
{
	FMOD::Studio::EventDescription* event_description = nullptr;
	validate_fmod_studio_event_description(event_description_ref, event_description);

	float max = 0, min = 0;
	g_fmod_last_result = event_description->getMinMaxDistance(&min, &max);

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

func double fmod_studio_event_description_get_sound_size(double event_description_ref)
{
	FMOD::Studio::EventDescription* event_description = nullptr;
	validate_fmod_studio_event_description(event_description_ref, event_description);

	float size = 0;
	g_fmod_last_result = event_description->getSoundSize(&size);

	return size;
}

//	Parameters:
func double fmod_studio_event_description_get_parameter_description_by_name_multiplatform(double event_description_ref, char* name, char* buff_return)
{
	FMOD::Studio::EventDescription* event_description = nullptr;
	validate_fmod_studio_event_description(event_description_ref, event_description);

	FMOD_STUDIO_PARAMETER_DESCRIPTION description{};
	g_fmod_last_result = event_description->getParameterDescriptionByName((const char*)name, &description);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = FmodStudioParamaterDescriptionToGMStruct(description);

	map_return.writeTo(buff_return);

	return 0;
}

func double fmod_studio_event_description_get_parameter_description_by_id_multiplatform(double event_description_ref, char* buff_args, char* buff_return)
{
	FMOD::Studio::EventDescription* event_description = nullptr;
	validate_fmod_studio_event_description(event_description_ref, event_description);

	auto args = buffer_unpack((uint8_t*)buff_args);
	auto map_paramaters = YYGetStruct(args[0]);

	FMOD_STUDIO_PARAMETER_ID parameter_id = FmodParamaterIdFromMap(map_paramaters);
	FMOD_STUDIO_PARAMETER_DESCRIPTION description;
	g_fmod_last_result = event_description->getParameterDescriptionByID(parameter_id, &description);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = FmodStudioParamaterDescriptionToGMStruct(description);

	map_return.writeTo(buff_return);

	return 0;
}

func double fmod_studio_event_description_get_parameter_description_by_index_multiplatform(double event_description_ref, double index, char* buff_return)
{
	FMOD::Studio::EventDescription* event_description = nullptr;
	validate_fmod_studio_event_description(event_description_ref, event_description);

	FMOD_STUDIO_PARAMETER_DESCRIPTION description;

	g_fmod_last_result = event_description->getParameterDescriptionByIndex((int)index, &description);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = FmodStudioParamaterDescriptionToGMStruct(description);

	map_return.writeTo(buff_return);

	return 0;
}

func double fmod_studio_event_description_get_parameter_description_count(double event_description_ref)
{
	FMOD::Studio::EventDescription* event_description = nullptr;
	validate_fmod_studio_event_description(event_description_ref, event_description);

	int count;
	g_fmod_last_result = event_description->getParameterDescriptionCount(&count);

	return count;
}

func char* fmod_studio_event_description_get_parameter_label_by_name(double event_description_ref, char* name, double label_index)
{
	FMOD::Studio::EventDescription* event_description = nullptr;
	validate_fmod_studio_event_description(event_description_ref, event_description);

	int retrieved;
	gStringBuffer[0] = '\0';
	g_fmod_last_result = event_description->getParameterLabelByName((const char*)name, (int)label_index, gStringBuffer, sizeof(gStringBuffer), &retrieved);

	return gStringBuffer;
}

func char* fmod_studio_event_description_get_parameter_label_by_id_multiplatform(double event_description_ref, char* buff_args, double label_index)
{
	FMOD::Studio::EventDescription* event_description = nullptr;
	validate_fmod_studio_event_description(event_description_ref, event_description);

	auto args = buffer_unpack((uint8_t*)buff_args);
	auto map_paramaters = YYGetStruct(args[0]);

	FMOD_STUDIO_PARAMETER_ID parameter_id = FmodParamaterIdFromMap(map_paramaters);

	int retrieved;
	gStringBuffer[0] = '\0';
	g_fmod_last_result = event_description->getParameterLabelByID(parameter_id, (int)label_index, gStringBuffer, sizeof(gStringBuffer), &retrieved);

	return gStringBuffer;
}

func char* fmod_studio_event_description_get_parameter_label_by_index(double event_description_ref, double index, double label_index)
{
	FMOD::Studio::EventDescription* event_description = nullptr;
	validate_fmod_studio_event_description(event_description_ref, event_description);

	int retrieved;
	gStringBuffer[0] = '\0';
	g_fmod_last_result = event_description->getParameterLabelByIndex((int)index, (int)label_index, gStringBuffer, sizeof(gStringBuffer), &retrieved);

	return gStringBuffer;
}

// User Properties :

StructStream FmodStudioUserPropertyToMap(const FMOD_STUDIO_USER_PROPERTY& property)
{
	StructStream map_return = {};

	map_return.addKeyValue("name", property.name);
	map_return.addKeyValue("type", (int)property.type);

	FMOD_STUDIO_USER_PROPERTY_TYPE type = property.type;
	map_return.addKeyValue("string_value", type == FMOD_STUDIO_USER_PROPERTY_TYPE::FMOD_STUDIO_USER_PROPERTY_TYPE_STRING ? property.stringvalue : "");
	map_return.addKeyValue("int_value", type == FMOD_STUDIO_USER_PROPERTY_TYPE::FMOD_STUDIO_USER_PROPERTY_TYPE_INTEGER ? property.intvalue : 0);
	map_return.addKeyValue("bool_value", type == FMOD_STUDIO_USER_PROPERTY_TYPE::FMOD_STUDIO_USER_PROPERTY_TYPE_BOOLEAN ? property.boolvalue : false);
	map_return.addKeyValue("float_value", type == FMOD_STUDIO_USER_PROPERTY_TYPE::FMOD_STUDIO_USER_PROPERTY_TYPE_FLOAT ? (double)property.floatvalue: 0.0);

	return map_return;
}

func double fmod_studio_event_description_get_user_property_multiplatform(double event_description_ref, char* name, char* buff_return)
{
	FMOD::Studio::EventDescription* event_description = nullptr;
	validate_fmod_studio_event_description(event_description_ref, event_description);

	FMOD_STUDIO_USER_PROPERTY property;
	g_fmod_last_result = event_description->getUserProperty((const char*)name, &property);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = FmodStudioUserPropertyToMap(property);

	map_return.writeTo(buff_return);

	return 0;
}

func double fmod_studio_event_description_get_user_property_by_index_multiplatform(double event_description_ref, double index, char* buff_return)
{
	FMOD::Studio::EventDescription* event_description = nullptr;
	validate_fmod_studio_event_description(event_description_ref, event_description);

	FMOD_STUDIO_USER_PROPERTY property;
	g_fmod_last_result = event_description->getUserPropertyByIndex((int)index, &property);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = FmodStudioUserPropertyToMap(property);

	map_return.writeTo(buff_return);

	return 0;
}

func double fmod_studio_event_description_get_user_property_count(double event_description_ref)
{
	FMOD::Studio::EventDescription* event_description = nullptr;
	validate_fmod_studio_event_description(event_description_ref, event_description);

	int count;
	g_fmod_last_result = event_description->getUserPropertyCount(&count);
	return count;
}

// General:

func char* fmod_studio_event_description_get_id(double event_description_ref)
{
	FMOD::Studio::EventDescription* event_description = nullptr;
	validate_fmod_studio_event_description(event_description_ref, event_description);

	FMOD_GUID id;
	g_fmod_last_result = event_description->getID(&id);

	gStringBuffer[0] = '\0';
	if (g_fmod_last_result != FMOD_OK)
	{
		return gStringBuffer;
	}

	strncpy_s(gStringBuffer, GUIDtoString(id).c_str(), sizeof(gStringBuffer) - 1);
	gStringBuffer[sizeof(gStringBuffer) - 1] = '\0';  // Ensure null termination

	return gStringBuffer;
}

func double fmod_studio_event_description_get_length(double event_description_ref)
{
	FMOD::Studio::EventDescription* event_description = nullptr;
	validate_fmod_studio_event_description(event_description_ref, event_description);

	int size;
	g_fmod_last_result = event_description->getLength(&size);
	return (double)size;
}

func char* fmod_studio_event_description_get_path(double event_description_ref)
{
	FMOD::Studio::EventDescription* event_description = nullptr;
	validate_fmod_studio_event_description(event_description_ref, event_description);

	int retrieved;
	gStringBuffer[0] = '\0';
	g_fmod_last_result = event_description->getPath(gStringBuffer, sizeof(gStringBuffer), &retrieved);

	return gStringBuffer;
}

// This callbacks is exactly the same than in *EventInstance.cpp script, if you mofidy it copy/paste there too
static FMOD_RESULT CALLBACK_fmod_studio_event_description(FMOD_STUDIO_EVENT_CALLBACK_TYPE type, FMOD_STUDIO_EVENTINSTANCE* event, void* parameters)
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
			async_map.addKeyValue("sub_sound_index", (double)sound_prop->subsoundIndex);

			FMOD::Sound* sound = (FMOD::Sound*)sound_prop->sound;
			uint32_t sound_id = unregisterResource(sound, map_sounds);

			async_map.addKeyValue("sound_ref", packIndexIntoRef(sound_id, GM_FMOD_TYPE_SOUND));

			break;
		}
		case FMOD_STUDIO_EVENT_CALLBACK_PLUGIN_CREATED:
		case FMOD_STUDIO_EVENT_CALLBACK_PLUGIN_DESTROYED:
		{
			// getUserData() will crash the app
			// FMOD_STUDIO_PLUGIN_INSTANCE_PROPERTIES* plugin_prop = (FMOD_STUDIO_PLUGIN_INSTANCE_PROPERTIES*)parameters;
			// async_add_string(map, "name", plugin_prop->name);

			// FMOD::DSP* sound = (FMOD::DSP*)plugin_prop->dsp;
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
		case FMOD_STUDIO_EVENT_CALLBACK_SOUND_STOPPED:
		{
			// We can't set the user data (only in the case of programmed sound....)
			// FMOD::Sound* sound = (FMOD::Sound*)parameters;
			break;
		}
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

func double fmod_studio_event_description_set_callback(double event_description_ref, double type)
{
	FMOD::Studio::EventDescription* event_description = nullptr;
	validate_fmod_studio_event_description(event_description_ref, event_description);

	g_fmod_last_result = event_description->setCallback(CALLBACK_fmod_studio_event_description, (FMOD_STUDIO_EVENT_CALLBACK_TYPE)type);
	return 0;
}

func double fmod_studio_event_description_set_user_data(double event_description_ref, double data)
{
	FMOD::Studio::EventDescription* event_description = nullptr;
	validate_fmod_studio_event_description(event_description_ref, event_description);

	event_description->setUserData((void*)(uint64_t)data);

	return 0;
}

func double fmod_studio_event_description_get_user_data(double event_description_ref)
{
	FMOD::Studio::EventDescription* event_description = nullptr;
	validate_fmod_studio_event_description(event_description_ref, event_description);

	void* userData = nullptr;
	event_description->getUserData(&userData);

	return userData ? (double)(uint64_t)userData : NAN;
}

func double fmod_studio_event_description_is_valid(double event_description_ref)
{
	FMOD::Studio::EventDescription* event_description = nullptr;
	validate_fmod_studio_event_description(event_description_ref, event_description);

	bool valid = event_description->isValid();

	return valid ? 1.0 : 0.0;
}
