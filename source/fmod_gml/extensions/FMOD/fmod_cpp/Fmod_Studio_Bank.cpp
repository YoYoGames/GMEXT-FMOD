
#include "Fmod_Tools.h"

// https://www.fmod.com/docs/2.02/api/studio-api-bank.html

// Loading

func double fmod_studio_bank_get_loading_state(double bank_ref)
{
	FMOD::Studio::Bank* bank = nullptr;
	validate_fmod_studio_bank(bank_ref, bank);

	FMOD_STUDIO_LOADING_STATE state;
	g_fmod_last_result = bank->getLoadingState(&state);

	return (double)state;
}

func double fmod_studio_bank_load_sample_data(double bank_ref)
{
	FMOD::Studio::Bank* bank = nullptr;
	validate_fmod_studio_bank(bank_ref, bank);

	g_fmod_last_result = bank->loadSampleData();
	return 0;
}

func double fmod_studio_bank_unload_sample_data(double bank_ref)
{
	FMOD::Studio::Bank* bank = nullptr;
	validate_fmod_studio_bank(bank_ref, bank);

	g_fmod_last_result = bank->unloadSampleData();
	return 0;
}

func double fmod_studio_bank_get_sample_loading_state(double bank_ref)
{
	FMOD::Studio::Bank* bank = nullptr;
	validate_fmod_studio_bank(bank_ref, bank);

	FMOD_STUDIO_LOADING_STATE state;
	g_fmod_last_result = bank->getSampleLoadingState(&state);
	return (double)state;
}

func double fmod_studio_bank_unload(double bank_ref)
{
	FMOD::Studio::Bank* bank = nullptr;
	validate_fmod_studio_bank(bank_ref, bank);

	g_fmod_last_result = bank->unload();

	return 0;
}

// Buses

func double fmod_studio_bank_get_bus_count(double bank_ref)
{
	FMOD::Studio::Bank* bank = nullptr;
	validate_fmod_studio_bank(bank_ref, bank);

	int count;
	g_fmod_last_result = bank->getBusCount(&count);

	return (double)count;
}

func double fmod_studio_bank_get_bus_list_multiplatform(double bank_ref, char* buff_return)
{
	FMOD::Studio::Bank* bank = nullptr;
	validate_fmod_studio_bank(bank_ref, bank);

	int count = 0;
	constexpr int list_capacity = 512;
	FMOD::Studio::Bus* buses[list_capacity];
	g_fmod_last_result = bank->getBusList(buses, list_capacity, &count);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	ArrayStream vec_return = {};

	for (int i = 0; i < count; i++)
	{
		vec_return << packIndexIntoRef((uint32_t) reinterpret_cast<uintptr_t>(buses[i]), GM_FMOD_STUDIO_TYPE_BUS);
	}

	vec_return.writeTo(buff_return);

	return 0;
}

// Events

func double fmod_studio_bank_get_event_count(double bank_ref)
{
	FMOD::Studio::Bank* bank = nullptr;
	validate_fmod_studio_bank(bank_ref, bank);

	int count;
	g_fmod_last_result = bank->getEventCount(&count);

	return (double)count;
}

func double fmod_studio_bank_get_event_description_list_multiplatform(double bank_ref, char* buff_return)
{
	FMOD::Studio::Bank* bank = nullptr;
	validate_fmod_studio_bank(bank_ref, bank);

	int count = 0;
	constexpr int list_capacity = 512;
	FMOD::Studio::EventDescription* event_descriptions[list_capacity];
	g_fmod_last_result = bank->getEventList(event_descriptions, list_capacity, &count);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	ArrayStream vec_return = {};

	for (int i = 0; i < count; i++)
	{
		vec_return << packIndexIntoRef((uint32_t) reinterpret_cast<uintptr_t>(event_descriptions[i]), GM_FMOD_STUDIO_TYPE_EVENT_DESCRIPTION);
	}

	vec_return.writeTo(buff_return);

	return 0;
}

