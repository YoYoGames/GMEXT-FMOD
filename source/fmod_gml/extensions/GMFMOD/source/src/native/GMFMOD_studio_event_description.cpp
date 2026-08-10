#include <native/GMFMODInternal_native.h>
#include "GMFMOD_studio_event_description.h"
#include <string>
#include <string_view>
#include <optional>
#include <vector>
#include <cstdio>

using namespace gm_structs;

std::string fmod_studio_event_description_get_path(uint64_t event_desc_ref)
{
	FMOD::Studio::EventDescription* event_desc = nullptr;
	validate_fmod_studio_event_description(event_desc_ref, event_desc);
	if (event_desc == nullptr) return "";
	char path[256] = {};
	int capacity = sizeof(path);
	g_fmod_last_result = event_desc->getPath(path, capacity, nullptr);
	return std::string(path);
}

std::optional<uint64_t> fmod_studio_event_description_create_instance(uint64_t event_desc_ref)
{
	FMOD::Studio::EventDescription* event_desc = nullptr;
	validate_fmod_studio_event_description(event_desc_ref, event_desc);
	if (event_desc == nullptr) return std::nullopt;
	FMOD::Studio::EventInstance* instance = nullptr;
	g_fmod_last_result = event_desc->createInstance(&instance);
	if (g_fmod_last_result == FMOD_OK && instance != nullptr)
	{
		uint64_t result = 0;
		result = packIndexIntoRef((uint32_t)reinterpret_cast<uintptr_t>(instance), GM_FMOD_STUDIO_TYPE_EVENT_INSTANCE);
		return result;
	}
	return std::nullopt;
}

double fmod_studio_event_description_get_instance_count(uint64_t event_desc_ref)
{
	FMOD::Studio::EventDescription* event_desc = nullptr;
	validate_fmod_studio_event_description(event_desc_ref, event_desc);
	if (event_desc == nullptr) return 0.0;
	int count = 0;
	g_fmod_last_result = event_desc->getInstanceCount(&count);
	return (double)count;
}

std::optional<uint64_t> fmod_studio_event_description_get_instance_at(uint64_t event_desc_ref, double index)
{
	FMOD::Studio::EventDescription* event_desc = nullptr;
	validate_fmod_studio_event_description(event_desc_ref, event_desc);
	if (event_desc == nullptr) return std::nullopt;

	int idx = (int)index;
	if (idx < 0) return std::nullopt;

	std::vector<FMOD::Studio::EventInstance*> instances((size_t)idx + 1, nullptr);
	int count = 0;
	g_fmod_last_result = event_desc->getInstanceList(instances.data(), (int)instances.size(), &count);
	if (g_fmod_last_result != FMOD_OK || idx >= count) return std::nullopt;

	FMOD::Studio::EventInstance* instance = instances[(size_t)idx];
	if (instance == nullptr) return std::nullopt;

	return packIndexIntoRef((uint32_t)reinterpret_cast<uintptr_t>(instance), GM_FMOD_STUDIO_TYPE_EVENT_INSTANCE);
}

double fmod_studio_event_description_is_snapshot(uint64_t event_desc_ref)
{
	FMOD::Studio::EventDescription* event_desc = nullptr;
	validate_fmod_studio_event_description(event_desc_ref, event_desc);
	if (event_desc == nullptr) return 0.0;
	bool is_snapshot = false;
	g_fmod_last_result = event_desc->isSnapshot(&is_snapshot);
	return is_snapshot ? 1.0 : 0.0;
}

double fmod_studio_event_description_is_one_shot(uint64_t event_desc_ref)
{
	FMOD::Studio::EventDescription* event_desc = nullptr;
	validate_fmod_studio_event_description(event_desc_ref, event_desc);
	if (event_desc == nullptr) return 0.0;
	bool is_one_shot = false;
	g_fmod_last_result = event_desc->isOneshot(&is_one_shot);
	return is_one_shot ? 1.0 : 0.0;
}

