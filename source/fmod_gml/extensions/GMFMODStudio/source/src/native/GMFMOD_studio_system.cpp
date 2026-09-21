#include "GMFMOD_studio_system.h"
#include <string_view>
#include <optional>
#include <climits>
#include <cstdio>
#include <string>
#include <vector>
#include <mutex>

using namespace gm_structs;

static uint64_t g_studio_system_ref = 0;

// There is one Studio system, so this is a single slot rather than a map. It is
// still guarded: the callback fires on Studio's update thread.
static std::mutex g_studio_system_callback_mutex;
static std::optional<gm::wire::GMFunction> g_studio_system_callback;

// ============================================================
// Studio System - Lifetime
// ============================================================

uint64_t fmod_studio_system_create()
{
	uint64_t result = 0;
	if (g_studio_system_ref != 0)
	{
		// Without this the caller reads whatever the previous call left behind.
		g_fmod_studio_last_result = FMOD_ERR_INITIALIZED;
		return result;
	}

	FMOD::Studio::System* studio_system = nullptr;
	g_fmod_studio_last_result = FMOD::Studio::System::create(&studio_system);
	if (g_fmod_studio_last_result != FMOD_OK || studio_system == nullptr) return result;

	g_studio_system_ref = fmod_pointer_ref(studio_system, gmfmod::RefType::StudioSystem);
	result = g_studio_system_ref;
	return result;
}

double fmod_studio_system_init(double max_channels, gm_enums::FmodStudioInitFlags studio_flags, gm_enums::FmodStudioCoreInitFlags core_flags)
{
	FMOD::Studio::System* studio_system = resolve_fmod_studio_system(g_studio_system_ref);
	if (studio_system == nullptr) return 0;

	g_fmod_studio_last_result = studio_system->initialize((int)max_channels, (FMOD_STUDIO_INITFLAGS)(std::uint64_t)studio_flags, (FMOD_INITFLAGS)(std::uint64_t)core_flags, nullptr);
	return 0;
}

// Marked finish_fn in spec.gmidl, so the runtime calls it on game end and on
// game_restart(). Releasing the Studio system also releases the core system it
// owns - which is the same object GMFMOD may be holding as an adopted system,
// and why GMFMOD's own shutdown never dereferences one.
void fmod_studio_shutdown()
{
	FMOD::Studio::System* studio_system = resolve_fmod_studio_system(g_studio_system_ref);
	if (studio_system != nullptr)
		studio_system->release();

	g_studio_system_ref = 0;

	fmod_studio_event_instance_reset_state();
	fmod_studio_event_description_reset_state();
	fmod_studio_command_replay_reset_state();

	{
		std::lock_guard<std::mutex> lock(g_studio_system_callback_mutex);
		g_studio_system_callback.reset();
	}

	g_fmod_studio_last_result = FMOD_OK;
}

FMOD::Studio::System* fmod_studio_current_system()
{
	if (g_studio_system_ref == 0) return nullptr;
	return resolve_fmod_studio_system(g_studio_system_ref);
}

double fmod_studio_system_release()
{
	FMOD::Studio::System* studio_system = resolve_fmod_studio_system(g_studio_system_ref);
	if (studio_system == nullptr) return 0;

	g_fmod_studio_last_result = studio_system->release();
	if (g_fmod_studio_last_result == FMOD_OK)
	{
		g_studio_system_ref = 0;
	}
	return 0;
}

double fmod_studio_system_update()
{
	FMOD::Studio::System* studio_system = resolve_fmod_studio_system(g_studio_system_ref);
	if (studio_system == nullptr) return 0;

	g_fmod_studio_last_result = studio_system->update();
	return 0;
}

double fmod_studio_system_flush_commands()
{
	FMOD::Studio::System* studio_system = resolve_fmod_studio_system(g_studio_system_ref);
	if (studio_system == nullptr) return 0;

	g_fmod_studio_last_result = studio_system->flushCommands();
	return 0;
}

double fmod_studio_system_flush_sample_loading()
{
	FMOD::Studio::System* studio_system = resolve_fmod_studio_system(g_studio_system_ref);
	if (studio_system == nullptr) return 0;

	g_fmod_studio_last_result = studio_system->flushSampleLoading();
	return 0;
}

// ============================================================
// Studio System - Banks
// ============================================================

std::optional<uint64_t> fmod_studio_system_load_bank_file(std::string_view filename, gm_enums::FmodStudioLoadBankFlags flags)
{
	FMOD::Studio::System* studio_system = resolve_fmod_studio_system(g_studio_system_ref);
	if (studio_system == nullptr) return std::nullopt;

	FMOD::Studio::Bank* bank = nullptr;
	g_fmod_studio_last_result = studio_system->loadBankFile(filename.data(), (FMOD_STUDIO_LOAD_BANK_FLAGS)(std::uint64_t)flags, &bank);
	if (g_fmod_studio_last_result == FMOD_OK && bank != nullptr)
	{
		uint64_t result = 0;
		result = fmod_pointer_ref(bank, gmfmod::RefType::StudioBank);
		return result;
	}
	return std::nullopt;
}

