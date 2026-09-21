#include <native/GMFMODStudioInternal_native.h>
#include "GMFMOD_studio_event_instance.h"
#include <optional>
#include <mutex>
#include <map>
#include <string>
#include <string_view>
#include <vector>

using namespace gm_structs;

double fmod_studio_event_instance_start(uint64_t instance_ref)
{
	FMOD::Studio::EventInstance* instance = resolve_fmod_studio_event_instance(instance_ref);
	if (instance == nullptr) return 0;
	g_fmod_studio_last_result = instance->start();
	return 0;
}

double fmod_studio_event_instance_stop(uint64_t instance_ref, gm_enums::FmodStudioStopMode stop_mode)
{
	FMOD::Studio::EventInstance* instance = resolve_fmod_studio_event_instance(instance_ref);
	if (instance == nullptr) return 0;
	g_fmod_studio_last_result = instance->stop((FMOD_STUDIO_STOP_MODE)(int)stop_mode);
	return 0;
}

gm_enums::FmodStudioPlaybackState fmod_studio_event_instance_get_playback_state(uint64_t instance_ref)
{
	FMOD::Studio::EventInstance* instance = resolve_fmod_studio_event_instance(instance_ref);
	if (instance == nullptr) return (gm_enums::FmodStudioPlaybackState)0;
	FMOD_STUDIO_PLAYBACK_STATE state = FMOD_STUDIO_PLAYBACK_STOPPED;
	g_fmod_studio_last_result = instance->getPlaybackState(&state);
	return (gm_enums::FmodStudioPlaybackState)state;
}

bool fmod_studio_event_instance_get_paused(uint64_t instance_ref)
{
	FMOD::Studio::EventInstance* instance = resolve_fmod_studio_event_instance(instance_ref);
	if (instance == nullptr) return false;
	bool paused = false;
	g_fmod_studio_last_result = instance->getPaused(&paused);
	return paused;
}

double fmod_studio_event_instance_set_paused(uint64_t instance_ref, bool paused)
{
	FMOD::Studio::EventInstance* instance = resolve_fmod_studio_event_instance(instance_ref);
	if (instance == nullptr) return 0;
	g_fmod_studio_last_result = instance->setPaused(paused);
	return 0;
}

double fmod_studio_event_instance_get_timeline_position(uint64_t instance_ref)
{
	FMOD::Studio::EventInstance* instance = resolve_fmod_studio_event_instance(instance_ref);
	if (instance == nullptr) return 0.0;
	int position = 0;
	g_fmod_studio_last_result = instance->getTimelinePosition(&position);
	return (double)position;
}

double fmod_studio_event_instance_set_timeline_position(uint64_t instance_ref, double position)
{
	FMOD::Studio::EventInstance* instance = resolve_fmod_studio_event_instance(instance_ref);
	if (instance == nullptr) return 0;
	g_fmod_studio_last_result = instance->setTimelinePosition((int)position);
	return 0;
}

double fmod_studio_event_instance_keyoff(uint64_t instance_ref)
{
	FMOD::Studio::EventInstance* instance = resolve_fmod_studio_event_instance(instance_ref);
	if (instance == nullptr) return 0;
	g_fmod_studio_last_result = instance->keyOff();
	return 0;
}

double fmod_studio_event_instance_get_volume(uint64_t instance_ref)
{
	FMOD::Studio::EventInstance* instance = resolve_fmod_studio_event_instance(instance_ref);
	if (instance == nullptr) return 0.0;
	float volume = 0.0f;
	g_fmod_studio_last_result = instance->getVolume(&volume);
	return (double)volume;
}

double fmod_studio_event_instance_set_volume(uint64_t instance_ref, double volume)
{
	FMOD::Studio::EventInstance* instance = resolve_fmod_studio_event_instance(instance_ref);
	if (instance == nullptr) return 0;
	g_fmod_studio_last_result = instance->setVolume((float)volume);
	return 0;
}