double fmod_studio_event_description_has_sustain_point(uint64_t event_desc_ref)
{
	FMOD::Studio::EventDescription* event_desc = nullptr;
	validate_fmod_studio_event_description(event_desc_ref, event_desc);
	if (event_desc == nullptr) return 0.0;
	bool has_sustain = false;
	g_fmod_last_result = event_desc->hasSustainPoint(&has_sustain);
	return has_sustain ? 1.0 : 0.0;
}

double fmod_studio_event_description_get_length(uint64_t event_desc_ref)
{
	FMOD::Studio::EventDescription* event_desc = nullptr;
	validate_fmod_studio_event_description(event_desc_ref, event_desc);
	if (event_desc == nullptr) return 0.0;
	int length = 0;
	g_fmod_last_result = event_desc->getLength(&length);
	return (double)length;
}

double fmod_studio_event_description_get_parameter_count(uint64_t event_desc_ref)
{
	FMOD::Studio::EventDescription* event_desc = nullptr;
	validate_fmod_studio_event_description(event_desc_ref, event_desc);
	if (event_desc == nullptr) return 0.0;
	int count = 0;
	g_fmod_last_result = event_desc->getParameterDescriptionCount(&count);
	return (double)count;
}

double fmod_studio_event_description_release_all_instances(uint64_t event_desc_ref)
{
	FMOD::Studio::EventDescription* event_desc = nullptr;
	validate_fmod_studio_event_description(event_desc_ref, event_desc);
	if (event_desc == nullptr) return 0;
	g_fmod_last_result = event_desc->releaseAllInstances();
	return 0;
}

// ============================================================
// Event Description - Parameters
// ============================================================

FmodStudioParameterDescription fmod_studio_event_description_get_parameter_description_by_name(
	uint64_t event_desc_ref, std::string_view name)
{
	FmodStudioParameterDescription result{};

	FMOD::Studio::EventDescription* event_desc = nullptr;
	validate_fmod_studio_event_description(event_desc_ref, event_desc);
	if (event_desc == nullptr) return result;

	std::string name_str(name);
	FMOD_STUDIO_PARAMETER_DESCRIPTION desc{};
	g_fmod_last_result = event_desc->getParameterDescriptionByName(name_str.c_str(), &desc);
	if (g_fmod_last_result != FMOD_OK) return result;

	result.name = desc.name != nullptr ? std::string(desc.name) : std::string();
	result.id_data1 = (double)desc.id.data1;
	result.id_data2 = (double)desc.id.data2;
	result.minimum = (double)desc.minimum;
	result.maximum = (double)desc.maximum;
	result.defaultvalue = (double)desc.defaultvalue;
	result.type = (gm_enums::FmodStudioUserPropertyType)(int)desc.type;
	result.flags = (gm_enums::FmodStudioParameterFlags)(int)desc.flags;
	return result;
}

// ============================================================
// Event Description - Sample Data
// ============================================================

double fmod_studio_event_description_load_sample_data(uint64_t event_desc_ref)
{
	FMOD::Studio::EventDescription* event_desc = nullptr;
	validate_fmod_studio_event_description(event_desc_ref, event_desc);
	if (event_desc == nullptr) return 0;

	g_fmod_last_result = event_desc->loadSampleData();
	return 0;
}

double fmod_studio_event_description_unload_sample_data(uint64_t event_desc_ref)
{
	FMOD::Studio::EventDescription* event_desc = nullptr;
	validate_fmod_studio_event_description(event_desc_ref, event_desc);
	if (event_desc == nullptr) return 0;

	g_fmod_last_result = event_desc->unloadSampleData();
	return 0;
}