// The load mode is fixed at FMOD_STUDIO_LOAD_MEMORY - the copying one - and
// FMOD_STUDIO_LOAD_MEMORY_POINT is deliberately not reachable from GML. _POINT
// keeps the caller's pointer instead of copying, which needs the buffer to be
// 32-byte *address* aligned (FMOD_STUDIO_LOAD_MEMORY_ALIGNMENT) and to stay
// alive until the bank has finished unloading. GML can express neither: it
// offers no aligned allocation, and no hook that fires when an async unload
// completes. FMOD_STUDIO_LOAD_MEMORY copies, so the buffer may be freed the
// instant this returns.
std::optional<uint64_t> fmod_studio_system_load_bank_memory(gm::wire::GMBuffer data, double length, gm_enums::FmodStudioLoadBankFlags flags)
{
	FMOD::Studio::System* studio_system = resolve_fmod_studio_system(g_studio_system_ref);
	if (studio_system == nullptr) return std::nullopt;

	if (data.data() == nullptr || data.length() == 0)
	{
		g_fmod_studio_last_result = FMOD_ERR_INVALID_PARAM;
		return std::nullopt;
	}

	// length <= 0 means the whole buffer. Anything larger than the buffer is
	// clamped to it rather than trusted; loadBankMemory takes an int, so the
	// 2GB ceiling is FMOD's, not ours.
	uint64_t usable = data.length();
	if (length > 0 && (uint64_t)length < usable)
		usable = (uint64_t)length;
	if (usable > (uint64_t)INT_MAX)
		usable = (uint64_t)INT_MAX;

	FMOD::Studio::Bank* bank = nullptr;
	g_fmod_studio_last_result = studio_system->loadBankMemory(
		(const char*)data.data(),
		(int)usable,
		FMOD_STUDIO_LOAD_MEMORY,
		(FMOD_STUDIO_LOAD_BANK_FLAGS)(std::uint64_t)flags,
		&bank);

	if (g_fmod_studio_last_result == FMOD_OK && bank != nullptr)
	{
		uint64_t result = 0;
		result = fmod_pointer_ref(bank, gmfmod::RefType::StudioBank);
		return result;
	}
	return std::nullopt;
}

double fmod_studio_system_unload_all()
{
	FMOD::Studio::System* studio_system = resolve_fmod_studio_system(g_studio_system_ref);
	if (studio_system == nullptr) return 0;

	g_fmod_studio_last_result = studio_system->unloadAll();
	return 0;
}

double fmod_studio_system_get_bank_count()
{
	FMOD::Studio::System* studio_system = resolve_fmod_studio_system(g_studio_system_ref);
	if (studio_system == nullptr) return 0.0;

	int count = 0;
	g_fmod_studio_last_result = studio_system->getBankCount(&count);
	return (double)count;
}

std::optional<uint64_t> fmod_studio_system_get_bank_at(double index)
{
	FMOD::Studio::System* studio_system = resolve_fmod_studio_system(g_studio_system_ref);
	if (studio_system == nullptr) return std::nullopt;

	int idx = (int)index;
	if (idx < 0) return std::nullopt;

	std::vector<FMOD::Studio::Bank*> banks((size_t)idx + 1, nullptr);
	int count = 0;
	g_fmod_studio_last_result = studio_system->getBankList(banks.data(), (int)banks.size(), &count);
	if (g_fmod_studio_last_result != FMOD_OK || idx >= count) return std::nullopt;

	FMOD::Studio::Bank* bank = banks[(size_t)idx];
	if (bank == nullptr) return std::nullopt;

	return fmod_pointer_ref(bank, gmfmod::RefType::StudioBank);
}

std::optional<uint64_t> fmod_studio_system_get_bank(std::string_view path)
{
	FMOD::Studio::System* studio_system = resolve_fmod_studio_system(g_studio_system_ref);
	if (studio_system == nullptr) return std::nullopt;

	FMOD::Studio::Bank* bank = nullptr;
	g_fmod_studio_last_result = studio_system->getBank(path.data(), &bank);
	if (g_fmod_studio_last_result == FMOD_OK && bank != nullptr)
	{
		uint64_t result = 0;
		result = fmod_pointer_ref(bank, gmfmod::RefType::StudioBank);
		return result;
	}
	return std::nullopt;
}

static bool parse_guid_string(std::string_view str_guid, FMOD_GUID& guid)
{
	std::string guid_str(str_guid);
	return FMOD::Studio::parseID(guid_str.c_str(), &guid) == FMOD_OK;
}