double fmod_studio_event_instance_get_pitch(uint64_t instance_ref)
{
	FMOD::Studio::EventInstance* instance = resolve_fmod_studio_event_instance(instance_ref);
	if (instance == nullptr) return 0.0;
	float pitch = 0.0f;
	g_fmod_studio_last_result = instance->getPitch(&pitch);
	return (double)pitch;
}

double fmod_studio_event_instance_set_pitch(uint64_t instance_ref, double pitch)
{
	FMOD::Studio::EventInstance* instance = resolve_fmod_studio_event_instance(instance_ref);
	if (instance == nullptr) return 0;
	g_fmod_studio_last_result = instance->setPitch((float)pitch);
	return 0;
}

double fmod_studio_event_instance_set_parameter_by_name(uint64_t instance_ref, std::string_view name, double value, bool ignore_seek_speed)
{
	FMOD::Studio::EventInstance* instance = resolve_fmod_studio_event_instance(instance_ref);
	if (instance == nullptr) return 0;
	g_fmod_studio_last_result = instance->setParameterByName(name.data(), (float)value, ignore_seek_speed);
	return 0;
}

FmodStudioParameterValue fmod_studio_event_instance_get_parameter_by_name(uint64_t instance_ref, std::string_view name)
{
	FmodStudioParameterValue result{};
	FMOD::Studio::EventInstance* instance = resolve_fmod_studio_event_instance(instance_ref);
	if (instance == nullptr) return result;
	float value = 0.0f, final_value = 0.0f;
	g_fmod_studio_last_result = instance->getParameterByName(name.data(), &value, &final_value);
	return to_parameter_value(value, final_value);
}

uint64_t fmod_studio_event_instance_get_system(uint64_t instance_ref)
{
	FMOD::Studio::EventInstance* instance = resolve_fmod_studio_event_instance(instance_ref);
	if (instance == nullptr) return 0;

	FMOD::Studio::System* system = nullptr;
#if FMOD_VERSION >= 0x00020300
	g_fmod_studio_last_result = instance->getSystem(&system);
#else
	// EventInstance::getSystem arrived in 2.03 and the vendored Switch SDK is
	// 2.02.19. The extension drives one Studio system, so that is the answer.
	system = fmod_studio_current_system();
	g_fmod_studio_last_result = FMOD_OK;
#endif
	if (g_fmod_studio_last_result != FMOD_OK || system == nullptr) return 0;

	return fmod_pointer_ref(system, gmfmod::RefType::StudioSystem);
}

double fmod_studio_event_instance_set_3d_attributes(uint64_t instance_ref, const gm_structs::FmodStudioVec3& position, const gm_structs::FmodStudioVec3& velocity, const gm_structs::FmodStudioVec3& forward, const gm_structs::FmodStudioVec3& up)
{
	FMOD::Studio::EventInstance* instance = resolve_fmod_studio_event_instance(instance_ref);
	if (instance == nullptr) return 0;
	FMOD_3D_ATTRIBUTES attributes = {};
	attributes.position = {(float)position.x, (float)position.y, (float)position.z};
	attributes.velocity = {(float)velocity.x, (float)velocity.y, (float)velocity.z};
	attributes.forward = {(float)forward.x, (float)forward.y, (float)forward.z};
	attributes.up = {(float)up.x, (float)up.y, (float)up.z};
	g_fmod_studio_last_result = instance->set3DAttributes(&attributes);
	return 0;
}

std::optional<uint64_t> fmod_studio_event_instance_get_description(uint64_t instance_ref)
{
	FMOD::Studio::EventInstance* instance = resolve_fmod_studio_event_instance(instance_ref);
	if (instance == nullptr) return std::nullopt;
	FMOD::Studio::EventDescription* event_desc = nullptr;
	g_fmod_studio_last_result = instance->getDescription(&event_desc);
	if (g_fmod_studio_last_result == FMOD_OK && event_desc != nullptr)
	{
		uint64_t result = 0;
		result = fmod_pointer_ref(event_desc, gmfmod::RefType::StudioEventDescription);
		return result;
	}
	return std::nullopt;
}