// String

func double fmod_studio_bank_get_string_count(double bank_ref)
{
	FMOD::Studio::Bank* bank = nullptr;
	validate_fmod_studio_bank(bank_ref, bank);

	int count;
	g_fmod_last_result = bank->getStringCount(&count);

	return (double)count;
}

func double fmod_studio_bank_get_string_info_multiplatform(double bank_ref, double string_index, char* buff_return)
{
	FMOD::Studio::Bank* bank = nullptr;
	validate_fmod_studio_bank(bank_ref, bank);

	FMOD_GUID id = {};
	char path[512] = {};
	int retrieved = 0;

	g_fmod_last_result = bank->getStringInfo((int)string_index, &id, path, sizeof(path), &retrieved);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = {};
	map_return.addKeyValue("guid", GUIDtoString(id));
	map_return.addKeyValue("path", path);

	map_return.writeTo(buff_return);

	return 0;
}

// VCAs

func double fmod_studio_bank_get_vca_count(double bank_ref)
{
	FMOD::Studio::Bank* bank = nullptr;
	validate_fmod_studio_bank(bank_ref, bank);

	int count;
	g_fmod_last_result = bank->getVCACount(&count);

	return (double)count;
}

func double fmod_studio_bank_get_vca_list_multiplatform(double bank_ref, char* buff_return)
{
	FMOD::Studio::Bank* bank = nullptr;
	validate_fmod_studio_bank(bank_ref, bank);

	int count = 0;
	constexpr int list_capacity = 512;
	FMOD::Studio::VCA* vcas[list_capacity];
	g_fmod_last_result = bank->getVCAList(vcas, list_capacity, &count);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	ArrayStream vec_return = {};

	for (int i = 0; i < count; i++)
	{
		vec_return << packIndexIntoRef((uint32_t) reinterpret_cast<uintptr_t>(vcas[i]), GM_FMOD_STUDIO_TYPE_VCA);
	}

	vec_return.writeTo(buff_return);

	return 0;
}

//	General

func char* fmod_studio_bank_get_id(double bank_ref)
{
	FMOD::Studio::Bank* bank = nullptr;
	validate_fmod_studio_bank(bank_ref, bank);

	FMOD_GUID id;
	g_fmod_last_result = bank->getID(&id);

	gStringBuffer[0] = '\0';

	if (g_fmod_last_result != FMOD_OK)
	{
		return gStringBuffer;
	}

	strncpy_s(gStringBuffer, GUIDtoString(id).c_str(), sizeof(gStringBuffer) - 1);
	gStringBuffer[sizeof(gStringBuffer) - 1] = '\0';  // Ensure null termination

	return gStringBuffer;
}

func char* fmod_studio_bank_get_path(double bank_ref)
{
	FMOD::Studio::Bank* bank = nullptr;
	validate_fmod_studio_bank(bank_ref, bank);

	int retrieved;
	gStringBuffer[0] = '\0';
	g_fmod_last_result = bank->getPath(gStringBuffer, sizeof(gStringBuffer), &retrieved);

	return gStringBuffer;
}

func double fmod_studio_bank_is_valid(double bank_ref)
{
	FMOD::Studio::Bank* bank = nullptr;
	validate_fmod_studio_bank(bank_ref, bank);

	return bank->isValid() ? 1.0 : 0.0;
}

func double fmod_studio_bank_set_user_data(double bank_ref, double data)
{
	FMOD::Studio::Bank* bank = nullptr;
	validate_fmod_studio_bank(bank_ref, bank);

	bank->setUserData((void*)(uint64_t)data);

	return 0;
}

func double fmod_studio_bank_get_user_data(double bank_ref)
{
	FMOD::Studio::Bank* bank = nullptr;
	validate_fmod_studio_bank(bank_ref, bank);

	void* userData = nullptr;
	bank->getUserData(&userData);

	return userData ? (double)(uint64_t)userData : NAN;
}