std::optional<uint64_t> fmod_studio_system_get_bank_by_id(std::string_view str_guid)
{
	FMOD::Studio::System* studio_system = resolve_fmod_studio_system(g_studio_system_ref);
	if (studio_system == nullptr) return std::nullopt;

	FMOD_GUID guid{};
	if (!parse_guid_string(str_guid, guid)) return std::nullopt;

	FMOD::Studio::Bank* bank = nullptr;
	g_fmod_studio_last_result = studio_system->getBankByID(&guid, &bank);
	if (g_fmod_studio_last_result != FMOD_OK || bank == nullptr) return std::nullopt;

	return fmod_pointer_ref(bank, gmfmod::RefType::StudioBank);
}

// ============================================================
// Studio System - Events
// ============================================================

std::optional<uint64_t> fmod_studio_system_get_event(std::string_view path)
{
	FMOD::Studio::System* studio_system = resolve_fmod_studio_system(g_studio_system_ref);
	if (studio_system == nullptr) return std::nullopt;

	FMOD::Studio::EventDescription* event_desc = nullptr;
	g_fmod_studio_last_result = studio_system->getEvent(path.data(), &event_desc);
	if (g_fmod_studio_last_result == FMOD_OK && event_desc != nullptr)
	{
		uint64_t result = 0;
		result = fmod_pointer_ref(event_desc, gmfmod::RefType::StudioEventDescription);
		return result;
	}
	return std::nullopt;
}

std::optional<uint64_t> fmod_studio_system_create_event_instance(std::string_view path)
{
	FMOD::Studio::System* studio_system = resolve_fmod_studio_system(g_studio_system_ref);
	if (studio_system == nullptr) return std::nullopt;

	FMOD::Studio::EventInstance* instance = nullptr;
	g_fmod_studio_last_result = studio_system->getEvent(path.data(), nullptr);
	if (g_fmod_studio_last_result == FMOD_OK)
	{
		// Create instance through event description
		FMOD::Studio::EventDescription* event_desc = nullptr;
		studio_system->getEvent(path.data(), &event_desc);
		if (event_desc != nullptr)
		{
			event_desc->createInstance(&instance);
		}
	}
	if (g_fmod_studio_last_result == FMOD_OK && instance != nullptr)
	{
		uint64_t result = 0;
		result = fmod_pointer_ref(instance, gmfmod::RefType::StudioEventInstance);
		return result;
	}
	return std::nullopt;
}

// ============================================================
// Studio System - Buses
// ============================================================

std::optional<uint64_t> fmod_studio_system_get_bus(std::string_view path)
{
	FMOD::Studio::System* studio_system = resolve_fmod_studio_system(g_studio_system_ref);
	if (studio_system == nullptr) return std::nullopt;

	FMOD::Studio::Bus* bus = nullptr;
	g_fmod_studio_last_result = studio_system->getBus(path.data(), &bus);
	if (g_fmod_studio_last_result == FMOD_OK && bus != nullptr)
	{
		uint64_t result = 0;
		result = fmod_pointer_ref(bus, gmfmod::RefType::StudioBus);
		return result;
	}
	return std::nullopt;
}

std::optional<uint64_t> fmod_studio_system_get_master_bus()
{
	FMOD::Studio::System* studio_system = resolve_fmod_studio_system(g_studio_system_ref);
	if (studio_system == nullptr) return std::nullopt;

	FMOD::Studio::Bus* bus = nullptr;
	g_fmod_studio_last_result = studio_system->getBus("bus:/", &bus);
	if (g_fmod_studio_last_result == FMOD_OK && bus != nullptr)
	{
		uint64_t result = 0;
		result = fmod_pointer_ref(bus, gmfmod::RefType::StudioBus);
		return result;
	}
	return std::nullopt;
}

std::optional<uint64_t> fmod_studio_system_get_bus_by_id(std::string_view str_guid)
{
	FMOD::Studio::System* studio_system = resolve_fmod_studio_system(g_studio_system_ref);
	if (studio_system == nullptr) return std::nullopt;

	FMOD_GUID guid{};
	if (!parse_guid_string(str_guid, guid)) return std::nullopt;

	FMOD::Studio::Bus* bus = nullptr;
	g_fmod_studio_last_result = studio_system->getBusByID(&guid, &bus);
	if (g_fmod_studio_last_result != FMOD_OK || bus == nullptr) return std::nullopt;

	return fmod_pointer_ref(bus, gmfmod::RefType::StudioBus);
}

// ============================================================
// Studio System - VCAs
// ============================================================

