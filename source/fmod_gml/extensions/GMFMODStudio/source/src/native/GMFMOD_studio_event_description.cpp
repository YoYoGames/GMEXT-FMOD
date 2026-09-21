#include <native/GMFMODStudioInternal_native.h>
#include "GMFMOD_studio_event_description.h"
#include <string>
#include <string_view>
#include <optional>
#include <vector>
#include <map>
#include <mutex>
#include <cstdio>

using namespace gm_structs;

std::string fmod_studio_event_description_get_path(uint64_t event_desc_ref)
{
	FMOD::Studio::EventDescription* event_desc = resolve_fmod_studio_event_description(event_desc_ref);
	if (event_desc == nullptr) return "";
	return gmfmod::readString([event_desc](char* buf, int size, int* got) {
		return event_desc->getPath(buf, size, got);
	}, g_fmod_studio_last_result);
}

std::optional<uint64_t> fmod_studio_event_description_create_instance(uint64_t event_desc_ref)
{
	FMOD::Studio::EventDescription* event_desc = resolve_fmod_studio_event_description(event_desc_ref);
	if (event_desc == nullptr) return std::nullopt;
	FMOD::Studio::EventInstance* instance = nullptr;
	g_fmod_studio_last_result = event_desc->createInstance(&instance);
	if (g_fmod_studio_last_result == FMOD_OK && instance != nullptr)
	{
		uint64_t result = 0;
		result = fmod_pointer_ref(instance, gmfmod::RefType::StudioEventInstance);
		return result;
	}
	return std::nullopt;
}

double fmod_studio_event_description_get_instance_count(uint64_t event_desc_ref)
{
	FMOD::Studio::EventDescription* event_desc = resolve_fmod_studio_event_description(event_desc_ref);
	if (event_desc == nullptr) return 0.0;
	int count = 0;
	g_fmod_studio_last_result = event_desc->getInstanceCount(&count);
	return (double)count;
}

std::optional<uint64_t> fmod_studio_event_description_get_instance_at(uint64_t event_desc_ref, double index)
{
	FMOD::Studio::EventDescription* event_desc = resolve_fmod_studio_event_description(event_desc_ref);
	if (event_desc == nullptr) return std::nullopt;

	int idx = (int)index;
	if (idx < 0) return std::nullopt;

	std::vector<FMOD::Studio::EventInstance*> instances((size_t)idx + 1, nullptr);
	int count = 0;
	g_fmod_studio_last_result = event_desc->getInstanceList(instances.data(), (int)instances.size(), &count);
	if (g_fmod_studio_last_result != FMOD_OK || idx >= count) return std::nullopt;

	FMOD::Studio::EventInstance* instance = instances[(size_t)idx];
	if (instance == nullptr) return std::nullopt;

	return fmod_pointer_ref(instance, gmfmod::RefType::StudioEventInstance);
}

bool fmod_studio_event_description_is_snapshot(uint64_t event_desc_ref)
{
	FMOD::Studio::EventDescription* event_desc = resolve_fmod_studio_event_description(event_desc_ref);
	if (event_desc == nullptr) return false;
	bool is_snapshot = false;
	g_fmod_studio_last_result = event_desc->isSnapshot(&is_snapshot);
	return is_snapshot;
}

bool fmod_studio_event_description_is_one_shot(uint64_t event_desc_ref)
{
	FMOD::Studio::EventDescription* event_desc = resolve_fmod_studio_event_description(event_desc_ref);
	if (event_desc == nullptr) return false;
	bool is_one_shot = false;
	g_fmod_studio_last_result = event_desc->isOneshot(&is_one_shot);
	return is_one_shot;
}

bool fmod_studio_event_description_has_sustain_point(uint64_t event_desc_ref)
{
	FMOD::Studio::EventDescription* event_desc = resolve_fmod_studio_event_description(event_desc_ref);
	if (event_desc == nullptr) return false;
	bool has_sustain = false;
	g_fmod_studio_last_result = event_desc->hasSustainPoint(&has_sustain);
	return has_sustain;
}

