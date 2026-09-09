#include <native/GMFMODStudioInternal_native.h>
#include "GMFMOD_studio_event_instance.h"
#include <optional>
#include <mutex>
#include <map>
#include <string_view>

using namespace gm_structs;

double fmod_studio_event_instance_start(uint64_t instance_ref)
{
	FMOD::Studio::EventInstance* instance = nullptr;
	validate_fmod_studio_event_instance(instance_ref, instance);
	if (instance == nullptr) return 0;
	g_fmod_last_result = instance->start();
	return 0;
}

double fmod_studio_event_instance_stop(uint64_t instance_ref, double stop_mode)
{
	FMOD::Studio::EventInstance* instance = nullptr;
	validate_fmod_studio_event_instance(instance_ref, instance);
	if (instance == nullptr) return 0;
	g_fmod_last_result = instance->stop((FMOD_STUDIO_STOP_MODE)(int)stop_mode);
	return 0;
}

double fmod_studio_event_instance_get_playback_state(uint64_t instance_ref)
{
	FMOD::Studio::EventInstance* instance = nullptr;
	validate_fmod_studio_event_instance(instance_ref, instance);
	if (instance == nullptr) return 0.0;
	FMOD_STUDIO_PLAYBACK_STATE state = FMOD_STUDIO_PLAYBACK_STOPPED;
	g_fmod_last_result = instance->getPlaybackState(&state);
	return (double)state;
}

double fmod_studio_event_instance_get_paused(uint64_t instance_ref)
{
	FMOD::Studio::EventInstance* instance = nullptr;
	validate_fmod_studio_event_instance(instance_ref, instance);
	if (instance == nullptr) return 0.0;
	bool paused = false;
	g_fmod_last_result = instance->getPaused(&paused);
	return paused ? 1.0 : 0.0;
}

double fmod_studio_event_instance_set_paused(uint64_t instance_ref, double paused)
{
	FMOD::Studio::EventInstance* instance = nullptr;
	validate_fmod_studio_event_instance(instance_ref, instance);
	if (instance == nullptr) return 0;
	g_fmod_last_result = instance->setPaused(paused != 0.0);
	return 0;
}

double fmod_studio_event_instance_get_timeline_position(uint64_t instance_ref)
{
	FMOD::Studio::EventInstance* instance = nullptr;
	validate_fmod_studio_event_instance(instance_ref, instance);
	if (instance == nullptr) return 0.0;
	int position = 0;
	g_fmod_last_result = instance->getTimelinePosition(&position);
	return (double)position;
}

double fmod_studio_event_instance_set_timeline_position(uint64_t instance_ref, double position)
{
	FMOD::Studio::EventInstance* instance = nullptr;
	validate_fmod_studio_event_instance(instance_ref, instance);
	if (instance == nullptr) return 0;
	g_fmod_last_result = instance->setTimelinePosition((int)position);
	return 0;
}

double fmod_studio_event_instance_keyoff(uint64_t instance_ref)
{
	FMOD::Studio::EventInstance* instance = nullptr;
	validate_fmod_studio_event_instance(instance_ref, instance);
	if (instance == nullptr) return 0;
	g_fmod_last_result = instance->keyOff();
	return 0;
}

double fmod_studio_event_instance_get_volume(uint64_t instance_ref)
{
	FMOD::Studio::EventInstance* instance = nullptr;
	validate_fmod_studio_event_instance(instance_ref, instance);
	if (instance == nullptr) return 0.0;
	float volume = 0.0f;
	g_fmod_last_result = instance->getVolume(&volume);
	return (double)volume;
}

double fmod_studio_event_instance_set_volume(uint64_t instance_ref, double volume)
{
	FMOD::Studio::EventInstance* instance = nullptr;
	validate_fmod_studio_event_instance(instance_ref, instance);
	if (instance == nullptr) return 0;
	g_fmod_last_result = instance->setVolume((float)volume);
	return 0;
}

double fmod_studio_event_instance_get_pitch(uint64_t instance_ref)
{
	FMOD::Studio::EventInstance* instance = nullptr;
	validate_fmod_studio_event_instance(instance_ref, instance);
	if (instance == nullptr) return 0.0;
	float pitch = 0.0f;
	g_fmod_last_result = instance->getPitch(&pitch);
	return (double)pitch;
}

double fmod_studio_event_instance_set_pitch(uint64_t instance_ref, double pitch)
{
	FMOD::Studio::EventInstance* instance = nullptr;
	validate_fmod_studio_event_instance(instance_ref, instance);
	if (instance == nullptr) return 0;
	g_fmod_last_result = instance->setPitch((float)pitch);
	return 0;
}