double fmod_studio_event_description_get_sample_loading_state(uint64_t event_desc_ref)
{
	FMOD::Studio::EventDescription* event_desc = nullptr;
	validate_fmod_studio_event_description(event_desc_ref, event_desc);
	if (event_desc == nullptr) return 0.0;

	FMOD_STUDIO_LOADING_STATE state = FMOD_STUDIO_LOADING_STATE_UNLOADED;
	g_fmod_last_result = event_desc->getSampleLoadingState(&state);
	return (double)state;
}

// ============================================================
// Event Description - Status
// ============================================================

double fmod_studio_event_description_is_valid(uint64_t event_desc_ref)
{
	FMOD::Studio::EventDescription* event_desc = nullptr;
	validate_fmod_studio_event_description(event_desc_ref, event_desc);
	if (event_desc == nullptr) return 0.0;

	return event_desc->isValid() ? 1.0 : 0.0;
}

double fmod_studio_event_description_is_3d(uint64_t event_desc_ref)
{
	FMOD::Studio::EventDescription* event_desc = nullptr;
	validate_fmod_studio_event_description(event_desc_ref, event_desc);
	if (event_desc == nullptr) return 0.0;

	bool is_3d = false;
	g_fmod_last_result = event_desc->is3D(&is_3d);
	return is_3d ? 1.0 : 0.0;
}

double fmod_studio_event_description_is_stream(uint64_t event_desc_ref)
{
	FMOD::Studio::EventDescription* event_desc = nullptr;
	validate_fmod_studio_event_description(event_desc_ref, event_desc);
	if (event_desc == nullptr) return 0.0;

	bool is_stream = false;
	g_fmod_last_result = event_desc->isStream(&is_stream);
	return is_stream ? 1.0 : 0.0;
}

double fmod_studio_event_description_is_doppler_enabled(uint64_t event_desc_ref)
{
	FMOD::Studio::EventDescription* event_desc = nullptr;
	validate_fmod_studio_event_description(event_desc_ref, event_desc);
	if (event_desc == nullptr) return 0.0;

	bool doppler = false;
	g_fmod_last_result = event_desc->isDopplerEnabled(&doppler);
	return doppler ? 1.0 : 0.0;
}

std::string fmod_studio_event_description_get_id(uint64_t event_desc_ref)
{
	FMOD::Studio::EventDescription* event_desc = nullptr;
	validate_fmod_studio_event_description(event_desc_ref, event_desc);
	if (event_desc == nullptr) return std::string();

	FMOD_GUID guid{};
	g_fmod_last_result = event_desc->getID(&guid);
	if (g_fmod_last_result != FMOD_OK) return std::string();

	char buffer[64]{};
	std::snprintf(buffer, sizeof(buffer),
		"{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
		guid.Data1, guid.Data2, guid.Data3,
		guid.Data4[0], guid.Data4[1], guid.Data4[2], guid.Data4[3],
		guid.Data4[4], guid.Data4[5], guid.Data4[6], guid.Data4[7]);
	return std::string(buffer);
}

FmodMinMaxDistance fmod_studio_event_description_get_min_max_distance(uint64_t event_desc_ref)
{
	FmodMinMaxDistance result{};
	FMOD::Studio::EventDescription* event_desc = nullptr;
	validate_fmod_studio_event_description(event_desc_ref, event_desc);
	if (event_desc == nullptr) return result;

	float min_distance = 0.0f, max_distance = 0.0f;
	g_fmod_last_result = event_desc->getMinMaxDistance(&min_distance, &max_distance);
	result.min_distance = (double)min_distance;
	result.max_distance = (double)max_distance;
	return result;
}

double fmod_studio_event_description_get_sound_size(uint64_t event_desc_ref)
{
	FMOD::Studio::EventDescription* event_desc = nullptr;
	validate_fmod_studio_event_description(event_desc_ref, event_desc);
	if (event_desc == nullptr) return 0.0;

	float size = 0.0f;
	g_fmod_last_result = event_desc->getSoundSize(&size);
	return (double)size;
}

// ============================================================
// Event Description - Callback (mask-only stub, see fmod_fetch_callbacks)
// ============================================================