double fmod_studio_event_description_get_length(uint64_t event_desc_ref)
{
	FMOD::Studio::EventDescription* event_desc = resolve_fmod_studio_event_description(event_desc_ref);
	if (event_desc == nullptr) return 0.0;
	int length = 0;
	g_fmod_studio_last_result = event_desc->getLength(&length);
	return (double)length;
}

double fmod_studio_event_description_get_parameter_count(uint64_t event_desc_ref)
{
	FMOD::Studio::EventDescription* event_desc = resolve_fmod_studio_event_description(event_desc_ref);
	if (event_desc == nullptr) return 0.0;
	int count = 0;
	g_fmod_studio_last_result = event_desc->getParameterDescriptionCount(&count);
	return (double)count;
}

double fmod_studio_event_description_release_all_instances(uint64_t event_desc_ref)
{
	FMOD::Studio::EventDescription* event_desc = resolve_fmod_studio_event_description(event_desc_ref);
	if (event_desc == nullptr) return 0;
	g_fmod_studio_last_result = event_desc->releaseAllInstances();
	return 0;
}

// ============================================================
// Event Description - Parameters
// ============================================================

FmodStudioParameterDescription fmod_studio_event_description_get_parameter_description_by_name(
	uint64_t event_desc_ref, std::string_view name)
{
	FmodStudioParameterDescription result{};

	FMOD::Studio::EventDescription* event_desc = resolve_fmod_studio_event_description(event_desc_ref);
	if (event_desc == nullptr) return result;

	std::string name_str(name);
	FMOD_STUDIO_PARAMETER_DESCRIPTION desc{};
	g_fmod_studio_last_result = event_desc->getParameterDescriptionByName(name_str.c_str(), &desc);
	if (g_fmod_studio_last_result != FMOD_OK) return result;

	return convert_parameter_description(desc);
}

// ============================================================
// Event Description - Sample Data
// ============================================================

double fmod_studio_event_description_load_sample_data(uint64_t event_desc_ref)
{
	FMOD::Studio::EventDescription* event_desc = resolve_fmod_studio_event_description(event_desc_ref);
	if (event_desc == nullptr) return 0;

	g_fmod_studio_last_result = event_desc->loadSampleData();
	return 0;
}

double fmod_studio_event_description_unload_sample_data(uint64_t event_desc_ref)
{
	FMOD::Studio::EventDescription* event_desc = resolve_fmod_studio_event_description(event_desc_ref);
	if (event_desc == nullptr) return 0;

	g_fmod_studio_last_result = event_desc->unloadSampleData();
	return 0;
}

gm_enums::FmodStudioLoadingState fmod_studio_event_description_get_sample_loading_state(uint64_t event_desc_ref)
{
	FMOD::Studio::EventDescription* event_desc = resolve_fmod_studio_event_description(event_desc_ref);
	if (event_desc == nullptr) return (gm_enums::FmodStudioLoadingState)0;

	FMOD_STUDIO_LOADING_STATE state = FMOD_STUDIO_LOADING_STATE_UNLOADED;
	g_fmod_studio_last_result = event_desc->getSampleLoadingState(&state);
	return (gm_enums::FmodStudioLoadingState)state;
}

// ============================================================
// Event Description - Status
// ============================================================

bool fmod_studio_event_description_is_valid(uint64_t event_desc_ref)
{
	FMOD::Studio::EventDescription* event_desc = resolve_fmod_studio_event_description(event_desc_ref);
	if (event_desc == nullptr) return false;

	return event_desc->isValid();
}

bool fmod_studio_event_description_is_3d(uint64_t event_desc_ref)
{
	FMOD::Studio::EventDescription* event_desc = resolve_fmod_studio_event_description(event_desc_ref);
	if (event_desc == nullptr) return false;

	bool is_3d = false;
	g_fmod_studio_last_result = event_desc->is3D(&is_3d);
	return is_3d;
}

