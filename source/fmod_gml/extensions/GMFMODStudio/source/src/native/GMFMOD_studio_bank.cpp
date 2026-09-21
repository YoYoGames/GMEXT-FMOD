#include <native/GMFMODStudioInternal_native.h>
#include "GMFMOD_studio_bank.h"
#include <string>
#include <optional>
#include <vector>
#include <cstdio>

using namespace gm_structs;

double fmod_studio_bank_unload(uint64_t bank_ref)
{
	FMOD::Studio::Bank* bank = resolve_fmod_studio_bank(bank_ref);
	if (bank == nullptr) return 0;

	// The bank's event descriptions die with it and get no DESTROYED callback of
	// their own, so their callback entries are dropped here.
	fmod_studio_event_description_forget_bank(bank);

	g_fmod_studio_last_result = bank->unload();
	return 0;
}

gm_enums::FmodStudioLoadingState fmod_studio_bank_get_loading_state(uint64_t bank_ref)
{
	FMOD::Studio::Bank* bank = resolve_fmod_studio_bank(bank_ref);
	if (bank == nullptr) return (gm_enums::FmodStudioLoadingState)0;
	FMOD_STUDIO_LOADING_STATE state = FMOD_STUDIO_LOADING_STATE_UNLOADED;
	g_fmod_studio_last_result = bank->getLoadingState(&state);
	return (gm_enums::FmodStudioLoadingState)state;
}

gm_enums::FmodStudioLoadingState fmod_studio_bank_get_sample_loading_state(uint64_t bank_ref)
{
	FMOD::Studio::Bank* bank = resolve_fmod_studio_bank(bank_ref);
	if (bank == nullptr) return (gm_enums::FmodStudioLoadingState)0;
	FMOD_STUDIO_LOADING_STATE state = FMOD_STUDIO_LOADING_STATE_UNLOADED;
	g_fmod_studio_last_result = bank->getSampleLoadingState(&state);
	return (gm_enums::FmodStudioLoadingState)state;
}

std::string fmod_studio_bank_get_path(uint64_t bank_ref)
{
	FMOD::Studio::Bank* bank = resolve_fmod_studio_bank(bank_ref);
	if (bank == nullptr) return "";
	return gmfmod::readString([bank](char* buf, int size, int* got) {
		return bank->getPath(buf, size, got);
	}, g_fmod_studio_last_result);
}

double fmod_studio_bank_get_event_count(uint64_t bank_ref)
{
	FMOD::Studio::Bank* bank = resolve_fmod_studio_bank(bank_ref);
	if (bank == nullptr) return 0.0;
	int count = 0;
	g_fmod_studio_last_result = bank->getEventCount(&count);
	return (double)count;
}

std::vector<uint64_t> fmod_studio_bank_get_event_list(uint64_t bank_ref)
{
	std::vector<uint64_t> result;
	FMOD::Studio::Bank* bank = resolve_fmod_studio_bank(bank_ref);
	if (bank == nullptr) return result;

	int capacity = 0;
	g_fmod_studio_last_result = bank->getEventCount(&capacity);
	if (g_fmod_studio_last_result != FMOD_OK || capacity <= 0) return result;

	std::vector<FMOD::Studio::EventDescription*> events((size_t)capacity, nullptr);
	int count = 0;
	g_fmod_studio_last_result = bank->getEventList(events.data(), capacity, &count);
	if (g_fmod_studio_last_result != FMOD_OK) return result;

	result.reserve((size_t)count);
	for (int i = 0; i < count; ++i)
	{
		if (events[(size_t)i] != nullptr)
			result.push_back(fmod_pointer_ref(events[(size_t)i], gmfmod::RefType::StudioEventDescription));
	}
	return result;
}

double fmod_studio_bank_get_bus_count(uint64_t bank_ref)
{
	FMOD::Studio::Bank* bank = resolve_fmod_studio_bank(bank_ref);
	if (bank == nullptr) return 0.0;
	int count = 0;
	g_fmod_studio_last_result = bank->getBusCount(&count);
	return (double)count;
}

std::vector<uint64_t> fmod_studio_bank_get_bus_list(uint64_t bank_ref)
{
	std::vector<uint64_t> result;
	FMOD::Studio::Bank* bank = resolve_fmod_studio_bank(bank_ref);
	if (bank == nullptr) return result;

	int capacity = 0;
	g_fmod_studio_last_result = bank->getBusCount(&capacity);
	if (g_fmod_studio_last_result != FMOD_OK || capacity <= 0) return result;

	std::vector<FMOD::Studio::Bus*> buses((size_t)capacity, nullptr);
	int count = 0;
	g_fmod_studio_last_result = bank->getBusList(buses.data(), capacity, &count);
	if (g_fmod_studio_last_result != FMOD_OK) return result;

	result.reserve((size_t)count);
	for (int i = 0; i < count; ++i)
	{
		if (buses[(size_t)i] != nullptr)
			result.push_back(fmod_pointer_ref(buses[(size_t)i], gmfmod::RefType::StudioBus));
	}
	return result;
}