// No GMFunction is passed for this callback in the current spec, so there is no
// path to deliver event details back to GML. We still forward the mask to FMOD
// with a trampoline that counts fired events in the shared g_fmod_callback_count
// (drained by fmod_fetch_callbacks() in GMFMOD_utility.cpp).
static FMOD_RESULT F_CALL CALLBACK_fmod_studio_event_description(
	FMOD_STUDIO_EVENT_CALLBACK_TYPE type,
	FMOD_STUDIO_EVENTINSTANCE* event,
	void* parameters)
{
	g_fmod_callback_count.fetch_add(1, std::memory_order_relaxed);
	return FMOD_OK;
}

double fmod_studio_event_description_set_callback(uint64_t event_desc_ref, double callback_mask)
{
	FMOD::Studio::EventDescription* event_desc = nullptr;
	validate_fmod_studio_event_description(event_desc_ref, event_desc);
	if (event_desc == nullptr) return 0;

	g_fmod_last_result = event_desc->setCallback(CALLBACK_fmod_studio_event_description, (FMOD_STUDIO_EVENT_CALLBACK_TYPE)(int)callback_mask);
	return 0;
}

// ============================================================
// Event Description - User Data
// ============================================================

double fmod_studio_event_description_get_user_data(uint64_t event_desc_ref)
{
	FMOD::Studio::EventDescription* event_desc = nullptr;
	validate_fmod_studio_event_description(event_desc_ref, event_desc);
	if (event_desc == nullptr) return 0.0;

	auto it = g_user_data.find(reinterpret_cast<uintptr_t>(event_desc));
	return it != g_user_data.end() ? it->second : 0.0;
}

double fmod_studio_event_description_set_user_data(uint64_t event_desc_ref, double user_data)
{
	FMOD::Studio::EventDescription* event_desc = nullptr;
	validate_fmod_studio_event_description(event_desc_ref, event_desc);
	if (event_desc == nullptr) return 0;

	g_user_data[reinterpret_cast<uintptr_t>(event_desc)] = user_data;
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
		result.bool_value = property.boolvalue ? 1.0 : 0.0;
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
	FMOD::Studio::EventDescription* event_desc = nullptr;
	validate_fmod_studio_event_description(event_desc_ref, event_desc);
	if (event_desc == nullptr) return result;

	std::string name_str(name);
	FMOD_STUDIO_USER_PROPERTY property{};
	g_fmod_last_result = event_desc->getUserProperty(name_str.c_str(), &property);
	if (g_fmod_last_result != FMOD_OK) return result;

	return convert_user_property(property);
}

FmodStudioUserProperty fmod_studio_event_description_get_user_property_at(uint64_t event_desc_ref, double index)
{
	FmodStudioUserProperty result{};
	FMOD::Studio::EventDescription* event_desc = nullptr;
	validate_fmod_studio_event_description(event_desc_ref, event_desc);
	if (event_desc == nullptr) return result;

	FMOD_STUDIO_USER_PROPERTY property{};
	g_fmod_last_result = event_desc->getUserPropertyByIndex((int)index, &property);
	if (g_fmod_last_result != FMOD_OK) return result;

	return convert_user_property(property);
}

double fmod_studio_event_description_get_user_property_count(uint64_t event_desc_ref)
{
	FMOD::Studio::EventDescription* event_desc = nullptr;
	validate_fmod_studio_event_description(event_desc_ref, event_desc);
	if (event_desc == nullptr) return 0.0;

	int count = 0;
	g_fmod_last_result = event_desc->getUserPropertyCount(&count);
	return (double)count;
}

// ============================================================
// Event Description - Parameter Introspection (by id / by index)
// ============================================================