bool fmod_studio_event_description_is_stream(uint64_t event_desc_ref)
{
	FMOD::Studio::EventDescription* event_desc = resolve_fmod_studio_event_description(event_desc_ref);
	if (event_desc == nullptr) return false;

	bool is_stream = false;
	g_fmod_studio_last_result = event_desc->isStream(&is_stream);
	return is_stream;
}

bool fmod_studio_event_description_is_doppler_enabled(uint64_t event_desc_ref)
{
	FMOD::Studio::EventDescription* event_desc = resolve_fmod_studio_event_description(event_desc_ref);
	if (event_desc == nullptr) return false;

	bool doppler = false;
	g_fmod_studio_last_result = event_desc->isDopplerEnabled(&doppler);
	return doppler;
}

std::string fmod_studio_event_description_get_id(uint64_t event_desc_ref)
{
	FMOD::Studio::EventDescription* event_desc = resolve_fmod_studio_event_description(event_desc_ref);
	if (event_desc == nullptr) return std::string();

	FMOD_GUID guid{};
	g_fmod_studio_last_result = event_desc->getID(&guid);
	if (g_fmod_studio_last_result != FMOD_OK) return std::string();

	char buffer[64]{};
	std::snprintf(buffer, sizeof(buffer),
		"{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
		guid.Data1, guid.Data2, guid.Data3,
		guid.Data4[0], guid.Data4[1], guid.Data4[2], guid.Data4[3],
		guid.Data4[4], guid.Data4[5], guid.Data4[6], guid.Data4[7]);
	return std::string(buffer);
}

FmodStudioMinMaxDistance fmod_studio_event_description_get_min_max_distance(uint64_t event_desc_ref)
{
	FmodStudioMinMaxDistance result{};
	FMOD::Studio::EventDescription* event_desc = resolve_fmod_studio_event_description(event_desc_ref);
	if (event_desc == nullptr) return result;

	float min_distance = 0.0f, max_distance = 0.0f;
	g_fmod_studio_last_result = event_desc->getMinMaxDistance(&min_distance, &max_distance);
	result.min_distance = (double)min_distance;
	result.max_distance = (double)max_distance;
	return result;
}

double fmod_studio_event_description_get_sound_size(uint64_t event_desc_ref)
{
	FMOD::Studio::EventDescription* event_desc = resolve_fmod_studio_event_description(event_desc_ref);
	if (event_desc == nullptr) return 0.0;

	float size = 0.0f;
	g_fmod_studio_last_result = event_desc->getSoundSize(&size);
	return (double)size;
}

// ============================================================
// Event Description - Callback
// ============================================================

