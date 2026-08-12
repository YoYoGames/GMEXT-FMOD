#include "GMFMOD_studio_system.h"
#include <string_view>
#include <optional>
#include <cstdio>
#include <string>
#include <vector>

using namespace gm_structs;

static uint64_t g_studio_system_ref = 0;

// ============================================================
// Studio System - Lifetime
// ============================================================

uint64_t fmod_studio_system_create()
{
	uint64_t result = 0;
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
	result = g_studio_system_ref;
	return result;
}

double fmod_studio_system_init(double max_channels, double studio_flags, double core_flags)
{
	TRACE("fmod_studio_system_init EXT CALLED");
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

std::optional<uint64_t> fmod_studio_system_load_bank_file(std::string_view filename, double flags)
{
	FMOD::Studio::System* studio_system = nullptr;
	validate_fmod_studio_system(g_studio_system_ref, studio_system);
	if (studio_system == nullptr) return std::nullopt;

	FMOD::Studio::Bank* bank = nullptr;
	g_fmod_last_result = studio_system->loadBankFile(filename.data(), (FMOD_STUDIO_LOAD_BANK_FLAGS)(int)flags, &bank);
	if (g_fmod_last_result == FMOD_OK && bank != nullptr)
	{
		uint64_t result = 0;
		result = packIndexIntoRef((uint32_t)reinterpret_cast<uintptr_t>(bank), GM_FMOD_STUDIO_TYPE_BANK);
		return result;
	}
	return std::nullopt;
}

std::optional<uint64_t> fmod_studio_system_load_bank_memory(std::string_view data, double flags)
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

std::optional<uint64_t> fmod_studio_system_get_bank_at(double index)
{
	FMOD::Studio::System* studio_system = nullptr;
	validate_fmod_studio_system(g_studio_system_ref, studio_system);
	if (studio_system == nullptr) return std::nullopt;

	int idx = (int)index;
	if (idx < 0) return std::nullopt;

	std::vector<FMOD::Studio::Bank*> banks((size_t)idx + 1, nullptr);
	int count = 0;
	g_fmod_last_result = studio_system->getBankList(banks.data(), (int)banks.size(), &count);
	if (g_fmod_last_result != FMOD_OK || idx >= count) return std::nullopt;

	FMOD::Studio::Bank* bank = banks[(size_t)idx];
	if (bank == nullptr) return std::nullopt;

	return packIndexIntoRef((uint32_t)reinterpret_cast<uintptr_t>(bank), GM_FMOD_STUDIO_TYPE_BANK);
}

std::optional<uint64_t> fmod_studio_system_get_bank(std::string_view path)
{
	FMOD::Studio::System* studio_system = nullptr;
	validate_fmod_studio_system(g_studio_system_ref, studio_system);
	if (studio_system == nullptr) return std::nullopt;

	FMOD::Studio::Bank* bank = nullptr;
	g_fmod_last_result = studio_system->getBank(path.data(), &bank);
	if (g_fmod_last_result == FMOD_OK && bank != nullptr)
	{
		uint64_t result = 0;
		result = packIndexIntoRef((uint32_t)reinterpret_cast<uintptr_t>(bank), GM_FMOD_STUDIO_TYPE_BANK);
		return result;
	}
	return std::nullopt;
}

static bool parse_guid_string(std::string_view str_guid, FMOD_GUID& guid)
{
	std::string guid_str(str_guid);
	return FMOD::Studio::parseID(guid_str.c_str(), &guid) == FMOD_OK;
}

static std::string format_guid_string(const FMOD_GUID& guid)
{
	char buffer[64]{};
	std::snprintf(buffer, sizeof(buffer),
		"{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
		guid.Data1, guid.Data2, guid.Data3,
		guid.Data4[0], guid.Data4[1], guid.Data4[2], guid.Data4[3],
		guid.Data4[4], guid.Data4[5], guid.Data4[6], guid.Data4[7]);
	return std::string(buffer);
}

std::optional<uint64_t> fmod_studio_system_get_bank_by_id(std::string_view str_guid)
{
	FMOD::Studio::System* studio_system = nullptr;
	validate_fmod_studio_system(g_studio_system_ref, studio_system);
	if (studio_system == nullptr) return std::nullopt;

	FMOD_GUID guid{};
	if (!parse_guid_string(str_guid, guid)) return std::nullopt;

	FMOD::Studio::Bank* bank = nullptr;
	g_fmod_last_result = studio_system->getBankByID(&guid, &bank);
	if (g_fmod_last_result != FMOD_OK || bank == nullptr) return std::nullopt;

	return packIndexIntoRef((uint32_t)reinterpret_cast<uintptr_t>(bank), GM_FMOD_STUDIO_TYPE_BANK);
}

// ============================================================
// Studio System - Events
// ============================================================

std::optional<uint64_t> fmod_studio_system_get_event(std::string_view path)
{
	FMOD::Studio::System* studio_system = nullptr;
	validate_fmod_studio_system(g_studio_system_ref, studio_system);
	if (studio_system == nullptr) return std::nullopt;

	FMOD::Studio::EventDescription* event_desc = nullptr;
	g_fmod_last_result = studio_system->getEvent(path.data(), &event_desc);
	if (g_fmod_last_result == FMOD_OK && event_desc != nullptr)
	{
		uint64_t result = 0;
		result = packIndexIntoRef((uint32_t)reinterpret_cast<uintptr_t>(event_desc), GM_FMOD_STUDIO_TYPE_EVENT_DESCRIPTION);
		return result;
	}
	return std::nullopt;
}

std::optional<uint64_t> fmod_studio_system_create_event_instance(std::string_view path)
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
		uint64_t result = 0;
		result = packIndexIntoRef((uint32_t)reinterpret_cast<uintptr_t>(instance), GM_FMOD_STUDIO_TYPE_EVENT_INSTANCE);
		return result;
	}
	return std::nullopt;
}