std::optional<uint64_t> fmod_studio_system_get_vca(std::string_view path)
{
	FMOD::Studio::System* studio_system = resolve_fmod_studio_system(g_studio_system_ref);
	if (studio_system == nullptr) return std::nullopt;

	FMOD::Studio::VCA* vca = nullptr;
	g_fmod_studio_last_result = studio_system->getVCA(path.data(), &vca);
	if (g_fmod_studio_last_result == FMOD_OK && vca != nullptr)
	{
		uint64_t result = 0;
		result = fmod_pointer_ref(vca, gmfmod::RefType::StudioVca);
		return result;
	}
	return std::nullopt;
}

std::optional<uint64_t> fmod_studio_system_get_vca_by_id(std::string_view str_guid)
{
	FMOD::Studio::System* studio_system = resolve_fmod_studio_system(g_studio_system_ref);
	if (studio_system == nullptr) return std::nullopt;

	FMOD_GUID guid{};
	if (!parse_guid_string(str_guid, guid)) return std::nullopt;

	FMOD::Studio::VCA* vca = nullptr;
	g_fmod_studio_last_result = studio_system->getVCAByID(&guid, &vca);
	if (g_fmod_studio_last_result != FMOD_OK || vca == nullptr) return std::nullopt;

	return fmod_pointer_ref(vca, gmfmod::RefType::StudioVca);
}

// ============================================================
// Studio System - Listener
// ============================================================

double fmod_studio_system_set_listener_attributes(double listener_index, const gm_structs::FmodStudioVec3& position, const gm_structs::FmodStudioVec3& velocity, const gm_structs::FmodStudioVec3& forward, const gm_structs::FmodStudioVec3& up, const std::optional<gm_structs::FmodStudioVec3>& attenuation_position)
{
	FMOD::Studio::System* studio_system = resolve_fmod_studio_system(g_studio_system_ref);
	if (studio_system == nullptr) return 0;

	FMOD_3D_ATTRIBUTES attributes = {};
	attributes.position = {(float)position.x, (float)position.y, (float)position.z};
	attributes.velocity = {(float)velocity.x, (float)velocity.y, (float)velocity.z};
	attributes.forward = {(float)forward.x, (float)forward.y, (float)forward.z};
	attributes.up = {(float)up.x, (float)up.y, (float)up.z};

	// FMOD treats a null attenuation position as "attenuate from the listener position",
	// so an absent value has to stay a null pointer rather than become a zero vector.
	FMOD_VECTOR attenuation{};
	const FMOD_VECTOR* attenuation_ptr = nullptr;
	if (attenuation_position.has_value())
	{
		attenuation = {(float)attenuation_position->x, (float)attenuation_position->y, (float)attenuation_position->z};
		attenuation_ptr = &attenuation;
	}

	g_fmod_studio_last_result = studio_system->setListenerAttributes((int)listener_index, &attributes, attenuation_ptr);
	return 0;
}

double fmod_studio_system_set_listener_weight(double listener_index, double weight)
{
	FMOD::Studio::System* studio_system = resolve_fmod_studio_system(g_studio_system_ref);
	if (studio_system == nullptr) return 0;

	g_fmod_studio_last_result = studio_system->setListenerWeight((int)listener_index, (float)weight);
	return 0;
}

double fmod_studio_system_get_num_listeners()
{
	FMOD::Studio::System* studio_system = resolve_fmod_studio_system(g_studio_system_ref);
	if (studio_system == nullptr) return 0.0;

	int count = 0;
	g_fmod_studio_last_result = studio_system->getNumListeners(&count);
	return (double)count;
}

FmodStudioListenerAttributes fmod_studio_system_get_listener_attributes(double listener_index)
{
	FmodStudioListenerAttributes result{};
	FMOD::Studio::System* studio_system = resolve_fmod_studio_system(g_studio_system_ref);
	if (studio_system == nullptr) return result;

	FMOD_3D_ATTRIBUTES attributes{};
	FMOD_VECTOR attenuation{};
	g_fmod_studio_last_result = studio_system->getListenerAttributes((int)listener_index, &attributes, &attenuation);

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
	FMOD::Studio::System* studio_system = resolve_fmod_studio_system(g_studio_system_ref);
	if (studio_system == nullptr) return 0.0;

	float weight = 0.0f;
	g_fmod_studio_last_result = studio_system->getListenerWeight((int)listener_index, &weight);
	return (double)weight;
}

// ============================================================
// Studio System - General
// ============================================================

double fmod_studio_system_set_parameter_by_name(std::string_view name, double value)
{
	FMOD::Studio::System* studio_system = resolve_fmod_studio_system(g_studio_system_ref);
	if (studio_system == nullptr) return 0;

	g_fmod_studio_last_result = studio_system->setParameterByName(name.data(), (float)value);
	return 0;
}