// Shared by both event trampolines, so the description and instance paths
// cannot drift apart - which is what happened to the pre-extgen pair, whose own
// comment asked the reader to copy/paste changes between them.
//
// FMOD's `parameters` is a union discriminated by `type`. Two members are
// deliberately not forwarded: the FMOD_SOUND* on the programmer-sound and
// sound-played types, and the FMOD_DSP* on the plugin types. Both belong to
// GMFMOD's registry rather than this one, so a ref minted here would resolve
// against the wrong map in the other DLL. The programmer sound is answered
// natively instead - see the instance trampoline - and `result` is how that
// went.
void fmod_studio_event_call(
	const gm::wire::GMFunction& callback,
	FMOD_STUDIO_EVENT_CALLBACK_TYPE type,
	FMOD_STUDIO_EVENTINSTANCE* event,
	void* parameters,
	FMOD_RESULT result)
{
	// Keys are the truncated pointer the GML refs carry, so mask to match.
	uintptr_t instance_ptr = gmfmod::pointerKey(event);
	uint64_t ref = gmfmod::packRef((uint32_t)instance_ptr, gmfmod::RefType::StudioEventInstance);
	double kind = (double)type;

	switch (type)
	{
		case FMOD_STUDIO_EVENT_CALLBACK_TIMELINE_MARKER:
		{
			const FMOD_STUDIO_TIMELINE_MARKER_PROPERTIES* props =
				(const FMOD_STUDIO_TIMELINE_MARKER_PROPERTIES*)parameters;
			if (props == nullptr) break;

			FmodStudioTimelineMarkerProperties out{};
			out.name = props->name != nullptr ? props->name : "";
			out.position = (double)props->position;
			callback.call(ref, kind, out);
			return;
		}
		case FMOD_STUDIO_EVENT_CALLBACK_TIMELINE_BEAT:
		{
			const FMOD_STUDIO_TIMELINE_BEAT_PROPERTIES* props =
				(const FMOD_STUDIO_TIMELINE_BEAT_PROPERTIES*)parameters;
			if (props == nullptr) break;

			FmodStudioTimelineBeatProperties out{};
			out.bar = (double)props->bar;
			out.beat = (double)props->beat;
			out.position = (double)props->position;
			out.tempo = (double)props->tempo;
			out.time_signature_upper = (double)props->timesignatureupper;
			out.time_signature_lower = (double)props->timesignaturelower;
			callback.call(ref, kind, out);
			return;
		}
		case FMOD_STUDIO_EVENT_CALLBACK_NESTED_TIMELINE_BEAT:
		{
			const FMOD_STUDIO_TIMELINE_NESTED_BEAT_PROPERTIES* props =
				(const FMOD_STUDIO_TIMELINE_NESTED_BEAT_PROPERTIES*)parameters;
			if (props == nullptr) break;

			FmodStudioTimelineNestedBeatProperties out{};
			out.event_id = gmfmod::formatGuid(props->eventid);
			out.bar = (double)props->properties.bar;
			out.beat = (double)props->properties.beat;
			out.position = (double)props->properties.position;
			out.tempo = (double)props->properties.tempo;
			out.time_signature_upper = (double)props->properties.timesignatureupper;
			out.time_signature_lower = (double)props->properties.timesignaturelower;
			callback.call(ref, kind, out);
			return;
		}
		case FMOD_STUDIO_EVENT_CALLBACK_CREATE_PROGRAMMER_SOUND:
		case FMOD_STUDIO_EVENT_CALLBACK_DESTROY_PROGRAMMER_SOUND:
		{
			const FMOD_STUDIO_PROGRAMMER_SOUND_PROPERTIES* props =
				(const FMOD_STUDIO_PROGRAMMER_SOUND_PROPERTIES*)parameters;
			if (props == nullptr) break;

			// By the time this runs the instance trampoline has already filled
			// (or released) `sound` for FMOD; GML gets the outcome, not the sound.
			FmodStudioProgrammerSoundProperties out{};
			out.name = props->name != nullptr ? props->name : "";
			out.sub_sound_index = (double)props->subsoundIndex;
			out.result = (gm_enums::FmodStudioResult)result;
			callback.call(ref, kind, out);
			return;
		}
		case FMOD_STUDIO_EVENT_CALLBACK_PLUGIN_CREATED:
		case FMOD_STUDIO_EVENT_CALLBACK_PLUGIN_DESTROYED:
		{
			const FMOD_STUDIO_PLUGIN_INSTANCE_PROPERTIES* props =
				(const FMOD_STUDIO_PLUGIN_INSTANCE_PROPERTIES*)parameters;
			if (props == nullptr) break;

			FmodStudioPluginInstanceProperties out{};
			out.name = props->name != nullptr ? props->name : "";
			callback.call(ref, kind, out);
			return;
		}
		case FMOD_STUDIO_EVENT_CALLBACK_START_EVENT_COMMAND:
		{
			FMOD_STUDIO_EVENTINSTANCE* started = (FMOD_STUDIO_EVENTINSTANCE*)parameters;
			if (started == nullptr) break;

			uintptr_t started_ptr = gmfmod::pointerKey(started);
			callback.call(ref, kind,
				gmfmod::packRef((uint32_t)started_ptr, gmfmod::RefType::StudioEventInstance));
			return;
		}
		default:
			break;
	}

	callback.call(ref, kind, std::optional<double>{});
}