// ============================================================
// Studio System - Buses
// ============================================================

std::optional<uint64_t> fmod_studio_system_get_bus(std::string_view path)
{
	FMOD::Studio::System* studio_system = nullptr;
	validate_fmod_studio_system(g_studio_system_ref, studio_system);
	if (studio_system == nullptr) return std::nullopt;

	FMOD::Studio::Bus* bus = nullptr;
	g_fmod_last_result = studio_system->getBus(path.data(), &bus);
	if (g_fmod_last_result == FMOD_OK && bus != nullptr)
	{
		uint64_t result = 0;
		result = packIndexIntoRef((uint32_t)reinterpret_cast<uintptr_t>(bus), GM_FMOD_STUDIO_TYPE_BUS);
		return result;
	}
	return std::nullopt;
}

std::optional<uint64_t> fmod_studio_system_get_master_bus()
{
	FMOD::Studio::System* studio_system = nullptr;
	validate_fmod_studio_system(g_studio_system_ref, studio_system);
	if (studio_system == nullptr) return std::nullopt;

	FMOD::Studio::Bus* bus = nullptr;
	g_fmod_last_result = studio_system->getBus("bus:/", &bus);
	if (g_fmod_last_result == FMOD_OK && bus != nullptr)
	{
		uint64_t result = 0;
		result = packIndexIntoRef((uint32_t)reinterpret_cast<uintptr_t>(bus), GM_FMOD_STUDIO_TYPE_BUS);
		return result;
	}
	return std::nullopt;
}

std::optional<uint64_t> fmod_studio_system_get_bus_by_id(std::string_view str_guid)
{
	FMOD::Studio::System* studio_system = nullptr;
	validate_fmod_studio_system(g_studio_system_ref, studio_system);
	if (studio_system == nullptr) return std::nullopt;

	FMOD_GUID guid{};
	if (!parse_guid_string(str_guid, guid)) return std::nullopt;

	FMOD::Studio::Bus* bus = nullptr;
	g_fmod_last_result = studio_system->getBusByID(&guid, &bus);
	if (g_fmod_last_result != FMOD_OK || bus == nullptr) return std::nullopt;

	return packIndexIntoRef((uint32_t)reinterpret_cast<uintptr_t>(bus), GM_FMOD_STUDIO_TYPE_BUS);
}

// ============================================================
// Studio System - VCAs
// ============================================================

std::optional<uint64_t> fmod_studio_system_get_vca(std::string_view path)
{
	FMOD::Studio::System* studio_system = nullptr;
	validate_fmod_studio_system(g_studio_system_ref, studio_system);
	if (studio_system == nullptr) return std::nullopt;

	FMOD::Studio::VCA* vca = nullptr;
	g_fmod_last_result = studio_system->getVCA(path.data(), &vca);
	if (g_fmod_last_result == FMOD_OK && vca != nullptr)
	{
		uint64_t result = 0;
		result = packIndexIntoRef((uint32_t)reinterpret_cast<uintptr_t>(vca), GM_FMOD_STUDIO_TYPE_VCA);
		return result;
	}
	return std::nullopt;
}