double fmod_studio_system_get_parameter_by_name(std::string_view name)
{
	FMOD::Studio::System* studio_system = resolve_fmod_studio_system(g_studio_system_ref);
	if (studio_system == nullptr) return 0.0;

	float value = 0.0f;
	g_fmod_studio_last_result = studio_system->getParameterByName(name.data(), &value);
	return (double)value;
}

uint64_t fmod_studio_system_get_core_system_ptr()
{
	FMOD::Studio::System* studio_system = resolve_fmod_studio_system(g_studio_system_ref);
	if (studio_system == nullptr) return 0;

	FMOD::System* core_system = nullptr;
	g_fmod_studio_last_result = studio_system->getCoreSystem(&core_system);
	if (g_fmod_studio_last_result != FMOD_OK || core_system == nullptr) return 0;

	// Handed to GMFMOD's fmod_system_adopt(). A pointer, not a ref: both
	// extensions pack refs identically, so a ref minted here would resolve
	// against GMFMOD's own registry rather than fail.
	return static_cast<uint64_t>(reinterpret_cast<uintptr_t>(core_system));
}

// ============================================================
// Studio System - Listeners
// ============================================================

double fmod_studio_system_set_num_listeners(double count)
{
	FMOD::Studio::System* studio_system = resolve_fmod_studio_system(g_studio_system_ref);
	if (studio_system == nullptr) return 0;

	g_fmod_studio_last_result = studio_system->setNumListeners((int)count);
	return 0;
}

// ============================================================
// Studio System - GUID Lookup
// ============================================================

std::string fmod_studio_system_lookup_id(std::string_view path)
{
	FMOD::Studio::System* studio_system = resolve_fmod_studio_system(g_studio_system_ref);
	if (studio_system == nullptr) return std::string();

	std::string path_str(path);
	FMOD_GUID guid{};
	g_fmod_studio_last_result = studio_system->lookupID(path_str.c_str(), &guid);
	if (g_fmod_studio_last_result != FMOD_OK) return std::string();

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
	FMOD::Studio::System* studio_system = resolve_fmod_studio_system(g_studio_system_ref);
	if (studio_system == nullptr) return std::string();

	FMOD_GUID guid{};
	if (!parse_guid_string(str_guid, guid)) return std::string();

	return gmfmod::readString([studio_system, &guid](char* buf, int size, int* got) {
		return studio_system->lookupPath(&guid, buf, size, got);
	}, g_fmod_studio_last_result);
}

uint64_t fmod_studio_system_get_event_by_id(std::string_view id)
{
	uint64_t result = 0;

	FMOD::Studio::System* studio_system = resolve_fmod_studio_system(g_studio_system_ref);
	if (studio_system == nullptr) return result;

	std::string id_str(id);
	FMOD_GUID guid{};
	g_fmod_studio_last_result = FMOD::Studio::parseID(id_str.c_str(), &guid);
	if (g_fmod_studio_last_result != FMOD_OK) return result;

	FMOD::Studio::EventDescription* event_desc = nullptr;
	g_fmod_studio_last_result = studio_system->getEventByID(&guid, &event_desc);
	if (g_fmod_studio_last_result != FMOD_OK || event_desc == nullptr) return result;

	result = gmfmod::packRef(
		(uint32_t)reinterpret_cast<uintptr_t>(event_desc),
		gmfmod::RefType::StudioEventDescription);
	return result;
}

bool fmod_studio_system_is_valid()
{
	FMOD::Studio::System* studio_system = resolve_fmod_studio_system(g_studio_system_ref);
	if (studio_system == nullptr) return false;

	return studio_system->isValid();
}

// ============================================================
// Studio System - Command Capture & Replay
// ============================================================

double fmod_studio_system_start_command_capture(std::string_view filename, enum gm_enums::FmodStudioCommandCaptureFlags flags)
{
	FMOD::Studio::System* studio_system = resolve_fmod_studio_system(g_studio_system_ref);
	if (studio_system == nullptr) return 0;

	std::string filename_str(filename);
	g_fmod_studio_last_result = studio_system->startCommandCapture(
		filename_str.c_str(), (FMOD_STUDIO_COMMANDCAPTURE_FLAGS)(std::uint64_t)flags);
	return 0;
}

double fmod_studio_system_stop_command_capture()
{
	FMOD::Studio::System* studio_system = resolve_fmod_studio_system(g_studio_system_ref);
	if (studio_system == nullptr) return 0;

	g_fmod_studio_last_result = studio_system->stopCommandCapture();
	return 0;
}

