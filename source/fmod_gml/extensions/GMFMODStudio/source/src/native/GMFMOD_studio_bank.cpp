#include <native/GMFMODStudioInternal_native.h>
#include "GMFMOD_studio_bank.h"
#include <string>
#include <optional>
#include <vector>
#include <cstdio>

using namespace gm_structs;

static std::string format_guid(const FMOD_GUID& guid)
{
	char buffer[64]{};
	std::snprintf(buffer, sizeof(buffer),
		"{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
		guid.Data1, guid.Data2, guid.Data3,
		guid.Data4[0], guid.Data4[1], guid.Data4[2], guid.Data4[3],
		guid.Data4[4], guid.Data4[5], guid.Data4[6], guid.Data4[7]);
	return std::string(buffer);
}

double fmod_studio_bank_unload(uint64_t bank_ref)
{
	FMOD::Studio::Bank* bank = nullptr;
	validate_fmod_studio_bank(bank_ref, bank);
	if (bank == nullptr) return 0;

	// The bank handle dies with the unload; drop its user data so a recycled
	// handle does not inherit it.
	{
		std::lock_guard<std::mutex> lock(g_user_data_mutex);
		g_user_data.erase(reinterpret_cast<uintptr_t>(bank));
	}

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
	return fmod_read_string([bank](char* buf, int size, int* got) {
		return bank->getPath(buf, size, got);
	});
}

std::optional<uint64_t> fmod_studio_bank_get_parent_studio_system(uint64_t bank_ref)
{
	// The Studio API gives Bank no getSystem - only EventInstance and CommandReplay have one - so a
	// bank cannot report its owning system. There is one Studio system here anyway.
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
	FMOD::Studio::Bank* bank = nullptr;
	validate_fmod_studio_bank(bank_ref, bank);
	if (bank == nullptr) return std::nullopt;

	int idx = (int)index;
	if (idx < 0) return std::nullopt;

	std::vector<FMOD::Studio::EventDescription*> events((size_t)idx + 1, nullptr);
	int count = 0;
	g_fmod_last_result = bank->getEventList(events.data(), (int)events.size(), &count);
	if (g_fmod_last_result != FMOD_OK || idx >= count) return std::nullopt;

	FMOD::Studio::EventDescription* event_desc = events[(size_t)idx];
	if (event_desc == nullptr) return std::nullopt;

	return packPointerIntoRef(event_desc, GM_FMOD_STUDIO_TYPE_EVENT_DESCRIPTION);
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
	FMOD::Studio::Bank* bank = nullptr;
	validate_fmod_studio_bank(bank_ref, bank);
	if (bank == nullptr) return std::nullopt;

	int idx = (int)index;
	if (idx < 0) return std::nullopt;

	std::vector<FMOD::Studio::Bus*> buses((size_t)idx + 1, nullptr);
	int count = 0;
	g_fmod_last_result = bank->getBusList(buses.data(), (int)buses.size(), &count);
	if (g_fmod_last_result != FMOD_OK || idx >= count) return std::nullopt;

	FMOD::Studio::Bus* bus = buses[(size_t)idx];
	if (bus == nullptr) return std::nullopt;

	return packPointerIntoRef(bus, GM_FMOD_STUDIO_TYPE_BUS);
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
	FMOD::Studio::Bank* bank = nullptr;
	validate_fmod_studio_bank(bank_ref, bank);
	if (bank == nullptr) return std::nullopt;

	int idx = (int)index;
	if (idx < 0) return std::nullopt;

	std::vector<FMOD::Studio::VCA*> vcas((size_t)idx + 1, nullptr);
	int count = 0;
	g_fmod_last_result = bank->getVCAList(vcas.data(), (int)vcas.size(), &count);
	if (g_fmod_last_result != FMOD_OK || idx >= count) return std::nullopt;

	FMOD::Studio::VCA* vca = vcas[(size_t)idx];
	if (vca == nullptr) return std::nullopt;

	return packPointerIntoRef(vca, GM_FMOD_STUDIO_TYPE_VCA);
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

std::string fmod_studio_bank_get_id(uint64_t bank_ref)
{
	FMOD::Studio::Bank* bank = nullptr;
	validate_fmod_studio_bank(bank_ref, bank);
	if (bank == nullptr) return std::string();

	FMOD_GUID guid{};
	g_fmod_last_result = bank->getID(&guid);
	if (g_fmod_last_result != FMOD_OK) return std::string();

	return format_guid(guid);
}

double fmod_studio_bank_is_valid(uint64_t bank_ref)
{
	FMOD::Studio::Bank* bank = nullptr;
	validate_fmod_studio_bank(bank_ref, bank);
	if (bank == nullptr) return 0.0;

	return bank->isValid() ? 1.0 : 0.0;
}

FmodStudioStringInfo fmod_studio_bank_get_string_info(uint64_t bank_ref, double string_index)
{
	FmodStudioStringInfo result{};
	FMOD::Studio::Bank* bank = nullptr;
	validate_fmod_studio_bank(bank_ref, bank);
	if (bank == nullptr) return result;

	FMOD_GUID guid{};
	std::string path = fmod_read_string([bank, string_index, &guid](char* buf, int size, int* got) {
		return bank->getStringInfo((int)string_index, &guid, buf, size, got);
	});
	if (g_fmod_last_result != FMOD_OK) return result;

	result.guid = format_guid(guid);
	result.path = path;
	return result;
}

double fmod_studio_bank_load_sample_data(uint64_t bank_ref)
{
	FMOD::Studio::Bank* bank = nullptr;
	validate_fmod_studio_bank(bank_ref, bank);
	if (bank == nullptr) return 0;

	g_fmod_last_result = bank->loadSampleData();
	return 0;
}

double fmod_studio_bank_unload_sample_data(uint64_t bank_ref)
{
	FMOD::Studio::Bank* bank = nullptr;
	validate_fmod_studio_bank(bank_ref, bank);
	if (bank == nullptr) return 0;

	g_fmod_last_result = bank->unloadSampleData();
	return 0;
}

double fmod_studio_bank_get_user_data(uint64_t bank_ref)
{
	FMOD::Studio::Bank* bank = nullptr;
	validate_fmod_studio_bank(bank_ref, bank);
	if (bank == nullptr) return 0.0;

	std::lock_guard<std::mutex> lock(g_user_data_mutex);
	auto it = g_user_data.find(reinterpret_cast<uintptr_t>(bank));
	return it != g_user_data.end() ? it->second : 0.0;
}

double fmod_studio_bank_set_user_data(uint64_t bank_ref, double user_data)
{
	FMOD::Studio::Bank* bank = nullptr;
	validate_fmod_studio_bank(bank_ref, bank);
	if (bank == nullptr) return 0;

	std::lock_guard<std::mutex> lock(g_user_data_mutex);
	g_user_data[reinterpret_cast<uintptr_t>(bank)] = user_data;
	return 0;
}