double fmod_studio_event_instance_set_parameter_by_name(uint64_t instance_ref, std::string_view name, double value)
{
	FMOD::Studio::EventInstance* instance = nullptr;
	validate_fmod_studio_event_instance(instance_ref, instance);
	if (instance == nullptr) return 0;
	g_fmod_last_result = instance->setParameterByName(name.data(), (float)value);
	return 0;
}

double fmod_studio_event_instance_get_parameter_by_name(uint64_t instance_ref, std::string_view name)
{
	FMOD::Studio::EventInstance* instance = nullptr;
	validate_fmod_studio_event_instance(instance_ref, instance);
	if (instance == nullptr) return 0.0;
	float value = 0.0f;
	g_fmod_last_result = instance->getParameterByName(name.data(), &value);
	return (double)value;
}

double fmod_studio_event_instance_get_parameter_count(uint64_t instance_ref)
{
	FMOD::Studio::EventInstance* instance = nullptr;
	validate_fmod_studio_event_instance(instance_ref, instance);
	if (instance == nullptr) return 0.0;

	// EventInstance has no parameter count of its own; the count belongs to the description.
	FMOD::Studio::EventDescription* event_desc = nullptr;
	g_fmod_last_result = instance->getDescription(&event_desc);
	if (g_fmod_last_result != FMOD_OK || event_desc == nullptr) return 0.0;

	int count = 0;
	g_fmod_last_result = event_desc->getParameterDescriptionCount(&count);
	return (double)count;
}

double fmod_studio_event_instance_set_3d_attributes(uint64_t instance_ref, const gm_structs::FmodStudioVec3& position, const gm_structs::FmodStudioVec3& velocity, const gm_structs::FmodStudioVec3& forward, const gm_structs::FmodStudioVec3& up)
{
	FMOD::Studio::EventInstance* instance = nullptr;
	validate_fmod_studio_event_instance(instance_ref, instance);
	if (instance == nullptr) return 0;
	FMOD_3D_ATTRIBUTES attributes = {};
	attributes.position = {(float)position.x, (float)position.y, (float)position.z};
	attributes.velocity = {(float)velocity.x, (float)velocity.y, (float)velocity.z};
	attributes.forward = {(float)forward.x, (float)forward.y, (float)forward.z};
	attributes.up = {(float)up.x, (float)up.y, (float)up.z};
	g_fmod_last_result = instance->set3DAttributes(&attributes);
	return 0;
}

std::optional<uint64_t> fmod_studio_event_instance_get_description(uint64_t instance_ref)
{
	FMOD::Studio::EventInstance* instance = nullptr;
	validate_fmod_studio_event_instance(instance_ref, instance);
	if (instance == nullptr) return std::nullopt;
	FMOD::Studio::EventDescription* event_desc = nullptr;
	g_fmod_last_result = instance->getDescription(&event_desc);
	if (g_fmod_last_result == FMOD_OK && event_desc != nullptr)
	{
		uint64_t result = 0;
		result = packPointerIntoRef(event_desc, GM_FMOD_STUDIO_TYPE_EVENT_DESCRIPTION);
		return result;
	}
	return std::nullopt;
}

double fmod_studio_event_instance_release(uint64_t instance_ref)
{
	FMOD::Studio::EventInstance* instance = nullptr;
	validate_fmod_studio_event_instance(instance_ref, instance);
	if (instance == nullptr) return 0;

	// The DESTROYED callback reclaims the callback entry, but only for instances
	// that registered one; the user-data entry has no such signal at all.
	{
		std::lock_guard<std::mutex> lock(g_user_data_mutex);
		g_user_data.erase(reinterpret_cast<uintptr_t>(instance));
	}

	g_fmod_last_result = instance->release();
	return 0;
}

// ============================================================
// Event Instance - Parameters by ID
// ============================================================

double fmod_studio_event_instance_get_parameter_by_id(uint64_t instance_ref, double id_data1, double id_data2)
{
	FMOD::Studio::EventInstance* instance = nullptr;
	validate_fmod_studio_event_instance(instance_ref, instance);
	if (instance == nullptr) return 0.0;

	FMOD_STUDIO_PARAMETER_ID id{};
	id.data1 = (unsigned int)id_data1;
	id.data2 = (unsigned int)id_data2;

	float value = 0.0f;
	g_fmod_last_result = instance->getParameterByID(id, &value, nullptr);
	return (double)value;
}

