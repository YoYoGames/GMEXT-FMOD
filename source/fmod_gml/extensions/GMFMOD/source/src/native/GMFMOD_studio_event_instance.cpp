#include <native/GMFMODInternal_native.h>
#include "GMFMOD_studio_event_instance.h"
#include <optional>

using namespace gm_structs;

double fmod_studio_event_instance_start(const FmodStudioEventInstanceRef& instance_ref)
{
	FMOD::Studio::EventInstance* instance = nullptr;
	validate_fmod_studio_event_instance(instance_ref._ref, instance);
	if (instance == nullptr) return 0;
	g_fmod_last_result = instance->start();
	return 0;
}

double fmod_studio_event_instance_stop(const FmodStudioEventInstanceRef& instance_ref, double stop_mode)
{
	FMOD::Studio::EventInstance* instance = nullptr;
	validate_fmod_studio_event_instance(instance_ref._ref, instance);
	if (instance == nullptr) return 0;
	g_fmod_last_result = instance->stop((FMOD_STUDIO_STOP_MODE)(int)stop_mode);
	return 0;
}

double fmod_studio_event_instance_get_playback_state(const FmodStudioEventInstanceRef& instance_ref)
{
	FMOD::Studio::EventInstance* instance = nullptr;
	validate_fmod_studio_event_instance(instance_ref._ref, instance);
	if (instance == nullptr) return 0.0;
	FMOD_STUDIO_PLAYBACK_STATE state = FMOD_STUDIO_PLAYBACK_STOPPED;
	g_fmod_last_result = instance->getPlaybackState(&state);
	return (double)state;
}

double fmod_studio_event_instance_get_paused(const FmodStudioEventInstanceRef& instance_ref)
{
	FMOD::Studio::EventInstance* instance = nullptr;
	validate_fmod_studio_event_instance(instance_ref._ref, instance);
	if (instance == nullptr) return 0.0;
	bool paused = false;
	g_fmod_last_result = instance->getPaused(&paused);
	return paused ? 1.0 : 0.0;
}

double fmod_studio_event_instance_set_paused(const FmodStudioEventInstanceRef& instance_ref, double paused)
{
	FMOD::Studio::EventInstance* instance = nullptr;
	validate_fmod_studio_event_instance(instance_ref._ref, instance);
	if (instance == nullptr) return 0;
	g_fmod_last_result = instance->setPaused(paused != 0.0);
	return 0;
}

double fmod_studio_event_instance_get_timeline_position(const FmodStudioEventInstanceRef& instance_ref)
{
	FMOD::Studio::EventInstance* instance = nullptr;
	validate_fmod_studio_event_instance(instance_ref._ref, instance);
	if (instance == nullptr) return 0.0;
	int position = 0;
	g_fmod_last_result = instance->getTimelinePosition(&position);
	return (double)position;
}

double fmod_studio_event_instance_set_timeline_position(const FmodStudioEventInstanceRef& instance_ref, double position)
{
	FMOD::Studio::EventInstance* instance = nullptr;
	validate_fmod_studio_event_instance(instance_ref._ref, instance);
	if (instance == nullptr) return 0;
	g_fmod_last_result = instance->setTimelinePosition((int)position);
	return 0;
}

double fmod_studio_event_instance_get_volume(const FmodStudioEventInstanceRef& instance_ref)
{
	FMOD::Studio::EventInstance* instance = nullptr;
	validate_fmod_studio_event_instance(instance_ref._ref, instance);
	if (instance == nullptr) return 0.0;
	float volume = 0.0f;
	g_fmod_last_result = instance->getVolume(&volume);
	return (double)volume;
}

double fmod_studio_event_instance_set_volume(const FmodStudioEventInstanceRef& instance_ref, double volume)
{
	FMOD::Studio::EventInstance* instance = nullptr;
	validate_fmod_studio_event_instance(instance_ref._ref, instance);
	if (instance == nullptr) return 0;
	g_fmod_last_result = instance->setVolume((float)volume);
	return 0;
}