double fmod_studio_bank_get_vca_count(uint64_t bank_ref)
{
	FMOD::Studio::Bank* bank = resolve_fmod_studio_bank(bank_ref);
	if (bank == nullptr) return 0.0;
	int count = 0;
	g_fmod_studio_last_result = bank->getVCACount(&count);
	return (double)count;
}

std::vector<uint64_t> fmod_studio_bank_get_vca_list(uint64_t bank_ref)
{
	std::vector<uint64_t> result;
	FMOD::Studio::Bank* bank = resolve_fmod_studio_bank(bank_ref);
	if (bank == nullptr) return result;

	int capacity = 0;
	g_fmod_studio_last_result = bank->getVCACount(&capacity);
	if (g_fmod_studio_last_result != FMOD_OK || capacity <= 0) return result;

	std::vector<FMOD::Studio::VCA*> vcas((size_t)capacity, nullptr);
	int count = 0;
	g_fmod_studio_last_result = bank->getVCAList(vcas.data(), capacity, &count);
	if (g_fmod_studio_last_result != FMOD_OK) return result;

	result.reserve((size_t)count);
	for (int i = 0; i < count; ++i)
	{
		if (vcas[(size_t)i] != nullptr)
			result.push_back(fmod_pointer_ref(vcas[(size_t)i], gmfmod::RefType::StudioVca));
	}
	return result;
}

double fmod_studio_bank_get_string_count(uint64_t bank_ref)
{
	FMOD::Studio::Bank* bank = resolve_fmod_studio_bank(bank_ref);
	if (bank == nullptr) return 0.0;
	int count = 0;
	g_fmod_studio_last_result = bank->getStringCount(&count);
	return (double)count;
}

std::string fmod_studio_bank_get_id(uint64_t bank_ref)
{
	FMOD::Studio::Bank* bank = resolve_fmod_studio_bank(bank_ref);
	if (bank == nullptr) return std::string();

	FMOD_GUID guid{};
	g_fmod_studio_last_result = bank->getID(&guid);
	if (g_fmod_studio_last_result != FMOD_OK) return std::string();

	return gmfmod::formatGuid(guid);
}

bool fmod_studio_bank_is_valid(uint64_t bank_ref)
{
	FMOD::Studio::Bank* bank = resolve_fmod_studio_bank(bank_ref);
	if (bank == nullptr) return false;

	return bank->isValid();
}

FmodStudioStringInfo fmod_studio_bank_get_string_info(uint64_t bank_ref, double string_index)
{
	FmodStudioStringInfo result{};
	FMOD::Studio::Bank* bank = resolve_fmod_studio_bank(bank_ref);
	if (bank == nullptr) return result;

	FMOD_GUID guid{};
	std::string path = gmfmod::readString([bank, string_index, &guid](char* buf, int size, int* got) {
		return bank->getStringInfo((int)string_index, &guid, buf, size, got);
	}, g_fmod_studio_last_result);
	if (g_fmod_studio_last_result != FMOD_OK) return result;

	result.guid = gmfmod::formatGuid(guid);
	result.path = path;
	return result;
}

double fmod_studio_bank_load_sample_data(uint64_t bank_ref)
{
	FMOD::Studio::Bank* bank = resolve_fmod_studio_bank(bank_ref);
	if (bank == nullptr) return 0;

	g_fmod_studio_last_result = bank->loadSampleData();
	return 0;
}

double fmod_studio_bank_unload_sample_data(uint64_t bank_ref)
{
	FMOD::Studio::Bank* bank = resolve_fmod_studio_bank(bank_ref);
	if (bank == nullptr) return 0;

	g_fmod_studio_last_result = bank->unloadSampleData();
	return 0;
}

int64_t fmod_studio_bank_get_user_data(uint64_t bank_ref)
{
	FMOD::Studio::Bank* bank = resolve_fmod_studio_bank(bank_ref);
	if (bank == nullptr) return 0;

	return gmfmod::getUserData(bank, g_fmod_studio_last_result);
}

double fmod_studio_bank_set_user_data(uint64_t bank_ref, int64_t user_data)
{
	FMOD::Studio::Bank* bank = resolve_fmod_studio_bank(bank_ref);
	if (bank == nullptr) return 0;

	gmfmod::setUserData(bank, user_data, g_fmod_studio_last_result);
	return 0;
}