uint64_t fmod_studio_system_load_command_replay(std::string_view filename, enum gm_enums::FmodStudioCommandReplayFlags flags)
{
	uint64_t result = 0;

	FMOD::Studio::System* studio_system = resolve_fmod_studio_system(g_studio_system_ref);
	if (studio_system == nullptr) return result;

	std::string filename_str(filename);
	FMOD::Studio::CommandReplay* replay = nullptr;
	g_fmod_studio_last_result = studio_system->loadCommandReplay(
		filename_str.c_str(), (FMOD_STUDIO_COMMANDREPLAY_FLAGS)(std::uint64_t)flags, &replay);
	if (g_fmod_studio_last_result != FMOD_OK || replay == nullptr) return result;

	result = gmfmod::packRef(
		(uint32_t)reinterpret_cast<uintptr_t>(replay),
		gmfmod::RefType::StudioCommandReplay);
	return result;
}

// ============================================================
// Studio System - Sound Info
// ============================================================

FmodStudioSoundInfo fmod_studio_system_get_sound_info(std::string_view key)
{
	FmodStudioSoundInfo result{};
	FMOD::Studio::System* studio_system = resolve_fmod_studio_system(g_studio_system_ref);
	if (studio_system == nullptr) return result;

	std::string key_str(key);
	FMOD_STUDIO_SOUND_INFO info{};
	g_fmod_studio_last_result = studio_system->getSoundInfo(key_str.c_str(), &info);
	if (g_fmod_studio_last_result != FMOD_OK) return result;

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
	result.ext_info.suggested_sound_type = (gm_enums::FmodStudioSoundType)ex.suggestedsoundtype;
	result.ext_info.file_buffer_size = (double)ex.filebuffersize;
	result.ext_info.channel_order = (gm_enums::FmodStudioChannelOrder)ex.channelorder;
	result.ext_info.initial_seek_position = (double)ex.initialseekposition;
	result.ext_info.initial_seek_pos_type = (gm_enums::FmodStudioTimeUnit)ex.initialseekpostype;
	result.ext_info.ignore_set_filesystem = ex.ignoresetfilesystem != 0;
	result.ext_info.audio_queue_policy = (gm_enums::FmodStudioAudioQueueCodecPolicy)ex.audioqueuepolicy;
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
	FMOD::Studio::System* studio_system = resolve_fmod_studio_system(g_studio_system_ref);
	if (studio_system == nullptr) return result;

	FMOD_STUDIO_PARAMETER_ID id{};
	id.data1 = (unsigned int)id_data1;
	id.data2 = (unsigned int)id_data2;

	float value = 0.0f, final_value = 0.0f;
	g_fmod_studio_last_result = studio_system->getParameterByID(id, &value, &final_value);
	result.value = (double)value;
	result.final_value = (double)final_value;
	return result;
}

double fmod_studio_system_set_parameter_by_id(double id_data1, double id_data2, double value, bool ignore_seek_speed)
{
	FMOD::Studio::System* studio_system = resolve_fmod_studio_system(g_studio_system_ref);
	if (studio_system == nullptr) return 0;

	FMOD_STUDIO_PARAMETER_ID id{};
	id.data1 = (unsigned int)id_data1;
	id.data2 = (unsigned int)id_data2;

	g_fmod_studio_last_result = studio_system->setParameterByID(id, (float)value, ignore_seek_speed);
	return 0;
}

double fmod_studio_system_set_parameter_by_id_with_label(double id_data1, double id_data2, std::string_view label, bool ignore_seek_speed)
{
	FMOD::Studio::System* studio_system = resolve_fmod_studio_system(g_studio_system_ref);
	if (studio_system == nullptr) return 0;

	FMOD_STUDIO_PARAMETER_ID id{};
	id.data1 = (unsigned int)id_data1;
	id.data2 = (unsigned int)id_data2;

	std::string label_str(label);
	g_fmod_studio_last_result = studio_system->setParameterByIDWithLabel(id, label_str.c_str(), ignore_seek_speed);
	return 0;
}

double fmod_studio_system_set_parameter_by_name_with_label(std::string_view name, std::string_view label, bool ignore_seek_speed)
{
	FMOD::Studio::System* studio_system = resolve_fmod_studio_system(g_studio_system_ref);
	if (studio_system == nullptr) return 0;

	std::string name_str(name);
	std::string label_str(label);
	g_fmod_studio_last_result = studio_system->setParameterByNameWithLabel(name_str.c_str(), label_str.c_str(), ignore_seek_speed);
	return 0;
}

// ============================================================
// Studio System - Global Parameter Description
// ============================================================

FmodStudioParameterDescription fmod_studio_system_get_parameter_description_by_id(double id_data1, double id_data2)
{
	FmodStudioParameterDescription result{};
	FMOD::Studio::System* studio_system = resolve_fmod_studio_system(g_studio_system_ref);
	if (studio_system == nullptr) return result;

	FMOD_STUDIO_PARAMETER_ID id{};
	id.data1 = (unsigned int)id_data1;
	id.data2 = (unsigned int)id_data2;

	FMOD_STUDIO_PARAMETER_DESCRIPTION desc{};
	g_fmod_studio_last_result = studio_system->getParameterDescriptionByID(id, &desc);
	if (g_fmod_studio_last_result != FMOD_OK) return result;
	return convert_parameter_description(desc);
}