// Studio runs its update on a worker thread by default, so this map is touched
// from both that thread and the game thread.
static std::mutex g_event_description_callback_mutex;
static std::map<uintptr_t, FmodEventCallback> g_event_description_callbacks;

void fmod_studio_event_description_reset_state()
{
	std::lock_guard<std::mutex> lock(g_event_description_callback_mutex);
	g_event_description_callbacks.clear();
}

std::optional<FmodEventCallback> fmod_studio_event_description_get_callback(
	FMOD::Studio::EventDescription* event_desc)
{
	if (event_desc == nullptr) return std::nullopt;

	std::lock_guard<std::mutex> lock(g_event_description_callback_mutex);
	auto it = g_event_description_callbacks.find(gmfmod::pointerKey(event_desc));
	if (it == g_event_description_callbacks.end()) return std::nullopt;
	return it->second;
}

void fmod_studio_event_description_forget_bank(FMOD::Studio::Bank* bank)
{
	if (bank == nullptr) return;

	int count = 0;
	if (bank->getEventCount(&count) != FMOD_OK || count <= 0) return;

	std::vector<FMOD::Studio::EventDescription*> descriptions(count, nullptr);
	int retrieved = 0;
	if (bank->getEventList(descriptions.data(), count, &retrieved) != FMOD_OK) return;

	std::lock_guard<std::mutex> lock(g_event_description_callback_mutex);
	for (int i = 0; i < retrieved; ++i)
	{
		if (descriptions[i] == nullptr) continue;
		g_event_description_callbacks.erase(
			gmfmod::pointerKey(descriptions[i]));
	}
}

// FMOD hands the trampoline the instance, not the description the callback was
// set on, so the description is recovered from the instance to find it.
static FMOD_RESULT F_CALL CALLBACK_fmod_studio_event_description(
	FMOD_STUDIO_EVENT_CALLBACK_TYPE type,
	FMOD_STUDIO_EVENTINSTANCE* event,
	void* parameters)
{
	if (event == nullptr)
		return FMOD_OK;

	FMOD::Studio::EventDescription* event_desc = nullptr;
	if (((FMOD::Studio::EventInstance*)event)->getDescription(&event_desc) != FMOD_OK
		|| event_desc == nullptr)
		return FMOD_OK;

	uintptr_t desc_ptr = gmfmod::pointerKey(event_desc);

	std::optional<FmodEventCallback> callback;
	{
		std::lock_guard<std::mutex> lock(g_event_description_callback_mutex);
		auto it = g_event_description_callbacks.find(desc_ptr);
		if (it == g_event_description_callbacks.end())
			return FMOD_OK;

		callback = it->second;
	}

	// FMOD was given exactly the mask GML asked for on this path, so no filter.
	fmod_studio_event_call(callback->callback, type, event, parameters);
	return FMOD_OK;
}

double fmod_studio_event_description_set_callback(
	uint64_t event_desc_ref,
	const std::optional<gm::wire::GMFunction>& callback,
	enum gm_enums::FmodStudioEventCallbackType callback_mask)
{
	FMOD::Studio::EventDescription* event_desc = resolve_fmod_studio_event_description(event_desc_ref);
	if (event_desc == nullptr) return 0;

	uintptr_t desc_ptr = gmfmod::pointerKey(event_desc);

	if (!callback.has_value())
	{
		{
			std::lock_guard<std::mutex> lock(g_event_description_callback_mutex);
			g_event_description_callbacks.erase(desc_ptr);
		}
		g_fmod_studio_last_result = event_desc->setCallback(nullptr, FMOD_STUDIO_EVENT_CALLBACK_ALL);
		return 0;
	}