double fmod_studio_event_instance_release(uint64_t instance_ref)
{
	FMOD::Studio::EventInstance* instance = resolve_fmod_studio_event_instance(instance_ref);
	if (instance == nullptr) return 0;

	g_fmod_studio_last_result = instance->release();
	return 0;
}

// ============================================================
// Event Instance - Parameters by ID
// ============================================================

FmodStudioParameterValue fmod_studio_event_instance_get_parameter_by_id(uint64_t instance_ref, const FmodStudioParameterId& id)
{
	FmodStudioParameterValue result{};
	FMOD::Studio::EventInstance* instance = resolve_fmod_studio_event_instance(instance_ref);
	if (instance == nullptr) return result;

	float value = 0.0f, final_value = 0.0f;
	g_fmod_studio_last_result = instance->getParameterByID(to_fmod_parameter_id(id), &value, &final_value);
	return to_parameter_value(value, final_value);
}

double fmod_studio_event_instance_set_parameter_by_id(uint64_t instance_ref, const FmodStudioParameterId& id, double value, bool ignore_seek_speed)
{
	FMOD::Studio::EventInstance* instance = resolve_fmod_studio_event_instance(instance_ref);
	if (instance == nullptr) return 0;

	g_fmod_studio_last_result = instance->setParameterByID(to_fmod_parameter_id(id), (float)value, ignore_seek_speed);
	return 0;
}

double fmod_studio_event_instance_set_parameters_by_ids(uint64_t instance_ref, const std::vector<FmodStudioParameterId>& ids, const std::vector<double>& values, bool ignore_seek_speed)
{
	FMOD::Studio::EventInstance* instance = resolve_fmod_studio_event_instance(instance_ref);
	if (instance == nullptr) return 0;

	if (ids.size() != values.size())
	{
		g_fmod_studio_last_result = FMOD_ERR_INVALID_PARAM;
		return 0;
	}

	std::vector<FMOD_STUDIO_PARAMETER_ID> fmod_ids(ids.size());
	std::vector<float> fmod_values(values.size());
	for (size_t i = 0; i < ids.size(); ++i)
	{
		fmod_ids[i] = to_fmod_parameter_id(ids[i]);
		fmod_values[i] = (float)values[i];
	}

	g_fmod_studio_last_result = instance->setParametersByIDs(fmod_ids.data(), fmod_values.data(), (int)ids.size(), ignore_seek_speed);
	return 0;
}

double fmod_studio_event_instance_set_parameter_by_id_with_label(
	uint64_t instance_ref, const FmodStudioParameterId& id, std::string_view label, bool ignore_seek_speed)
{
	FMOD::Studio::EventInstance* instance = resolve_fmod_studio_event_instance(instance_ref);
	if (instance == nullptr) return 0;

	std::string label_str(label);
	g_fmod_studio_last_result = instance->setParameterByIDWithLabel(to_fmod_parameter_id(id), label_str.c_str(), ignore_seek_speed);
	return 0;
}

double fmod_studio_event_instance_set_parameter_by_name_with_label(
	uint64_t instance_ref, std::string_view name, std::string_view label, bool ignore_seek_speed)
{
	FMOD::Studio::EventInstance* instance = resolve_fmod_studio_event_instance(instance_ref);
	if (instance == nullptr) return 0;

	std::string name_str(name);
	std::string label_str(label);
	g_fmod_studio_last_result = instance->setParameterByNameWithLabel(name_str.c_str(), label_str.c_str(), ignore_seek_speed);
	return 0;
}

// ============================================================
// Event Instance - 3D Attributes
// ============================================================