std::optional<uint64_t> fmod_studio_system_get_vca_by_id(std::string_view str_guid)
{
	FMOD::Studio::System* studio_system = nullptr;
	validate_fmod_studio_system(g_studio_system_ref, studio_system);
	if (studio_system == nullptr) return std::nullopt;

	FMOD_GUID guid{};
	if (!parse_guid_string(str_guid, guid)) return std::nullopt;

	FMOD::Studio::VCA* vca = nullptr;
	g_fmod_last_result = studio_system->getVCAByID(&guid, &vca);
	if (g_fmod_last_result != FMOD_OK || vca == nullptr) return std::nullopt;

	return packIndexIntoRef((uint32_t)reinterpret_cast<uintptr_t>(vca), GM_FMOD_STUDIO_TYPE_VCA);
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

double fmod_studio_system_get_num_listeners()
{
	FMOD::Studio::System* studio_system = nullptr;
	validate_fmod_studio_system(g_studio_system_ref, studio_system);
	if (studio_system == nullptr) return 0.0;

	int count = 0;
	g_fmod_last_result = studio_system->getNumListeners(&count);
	return (double)count;
}

FmodStudioListenerAttributes fmod_studio_system_get_listener_attributes(double listener_index)
{
	FmodStudioListenerAttributes result{};
	FMOD::Studio::System* studio_system = nullptr;
	validate_fmod_studio_system(g_studio_system_ref, studio_system);
	if (studio_system == nullptr) return result;

	FMOD_3D_ATTRIBUTES attributes{};
	FMOD_VECTOR attenuation{};
	g_fmod_last_result = studio_system->getListenerAttributes((int)listener_index, &attributes, &attenuation);

	result.attributes.position.x = (double)attributes.position.x;
	result.attributes.position.y = (double)attributes.position.y;
	result.attributes.position.z = (double)attributes.position.z;
	result.attributes.velocity.x = (double)attributes.velocity.x;
	result.attributes.velocity.y = (double)attributes.velocity.y;
	result.attributes.velocity.z = (double)attributes.velocity.z;
	result.attributes.forward.x = (double)attributes.forward.x;
	result.attributes.forward.y = (double)attributes.forward.y;
	result.attributes.forward.z = (double)attributes.forward.z;
	result.attributes.up.x = (double)attributes.up.x;
	result.attributes.up.y = (double)attributes.up.y;
	result.attributes.up.z = (double)attributes.up.z;
	result.attenuation.x = (double)attenuation.x;
	result.attenuation.y = (double)attenuation.y;
	result.attenuation.z = (double)attenuation.z;
	return result;
}

double fmod_studio_system_get_listener_weight(double listener_index)
{
	FMOD::Studio::System* studio_system = nullptr;
	validate_fmod_studio_system(g_studio_system_ref, studio_system);
	if (studio_system == nullptr) return 0.0;

	float weight = 0.0f;
	g_fmod_last_result = studio_system->getListenerWeight((int)listener_index, &weight);
	return (double)weight;
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

uint64_t fmod_studio_system_get_core_system()
{
	uint64_t result = 0;
	FMOD::Studio::System* studio_system = nullptr;
	validate_fmod_studio_system(g_studio_system_ref, studio_system);
	if (studio_system == nullptr) return result;

	FMOD::System* core_system = nullptr;
	g_fmod_last_result = studio_system->getCoreSystem(&core_system);
	if (g_fmod_last_result == FMOD_OK && core_system != nullptr)
	{
		uint32_t system_id = registerOrFindResource(core_system, index_systems, map_systems);
		result = packIndexIntoRef(system_id, GM_FMOD_TYPE_SYSTEM);
	}
	return result;
}

uint64_t fmod_studio_system_get_core_system_ptr()
{
	FMOD::Studio::System* studio_system = nullptr;
	validate_fmod_studio_system(g_studio_system_ref, studio_system);
	if (studio_system == nullptr) return 0;

	FMOD::System* core_system = nullptr;
	g_fmod_last_result = studio_system->getCoreSystem(&core_system);
	if (g_fmod_last_result != FMOD_OK || core_system == nullptr) return 0;

	// Handed to GMFMOD's fmod_system_adopt(). Deliberately does not touch the
	// system's user-data slot: that slot is owned by this extension's registry
	// and must not be shared across the DLL boundary.
	return static_cast<uint64_t>(reinterpret_cast<uintptr_t>(core_system));
}

// ============================================================
// Studio System - Listeners
// ============================================================

double fmod_studio_system_set_num_listeners(double count)
{
	FMOD::Studio::System* studio_system = nullptr;
	validate_fmod_studio_system(g_studio_system_ref, studio_system);
	if (studio_system == nullptr) return 0;

	g_fmod_last_result = studio_system->setNumListeners((int)count);
	return 0;
}

// ============================================================
// Studio System - GUID Lookup
// ============================================================

std::string fmod_studio_system_lookup_id(std::string_view path)
{
	FMOD::Studio::System* studio_system = nullptr;
	validate_fmod_studio_system(g_studio_system_ref, studio_system);
	if (studio_system == nullptr) return std::string();

	std::string path_str(path);
	FMOD_GUID guid{};
	g_fmod_last_result = studio_system->lookupID(path_str.c_str(), &guid);
	if (g_fmod_last_result != FMOD_OK) return std::string();

	char buffer[64]{};
	std::snprintf(buffer, sizeof(buffer),
		"{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
		guid.Data1, guid.Data2, guid.Data3,
		guid.Data4[0], guid.Data4[1], guid.Data4[2], guid.Data4[3],
		guid.Data4[4], guid.Data4[5], guid.Data4[6], guid.Data4[7]);
	return std::string(buffer);
}

std::string fmod_studio_system_lookup_path(std::string_view str_guid)
{
	FMOD::Studio::System* studio_system = nullptr;
	validate_fmod_studio_system(g_studio_system_ref, studio_system);
	if (studio_system == nullptr) return std::string();

	FMOD_GUID guid{};
	if (!parse_guid_string(str_guid, guid)) return std::string();

	char path[256] = {};
	g_fmod_last_result = studio_system->lookupPath(&guid, path, sizeof(path), nullptr);
	if (g_fmod_last_result != FMOD_OK) return std::string();
	return std::string(path);
}

uint64_t fmod_studio_system_get_event_by_id(std::string_view id)
{
	uint64_t result = 0;

	FMOD::Studio::System* studio_system = nullptr;
	validate_fmod_studio_system(g_studio_system_ref, studio_system);
	if (studio_system == nullptr) return result;

	std::string id_str(id);
	FMOD_GUID guid{};
	g_fmod_last_result = FMOD::Studio::parseID(id_str.c_str(), &guid);
	if (g_fmod_last_result != FMOD_OK) return result;

	FMOD::Studio::EventDescription* event_desc = nullptr;
	g_fmod_last_result = studio_system->getEventByID(&guid, &event_desc);
	if (g_fmod_last_result != FMOD_OK || event_desc == nullptr) return result;

	result = packIndexIntoRef(
		(uint32_t)reinterpret_cast<uintptr_t>(event_desc),
		GM_FMOD_STUDIO_TYPE_EVENT_DESCRIPTION);
	return result;
}

double fmod_studio_system_is_valid()
{
	FMOD::Studio::System* studio_system = nullptr;
	validate_fmod_studio_system(g_studio_system_ref, studio_system);
	if (studio_system == nullptr) return 0.0;

	return studio_system->isValid() ? 1.0 : 0.0;
}

// ============================================================
// Studio System - Command Capture & Replay
// ============================================================

double fmod_studio_system_start_command_capture(std::string_view filename, enum gm_enums::FmodStudioCommandCaptureFlags flags)
{
	FMOD::Studio::System* studio_system = nullptr;
	validate_fmod_studio_system(g_studio_system_ref, studio_system);
	if (studio_system == nullptr) return 0;

	std::string filename_str(filename);
	g_fmod_last_result = studio_system->startCommandCapture(
		filename_str.c_str(), (FMOD_STUDIO_COMMANDCAPTURE_FLAGS)(int)flags);
	return 0;
}

double fmod_studio_system_stop_command_capture()
{
	FMOD::Studio::System* studio_system = nullptr;
	validate_fmod_studio_system(g_studio_system_ref, studio_system);
	if (studio_system == nullptr) return 0;

	g_fmod_last_result = studio_system->stopCommandCapture();
	return 0;
}

uint64_t fmod_studio_system_load_command_replay(std::string_view filename, enum gm_enums::FmodStudioCommandReplayFlags flags)
{
	uint64_t result = 0;

	FMOD::Studio::System* studio_system = nullptr;
	validate_fmod_studio_system(g_studio_system_ref, studio_system);
	if (studio_system == nullptr) return result;

	std::string filename_str(filename);
	FMOD::Studio::CommandReplay* replay = nullptr;
	g_fmod_last_result = studio_system->loadCommandReplay(
		filename_str.c_str(), (FMOD_STUDIO_COMMANDREPLAY_FLAGS)(int)flags, &replay);
	if (g_fmod_last_result != FMOD_OK || replay == nullptr) return result;

	result = packIndexIntoRef(
		(uint32_t)reinterpret_cast<uintptr_t>(replay),
		GM_FMOD_STUDIO_TYPE_COMMAND_REPLAY);
	return result;
}

// ============================================================
// Studio System - Sound Info
// ============================================================

FmodStudioSoundInfo fmod_studio_system_get_sound_info(std::string_view key)
{
	FmodStudioSoundInfo result{};
	FMOD::Studio::System* studio_system = nullptr;
	validate_fmod_studio_system(g_studio_system_ref, studio_system);
	if (studio_system == nullptr) return result;

	std::string key_str(key);
	FMOD_STUDIO_SOUND_INFO info{};
	g_fmod_last_result = studio_system->getSoundInfo(key_str.c_str(), &info);
	if (g_fmod_last_result != FMOD_OK) return result;

	result.name_or_data = info.name_or_data != nullptr ? std::string(info.name_or_data) : std::string();
	result.mode = (gm_enums::FmodStudioMode)(int)info.mode;
	result.sub_sound_index = (double)info.subsoundindex;

	const FMOD_CREATESOUNDEXINFO& ex = info.exinfo;
	result.ext_info.length = (double)ex.length;
	result.ext_info.file_offset = (double)ex.fileoffset;
	result.ext_info.num_channels = (double)ex.numchannels;
	result.ext_info.default_frequency = (double)ex.defaultfrequency;
	result.ext_info.format = (gm_enums::FmodStudioSoundFormat)(int)ex.format;
	result.ext_info.decode_buffer_size = (double)ex.decodebuffersize;
	result.ext_info.initial_subsound = (double)ex.initialsubsound;
	result.ext_info.num_subsounds = (double)ex.numsubsounds;
	result.ext_info.inclusion_list_num = (double)ex.inclusionlistnum;
	result.ext_info.dls_name = ex.dlsname != nullptr ? std::string(ex.dlsname) : std::string();
	result.ext_info.encryption_key = ex.encryptionkey != nullptr ? std::string(ex.encryptionkey) : std::string();
	result.ext_info.max_polyphony = (double)ex.maxpolyphony;
	result.ext_info.suggested_sound_type = (double)ex.suggestedsoundtype;
	result.ext_info.file_buffer_size = (double)ex.filebuffersize;
	result.ext_info.channel_order = (double)ex.channelorder;
	result.ext_info.initial_seek_position = (double)ex.initialseekposition;
	result.ext_info.initial_seek_pos_type = (double)ex.initialseekpostype;
	result.ext_info.ignore_set_filesystem = (double)ex.ignoresetfilesystem;
	result.ext_info.audio_queue_policy = (double)ex.audioqueuepolicy;
	result.ext_info.min_midi_granularity = (double)ex.minmidigranularity;
	result.ext_info.non_block_thread_id = (double)ex.nonblockthreadid;
	return result;
}

// ============================================================
// Studio System - Global Parameters by ID
// ============================================================

FmodStudioParameterValue fmod_studio_system_get_parameter_by_id(double id_data1, double id_data2)
{
	FmodStudioParameterValue result{};
	FMOD::Studio::System* studio_system = nullptr;
	validate_fmod_studio_system(g_studio_system_ref, studio_system);
	if (studio_system == nullptr) return result;

	FMOD_STUDIO_PARAMETER_ID id{};
	id.data1 = (unsigned int)id_data1;
	id.data2 = (unsigned int)id_data2;

	float value = 0.0f, final_value = 0.0f;
	g_fmod_last_result = studio_system->getParameterByID(id, &value, &final_value);
	result.value = (double)value;
	result.final_value = (double)final_value;
	return result;
}

double fmod_studio_system_set_parameter_by_id(double id_data1, double id_data2, double value, double ignore_seek_speed)
{
	FMOD::Studio::System* studio_system = nullptr;
	validate_fmod_studio_system(g_studio_system_ref, studio_system);
	if (studio_system == nullptr) return 0;

	FMOD_STUDIO_PARAMETER_ID id{};
	id.data1 = (unsigned int)id_data1;
	id.data2 = (unsigned int)id_data2;

	g_fmod_last_result = studio_system->setParameterByID(id, (float)value, ignore_seek_speed != 0.0);
	return 0;
}

double fmod_studio_system_set_parameter_by_id_with_label(double id_data1, double id_data2, std::string_view label, double ignore_seek_speed)
{
	FMOD::Studio::System* studio_system = nullptr;
	validate_fmod_studio_system(g_studio_system_ref, studio_system);
	if (studio_system == nullptr) return 0;

	FMOD_STUDIO_PARAMETER_ID id{};
	id.data1 = (unsigned int)id_data1;
	id.data2 = (unsigned int)id_data2;

	std::string label_str(label);
	g_fmod_last_result = studio_system->setParameterByIDWithLabel(id, label_str.c_str(), ignore_seek_speed != 0.0);
	return 0;
}

double fmod_studio_system_set_parameter_by_name_with_label(std::string_view name, std::string_view label, double ignore_seek_speed)
{
	FMOD::Studio::System* studio_system = nullptr;
	validate_fmod_studio_system(g_studio_system_ref, studio_system);
	if (studio_system == nullptr) return 0;

	std::string name_str(name);
	std::string label_str(label);
	g_fmod_last_result = studio_system->setParameterByNameWithLabel(name_str.c_str(), label_str.c_str(), ignore_seek_speed != 0.0);
	return 0;
}

// ============================================================
// Studio System - Global Parameter Description
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

FmodStudioParameterDescription fmod_studio_system_get_parameter_description_by_id(double id_data1, double id_data2)
{
	FmodStudioParameterDescription result{};
	FMOD::Studio::System* studio_system = nullptr;
	validate_fmod_studio_system(g_studio_system_ref, studio_system);
	if (studio_system == nullptr) return result;

	FMOD_STUDIO_PARAMETER_ID id{};
	id.data1 = (unsigned int)id_data1;
	id.data2 = (unsigned int)id_data2;

	FMOD_STUDIO_PARAMETER_DESCRIPTION desc{};
	g_fmod_last_result = studio_system->getParameterDescriptionByID(id, &desc);
	if (g_fmod_last_result != FMOD_OK) return result;
	return convert_parameter_description(desc);
}

FmodStudioParameterDescription fmod_studio_system_get_parameter_description_by_name(std::string_view name)
{
	FmodStudioParameterDescription result{};
	FMOD::Studio::System* studio_system = nullptr;
	validate_fmod_studio_system(g_studio_system_ref, studio_system);
	if (studio_system == nullptr) return result;

	std::string name_str(name);
	FMOD_STUDIO_PARAMETER_DESCRIPTION desc{};
	g_fmod_last_result = studio_system->getParameterDescriptionByName(name_str.c_str(), &desc);
	if (g_fmod_last_result != FMOD_OK) return result;
	return convert_parameter_description(desc);
}

double fmod_studio_system_get_parameter_description_count()
{
	FMOD::Studio::System* studio_system = nullptr;
	validate_fmod_studio_system(g_studio_system_ref, studio_system);
	if (studio_system == nullptr) return 0.0;

	int count = 0;
	g_fmod_last_result = studio_system->getParameterDescriptionCount(&count);
	return (double)count;
}

FmodStudioParameterDescription fmod_studio_system_get_parameter_description_at(double index)
{
	FmodStudioParameterDescription result{};
	FMOD::Studio::System* studio_system = nullptr;
	validate_fmod_studio_system(g_studio_system_ref, studio_system);
	if (studio_system == nullptr) return result;

	int idx = (int)index;
	if (idx < 0) return result;

	// System only exposes a bulk getParameterDescriptionList(), not a
	// per-index getter, so probe with a capacity of idx+1 and take the tail.
	std::vector<FMOD_STUDIO_PARAMETER_DESCRIPTION> descriptions((size_t)idx + 1, FMOD_STUDIO_PARAMETER_DESCRIPTION{});
	int count = 0;
	g_fmod_last_result = studio_system->getParameterDescriptionList(descriptions.data(), (int)descriptions.size(), &count);
	if (g_fmod_last_result != FMOD_OK || idx >= count) return result;

	return convert_parameter_description(descriptions[(size_t)idx]);
}

std::string fmod_studio_system_get_parameter_label_by_id(double id_data1, double id_data2, double label_index)
{
	FMOD::Studio::System* studio_system = nullptr;
	validate_fmod_studio_system(g_studio_system_ref, studio_system);
	if (studio_system == nullptr) return std::string();

	FMOD_STUDIO_PARAMETER_ID id{};
	id.data1 = (unsigned int)id_data1;
	id.data2 = (unsigned int)id_data2;

	char label[256] = {};
	g_fmod_last_result = studio_system->getParameterLabelByID(id, (int)label_index, label, sizeof(label), nullptr);
	if (g_fmod_last_result != FMOD_OK) return std::string();
	return std::string(label);
}

std::string fmod_studio_system_get_parameter_label_by_name(std::string_view name, double label_index)
{
	FMOD::Studio::System* studio_system = nullptr;
	validate_fmod_studio_system(g_studio_system_ref, studio_system);
	if (studio_system == nullptr) return std::string();

	std::string name_str(name);
	char label[256] = {};
	g_fmod_last_result = studio_system->getParameterLabelByName(name_str.c_str(), (int)label_index, label, sizeof(label), nullptr);
	if (g_fmod_last_result != FMOD_OK) return std::string();
	return std::string(label);
}

// ============================================================
// Studio System - Monitoring
// ============================================================

FmodStudioSystemCPUUsage fmod_studio_system_get_cpu_usage()
{
	FmodStudioSystemCPUUsage result{};
	FMOD::Studio::System* studio_system = nullptr;
	validate_fmod_studio_system(g_studio_system_ref, studio_system);
	if (studio_system == nullptr) return result;

	FMOD_STUDIO_CPU_USAGE usage{};
	FMOD_CPU_USAGE core{};
	g_fmod_last_result = studio_system->getCPUUsage(&usage, &core);

	result.studio_update = (double)usage.update;
	result.core.dsp = (double)core.dsp;
	result.core.stream = (double)core.stream;
	result.core.geometry = (double)core.geometry;
	result.core.update = (double)core.update;
	result.core.convolution1 = (double)core.convolution1;
	result.core.convolution2 = (double)core.convolution2;
	return result;
}

static FmodStudioBufferInfo convert_buffer_info(const FMOD_STUDIO_BUFFER_INFO& info)
{
	FmodStudioBufferInfo result{};
	result.current_usage = (double)info.currentusage;
	result.peak_usage = (double)info.peakusage;
	result.capacity = (double)info.capacity;
	result.stall_count = (double)info.stallcount;
	result.stall_time = (double)info.stalltime;
	return result;
}

FmodStudioBufferUsage fmod_studio_system_get_buffer_usage()
{
	FmodStudioBufferUsage result{};
	FMOD::Studio::System* studio_system = nullptr;
	validate_fmod_studio_system(g_studio_system_ref, studio_system);
	if (studio_system == nullptr) return result;

	FMOD_STUDIO_BUFFER_USAGE usage{};
	g_fmod_last_result = studio_system->getBufferUsage(&usage);
	result.command_queue = convert_buffer_info(usage.studiocommandqueue);
	result.handle = convert_buffer_info(usage.studiohandle);
	return result;
}

double fmod_studio_system_reset_buffer_usage()
{
	FMOD::Studio::System* studio_system = nullptr;
	validate_fmod_studio_system(g_studio_system_ref, studio_system);
	if (studio_system == nullptr) return 0;

	g_fmod_last_result = studio_system->resetBufferUsage();
	return 0;
}

FmodStudioMemoryUsage fmod_studio_system_get_memory_usage()
{
	FmodStudioMemoryUsage result{};
	FMOD::Studio::System* studio_system = nullptr;
	validate_fmod_studio_system(g_studio_system_ref, studio_system);
	if (studio_system == nullptr) return result;

	FMOD_STUDIO_MEMORY_USAGE usage{};
	g_fmod_last_result = studio_system->getMemoryUsage(&usage);
	result.exclusive = (double)usage.exclusive;
	result.inclusive = (double)usage.inclusive;
	result.sample_data = (double)usage.sampledata;
	return result;
}

// ============================================================
// Studio System - Advanced Settings
// ============================================================

FmodStudioAdvancedSettings fmod_studio_system_get_advanced_settings()
{
	FmodStudioAdvancedSettings result{};
	FMOD::Studio::System* studio_system = nullptr;
	validate_fmod_studio_system(g_studio_system_ref, studio_system);
	if (studio_system == nullptr) return result;

	FMOD_STUDIO_ADVANCEDSETTINGS settings{};
	settings.cbsize = sizeof(settings);
	g_fmod_last_result = studio_system->getAdvancedSettings(&settings);

	result.command_queue_size = (double)settings.commandqueuesize;
	result.handle_initial_size = (double)settings.handleinitialsize;
	result.studio_update_period = (double)settings.studioupdateperiod;
	result.idle_sampledata_pool_size = (double)settings.idlesampledatapoolsize;
	result.streaming_schedule_delay = (double)settings.streamingscheduledelay;
	result.encryption_key = settings.encryptionkey != nullptr ? std::string(settings.encryptionkey) : std::string();
	return result;
}

double fmod_studio_system_set_advanced_settings(const FmodStudioAdvancedSettings& settings)
{
	FMOD::Studio::System* studio_system = nullptr;
	validate_fmod_studio_system(g_studio_system_ref, studio_system);
	if (studio_system == nullptr) return 0;

	FMOD_STUDIO_ADVANCEDSETTINGS native{};
	native.cbsize = sizeof(native);
	native.commandqueuesize = (unsigned int)settings.command_queue_size;
	native.handleinitialsize = (unsigned int)settings.handle_initial_size;
	native.studioupdateperiod = (int)settings.studio_update_period;
	native.idlesampledatapoolsize = (int)settings.idle_sampledata_pool_size;
	native.streamingscheduledelay = (unsigned int)settings.streaming_schedule_delay;
	native.encryptionkey = settings.encryption_key.empty() ? nullptr : settings.encryption_key.c_str();

	g_fmod_last_result = studio_system->setAdvancedSettings(&native);
	return 0;
}

// ============================================================
// Studio System - Callback (mask-only stub, see fmod_fetch_callbacks)
// ============================================================

// No GMFunction is passed for this callback in the current spec, so there is no
// path to deliver event details back to GML. The trampoline counts fired events
// in the shared g_fmod_callback_count (drained by fmod_fetch_callbacks() in
// GMFMOD_utility.cpp).
static FMOD_RESULT F_CALL CALLBACK_fmod_studio_system(
	FMOD_STUDIO_SYSTEM* system,
	FMOD_STUDIO_SYSTEM_CALLBACK_TYPE type,
	void* commanddata,
	void* userdata)
{
	g_fmod_callback_count.fetch_add(1, std::memory_order_relaxed);
	return FMOD_OK;
}

double fmod_studio_system_set_callback(double callback_mask)
{
	FMOD::Studio::System* studio_system = nullptr;
	validate_fmod_studio_system(g_studio_system_ref, studio_system);
	if (studio_system == nullptr) return 0;

	g_fmod_last_result = studio_system->setCallback(CALLBACK_fmod_studio_system, (FMOD_STUDIO_SYSTEM_CALLBACK_TYPE)(int)callback_mask);
	return 0;
}

// ============================================================
// Studio System - User Data
// ============================================================

double fmod_studio_system_get_user_data()
{
	FMOD::Studio::System* studio_system = nullptr;
	validate_fmod_studio_system(g_studio_system_ref, studio_system);
	if (studio_system == nullptr) return 0.0;

	auto it = g_user_data.find(reinterpret_cast<uintptr_t>(studio_system));
	return it != g_user_data.end() ? it->second : 0.0;
}

double fmod_studio_system_set_user_data(double user_data)
{
	FMOD::Studio::System* studio_system = nullptr;
	validate_fmod_studio_system(g_studio_system_ref, studio_system);
	if (studio_system == nullptr) return 0;

	g_user_data[reinterpret_cast<uintptr_t>(studio_system)] = user_data;
	return 0;
}
