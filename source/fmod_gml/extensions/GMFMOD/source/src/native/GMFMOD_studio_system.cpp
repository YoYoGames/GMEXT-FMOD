#include "GMFMOD_studio_system.h"
#include <string_view>
#include <optional>

using namespace gm_structs;

static uint64_t g_studio_system_ref = 0;

// ============================================================
// Studio System - Lifetime
// ============================================================

FmodStudioSystemRef fmod_studio_system_create()
{
	FmodStudioSystemRef result{};
	if (g_studio_system_ref != 0) return result;

	FMOD::Studio::System* studio_system = nullptr;
	g_fmod_last_result = FMOD::Studio::System::create(&studio_system);
	if (g_fmod_last_result != FMOD_OK || studio_system == nullptr) return result;

	FMOD::System* core_system = nullptr;
	studio_system->getCoreSystem(&core_system);
	if (core_system != nullptr)
	{
		uint32_t system_id = registerOrFindResource(core_system, index_systems, map_systems);
		// Store core system ref
	}

	g_studio_system_ref = packIndexIntoRef((uint32_t)reinterpret_cast<uintptr_t>(studio_system), GM_FMOD_STUDIO_TYPE_SYSTEM);
	result._ref = g_studio_system_ref;
	return result;
}

double fmod_studio_system_init(double max_channels, double studio_flags, double core_flags)
{
	FMOD::Studio::System* studio_system = nullptr;
	validate_fmod_studio_system(g_studio_system_ref, studio_system);
	if (studio_system == nullptr) return 0;

	g_fmod_last_result = studio_system->initialize((int)max_channels, (FMOD_STUDIO_INITFLAGS)(int)studio_flags, (FMOD_INITFLAGS)(int)core_flags, nullptr);
	return 0;
}

double fmod_studio_system_release()
{
	FMOD::Studio::System* studio_system = nullptr;
	validate_fmod_studio_system(g_studio_system_ref, studio_system);
	if (studio_system == nullptr) return 0;

	FMOD::System* core_system = nullptr;
	studio_system->getCoreSystem(&core_system);
	if (core_system != nullptr)
	{
		unregisterResource(core_system, map_systems);
	}

	g_fmod_last_result = studio_system->release();
	if (g_fmod_last_result == FMOD_OK)
	{
		g_studio_system_ref = 0;
	}
	return 0;
}

double fmod_studio_system_update()
{
	FMOD::Studio::System* studio_system = nullptr;
	validate_fmod_studio_system(g_studio_system_ref, studio_system);
	if (studio_system == nullptr) return 0;

	g_fmod_last_result = studio_system->update();
	return 0;
}

double fmod_studio_system_flush_commands()
{
	FMOD::Studio::System* studio_system = nullptr;
	validate_fmod_studio_system(g_studio_system_ref, studio_system);
	if (studio_system == nullptr) return 0;

	g_fmod_last_result = studio_system->flushCommands();
	return 0;
}

double fmod_studio_system_flush_sample_loading()
{
	FMOD::Studio::System* studio_system = nullptr;
	validate_fmod_studio_system(g_studio_system_ref, studio_system);
	if (studio_system == nullptr) return 0;

	g_fmod_last_result = studio_system->flushSampleLoading();
	return 0;
}

// ============================================================
// Studio System - Banks
// ============================================================

std::optional<FmodStudioBankRef> fmod_studio_system_load_bank_file(std::string_view filename, double flags)
{
	FMOD::Studio::System* studio_system = nullptr;
	validate_fmod_studio_system(g_studio_system_ref, studio_system);
	if (studio_system == nullptr) return std::nullopt;

	FMOD::Studio::Bank* bank = nullptr;
	g_fmod_last_result = studio_system->loadBankFile(filename.data(), (FMOD_STUDIO_LOAD_BANK_FLAGS)(int)flags, &bank);
	if (g_fmod_last_result == FMOD_OK && bank != nullptr)
	{
		FmodStudioBankRef result{};
		result._ref = packIndexIntoRef((uint32_t)reinterpret_cast<uintptr_t>(bank), GM_FMOD_STUDIO_TYPE_BANK);
		return result;
	}
	return std::nullopt;
}

std::optional<FmodStudioBankRef> fmod_studio_system_load_bank_memory(std::string_view data, double flags)
{
	// loadBankMemory signature doesn't match this SDK version
	// Use loadBankFile instead
	g_fmod_last_result = FMOD_ERR_UNSUPPORTED;
	return std::nullopt;
}