FmodStudio3DAttributes fmod_studio_event_instance_get_3d_attributes(uint64_t instance_ref)
{
	FmodStudio3DAttributes result{};
	FMOD::Studio::EventInstance* instance = resolve_fmod_studio_event_instance(instance_ref);
	if (instance == nullptr) return result;

	FMOD_3D_ATTRIBUTES attributes{};
	g_fmod_studio_last_result = instance->get3DAttributes(&attributes);
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
	FMOD::Studio::EventInstance* instance = resolve_fmod_studio_event_instance(instance_ref);
	if (instance == nullptr) return result;

	float min_distance = 0.0f, max_distance = 0.0f;
	g_fmod_studio_last_result = instance->getMinMaxDistance(&min_distance, &max_distance);
	result.min_distance = (double)min_distance;
	result.max_distance = (double)max_distance;
	return result;
}

double fmod_studio_event_instance_get_listener_mask(uint64_t instance_ref)
{
	FMOD::Studio::EventInstance* instance = resolve_fmod_studio_event_instance(instance_ref);
	if (instance == nullptr) return 0.0;
	unsigned int mask = 0;
	g_fmod_studio_last_result = instance->getListenerMask(&mask);
	return (double)mask;
}

double fmod_studio_event_instance_set_listener_mask(uint64_t instance_ref, double mask)
{
	FMOD::Studio::EventInstance* instance = resolve_fmod_studio_event_instance(instance_ref);
	if (instance == nullptr) return 0;
	g_fmod_studio_last_result = instance->setListenerMask((unsigned int)mask);
	return 0;
}

// ============================================================
// Event Instance - Reverb / Properties
// ============================================================

double fmod_studio_event_instance_get_reverb_level(uint64_t instance_ref, double index)
{
	FMOD::Studio::EventInstance* instance = resolve_fmod_studio_event_instance(instance_ref);
	if (instance == nullptr) return 0.0;
	float level = 0.0f;
	g_fmod_studio_last_result = instance->getReverbLevel((int)index, &level);
	return (double)level;
}

double fmod_studio_event_instance_set_reverb_level(uint64_t instance_ref, double index, double level)
{
	FMOD::Studio::EventInstance* instance = resolve_fmod_studio_event_instance(instance_ref);
	if (instance == nullptr) return 0;
	g_fmod_studio_last_result = instance->setReverbLevel((int)index, (float)level);
	return 0;
}

double fmod_studio_event_instance_get_property(uint64_t instance_ref, enum gm_enums::FmodStudioEventProperty property_type)
{
	FMOD::Studio::EventInstance* instance = resolve_fmod_studio_event_instance(instance_ref);
	if (instance == nullptr) return 0.0;
	float value = 0.0f;
	g_fmod_studio_last_result = instance->getProperty((FMOD_STUDIO_EVENT_PROPERTY)(int)property_type, &value);
	return (double)value;
}

double fmod_studio_event_instance_set_property(uint64_t instance_ref, enum gm_enums::FmodStudioEventProperty property_type, double value)
{
	FMOD::Studio::EventInstance* instance = resolve_fmod_studio_event_instance(instance_ref);
	if (instance == nullptr) return 0;
	g_fmod_studio_last_result = instance->setProperty((FMOD_STUDIO_EVENT_PROPERTY)(int)property_type, (float)value);
	return 0;
}

// ============================================================
// Event Instance - User Data
// ============================================================

int64_t fmod_studio_event_instance_get_user_data(uint64_t instance_ref)
{
	FMOD::Studio::EventInstance* instance = resolve_fmod_studio_event_instance(instance_ref);
	if (instance == nullptr) return 0;

	return gmfmod::getUserData(instance, g_fmod_studio_last_result);
}

double fmod_studio_event_instance_set_user_data(uint64_t instance_ref, int64_t user_data)
{
	FMOD::Studio::EventInstance* instance = resolve_fmod_studio_event_instance(instance_ref);
	if (instance == nullptr) return 0;

	gmfmod::setUserData(instance, user_data, g_fmod_studio_last_result);
	return 0;
}

// ============================================================
// Event Instance - Status / Diagnostics
// ============================================================

bool fmod_studio_event_instance_is_valid(uint64_t instance_ref)
{
	FMOD::Studio::EventInstance* instance = resolve_fmod_studio_event_instance(instance_ref);
	if (instance == nullptr) return false;
	return instance->isValid();
}