	FMOD_STUDIO_EVENT_CALLBACK_TYPE fmod_mask =
		(FMOD_STUDIO_EVENT_CALLBACK_TYPE)(std::uint64_t)callback_mask;
	{
		std::lock_guard<std::mutex> lock(g_event_description_callback_mutex);
		g_event_description_callbacks.insert_or_assign(desc_ptr,
			FmodEventCallback{ callback.value(), fmod_mask });
	}

	g_fmod_studio_last_result = event_desc->setCallback(
		CALLBACK_fmod_studio_event_description, fmod_mask);
	if (g_fmod_studio_last_result != FMOD_OK)
	{
		std::lock_guard<std::mutex> lock(g_event_description_callback_mutex);
		g_event_description_callbacks.erase(desc_ptr);
	}
	return 0;
}

// ============================================================
// Event Description - User Data
// ============================================================

int64_t fmod_studio_event_description_get_user_data(uint64_t event_desc_ref)
{
	FMOD::Studio::EventDescription* event_desc = resolve_fmod_studio_event_description(event_desc_ref);
	if (event_desc == nullptr) return 0;

	return gmfmod::getUserData(event_desc, g_fmod_studio_last_result);
}

double fmod_studio_event_description_set_user_data(uint64_t event_desc_ref, int64_t user_data)
{
	FMOD::Studio::EventDescription* event_desc = resolve_fmod_studio_event_description(event_desc_ref);
	if (event_desc == nullptr) return 0;

	gmfmod::setUserData(event_desc, user_data, g_fmod_studio_last_result);
	return 0;
}

// ============================================================
// Event Description - User Properties
// ============================================================

static FmodStudioUserProperty convert_user_property(const FMOD_STUDIO_USER_PROPERTY& property)
{
	FmodStudioUserProperty result{};
	result.name = property.name != nullptr ? std::string(property.name) : std::string();
	result.type = (gm_enums::FmodStudioUserPropertyType)(int)property.type;
	switch (property.type)
	{
	case FMOD_STUDIO_USER_PROPERTY_TYPE_INTEGER:
		result.int_value = (double)property.intvalue;
		break;
	case FMOD_STUDIO_USER_PROPERTY_TYPE_BOOLEAN:
		result.bool_value = property.boolvalue;
		break;
	case FMOD_STUDIO_USER_PROPERTY_TYPE_FLOAT:
		result.float_value = (double)property.floatvalue;
		break;
	case FMOD_STUDIO_USER_PROPERTY_TYPE_STRING:
		result.string_value = property.stringvalue != nullptr ? std::string(property.stringvalue) : std::string();
		break;
	default:
		break;
	}
	return result;
}

FmodStudioUserProperty fmod_studio_event_description_get_user_property(uint64_t event_desc_ref, std::string_view name)
{
	FmodStudioUserProperty result{};
	FMOD::Studio::EventDescription* event_desc = resolve_fmod_studio_event_description(event_desc_ref);
	if (event_desc == nullptr) return result;

	std::string name_str(name);
	FMOD_STUDIO_USER_PROPERTY property{};
	g_fmod_studio_last_result = event_desc->getUserProperty(name_str.c_str(), &property);
	if (g_fmod_studio_last_result != FMOD_OK) return result;

	return convert_user_property(property);
}

FmodStudioUserProperty fmod_studio_event_description_get_user_property_at(uint64_t event_desc_ref, double index)
{
	FmodStudioUserProperty result{};
	FMOD::Studio::EventDescription* event_desc = resolve_fmod_studio_event_description(event_desc_ref);
	if (event_desc == nullptr) return result;

	FMOD_STUDIO_USER_PROPERTY property{};
	g_fmod_studio_last_result = event_desc->getUserPropertyByIndex((int)index, &property);
	if (g_fmod_studio_last_result != FMOD_OK) return result;

	return convert_user_property(property);
}