double fmod_studio_event_instance_set_parameter_by_id(uint64_t instance_ref, double id_data1, double id_data2, double value)
{
	FMOD::Studio::EventInstance* instance = nullptr;
	validate_fmod_studio_event_instance(instance_ref, instance);
	if (instance == nullptr) return 0;

	FMOD_STUDIO_PARAMETER_ID id{};
	id.data1 = (unsigned int)id_data1;
	id.data2 = (unsigned int)id_data2;

	g_fmod_last_result = instance->setParameterByID(id, (float)value, false);
	return 0;
}

double fmod_studio_event_instance_set_parameter_by_id_with_label(
	uint64_t instance_ref, double id_data1, double id_data2, std::string_view label, double ignore_seek_speed)
{
	FMOD::Studio::EventInstance* instance = nullptr;
	validate_fmod_studio_event_instance(instance_ref, instance);
	if (instance == nullptr) return 0;

	FMOD_STUDIO_PARAMETER_ID id{};
	id.data1 = (unsigned int)id_data1;
	id.data2 = (unsigned int)id_data2;

	std::string label_str(label);
	g_fmod_last_result = instance->setParameterByIDWithLabel(id, label_str.c_str(), ignore_seek_speed != 0.0);
	return 0;
}

double fmod_studio_event_instance_set_parameter_by_name_with_label(
	uint64_t instance_ref, std::string_view name, std::string_view label, double ignore_seek_speed)
{
	FMOD::Studio::EventInstance* instance = nullptr;
	validate_fmod_studio_event_instance(instance_ref, instance);
	if (instance == nullptr) return 0;

	std::string name_str(name);
	std::string label_str(label);
	g_fmod_last_result = instance->setParameterByNameWithLabel(name_str.c_str(), label_str.c_str(), ignore_seek_speed != 0.0);
	return 0;
}

// ============================================================
// Event Instance - 3D Attributes
// ============================================================

FmodStudio3DAttributes fmod_studio_event_instance_get_3d_attributes(uint64_t instance_ref)
{
	FmodStudio3DAttributes result{};
	FMOD::Studio::EventInstance* instance = nullptr;
	validate_fmod_studio_event_instance(instance_ref, instance);
	if (instance == nullptr) return result;

	FMOD_3D_ATTRIBUTES attributes{};
	g_fmod_last_result = instance->get3DAttributes(&attributes);
	result.position.x = (double)attributes.position.x;
	result.position.y = (double)attributes.position.y;
	result.position.z = (double)attributes.position.z;
	result.velocity.x = (double)attributes.velocity.x;
	result.velocity.y = (double)attributes.velocity.y;
	result.velocity.z = (double)attributes.velocity.z;
	result.forward.x = (double)attributes.forward.x;
	result.forward.y = (double)attributes.forward.y;
	result.forward.z = (double)attributes.forward.z;
	result.up.x = (double)attributes.up.x;
	result.up.y = (double)attributes.up.y;
	result.up.z = (double)attributes.up.z;
	return result;
}

FmodStudioMinMaxDistance fmod_studio_event_instance_get_min_max_distance(uint64_t instance_ref)
{
	FmodStudioMinMaxDistance result{};
	FMOD::Studio::EventInstance* instance = nullptr;
	validate_fmod_studio_event_instance(instance_ref, instance);
	if (instance == nullptr) return result;

	float min_distance = 0.0f, max_distance = 0.0f;
	g_fmod_last_result = instance->getMinMaxDistance(&min_distance, &max_distance);
	result.min_distance = (double)min_distance;
	result.max_distance = (double)max_distance;
	return result;
}

double fmod_studio_event_instance_get_listener_mask(uint64_t instance_ref)
{
	FMOD::Studio::EventInstance* instance = nullptr;
	validate_fmod_studio_event_instance(instance_ref, instance);
	if (instance == nullptr) return 0.0;
	unsigned int mask = 0;
	g_fmod_last_result = instance->getListenerMask(&mask);
	return (double)mask;
}

double fmod_studio_event_instance_set_listener_mask(uint64_t instance_ref, double mask)
{
	FMOD::Studio::EventInstance* instance = nullptr;
	validate_fmod_studio_event_instance(instance_ref, instance);
	if (instance == nullptr) return 0;
	g_fmod_last_result = instance->setListenerMask((unsigned int)mask);
	return 0;
}

// ============================================================
// Event Instance - Reverb / Properties
// ============================================================

