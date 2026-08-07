#include <native/GMFMODInternal_native.h>
#include "GMFMOD_studio_bank.h"
#include <string>
#include <optional>

using namespace gm_structs;

double fmod_studio_bank_unload(uint64_t bank_ref)
{
	FMOD::Studio::Bank* bank = nullptr;
	validate_fmod_studio_bank(bank_ref, bank);
	if (bank == nullptr) return 0;
	g_fmod_last_result = bank->unload();
	return 0;
}

double fmod_studio_bank_get_loading_state(uint64_t bank_ref)
{
	FMOD::Studio::Bank* bank = nullptr;
	validate_fmod_studio_bank(bank_ref, bank);
	if (bank == nullptr) return 0.0;
	FMOD_STUDIO_LOADING_STATE state = FMOD_STUDIO_LOADING_STATE_UNLOADED;
	g_fmod_last_result = bank->getLoadingState(&state);
	return (double)state;
}

double fmod_studio_bank_get_sample_loading_state(uint64_t bank_ref)
{
	FMOD::Studio::Bank* bank = nullptr;
	validate_fmod_studio_bank(bank_ref, bank);
	if (bank == nullptr) return 0.0;
	FMOD_STUDIO_LOADING_STATE state = FMOD_STUDIO_LOADING_STATE_UNLOADED;
	g_fmod_last_result = bank->getSampleLoadingState(&state);
	return (double)state;
}

std::string fmod_studio_bank_get_path(uint64_t bank_ref)
{
	FMOD::Studio::Bank* bank = nullptr;
	validate_fmod_studio_bank(bank_ref, bank);
	if (bank == nullptr) return "";
	char path[256] = {};
	int capacity = sizeof(path);
	g_fmod_last_result = bank->getPath(path, capacity, nullptr);
	return std::string(path);
}

std::optional<uint64_t> fmod_studio_bank_get_parent_studio_system(uint64_t bank_ref)
{
	// getSystem is not available in this SDK version
	g_fmod_last_result = FMOD_ERR_UNSUPPORTED;
	return std::nullopt;
}

double fmod_studio_bank_get_event_count(uint64_t bank_ref)
{
	FMOD::Studio::Bank* bank = nullptr;
	validate_fmod_studio_bank(bank_ref, bank);
	if (bank == nullptr) return 0.0;
	int count = 0;
	g_fmod_last_result = bank->getEventCount(&count);
	return (double)count;
}

std::optional<uint64_t> fmod_studio_bank_get_event_at(uint64_t bank_ref, double index)
{
	// getEventAt is not available in this SDK version
	g_fmod_last_result = FMOD_ERR_UNSUPPORTED;
	return std::nullopt;
}

double fmod_studio_bank_get_bus_count(uint64_t bank_ref)
{
	FMOD::Studio::Bank* bank = nullptr;
	validate_fmod_studio_bank(bank_ref, bank);
	if (bank == nullptr) return 0.0;
	int count = 0;
	g_fmod_last_result = bank->getBusCount(&count);
	return (double)count;
}

std::optional<uint64_t> fmod_studio_bank_get_bus_at(uint64_t bank_ref, double index)
{
	// getBusAt is not available in this SDK version
	g_fmod_last_result = FMOD_ERR_UNSUPPORTED;
	return std::nullopt;
}

double fmod_studio_bank_get_vca_count(uint64_t bank_ref)
{
	FMOD::Studio::Bank* bank = nullptr;
	validate_fmod_studio_bank(bank_ref, bank);
	if (bank == nullptr) return 0.0;
	int count = 0;
	g_fmod_last_result = bank->getVCACount(&count);
	return (double)count;
}

std::optional<uint64_t> fmod_studio_bank_get_vca_at(uint64_t bank_ref, double index)
{
	// getVCAAt is not available in this SDK version
	g_fmod_last_result = FMOD_ERR_UNSUPPORTED;
	return std::nullopt;
}

double fmod_studio_bank_get_string_count(uint64_t bank_ref)
{
	FMOD::Studio::Bank* bank = nullptr;
	validate_fmod_studio_bank(bank_ref, bank);
	if (bank == nullptr) return 0.0;
	int count = 0;
	g_fmod_last_result = bank->getStringCount(&count);
	return (double)count;
}