FmodStudioParameterDescription fmod_studio_system_get_parameter_description_by_name(std::string_view name)
{
	FmodStudioParameterDescription result{};
	FMOD::Studio::System* studio_system = resolve_fmod_studio_system(g_studio_system_ref);
	if (studio_system == nullptr) return result;

	std::string name_str(name);
	FMOD_STUDIO_PARAMETER_DESCRIPTION desc{};
	g_fmod_studio_last_result = studio_system->getParameterDescriptionByName(name_str.c_str(), &desc);
	if (g_fmod_studio_last_result != FMOD_OK) return result;
	return convert_parameter_description(desc);
}

double fmod_studio_system_get_parameter_description_count()
{
	FMOD::Studio::System* studio_system = resolve_fmod_studio_system(g_studio_system_ref);
	if (studio_system == nullptr) return 0.0;

	int count = 0;
	g_fmod_studio_last_result = studio_system->getParameterDescriptionCount(&count);
	return (double)count;
}

FmodStudioParameterDescription fmod_studio_system_get_parameter_description_at(double index)
{
	FmodStudioParameterDescription result{};
	FMOD::Studio::System* studio_system = resolve_fmod_studio_system(g_studio_system_ref);
	if (studio_system == nullptr) return result;

	int idx = (int)index;
	if (idx < 0) return result;

	// System only exposes a bulk getParameterDescriptionList(), not a
	// per-index getter, so probe with a capacity of idx+1 and take the tail.
	std::vector<FMOD_STUDIO_PARAMETER_DESCRIPTION> descriptions((size_t)idx + 1, FMOD_STUDIO_PARAMETER_DESCRIPTION{});
	int count = 0;
	g_fmod_studio_last_result = studio_system->getParameterDescriptionList(descriptions.data(), (int)descriptions.size(), &count);
	if (g_fmod_studio_last_result != FMOD_OK || idx >= count) return result;

	return convert_parameter_description(descriptions[(size_t)idx]);
}

std::string fmod_studio_system_get_parameter_label_by_id(double id_data1, double id_data2, double label_index)
{
	FMOD::Studio::System* studio_system = resolve_fmod_studio_system(g_studio_system_ref);
	if (studio_system == nullptr) return std::string();

	FMOD_STUDIO_PARAMETER_ID id{};
	id.data1 = (unsigned int)id_data1;
	id.data2 = (unsigned int)id_data2;

	return gmfmod::readString([studio_system, id, label_index](char* buf, int size, int* got) {
		return studio_system->getParameterLabelByID(id, (int)label_index, buf, size, got);
	}, g_fmod_studio_last_result);
}

std::string fmod_studio_system_get_parameter_label_by_name(std::string_view name, double label_index)
{
	FMOD::Studio::System* studio_system = resolve_fmod_studio_system(g_studio_system_ref);
	if (studio_system == nullptr) return std::string();

	std::string name_str(name);
	return gmfmod::readString([studio_system, &name_str, label_index](char* buf, int size, int* got) {
		return studio_system->getParameterLabelByName(name_str.c_str(), (int)label_index, buf, size, got);
	}, g_fmod_studio_last_result);
}

// ============================================================
// Studio System - Monitoring
// ============================================================

FmodStudioSystemCPUUsage fmod_studio_system_get_cpu_usage()
{
	FmodStudioSystemCPUUsage result{};
	FMOD::Studio::System* studio_system = resolve_fmod_studio_system(g_studio_system_ref);
	if (studio_system == nullptr) return result;

	FMOD_STUDIO_CPU_USAGE usage{};
	FMOD_CPU_USAGE core{};
	g_fmod_studio_last_result = studio_system->getCPUUsage(&usage, &core);

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
	FMOD::Studio::System* studio_system = resolve_fmod_studio_system(g_studio_system_ref);
	if (studio_system == nullptr) return result;

	FMOD_STUDIO_BUFFER_USAGE usage{};
	g_fmod_studio_last_result = studio_system->getBufferUsage(&usage);
	result.command_queue = convert_buffer_info(usage.studiocommandqueue);
	result.handle = convert_buffer_info(usage.studiohandle);
	return result;
}

double fmod_studio_system_reset_buffer_usage()
{
	FMOD::Studio::System* studio_system = resolve_fmod_studio_system(g_studio_system_ref);
	if (studio_system == nullptr) return 0;

	g_fmod_studio_last_result = studio_system->resetBufferUsage();
	return 0;
}