double fmod_studio_event_instance_get_reverb_level(uint64_t instance_ref, double index)
{
	FMOD::Studio::EventInstance* instance = nullptr;
	validate_fmod_studio_event_instance(instance_ref, instance);
	if (instance == nullptr) return 0.0;
	float level = 0.0f;
	g_fmod_last_result = instance->getReverbLevel((int)index, &level);
	return (double)level;
}

double fmod_studio_event_instance_set_reverb_level(uint64_t instance_ref, double index, double level)
{
	FMOD::Studio::EventInstance* instance = nullptr;
	validate_fmod_studio_event_instance(instance_ref, instance);
	if (instance == nullptr) return 0;
	g_fmod_last_result = instance->setReverbLevel((int)index, (float)level);
	return 0;
}

double fmod_studio_event_instance_get_property(uint64_t instance_ref, enum gm_enums::FmodStudioEventProperty property_type)
{
	FMOD::Studio::EventInstance* instance = nullptr;
	validate_fmod_studio_event_instance(instance_ref, instance);
	if (instance == nullptr) return 0.0;
	float value = 0.0f;
	g_fmod_last_result = instance->getProperty((FMOD_STUDIO_EVENT_PROPERTY)(int)property_type, &value);
	return (double)value;
}

double fmod_studio_event_instance_set_property(uint64_t instance_ref, enum gm_enums::FmodStudioEventProperty property_type, double value)
{
	FMOD::Studio::EventInstance* instance = nullptr;
	validate_fmod_studio_event_instance(instance_ref, instance);
	if (instance == nullptr) return 0;
	g_fmod_last_result = instance->setProperty((FMOD_STUDIO_EVENT_PROPERTY)(int)property_type, (float)value);
	return 0;
}

// ============================================================
// Event Instance - User Data
// ============================================================

double fmod_studio_event_instance_get_user_data(uint64_t instance_ref)
{
	FMOD::Studio::EventInstance* instance = nullptr;
	validate_fmod_studio_event_instance(instance_ref, instance);
	if (instance == nullptr) return 0.0;
	std::lock_guard<std::mutex> lock(g_user_data_mutex);
	auto it = g_user_data.find(reinterpret_cast<uintptr_t>(instance));
	return it != g_user_data.end() ? it->second : 0.0;
}

double fmod_studio_event_instance_set_user_data(uint64_t instance_ref, double user_data)
{
	FMOD::Studio::EventInstance* instance = nullptr;
	validate_fmod_studio_event_instance(instance_ref, instance);
	if (instance == nullptr) return 0;
	std::lock_guard<std::mutex> lock(g_user_data_mutex);
	g_user_data[reinterpret_cast<uintptr_t>(instance)] = user_data;
	return 0;
}

// ============================================================
// Event Instance - Status / Diagnostics
// ============================================================

double fmod_studio_event_instance_is_valid(uint64_t instance_ref)
{
	FMOD::Studio::EventInstance* instance = nullptr;
	validate_fmod_studio_event_instance(instance_ref, instance);
	if (instance == nullptr) return 0.0;
	return instance->isValid() ? 1.0 : 0.0;
}

double fmod_studio_event_instance_is_virtual(uint64_t instance_ref)
{
	FMOD::Studio::EventInstance* instance = nullptr;
	validate_fmod_studio_event_instance(instance_ref, instance);
	if (instance == nullptr) return 0.0;
	bool is_virtual = false;
	g_fmod_last_result = instance->isVirtual(&is_virtual);
	return is_virtual ? 1.0 : 0.0;
}

uint64_t fmod_studio_event_instance_get_channel_group(uint64_t instance_ref)
{
	uint64_t result = 0;
	FMOD::Studio::EventInstance* instance = nullptr;
	validate_fmod_studio_event_instance(instance_ref, instance);
	if (instance == nullptr) return result;

	FMOD::ChannelGroup* channel_group = nullptr;
	g_fmod_last_result = instance->getChannelGroup(&channel_group);
	if (g_fmod_last_result == FMOD_OK && channel_group != nullptr)
	{
		uint32_t group_id = registerOrFindResource(channel_group, index_channel_groups, map_channel_groups);
		result = packIndexIntoRef(group_id, GM_FMOD_TYPE_CHANNEL_GROUP);
	}
	return result;
}