static FmodStudioParameterDescription convert_parameter_description(const FMOD_STUDIO_PARAMETER_DESCRIPTION& desc)
{
	FmodStudioParameterDescription result{};
	result.name = desc.name != nullptr ? std::string(desc.name) : std::string();
	result.id_data1 = (double)desc.id.data1;
	result.id_data2 = (double)desc.id.data2;
	result.minimum = (double)desc.minimum;
	result.maximum = (double)desc.maximum;
	result.defaultvalue = (double)desc.defaultvalue;
	result.type = (gm_enums::FmodStudioUserPropertyType)(int)desc.type;
	result.flags = (gm_enums::FmodStudioParameterFlags)(int)desc.flags;
	return result;
}

FmodStudioParameterDescription fmod_studio_event_description_get_parameter_description_by_id(
	uint64_t event_desc_ref, double id_data1, double id_data2)
{
	FmodStudioParameterDescription result{};
	FMOD::Studio::EventDescription* event_desc = nullptr;
	validate_fmod_studio_event_description(event_desc_ref, event_desc);
	if (event_desc == nullptr) return result;

	FMOD_STUDIO_PARAMETER_ID id{};
	id.data1 = (unsigned int)id_data1;
	id.data2 = (unsigned int)id_data2;

	FMOD_STUDIO_PARAMETER_DESCRIPTION desc{};
	g_fmod_last_result = event_desc->getParameterDescriptionByID(id, &desc);
	if (g_fmod_last_result != FMOD_OK) return result;

	return convert_parameter_description(desc);
}

FmodStudioParameterDescription fmod_studio_event_description_get_parameter_description_at(
	uint64_t event_desc_ref, double index)
{
	FmodStudioParameterDescription result{};
	FMOD::Studio::EventDescription* event_desc = nullptr;
	validate_fmod_studio_event_description(event_desc_ref, event_desc);
	if (event_desc == nullptr) return result;

	FMOD_STUDIO_PARAMETER_DESCRIPTION desc{};
	g_fmod_last_result = event_desc->getParameterDescriptionByIndex((int)index, &desc);
	if (g_fmod_last_result != FMOD_OK) return result;

	return convert_parameter_description(desc);
}

std::string fmod_studio_event_description_get_parameter_label_by_id(
	uint64_t event_desc_ref, double id_data1, double id_data2, double label_index)
{
	FMOD::Studio::EventDescription* event_desc = nullptr;
	validate_fmod_studio_event_description(event_desc_ref, event_desc);
	if (event_desc == nullptr) return std::string();

	FMOD_STUDIO_PARAMETER_ID id{};
	id.data1 = (unsigned int)id_data1;
	id.data2 = (unsigned int)id_data2;

	char label[256] = {};
	g_fmod_last_result = event_desc->getParameterLabelByID(id, (int)label_index, label, sizeof(label), nullptr);
	if (g_fmod_last_result != FMOD_OK) return std::string();
	return std::string(label);
}

std::string fmod_studio_event_description_get_parameter_label_at(
	uint64_t event_desc_ref, double index, double label_index)
{
	FMOD::Studio::EventDescription* event_desc = nullptr;
	validate_fmod_studio_event_description(event_desc_ref, event_desc);
	if (event_desc == nullptr) return std::string();

	char label[256] = {};
	g_fmod_last_result = event_desc->getParameterLabelByIndex((int)index, (int)label_index, label, sizeof(label), nullptr);
	if (g_fmod_last_result != FMOD_OK) return std::string();
	return std::string(label);
}

std::string fmod_studio_event_description_get_parameter_label_by_name(
	uint64_t event_desc_ref, std::string_view name, double label_index)
{
	FMOD::Studio::EventDescription* event_desc = nullptr;
	validate_fmod_studio_event_description(event_desc_ref, event_desc);
	if (event_desc == nullptr) return std::string();

	std::string name_str(name);
	char label[256] = {};
	g_fmod_last_result = event_desc->getParameterLabelByName(name_str.c_str(), (int)label_index, label, sizeof(label), nullptr);
	if (g_fmod_last_result != FMOD_OK) return std::string();
	return std::string(label);
}