FmodStudioMemoryUsage fmod_studio_system_get_memory_usage()
{
	FmodStudioMemoryUsage result{};
	FMOD::Studio::System* studio_system = resolve_fmod_studio_system(g_studio_system_ref);
	if (studio_system == nullptr) return result;

	FMOD_STUDIO_MEMORY_USAGE usage{};
	g_fmod_studio_last_result = studio_system->getMemoryUsage(&usage);
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
	FMOD::Studio::System* studio_system = resolve_fmod_studio_system(g_studio_system_ref);
	if (studio_system == nullptr) return result;

	FMOD_STUDIO_ADVANCEDSETTINGS settings{};
	settings.cbsize = sizeof(settings);
	g_fmod_studio_last_result = studio_system->getAdvancedSettings(&settings);

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
	FMOD::Studio::System* studio_system = resolve_fmod_studio_system(g_studio_system_ref);
	if (studio_system == nullptr) return 0;

	FMOD_STUDIO_ADVANCEDSETTINGS native{};
	native.cbsize = sizeof(native);
	native.commandqueuesize = (unsigned int)settings.command_queue_size;
	native.handleinitialsize = (unsigned int)settings.handle_initial_size;
	native.studioupdateperiod = (int)settings.studio_update_period;
	native.idlesampledatapoolsize = (int)settings.idle_sampledata_pool_size;
	native.streamingscheduledelay = (unsigned int)settings.streaming_schedule_delay;
	native.encryptionkey = settings.encryption_key.empty() ? nullptr : settings.encryption_key.c_str();

	g_fmod_studio_last_result = studio_system->setAdvancedSettings(&native);
	return 0;
}

// ============================================================
// Studio System - Callback
// ============================================================

static FMOD_RESULT F_CALL CALLBACK_fmod_studio_system(
	FMOD_STUDIO_SYSTEM* system,
	FMOD_STUDIO_SYSTEM_CALLBACK_TYPE type,
	void* commanddata,
	void* userdata)
{
	std::optional<gm::wire::GMFunction> callback;
	{
		std::lock_guard<std::mutex> lock(g_studio_system_callback_mutex);
		callback = g_studio_system_callback;
	}
	if (!callback.has_value())
		return FMOD_OK;

	double kind = (double)type;

	// BANK_UNLOAD is the only type carrying a payload, and a Bank is
	// pointer-backed, so no registry is involved.
	if (type == FMOD_STUDIO_SYSTEM_CALLBACK_BANK_UNLOAD && commanddata != nullptr)
	{
		uintptr_t bank_ptr = gmfmod::pointerKey(commanddata);
		callback.value().call(kind,
			gmfmod::packRef((uint32_t)bank_ptr, gmfmod::RefType::StudioBank));
		return FMOD_OK;
	}

	callback.value().call(kind, std::optional<double>{});
	return FMOD_OK;
}

double fmod_studio_system_set_callback(
	const std::optional<gm::wire::GMFunction>& callback,
	enum gm_enums::FmodStudioSystemCallbackType callback_mask)
{
	FMOD::Studio::System* studio_system = resolve_fmod_studio_system(g_studio_system_ref);
	if (studio_system == nullptr) return 0;

	if (!callback.has_value())
	{
		{
			std::lock_guard<std::mutex> lock(g_studio_system_callback_mutex);
			g_studio_system_callback.reset();
		}
		g_fmod_studio_last_result = studio_system->setCallback(nullptr, FMOD_STUDIO_SYSTEM_CALLBACK_ALL);
		return 0;
	}

	{
		std::lock_guard<std::mutex> lock(g_studio_system_callback_mutex);
		g_studio_system_callback = callback;
	}

	g_fmod_studio_last_result = studio_system->setCallback(
		CALLBACK_fmod_studio_system,
		(FMOD_STUDIO_SYSTEM_CALLBACK_TYPE)(std::uint64_t)callback_mask);
	if (g_fmod_studio_last_result != FMOD_OK)
	{
		std::lock_guard<std::mutex> lock(g_studio_system_callback_mutex);
		g_studio_system_callback.reset();
	}
	return 0;
}

// ============================================================
// Studio System - User Data
// ============================================================

int64_t fmod_studio_system_get_user_data()
{
	FMOD::Studio::System* studio_system = resolve_fmod_studio_system(g_studio_system_ref);
	if (studio_system == nullptr) return 0;

	return gmfmod::getUserData(studio_system, g_fmod_studio_last_result);
}

double fmod_studio_system_set_user_data(int64_t user_data)
{
	FMOD::Studio::System* studio_system = resolve_fmod_studio_system(g_studio_system_ref);
	if (studio_system == nullptr) return 0;

	gmfmod::setUserData(studio_system, user_data, g_fmod_studio_last_result);
	return 0;
}