bool fmod_studio_event_instance_is_virtual(uint64_t instance_ref)
{
	FMOD::Studio::EventInstance* instance = resolve_fmod_studio_event_instance(instance_ref);
	if (instance == nullptr) return false;
	bool is_virtual = false;
	g_fmod_studio_last_result = instance->isVirtual(&is_virtual);
	return is_virtual;
}

// See fmod_studio_bus_get_channel_group_ptr(): the raw pointer is what crosses
// the DLL boundary, never the ref.
uint64_t fmod_studio_event_instance_get_channel_group_ptr(uint64_t instance_ref)
{
	FMOD::Studio::EventInstance* instance = resolve_fmod_studio_event_instance(instance_ref);
	if (instance == nullptr) return 0;

	FMOD::ChannelGroup* channel_group = nullptr;
	g_fmod_studio_last_result = instance->getChannelGroup(&channel_group);
	if (g_fmod_studio_last_result != FMOD_OK || channel_group == nullptr) return 0;

	return static_cast<uint64_t>(reinterpret_cast<uintptr_t>(channel_group));
}

FmodStudioCPUUsage fmod_studio_event_instance_get_cpu_usage(uint64_t instance_ref)
{
	FmodStudioCPUUsage result{};
	FMOD::Studio::EventInstance* instance = resolve_fmod_studio_event_instance(instance_ref);
	if (instance == nullptr) return result;

	unsigned int exclusive = 0, inclusive = 0;
	g_fmod_studio_last_result = instance->getCPUUsage(&exclusive, &inclusive);
	result.exclusive = (double)exclusive;
	result.inclusive = (double)inclusive;
	return result;
}

FmodStudioMemoryUsage fmod_studio_event_instance_get_memory_usage(uint64_t instance_ref)
{
	FmodStudioMemoryUsage result{};
	FMOD::Studio::EventInstance* instance = resolve_fmod_studio_event_instance(instance_ref);
	if (instance == nullptr) return result;

	FMOD_STUDIO_MEMORY_USAGE usage{};
	g_fmod_studio_last_result = instance->getMemoryUsage(&usage);
	result.exclusive = (double)usage.exclusive;
	result.inclusive = (double)usage.inclusive;
	result.sample_data = (double)usage.sampledata;
	return result;
}

// ============================================================
// Event Instance - Callbacks and programmer sounds
// ============================================================

// Everything the trampoline needs per instance. Studio runs its update on a
// worker thread by default, so this map is touched from both that thread and
// the game thread.
struct EventInstanceState
{
	std::optional<FmodEventCallback> callback;
	std::optional<std::string> programmer_key;
	// Captured when the key is registered: the trampoline cannot ask the
	// instance for it on every SDK this builds against (see the accessor).
	FMOD::Studio::System* studio_system = nullptr;
};

static std::mutex g_event_instance_mutex;
static std::map<uintptr_t, EventInstanceState> g_event_instances;

void fmod_studio_event_instance_reset_state()
{
	std::lock_guard<std::mutex> lock(g_event_instance_mutex);
	g_event_instances.clear();
}

// The mode FMOD's own programmer_sound example, the Unity integration and the
// Godot plugin all create the sound with; an audio table's own mode is ORed in.
static const FMOD_MODE kProgrammerSoundMode =
	FMOD_LOOP_NORMAL | FMOD_CREATECOMPRESSEDSAMPLE | FMOD_NONBLOCKING;