double fmod_studio_event_instance_get_pitch(const FmodStudioEventInstanceRef& instance_ref)
{
	FMOD::Studio::EventInstance* instance = nullptr;
	validate_fmod_studio_event_instance(instance_ref._ref, instance);
	if (instance == nullptr) return 0.0;
	float pitch = 0.0f;
	g_fmod_last_result = instance->getPitch(&pitch);
	return (double)pitch;
}

double fmod_studio_event_instance_set_pitch(const FmodStudioEventInstanceRef& instance_ref, double pitch)
{
	FMOD::Studio::EventInstance* instance = nullptr;
	validate_fmod_studio_event_instance(instance_ref._ref, instance);
	if (instance == nullptr) return 0;
	g_fmod_last_result = instance->setPitch((float)pitch);
	return 0;
}

double fmod_studio_event_instance_set_parameter_by_name(const FmodStudioEventInstanceRef& instance_ref, std::string_view name, double value)
{
	FMOD::Studio::EventInstance* instance = nullptr;
	validate_fmod_studio_event_instance(instance_ref._ref, instance);
	if (instance == nullptr) return 0;
	g_fmod_last_result = instance->setParameterByName(name.data(), (float)value);
	return 0;
}

double fmod_studio_event_instance_get_parameter_by_name(const FmodStudioEventInstanceRef& instance_ref, std::string_view name)
{
	FMOD::Studio::EventInstance* instance = nullptr;
	validate_fmod_studio_event_instance(instance_ref._ref, instance);
	if (instance == nullptr) return 0.0;
	float value = 0.0f;
	g_fmod_last_result = instance->getParameterByName(name.data(), &value);
	return (double)value;
}

double fmod_studio_event_instance_get_parameter_count(const FmodStudioEventInstanceRef& instance_ref)
{
	FMOD::Studio::EventInstance* instance = nullptr;
	validate_fmod_studio_event_instance(instance_ref._ref, instance);
	if (instance == nullptr) return 0.0;
	// getParameterCount is not available in this SDK version
	g_fmod_last_result = FMOD_ERR_UNSUPPORTED;
	return 0.0;
}

double fmod_studio_event_instance_set_3d_attributes(const FmodStudioEventInstanceRef& instance_ref, double x, double y, double z)
{
	FMOD::Studio::EventInstance* instance = nullptr;
	validate_fmod_studio_event_instance(instance_ref._ref, instance);
	if (instance == nullptr) return 0;
	FMOD_3D_ATTRIBUTES attributes = {};
	attributes.position = {(float)x, (float)y, (float)z};
	attributes.forward = {0, 0, 1};
	attributes.up = {0, 1, 0};
	g_fmod_last_result = instance->set3DAttributes(&attributes);
	return 0;
}

std::optional<FmodStudioEventDescriptionRef> fmod_studio_event_instance_get_description(const FmodStudioEventInstanceRef& instance_ref)
{
	FMOD::Studio::EventInstance* instance = nullptr;
	validate_fmod_studio_event_instance(instance_ref._ref, instance);
	if (instance == nullptr) return std::nullopt;
	FMOD::Studio::EventDescription* event_desc = nullptr;
	g_fmod_last_result = instance->getDescription(&event_desc);
	if (g_fmod_last_result == FMOD_OK && event_desc != nullptr)
	{
		FmodStudioEventDescriptionRef result{};
		result._ref = packIndexIntoRef((uint32_t)reinterpret_cast<uintptr_t>(event_desc), GM_FMOD_STUDIO_TYPE_EVENT_DESCRIPTION);
		return result;
	}
	return std::nullopt;
}

double fmod_studio_event_instance_release(const FmodStudioEventInstanceRef& instance_ref)
{
	FMOD::Studio::EventInstance* instance = nullptr;
	validate_fmod_studio_event_instance(instance_ref._ref, instance);
	if (instance == nullptr) return 0;
	g_fmod_last_result = instance->release();
	return 0;
}