double fmod_studio_system_unload_all()
{
	FMOD::Studio::System* studio_system = nullptr;
	validate_fmod_studio_system(g_studio_system_ref, studio_system);
	if (studio_system == nullptr) return 0;

	g_fmod_last_result = studio_system->unloadAll();
	return 0;
}

double fmod_studio_system_get_bank_count()
{
	FMOD::Studio::System* studio_system = nullptr;
	validate_fmod_studio_system(g_studio_system_ref, studio_system);
	if (studio_system == nullptr) return 0.0;

	int count = 0;
	g_fmod_last_result = studio_system->getBankCount(&count);
	return (double)count;
}

std::optional<FmodStudioBankRef> fmod_studio_system_get_bank_at(double index)
{
	// getBankAt is not available in this SDK version
	// Use getBank with path instead
	g_fmod_last_result = FMOD_ERR_UNSUPPORTED;
	return std::nullopt;
}

std::optional<FmodStudioBankRef> fmod_studio_system_get_bank(std::string_view path)
{
	FMOD::Studio::System* studio_system = nullptr;
	validate_fmod_studio_system(g_studio_system_ref, studio_system);
	if (studio_system == nullptr) return std::nullopt;

	FMOD::Studio::Bank* bank = nullptr;
	g_fmod_last_result = studio_system->getBank(path.data(), &bank);
	if (g_fmod_last_result == FMOD_OK && bank != nullptr)
	{
		FmodStudioBankRef result{};
		result._ref = packIndexIntoRef((uint32_t)reinterpret_cast<uintptr_t>(bank), GM_FMOD_STUDIO_TYPE_BANK);
		return result;
	}
	return std::nullopt;
}

// ============================================================
// Studio System - Events
// ============================================================

std::optional<FmodStudioEventDescriptionRef> fmod_studio_system_get_event(std::string_view path)
{
	FMOD::Studio::System* studio_system = nullptr;
	validate_fmod_studio_system(g_studio_system_ref, studio_system);
	if (studio_system == nullptr) return std::nullopt;

	FMOD::Studio::EventDescription* event_desc = nullptr;
	g_fmod_last_result = studio_system->getEvent(path.data(), &event_desc);
	if (g_fmod_last_result == FMOD_OK && event_desc != nullptr)
	{
		FmodStudioEventDescriptionRef result{};
		result._ref = packIndexIntoRef((uint32_t)reinterpret_cast<uintptr_t>(event_desc), GM_FMOD_STUDIO_TYPE_EVENT_DESCRIPTION);
		return result;
	}
	return std::nullopt;
}

std::optional<FmodStudioEventInstanceRef> fmod_studio_system_create_event_instance(std::string_view path)
{
	FMOD::Studio::System* studio_system = nullptr;
	validate_fmod_studio_system(g_studio_system_ref, studio_system);
	if (studio_system == nullptr) return std::nullopt;

	FMOD::Studio::EventInstance* instance = nullptr;
	g_fmod_last_result = studio_system->getEvent(path.data(), nullptr);
	if (g_fmod_last_result == FMOD_OK)
	{
		// Create instance through event description
		FMOD::Studio::EventDescription* event_desc = nullptr;
		studio_system->getEvent(path.data(), &event_desc);
		if (event_desc != nullptr)
		{
			event_desc->createInstance(&instance);
		}
	}
	if (g_fmod_last_result == FMOD_OK && instance != nullptr)
	{
		FmodStudioEventInstanceRef result{};
		result._ref = packIndexIntoRef((uint32_t)reinterpret_cast<uintptr_t>(instance), GM_FMOD_STUDIO_TYPE_EVENT_INSTANCE);
		return result;
	}
	return std::nullopt;
}

// ============================================================
// Studio System - Buses
// ============================================================

std::optional<FmodStudioBusRef> fmod_studio_system_get_bus(std::string_view path)
{
	FMOD::Studio::System* studio_system = nullptr;
	validate_fmod_studio_system(g_studio_system_ref, studio_system);
	if (studio_system == nullptr) return std::nullopt;

	FMOD::Studio::Bus* bus = nullptr;
	g_fmod_last_result = studio_system->getBus(path.data(), &bus);
	if (g_fmod_last_result == FMOD_OK && bus != nullptr)
	{
		FmodStudioBusRef result{};
		result._ref = packIndexIntoRef((uint32_t)reinterpret_cast<uintptr_t>(bus), GM_FMOD_STUDIO_TYPE_BUS);
		return result;
	}
	return std::nullopt;
}