// Answers CREATE_PROGRAMMER_SOUND on FMOD's thread: an audio table key from a
// loaded bank first, a file path when no loaded table has the key (that is
// FMOD_ERR_EVENT_NOTFOUND, measured on 2.03.06 with and without a table
// loaded). Fills the struct FMOD reads back once the callback returns.
static FMOD_RESULT createProgrammerSound(
	FMOD::Studio::System* studio_system,
	const std::string& key,
	FMOD_STUDIO_PROGRAMMER_SOUND_PROPERTIES* props)
{
	if (studio_system == nullptr) return FMOD_ERR_INVALID_HANDLE;

	FMOD::System* core_system = nullptr;
	FMOD_RESULT result = studio_system->getCoreSystem(&core_system);
	if (result != FMOD_OK) return result;

	FMOD::Sound* sound = nullptr;
	int subsound_index = -1;

	FMOD_STUDIO_SOUND_INFO info{};
	result = studio_system->getSoundInfo(key.c_str(), &info);
	if (result == FMOD_OK)
	{
		result = core_system->createSound(info.name_or_data,
			kProgrammerSoundMode | info.mode, &info.exinfo, &sound);
		subsound_index = info.subsoundindex;
	}
	else if (result == FMOD_ERR_EVENT_NOTFOUND)
	{
		// A file path. The real create is non-blocking, so a missing file would
		// come back FMOD_OK and only ever be heard as silence; an open-only pass
		// first is a blocking file open with no decode, and it reports the
		// failure here, through FMOD's own file system.
		FMOD::Sound* probe = nullptr;
		result = core_system->createSound(key.c_str(), FMOD_OPENONLY, nullptr, &probe);
		if (result != FMOD_OK) return result;
		probe->release();

		result = core_system->createSound(key.c_str(), kProgrammerSoundMode, nullptr, &sound);
	}
	if (result != FMOD_OK) return result;

	props->sound = (FMOD_SOUND*)sound;
	props->subsoundIndex = subsound_index;
	return FMOD_OK;
}

static FMOD_RESULT F_CALL CALLBACK_fmod_studio_event_instance(
	FMOD_STUDIO_EVENT_CALLBACK_TYPE type,
	FMOD_STUDIO_EVENTINSTANCE* event,
	void* parameters)
{
	if (event == nullptr)
		return FMOD_OK;

	// Keys are the truncated pointer the GML refs carry, so mask to match.
	uintptr_t instance_ptr = gmfmod::pointerKey(event);

	EventInstanceState state;
	{
		std::lock_guard<std::mutex> lock(g_event_instance_mutex);
		auto it = g_event_instances.find(instance_ptr);
		if (it == g_event_instances.end())
			return FMOD_OK;

		state = it->second;

		// The instance is gone after this; drop the entry so a recycled
		// pointer does not inherit this callback or key.
		if (type == FMOD_STUDIO_EVENT_CALLBACK_DESTROYED)
			g_event_instances.erase(it);
	}

	// The programmer sound has to be answered here, synchronously: FMOD reads
	// the struct back as soon as this returns, and the GML callback only runs
	// on the next frame. Nothing below holds the lock.
	FMOD_RESULT result = FMOD_OK;
	if (type == FMOD_STUDIO_EVENT_CALLBACK_CREATE_PROGRAMMER_SOUND && state.programmer_key.has_value())
	{
		auto* props = (FMOD_STUDIO_PROGRAMMER_SOUND_PROPERTIES*)parameters;
		if (props != nullptr)
			result = createProgrammerSound(state.studio_system, state.programmer_key.value(), props);
	}
	else if (type == FMOD_STUDIO_EVENT_CALLBACK_DESTROY_PROGRAMMER_SOUND)
	{
		// Only the create above can have put a sound here, so it is ours to
		// release - whether or not the key is still registered.
		auto* props = (FMOD_STUDIO_PROGRAMMER_SOUND_PROPERTIES*)parameters;
		if (props != nullptr && props->sound != nullptr)
			result = ((FMOD::Sound*)props->sound)->release();
	}

	// FMOD is asked for more types than GML wanted - DESTROYED for the entry
	// above, the programmer pair for the key - so the mask is applied here.
	if (state.callback.has_value() && (type & state.callback->mask) != 0)
		fmod_studio_event_call(state.callback->callback, type, event, parameters, result);

	return result;
}