FmodStudioCPUUsage fmod_studio_event_instance_get_cpu_usage(uint64_t instance_ref)
{
	FmodStudioCPUUsage result{};
	FMOD::Studio::EventInstance* instance = nullptr;
	validate_fmod_studio_event_instance(instance_ref, instance);
	if (instance == nullptr) return result;

	unsigned int exclusive = 0, inclusive = 0;
	g_fmod_last_result = instance->getCPUUsage(&exclusive, &inclusive);
	result.exclusive = (double)exclusive;
	result.inclusive = (double)inclusive;
	return result;
}

FmodStudioMemoryUsage fmod_studio_event_instance_get_memory_usage(uint64_t instance_ref)
{
	FmodStudioMemoryUsage result{};
	FMOD::Studio::EventInstance* instance = nullptr;
	validate_fmod_studio_event_instance(instance_ref, instance);
	if (instance == nullptr) return result;

	FMOD_STUDIO_MEMORY_USAGE usage{};
	g_fmod_last_result = instance->getMemoryUsage(&usage);
	result.exclusive = (double)usage.exclusive;
	result.inclusive = (double)usage.inclusive;
	result.sample_data = (double)usage.sampledata;
	return result;
}

// ============================================================
// Event Instance - Callbacks
// ============================================================

// Studio runs its update on a worker thread by default, so this map is touched
// from both that thread and the game thread.
static std::mutex g_event_instance_callback_mutex;
static std::map<uintptr_t, gm::wire::GMFunction> g_event_instance_callbacks;

void fmod_studio_event_instance_reset_state()
{
	std::lock_guard<std::mutex> lock(g_event_instance_callback_mutex);
	g_event_instance_callbacks.clear();
}

static FMOD_RESULT F_CALL CALLBACK_fmod_studio_event_instance(
	FMOD_STUDIO_EVENT_CALLBACK_TYPE type,
	FMOD_STUDIO_EVENTINSTANCE* event,
	void* parameters)
{
	if (event == nullptr)
		return FMOD_OK;

	// Keys are the truncated pointer the GML refs carry, so mask to match.
	uintptr_t instance_ptr = reinterpret_cast<uintptr_t>(event) & 0xFFFFFFFFu;

	std::optional<gm::wire::GMFunction> callback;
	{
		std::lock_guard<std::mutex> lock(g_event_instance_callback_mutex);
		auto it = g_event_instance_callbacks.find(instance_ptr);
		if (it == g_event_instance_callbacks.end())
			return FMOD_OK;

		callback = it->second;

		// The instance is gone after this; drop the entry so a recycled
		// pointer does not inherit this callback.
		if (type == FMOD_STUDIO_EVENT_CALLBACK_DESTROYED)
			g_event_instance_callbacks.erase(it);
	}

	uint64_t ref = 0;
	ref = packIndexIntoRef((uint32_t)instance_ptr, GM_FMOD_STUDIO_TYPE_EVENT_INSTANCE);

	callback.value().call(ref, (double)type);
	return FMOD_OK;
}

double fmod_studio_event_instance_set_callback(
	uint64_t instance_ref,
	const std::optional<gm::wire::GMFunction>& callback,
	enum gm_enums::FmodStudioEventCallbackType mask)
{
	FMOD::Studio::EventInstance* instance = nullptr;
	validate_fmod_studio_event_instance(instance_ref, instance);
	if (instance == nullptr) return 0;

	uintptr_t instance_ptr = reinterpret_cast<uintptr_t>(instance) & 0xFFFFFFFFu;

	if (!callback.has_value())
	{
		{
			std::lock_guard<std::mutex> lock(g_event_instance_callback_mutex);
			g_event_instance_callbacks.erase(instance_ptr);
		}
		g_fmod_last_result = instance->setCallback(nullptr, FMOD_STUDIO_EVENT_CALLBACK_ALL);
		return 0;
	}

	{
		std::lock_guard<std::mutex> lock(g_event_instance_callback_mutex);
		g_event_instance_callbacks.insert_or_assign(instance_ptr, callback.value());
	}

	// DESTROYED is always requested so the map entry can be reclaimed.
	FMOD_STUDIO_EVENT_CALLBACK_TYPE fmod_mask =
		(FMOD_STUDIO_EVENT_CALLBACK_TYPE)(std::uint64_t)mask | FMOD_STUDIO_EVENT_CALLBACK_DESTROYED;

	g_fmod_last_result = instance->setCallback(CALLBACK_fmod_studio_event_instance, fmod_mask);
	if (g_fmod_last_result != FMOD_OK)
	{
		std::lock_guard<std::mutex> lock(g_event_instance_callback_mutex);
		g_event_instance_callbacks.erase(instance_ptr);
	}
	return 0;
}