std::optional<FmodStudioBusRef> fmod_studio_system_get_master_bus()
{
	FMOD::Studio::System* studio_system = nullptr;
	validate_fmod_studio_system(g_studio_system_ref, studio_system);
	if (studio_system == nullptr) return std::nullopt;

	FMOD::Studio::Bus* bus = nullptr;
	g_fmod_last_result = studio_system->getBus("bus:/", &bus);
	if (g_fmod_last_result == FMOD_OK && bus != nullptr)
	{
		FmodStudioBusRef result{};
		result._ref = packIndexIntoRef((uint32_t)reinterpret_cast<uintptr_t>(bus), GM_FMOD_STUDIO_TYPE_BUS);
		return result;
	}
	return std::nullopt;
}

// ============================================================
// Studio System - VCAs
// ============================================================

std::optional<FmodStudioVCARef> fmod_studio_system_get_vca(std::string_view path)
{
	FMOD::Studio::System* studio_system = nullptr;
	validate_fmod_studio_system(g_studio_system_ref, studio_system);
	if (studio_system == nullptr) return std::nullopt;

	FMOD::Studio::VCA* vca = nullptr;
	g_fmod_last_result = studio_system->getVCA(path.data(), &vca);
	if (g_fmod_last_result == FMOD_OK && vca != nullptr)
	{
		FmodStudioVCARef result{};
		result._ref = packIndexIntoRef((uint32_t)reinterpret_cast<uintptr_t>(vca), GM_FMOD_STUDIO_TYPE_VCA);
		return result;
	}
	return std::nullopt;
}

// ============================================================
// Studio System - Listener
// ============================================================

double fmod_studio_system_set_listener_attributes(double listener_index, double x, double y, double z)
{
	FMOD::Studio::System* studio_system = nullptr;
	validate_fmod_studio_system(g_studio_system_ref, studio_system);
	if (studio_system == nullptr) return 0;

	FMOD_3D_ATTRIBUTES attributes = {};
	attributes.position = {(float)x, (float)y, (float)z};
	attributes.forward = {0, 0, 1};
	attributes.up = {0, 1, 0};

	g_fmod_last_result = studio_system->setListenerAttributes((int)listener_index, &attributes);
	return 0;
}

double fmod_studio_system_set_listener_weight(double listener_index, double weight)
{
	FMOD::Studio::System* studio_system = nullptr;
	validate_fmod_studio_system(g_studio_system_ref, studio_system);
	if (studio_system == nullptr) return 0;

	g_fmod_last_result = studio_system->setListenerWeight((int)listener_index, (float)weight);
	return 0;
}

// ============================================================
// Studio System - General
// ============================================================

double fmod_studio_system_set_parameter_by_name(std::string_view name, double value)
{
	FMOD::Studio::System* studio_system = nullptr;
	validate_fmod_studio_system(g_studio_system_ref, studio_system);
	if (studio_system == nullptr) return 0;

	g_fmod_last_result = studio_system->setParameterByName(name.data(), (float)value);
	return 0;
}

double fmod_studio_system_get_parameter_by_name(std::string_view name)
{
	FMOD::Studio::System* studio_system = nullptr;
	validate_fmod_studio_system(g_studio_system_ref, studio_system);
	if (studio_system == nullptr) return 0.0;

	float value = 0.0f;
	g_fmod_last_result = studio_system->getParameterByName(name.data(), &value);
	return (double)value;
}

FmodSystemRef fmod_studio_system_get_core_system()
{
	FmodSystemRef result{};
	FMOD::Studio::System* studio_system = nullptr;
	validate_fmod_studio_system(g_studio_system_ref, studio_system);
	if (studio_system == nullptr) return result;

	FMOD::System* core_system = nullptr;
	g_fmod_last_result = studio_system->getCoreSystem(&core_system);
	if (g_fmod_last_result == FMOD_OK && core_system != nullptr)
	{
		uint32_t system_id = registerOrFindResource(core_system, index_systems, map_systems);
		result._ref = packIndexIntoRef(system_id, GM_FMOD_TYPE_SYSTEM);
	}
	return result;
}