// Tells FMOD what this instance's entry needs, or clears its callback when the
// entry has nothing left. The entry is read under the lock and the lock is
// released before FMOD is called.
static FMOD_RESULT applyEventInstanceCallback(FMOD::Studio::EventInstance* instance, uintptr_t instance_ptr)
{
	std::optional<FMOD_STUDIO_EVENT_CALLBACK_TYPE> fmod_mask;
	{
		std::lock_guard<std::mutex> lock(g_event_instance_mutex);
		auto it = g_event_instances.find(instance_ptr);
		if (it != g_event_instances.end())
		{
			const EventInstanceState& state = it->second;
			if (state.callback.has_value() || state.programmer_key.has_value())
			{
				// DESTROYED is always requested so the entry can be reclaimed.
				std::uint64_t mask = FMOD_STUDIO_EVENT_CALLBACK_DESTROYED;
				if (state.callback.has_value())
					mask |= state.callback->mask;
				if (state.programmer_key.has_value())
					mask |= FMOD_STUDIO_EVENT_CALLBACK_CREATE_PROGRAMMER_SOUND
						| FMOD_STUDIO_EVENT_CALLBACK_DESTROY_PROGRAMMER_SOUND;
				fmod_mask = (FMOD_STUDIO_EVENT_CALLBACK_TYPE)mask;
			}
			else
			{
				g_event_instances.erase(it);
			}
		}
	}

	if (!fmod_mask.has_value())
		return instance->setCallback(nullptr, FMOD_STUDIO_EVENT_CALLBACK_ALL);

	FMOD_RESULT result = instance->setCallback(CALLBACK_fmod_studio_event_instance, fmod_mask.value());
	if (result != FMOD_OK)
	{
		std::lock_guard<std::mutex> lock(g_event_instance_mutex);
		g_event_instances.erase(instance_ptr);
	}
	return result;
}

double fmod_studio_event_instance_set_callback(
	uint64_t instance_ref,
	const std::optional<gm::wire::GMFunction>& callback,
	enum gm_enums::FmodStudioEventCallbackType mask)
{
	FMOD::Studio::EventInstance* instance = resolve_fmod_studio_event_instance(instance_ref);
	if (instance == nullptr) return 0;

	uintptr_t instance_ptr = gmfmod::pointerKey(instance);
	{
		std::lock_guard<std::mutex> lock(g_event_instance_mutex);
		EventInstanceState& state = g_event_instances[instance_ptr];
		if (callback.has_value())
			state.callback = FmodEventCallback{ callback.value(), (FMOD_STUDIO_EVENT_CALLBACK_TYPE)(std::uint64_t)mask };
		else
			state.callback.reset();
	}

	g_fmod_studio_last_result = applyEventInstanceCallback(instance, instance_ptr);
	return 0;
}

double fmod_studio_event_instance_set_programmer_sound(uint64_t instance_ref, std::optional<std::string_view> key)
{
	FMOD::Studio::EventInstance* instance = resolve_fmod_studio_event_instance(instance_ref);
	if (instance == nullptr) return 0;

	uintptr_t instance_ptr = gmfmod::pointerKey(instance);

	// Installing this extension's callback on the instance replaces whatever
	// it inherited from its description, so an instance with no callback of
	// its own takes a copy of the description's - the copy FMOD made at
	// createInstance - and keeps reporting to it.
	FMOD::Studio::EventDescription* event_desc = nullptr;
	std::optional<FmodEventCallback> inherited;
	if (instance->getDescription(&event_desc) == FMOD_OK)
		inherited = fmod_studio_event_description_get_callback(event_desc);

	FMOD::Studio::System* studio_system = fmod_studio_current_system();

	{
		std::lock_guard<std::mutex> lock(g_event_instance_mutex);
		EventInstanceState& state = g_event_instances[instance_ptr];
		if (!state.callback.has_value() && inherited.has_value())
			state.callback = inherited;
		if (key.has_value())
		{
			state.programmer_key = std::string(key.value());
			state.studio_system = studio_system;
		}
		else
		{
			state.programmer_key.reset();
			state.studio_system = nullptr;
		}
	}

	g_fmod_studio_last_result = applyEventInstanceCallback(instance, instance_ptr);
	return 0;
}