double fmod_studio_event_description_get_user_property_count(uint64_t event_desc_ref)
{
	FMOD::Studio::EventDescription* event_desc = resolve_fmod_studio_event_description(event_desc_ref);
	if (event_desc == nullptr) return 0.0;

	int count = 0;
	g_fmod_studio_last_result = event_desc->getUserPropertyCount(&count);
	return (double)count;
}

// ============================================================
// Event Description - Parameter Introspection (by id / by index)
// ============================================================

FmodStudioParameterDescription fmod_studio_event_description_get_parameter_description_by_id(
	uint64_t event_desc_ref, double id_data1, double id_data2)
{
	FmodStudioParameterDescription result{};
	FMOD::Studio::EventDescription* event_desc = resolve_fmod_studio_event_description(event_desc_ref);
	if (event_desc == nullptr) return result;

	FMOD_STUDIO_PARAMETER_ID id{};
	id.data1 = (unsigned int)id_data1;
	id.data2 = (unsigned int)id_data2;

	FMOD_STUDIO_PARAMETER_DESCRIPTION desc{};
	g_fmod_studio_last_result = event_desc->getParameterDescriptionByID(id, &desc);
	if (g_fmod_studio_last_result != FMOD_OK) return result;

	return convert_parameter_description(desc);
}

FmodStudioParameterDescription fmod_studio_event_description_get_parameter_description_at(
	uint64_t event_desc_ref, double index)
{
	FmodStudioParameterDescription result{};
	FMOD::Studio::EventDescription* event_desc = resolve_fmod_studio_event_description(event_desc_ref);
	if (event_desc == nullptr) return result;

	FMOD_STUDIO_PARAMETER_DESCRIPTION desc{};
	g_fmod_studio_last_result = event_desc->getParameterDescriptionByIndex((int)index, &desc);
	if (g_fmod_studio_last_result != FMOD_OK) return result;

	return convert_parameter_description(desc);
}

std::string fmod_studio_event_description_get_parameter_label_by_id(
	uint64_t event_desc_ref, double id_data1, double id_data2, double label_index)
{
	FMOD::Studio::EventDescription* event_desc = resolve_fmod_studio_event_description(event_desc_ref);
	if (event_desc == nullptr) return std::string();

	FMOD_STUDIO_PARAMETER_ID id{};
	id.data1 = (unsigned int)id_data1;
	id.data2 = (unsigned int)id_data2;

	return gmfmod::readString([event_desc, id, label_index](char* buf, int size, int* got) {
		return event_desc->getParameterLabelByID(id, (int)label_index, buf, size, got);
	}, g_fmod_studio_last_result);
}

std::string fmod_studio_event_description_get_parameter_label_at(
	uint64_t event_desc_ref, double index, double label_index)
{
	FMOD::Studio::EventDescription* event_desc = resolve_fmod_studio_event_description(event_desc_ref);
	if (event_desc == nullptr) return std::string();

	return gmfmod::readString([event_desc, index, label_index](char* buf, int size, int* got) {
		return event_desc->getParameterLabelByIndex((int)index, (int)label_index, buf, size, got);
	}, g_fmod_studio_last_result);
}

std::string fmod_studio_event_description_get_parameter_label_by_name(
	uint64_t event_desc_ref, std::string_view name, double label_index)
{
	FMOD::Studio::EventDescription* event_desc = resolve_fmod_studio_event_description(event_desc_ref);
	if (event_desc == nullptr) return std::string();

	std::string name_str(name);
	return gmfmod::readString([event_desc, &name_str, label_index](char* buf, int size, int* got) {
		return event_desc->getParameterLabelByName(name_str.c_str(), (int)label_index, buf, size, got);
	}, g_fmod_studio_last_result);
}
