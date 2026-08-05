#include <native/GMFMODInternal_native.h>
#include "GMFMOD_studio_event_description.h"
#include <string>
#include <optional>

using namespace gm_structs;

std::string fmod_studio_event_description_get_path(const FmodStudioEventDescriptionRef& event_desc_ref)
{
	FMOD::Studio::EventDescription* event_desc = nullptr;
	validate_fmod_studio_event_description(event_desc_ref._ref, event_desc);
	if (event_desc == nullptr) return "";
	char path[256] = {};
	int capacity = sizeof(path);
	g_fmod_last_result = event_desc->getPath(path, capacity, nullptr);
	return std::string(path);
}

std::optional<FmodStudioEventInstanceRef> fmod_studio_event_description_create_instance(const FmodStudioEventDescriptionRef& event_desc_ref)
{
	FMOD::Studio::EventDescription* event_desc = nullptr;
	validate_fmod_studio_event_description(event_desc_ref._ref, event_desc);
	if (event_desc == nullptr) return std::nullopt;
	FMOD::Studio::EventInstance* instance = nullptr;
	g_fmod_last_result = event_desc->createInstance(&instance);
	if (g_fmod_last_result == FMOD_OK && instance != nullptr)
	{
		FmodStudioEventInstanceRef result{};
		result._ref = packIndexIntoRef((uint32_t)reinterpret_cast<uintptr_t>(instance), GM_FMOD_STUDIO_TYPE_EVENT_INSTANCE);
		return result;
	}
	return std::nullopt;
}

double fmod_studio_event_description_get_instance_count(const FmodStudioEventDescriptionRef& event_desc_ref)
{
	FMOD::Studio::EventDescription* event_desc = nullptr;
	validate_fmod_studio_event_description(event_desc_ref._ref, event_desc);
	if (event_desc == nullptr) return 0.0;
	int count = 0;
	g_fmod_last_result = event_desc->getInstanceCount(&count);
	return (double)count;
}

std::optional<FmodStudioEventInstanceRef> fmod_studio_event_description_get_instance_at(const FmodStudioEventDescriptionRef& event_desc_ref, double index)
{
	// getInstanceAt is not available in this SDK version
	g_fmod_last_result = FMOD_ERR_UNSUPPORTED;
	return std::nullopt;
}

double fmod_studio_event_description_is_snapshot(const FmodStudioEventDescriptionRef& event_desc_ref)
{
	FMOD::Studio::EventDescription* event_desc = nullptr;
	validate_fmod_studio_event_description(event_desc_ref._ref, event_desc);
	if (event_desc == nullptr) return 0.0;
	bool is_snapshot = false;
	g_fmod_last_result = event_desc->isSnapshot(&is_snapshot);
	return is_snapshot ? 1.0 : 0.0;
}

double fmod_studio_event_description_is_one_shot(const FmodStudioEventDescriptionRef& event_desc_ref)
{
	FMOD::Studio::EventDescription* event_desc = nullptr;
	validate_fmod_studio_event_description(event_desc_ref._ref, event_desc);
	if (event_desc == nullptr) return 0.0;
	bool is_one_shot = false;
	g_fmod_last_result = event_desc->isOneshot(&is_one_shot);
	return is_one_shot ? 1.0 : 0.0;
}

double fmod_studio_event_description_has_sustain_point(const FmodStudioEventDescriptionRef& event_desc_ref)
{
	FMOD::Studio::EventDescription* event_desc = nullptr;
	validate_fmod_studio_event_description(event_desc_ref._ref, event_desc);
	if (event_desc == nullptr) return 0.0;
	bool has_sustain = false;
	g_fmod_last_result = event_desc->hasSustainPoint(&has_sustain);
	return has_sustain ? 1.0 : 0.0;
}

double fmod_studio_event_description_get_length(const FmodStudioEventDescriptionRef& event_desc_ref)
{
	FMOD::Studio::EventDescription* event_desc = nullptr;
	validate_fmod_studio_event_description(event_desc_ref._ref, event_desc);
	if (event_desc == nullptr) return 0.0;
	int length = 0;
	g_fmod_last_result = event_desc->getLength(&length);
	return (double)length;
}

double fmod_studio_event_description_get_parameter_count(const FmodStudioEventDescriptionRef& event_desc_ref)
{
	FMOD::Studio::EventDescription* event_desc = nullptr;
	validate_fmod_studio_event_description(event_desc_ref._ref, event_desc);
	if (event_desc == nullptr) return 0.0;
	// getParameterCount is not available in this SDK version
	g_fmod_last_result = FMOD_ERR_UNSUPPORTED;
	return 0.0;
}

double fmod_studio_event_description_release_all_instances(const FmodStudioEventDescriptionRef& event_desc_ref)
{
	FMOD::Studio::EventDescription* event_desc = nullptr;
	validate_fmod_studio_event_description(event_desc_ref._ref, event_desc);
	if (event_desc == nullptr) return 0;
	g_fmod_last_result = event_desc->releaseAllInstances();
	return 0;
}
