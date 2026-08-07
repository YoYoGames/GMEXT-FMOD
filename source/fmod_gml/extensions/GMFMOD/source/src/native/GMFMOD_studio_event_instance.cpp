#include <native/GMFMODInternal_native.h>
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
	// getParameterCount is not available in this SDK version
	g_fmod_last_result = FMOD_ERR_UNSUPPORTED;
	return 0.0;
}

double fmod_studio_event_instance_set_3d_attributes(uint64_t instance_ref, double x, double y, double z)
{
	FMOD::Studio::EventInstance* instance = nullptr;
	validate_fmod_studio_event_instance(instance_ref, instance);
	if (instance == nullptr) return 0;
	FMOD_3D_ATTRIBUTES attributes = {};
	attributes.position = {(float)x, (float)y, (float)z};
	attributes.forward = {0, 0, 1};
	attributes.up = {0, 1, 0};
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
		result = packIndexIntoRef((uint32_t)reinterpret_cast<uintptr_t>(event_desc), GM_FMOD_STUDIO_TYPE_EVENT_DESCRIPTION);
		return result;
	}
	return std::nullopt;
}

double fmod_studio_event_instance_release(uint64_t instance_ref)
{
	FMOD::Studio::EventInstance* instance = nullptr;
	validate_fmod_studio_event_instance(instance_ref, instance);
	if (instance == nullptr) return 0;
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

// ============================================================
// Event Instance - Callbacks
// ============================================================

// Studio runs its update on a worker thread by default, so this map is touched
// from both that thread and the game thread.
static std::mutex g_event_instance_callback_mutex;
static std::map<uintptr_t, gm::wire::GMFunction> g_event_instance_callbacks;

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
