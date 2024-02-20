
#include "Fmod_Tools.h"

// https://www.fmod.com/docs/2.02/api/studio-api-system.html

// Lifetime:

uint64_t studio_system_selected_ref = 0;

func double fmod_studio_system_create()
{
	if (studio_system_selected_ref != 0)
		return (double)studio_system_selected_ref;

	FMOD::Studio::System* fmod_studio_system = nullptr;
	g_fmod_last_result = FMOD::Studio::System::create(&fmod_studio_system);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	// Getting underlying core system
	FMOD::System* fmod_system = nullptr;
	fmod_studio_system->getCoreSystem(&fmod_system);

	if (g_fmod_last_result == FMOD_OK)
	{
		auto system_id = registerOrFindResource(fmod_system, index_systems, map_systems);
		system_selected_ref = packIndexIntoRef(system_id, GM_FMOD_TYPE_SYSTEM);
	}

	studio_system_selected_ref = packIndexIntoRef((uint32_t) reinterpret_cast<intptr_t>(fmod_studio_system), GM_FMOD_STUDIO_TYPE_SYSTEM);
	return (double)studio_system_selected_ref;
}

func double fmod_studio_system_init(double max_channels, double studio_flags, double core_flags)
{
	FMOD::Studio::System* fmod_studio_system = nullptr;
	validate_fmod_studio_system(studio_system_selected_ref, fmod_studio_system);

	void* extraDriverData = NULL;
	g_fmod_last_result = fmod_studio_system->initialize((int)max_channels, (FMOD_STUDIO_INITFLAGS)studio_flags, (FMOD_INITFLAGS)core_flags, extraDriverData);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	// Getting underlying core system
	FMOD::System* fmod_system = nullptr;
	fmod_studio_system->getCoreSystem(&fmod_system);
	registerMasterGroups(fmod_system);

	return 0;
}

func double fmod_studio_system_release()
{
	FMOD::Studio::System* fmod_studio_system = nullptr;
	validate_fmod_studio_system(studio_system_selected_ref, fmod_studio_system);

	// Getting underlying core system
	FMOD::System* fmod_system = nullptr;
	fmod_studio_system->getCoreSystem(&fmod_system);

	if (g_fmod_last_result == FMOD_OK)
	{
		unregisterResource(fmod_system, map_systems);
	}

	// Unregister master channel & sound groups
	unregisterMasterGroups(fmod_system);

	g_fmod_last_result = fmod_studio_system->release();
	return 0;
}

// Update :
func double fmod_studio_system_update_multiplatform()
{
	FMOD::Studio::System* fmod_studio_system = nullptr;
	validate_fmod_studio_system(studio_system_selected_ref, fmod_studio_system);

	g_fmod_last_result = fmod_studio_system->update();
	return 0;
}

func double fmod_studio_system_flush_commands()
{
	FMOD::Studio::System* fmod_studio_system = nullptr;
	validate_fmod_studio_system(studio_system_selected_ref, fmod_studio_system);

	g_fmod_last_result = fmod_studio_system->flushCommands();
	return 0;
}

func double fmod_studio_system_flush_sample_loading()
{
	FMOD::Studio::System* fmod_studio_system = nullptr;
	validate_fmod_studio_system(studio_system_selected_ref, fmod_studio_system);

	g_fmod_last_result = fmod_studio_system->flushSampleLoading();
	return 0;
}

// Banks

func double fmod_studio_system_load_bank_custom(double flags)
{
	FMOD::Studio::System* fmod_studio_system = nullptr;
	validate_fmod_studio_system(studio_system_selected_ref, fmod_studio_system);

	FMOD_STUDIO_BANK_INFO info{};
	info.size = sizeof(info);

	FMOD::Studio::Bank* bank = nullptr;
	g_fmod_last_result = fmod_studio_system->loadBankCustom(&info, (FMOD_STUDIO_LOAD_BANK_FLAGS)flags, &bank);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	return (double)packIndexIntoRef((uint32_t) reinterpret_cast<uintptr_t>(bank), GM_FMOD_STUDIO_TYPE_BANK);
}

func double fmod_studio_system_load_bank_file(char* filename, double flags)
{
	FMOD::Studio::System* fmod_studio_system = nullptr;
	validate_fmod_studio_system(studio_system_selected_ref, fmod_studio_system);

	FMOD::Studio::Bank* bank = nullptr;
	g_fmod_last_result = fmod_studio_system->loadBankFile((const char*)filename, (FMOD_STUDIO_LOAD_BANK_FLAGS)flags, &bank);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	return (double)packIndexIntoRef((uint32_t) reinterpret_cast<uintptr_t>(bank), GM_FMOD_STUDIO_TYPE_BANK);
}

func double fmod_studio_system_load_bank_memory_multiplatform(char* buff_data, double length, double mode, double flags)
{
	FMOD::Studio::System* fmod_studio_system = nullptr;
	validate_fmod_studio_system(studio_system_selected_ref, fmod_studio_system);

	FMOD::Studio::Bank* bank;
	g_fmod_last_result =
		fmod_studio_system->loadBankMemory((const char*)buff_data, (int)length, (FMOD_STUDIO_LOAD_MEMORY_MODE)mode, (FMOD_STUDIO_LOAD_BANK_FLAGS)flags, &bank);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	return (double)packIndexIntoRef((uint32_t) reinterpret_cast<uintptr_t>(bank), GM_FMOD_STUDIO_TYPE_BANK);
}

func double fmod_studio_system_unload_all()
{
	FMOD::Studio::System* fmod_studio_system = nullptr;
	validate_fmod_studio_system(studio_system_selected_ref, fmod_studio_system);

	g_fmod_last_result = fmod_studio_system->unloadAll();
	return 0;
}

func double fmod_studio_system_get_bank(char* path)
{
	FMOD::Studio::System* fmod_studio_system = nullptr;
	validate_fmod_studio_system(studio_system_selected_ref, fmod_studio_system);

	FMOD::Studio::Bank* bank;
	g_fmod_last_result = fmod_studio_system->getBank(path, &bank);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	return (double)packIndexIntoRef((uint32_t) reinterpret_cast<uintptr_t>(bank), GM_FMOD_STUDIO_TYPE_BANK);
}

func double fmod_studio_system_get_bank_by_id(char* guid_str)
{
	FMOD::Studio::System* fmod_studio_system = nullptr;
	validate_fmod_studio_system(studio_system_selected_ref, fmod_studio_system);

	FMOD_GUID guid = StringToGUID(guid_str);

	FMOD::Studio::Bank* bank;
	g_fmod_last_result = fmod_studio_system->getBankByID(&guid, &bank);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	return (double)packIndexIntoRef((uint32_t) reinterpret_cast<uintptr_t>(bank), GM_FMOD_STUDIO_TYPE_BANK);
}

func double fmod_studio_system_get_bank_count()
{
	FMOD::Studio::System* fmod_studio_system = nullptr;
	validate_fmod_studio_system(studio_system_selected_ref, fmod_studio_system);

	int count = 0;
	g_fmod_last_result = fmod_studio_system->getBankCount(&count);

	return (double)count;
}

func double fmod_studio_system_get_bank_list_multiplatform(char* buff_return)
{
	FMOD::Studio::System* fmod_studio_system = nullptr;
	validate_fmod_studio_system(studio_system_selected_ref, fmod_studio_system);

	int count = 0;
	constexpr int capacity = 512;
	FMOD::Studio::Bank* banks[capacity];
	g_fmod_last_result = fmod_studio_system->getBankList(banks, capacity, &count);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	ArrayStream vec_return = {};
	for (int i = 0; i < count; i++)
	{
		vec_return << packIndexIntoRef((uint32_t) reinterpret_cast<intptr_t>(banks[i]), GM_FMOD_STUDIO_TYPE_BANK);
	}

	vec_return.writeTo(buff_return);

	return 0;
}

// Listeners:

func double fmod_studio_system_set_listener_attributes_multiplatform(double listener_index, char* buff_args)
{
	FMOD::Studio::System* fmod_studio_system = nullptr;
	validate_fmod_studio_system(studio_system_selected_ref, fmod_studio_system);

	auto args = buffer_unpack((uint8_t*)buff_args);
	auto map_attributes = YYGetStruct(args[0]);

	FMOD_3D_ATTRIBUTES attributes = Fmod3DAttributesFromMap(map_attributes);
	
	if (args.size() > 1) {
		// Second argument is optional
		auto map_attenuation = YYGetStruct(args[1]);
		FMOD_VECTOR vector_attenuation = FmodVectorFromMap(map_attenuation);
		g_fmod_last_result = fmod_studio_system->setListenerAttributes((int)listener_index, &attributes, &vector_attenuation);
	}
	else {
		g_fmod_last_result = fmod_studio_system->setListenerAttributes((int)listener_index, &attributes, nullptr);
	}

	return 0;
}

func double fmod_studio_system_get_listener_attributes_multiplatform(double listener_index, char* buff_return)
{
	FMOD::Studio::System* fmod_studio_system = nullptr;
	validate_fmod_studio_system(studio_system_selected_ref, fmod_studio_system);

	FMOD_3D_ATTRIBUTES attributes;
	FMOD_VECTOR vector_attenuation;

	g_fmod_last_result = fmod_studio_system->getListenerAttributes((int)listener_index, &attributes, &vector_attenuation);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_attributes = Fmod3DAttributesToGMStruct(attributes);
	StructStream map_attenuation = FmodVectorToGMStruct(vector_attenuation);

	StructStream map_return = {};
	map_return.addKeyValue("attributes", map_attributes);
	map_return.addKeyValue("attenuation", map_attenuation);

	map_return.writeTo(buff_return);

	return 0;
}

func double fmod_studio_system_set_listener_weight(double listener_index, double weight)
{
	FMOD::Studio::System* fmod_studio_system = nullptr;
	validate_fmod_studio_system(studio_system_selected_ref, fmod_studio_system);

	g_fmod_last_result = fmod_studio_system->setListenerWeight((int)listener_index, (float)weight);
	return 0;
}

func double fmod_studio_system_get_listener_weight(double listener_index)
{
	FMOD::Studio::System* fmod_studio_system = nullptr;
	validate_fmod_studio_system(studio_system_selected_ref, fmod_studio_system);

	float weight;
	g_fmod_last_result = fmod_studio_system->getListenerWeight((int)listener_index, &weight);

	return (double)weight;
}

func double fmod_studio_system_set_num_listeners(double num)
{
	FMOD::Studio::System* fmod_studio_system = nullptr;
	validate_fmod_studio_system(studio_system_selected_ref, fmod_studio_system);

	g_fmod_last_result = fmod_studio_system->setNumListeners((int)num);
	return 0;
}

func double fmod_studio_system_get_num_listeners()
{
	FMOD::Studio::System* fmod_studio_system = nullptr;
	validate_fmod_studio_system(studio_system_selected_ref, fmod_studio_system);

	int num;
	g_fmod_last_result = fmod_studio_system->getNumListeners(&num);
	return (double)num;
}

// Buses

func double fmod_studio_system_get_bus(char* path)
{
	FMOD::Studio::System* fmod_studio_system = nullptr;
	validate_fmod_studio_system(studio_system_selected_ref, fmod_studio_system);

	FMOD::Studio::Bus* bus;
	g_fmod_last_result = fmod_studio_system->getBus(path, &bus);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	return (double)packIndexIntoRef((uint32_t) reinterpret_cast<uintptr_t>(bus), GM_FMOD_STUDIO_TYPE_BUS);
}

func double fmod_studio_system_get_bus_by_id(char* guid)
{
	FMOD::Studio::System* fmod_studio_system = nullptr;
	validate_fmod_studio_system(studio_system_selected_ref, fmod_studio_system);

	FMOD::Studio::Bus* bus;
	FMOD_GUID fmod_guid = StringToGUID(guid);

	g_fmod_last_result = fmod_studio_system->getBusByID(&fmod_guid, &bus);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	return (double)packIndexIntoRef((uint32_t) reinterpret_cast<intptr_t>(bus), GM_FMOD_STUDIO_TYPE_BUS);
}

// Events

func double fmod_studio_system_get_event(char* path)
{
	FMOD::Studio::System* fmod_studio_system = nullptr;
	validate_fmod_studio_system(studio_system_selected_ref, fmod_studio_system);

	FMOD::Studio::EventDescription* event_description;
	g_fmod_last_result = fmod_studio_system->getEvent(path, &event_description);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	return (double)packIndexIntoRef((uint32_t) reinterpret_cast<uintptr_t>(event_description), GM_FMOD_STUDIO_TYPE_EVENT_DESCRIPTION);
}

func double fmod_studio_system_get_event_by_id(char* guid_str)
{
	FMOD::Studio::System* fmod_studio_system = nullptr;
	validate_fmod_studio_system(studio_system_selected_ref, fmod_studio_system);

	FMOD::Studio::EventDescription* event_description;
	FMOD_GUID guid = StringToGUID(guid_str);
	g_fmod_last_result = fmod_studio_system->getEventByID(&guid, &event_description);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	return (double)packIndexIntoRef((uint32_t) reinterpret_cast<uintptr_t>(event_description), GM_FMOD_STUDIO_TYPE_EVENT_DESCRIPTION);
}

// Parameters

func double fmod_studio_system_get_parameter_by_id_multiplatform(char* buff_args, char* buff_return)
{
	FMOD::Studio::System* fmod_studio_system = nullptr;
	validate_fmod_studio_system(studio_system_selected_ref, fmod_studio_system);

	auto args = buffer_unpack((uint8_t*)buff_args);
	auto map_paramaters = YYGetStruct(args[0]);

	FMOD_STUDIO_PARAMETER_ID parameter_id = FmodParamaterIdFromMap(map_paramaters);

	float value;
	float final_value;
	g_fmod_last_result = fmod_studio_system->getParameterByID(parameter_id, &value, &final_value);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = {};
	map_return.addKeyValue("value", value);
	map_return.addKeyValue("final_value", final_value);

	map_return.writeTo(buff_return);

	return 0;
}

func double fmod_studio_system_set_parameter_by_id_multiplatform(char* buff_args, double value, double ignore_seek_speed)
{
	FMOD::Studio::System* fmod_studio_system = nullptr;
	validate_fmod_studio_system(studio_system_selected_ref, fmod_studio_system);

	auto args = buffer_unpack((uint8_t*)buff_args);
	auto map_paramaters = YYGetStruct(args[0]);

	FMOD_STUDIO_PARAMETER_ID parameter_id = FmodParamaterIdFromMap(map_paramaters);

	g_fmod_last_result = fmod_studio_system->setParameterByID(parameter_id, (float)value, ignore_seek_speed);

	return 0;
}

func double fmod_studio_system_set_parameter_by_id_with_label_multiplatform(char* buff_args, char* label, double ignore_seek_speed)
{
	FMOD::Studio::System* fmod_studio_system = nullptr;
	validate_fmod_studio_system(studio_system_selected_ref, fmod_studio_system);

	auto args = buffer_unpack((uint8_t*)buff_args);
	auto map_paramaters = YYGetStruct(args[0]);

	FMOD_STUDIO_PARAMETER_ID parameter_id = FmodParamaterIdFromMap(map_paramaters);

	g_fmod_last_result = fmod_studio_system->setParameterByIDWithLabel(parameter_id, (const char*)label, ignore_seek_speed >= 0.5);

	return 0;
}

// ignore same but with arrays....
// func double fmod_studio_system_set_parameters_by_ids(char* buff_args_, char label, double ignore_seek_speed)
//{
//	g_fmod_last_result = fmod_studio_system->setParameterByIDs(parameter_id, (const char*)label, ignore_seek_speed >= 0.5);
//	return 0;
// }

func double fmod_studio_system_get_parameter_by_name_multiplatform(char* name, char* buff_return)
{
	FMOD::Studio::System* fmod_studio_system = nullptr;
	validate_fmod_studio_system(studio_system_selected_ref, fmod_studio_system);

	float value;
	float final_value;
	g_fmod_last_result = fmod_studio_system->getParameterByName(name, &value, &final_value);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = {};
	map_return.addKeyValue("value", value);
	map_return.addKeyValue("final_value", final_value);

	map_return.writeTo(buff_return);

	return 0;
}

func double fmod_studio_system_set_parameter_by_name_multiplatform(char* name, double value, double ignore_seek_speed)
{
	FMOD::Studio::System* fmod_studio_system = nullptr;
	validate_fmod_studio_system(studio_system_selected_ref, fmod_studio_system);

	g_fmod_last_result = fmod_studio_system->setParameterByName(name, (float)value, ignore_seek_speed >= 0.5);

	return 0;
}

func double fmod_studio_system_set_parameter_by_name_with_label_multiplatform(char* name, char* label, double ignore_seek_speed)
{
	FMOD::Studio::System* fmod_studio_system = nullptr;
	validate_fmod_studio_system(studio_system_selected_ref, fmod_studio_system);

	g_fmod_last_result = fmod_studio_system->setParameterByNameWithLabel(name, (const char*)label, ignore_seek_speed >= 0.5);

	return 0;
}

func double fmod_studio_system_get_parameter_description_by_name_multiplatform(char* name, char* buff_return)
{
	FMOD::Studio::System* fmod_studio_system = nullptr;
	validate_fmod_studio_system(studio_system_selected_ref, fmod_studio_system);

	FMOD_STUDIO_PARAMETER_DESCRIPTION description;
	g_fmod_last_result = fmod_studio_system->getParameterDescriptionByName(name, &description);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = FmodStudioParamaterDescriptionToGMStruct(description);

	map_return.writeTo(buff_return);

	return 0;
}

func double fmod_studio_system_get_parameter_description_by_id_multiplatform(char* buff_args, char* buff_return)
{
	FMOD::Studio::System* fmod_studio_system = nullptr;
	validate_fmod_studio_system(studio_system_selected_ref, fmod_studio_system);

	auto args = buffer_unpack((uint8_t*)buff_args);
	auto map_paramaters = YYGetStruct(args[0]);

	FMOD_STUDIO_PARAMETER_ID parameter_id = FmodParamaterIdFromMap(map_paramaters);

	FMOD_STUDIO_PARAMETER_DESCRIPTION description;
	g_fmod_last_result = fmod_studio_system->getParameterDescriptionByID(parameter_id, &description);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = FmodStudioParamaterDescriptionToGMStruct(description);

	map_return.writeTo(buff_return);

	return 0;
}

func double fmod_studio_system_get_parameter_description_count()
{
	FMOD::Studio::System* fmod_studio_system = nullptr;
	validate_fmod_studio_system(studio_system_selected_ref, fmod_studio_system);

	int count;
	g_fmod_last_result = fmod_studio_system->getParameterDescriptionCount(&count);

	return count;
}

func double fmod_studio_system_get_parameter_description_list_multiplatform(char* buff_return)
{
	FMOD::Studio::System* fmod_studio_system = nullptr;
	validate_fmod_studio_system(studio_system_selected_ref, fmod_studio_system);

	int count = 0;
	g_fmod_last_result = fmod_studio_system->getParameterDescriptionCount(&count);
	std::vector<FMOD_STUDIO_PARAMETER_DESCRIPTION> descriptions(count);

	g_fmod_last_result = fmod_studio_system->getParameterDescriptionList(descriptions.data(), count, &count);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	ArrayStream vec_return = {};
	for (const auto& description : descriptions)
	{
		StructStream map_return = FmodStudioParamaterDescriptionToGMStruct(description);
		vec_return << map_return;
	}

	vec_return.writeTo(buff_return);

	return 0;
}

func char* fmod_studio_system_get_parameter_label_by_name(char* name, double labelindex)
{
	FMOD::Studio::System* fmod_studio_system = nullptr;
	validate_fmod_studio_system(studio_system_selected_ref, fmod_studio_system);

	int retrieved;
	g_fmod_last_result = fmod_studio_system->getParameterLabelByName((const char*)name, (int)labelindex, gStringBuffer, sizeof(gStringBuffer), &retrieved);

	return gStringBuffer;
}

func char* fmod_studio_system_get_parameter_label_by_id_multiplatform(char* buff_args, double label_index)
{
	FMOD::Studio::System* fmod_studio_system = nullptr;
	validate_fmod_studio_system(studio_system_selected_ref, fmod_studio_system);

	auto args = buffer_unpack((uint8_t*)buff_args);
	auto map_paramaters = YYGetStruct(args[0]);

	FMOD_STUDIO_PARAMETER_ID parameter_id = FmodParamaterIdFromMap(map_paramaters);

	int retrieved;
	gStringBuffer[0] = '\0';
	g_fmod_last_result = fmod_studio_system->getParameterLabelByID(parameter_id, (int)label_index, gStringBuffer, sizeof(gStringBuffer), &retrieved);

	return gStringBuffer;
}

// VCAs

func double fmod_studio_system_get_vca(char* path)
{
	FMOD::Studio::System* fmod_studio_system = nullptr;
	validate_fmod_studio_system(studio_system_selected_ref, fmod_studio_system);

	FMOD::Studio::VCA* vca = nullptr;
	g_fmod_last_result = fmod_studio_system->getVCA(path, &vca);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	return (double)packIndexIntoRef((uint32_t) reinterpret_cast<intptr_t>(vca), GM_FMOD_STUDIO_TYPE_VCA);
}

func double fmod_studio_system_get_vca_by_id(char* guid_str)
{
	FMOD::Studio::System* fmod_studio_system = nullptr;
	validate_fmod_studio_system(studio_system_selected_ref, fmod_studio_system);

	FMOD_GUID guid = StringToGUID(guid_str);

	FMOD::Studio::VCA* vca;
	g_fmod_last_result = fmod_studio_system->getVCAByID(&guid, &vca);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	return (double)packIndexIntoRef((uint32_t) reinterpret_cast<intptr_t>(vca), GM_FMOD_STUDIO_TYPE_VCA);
}

// Advanced Settings

func double fmod_studio_system_set_advanced_settings_multiplatform(char* buff_args)
{
	FMOD::Studio::System* fmod_studio_system = nullptr;
	validate_fmod_studio_system(studio_system_selected_ref, fmod_studio_system);

	FMOD_STUDIO_ADVANCEDSETTINGS settings{};
	settings.cbsize = sizeof(FMOD_STUDIO_ADVANCEDSETTINGS);

	auto args = buffer_unpack((uint8_t*)buff_args);
	auto commandqueuesize = YYGetUint32(args[0]);
	auto handleinitialsize = YYGetUint32(args[1]);
	auto studioupdateperiod = YYGetInt32(args[2]);
	auto idlesampledatapoolsize = YYGetInt32(args[3]);
	auto streamingscheduledelay = YYGetUint32(args[4]);
	auto encryptionkey = YYGetString(args[5]);

	settings.commandqueuesize = commandqueuesize;
	settings.handleinitialsize = handleinitialsize;
	settings.studioupdateperiod = studioupdateperiod;
	settings.idlesampledatapoolsize = idlesampledatapoolsize;
	settings.streamingscheduledelay = streamingscheduledelay;
	settings.encryptionkey = encryptionkey;

	g_fmod_last_result = fmod_studio_system->setAdvancedSettings(&settings);

	return 0;
}

func double fmod_studio_system_get_advanced_settings_multiplatform(char* buff_return)
{
	FMOD::Studio::System* fmod_studio_system = nullptr;
	validate_fmod_studio_system(studio_system_selected_ref, fmod_studio_system);

	FMOD_STUDIO_ADVANCEDSETTINGS settings;
	g_fmod_last_result = fmod_studio_system->getAdvancedSettings(&settings);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = {};
	map_return.addKeyValue("command_queue_size", (double)settings.commandqueuesize);
	map_return.addKeyValue("handle_initial_size", (double)settings.handleinitialsize);
	map_return.addKeyValue("studio_update_period", settings.studioupdateperiod);
	map_return.addKeyValue("idle_sampledata_pool_size", settings.idlesampledatapoolsize);
	map_return.addKeyValue("streaming_schedule_delay", (double)settings.streamingscheduledelay);
	map_return.addKeyValue("encryption_key", settings.encryptionkey);

	map_return.writeTo(buff_return);

	return 0;
}

// Command capture and replay :

func double fmod_studio_system_start_command_capture(char* filename, double flags)
{
	FMOD::Studio::System* fmod_studio_system = nullptr;
	validate_fmod_studio_system(studio_system_selected_ref, fmod_studio_system);

	g_fmod_last_result = fmod_studio_system->startCommandCapture(filename, (FMOD_STUDIO_COMMANDCAPTURE_FLAGS)flags);
	return 0;
}

func double fmod_studio_system_stop_command_capture()
{
	FMOD::Studio::System* fmod_studio_system = nullptr;
	validate_fmod_studio_system(studio_system_selected_ref, fmod_studio_system);

	g_fmod_last_result = fmod_studio_system->stopCommandCapture();
	return 0;
}

std::map<int, FMOD::Studio::CommandReplay*> map_command_replay = {};
int index_command_replay = 0;
func double fmod_studio_system_load_command_replay(char* filename, double flags)
{
	FMOD::Studio::System* fmod_studio_system = nullptr;
	validate_fmod_studio_system(studio_system_selected_ref, fmod_studio_system);

	FMOD::Studio::CommandReplay* replay;
	g_fmod_last_result = fmod_studio_system->loadCommandReplay(filename, (FMOD_STUDIO_COMMANDCAPTURE_FLAGS)flags, &replay);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	return (double)packIndexIntoRef((uint32_t) reinterpret_cast<uintptr_t>(replay), GM_FMOD_STUDIO_TYPE_COMMAND_REPLAY);
}

// Profiling:

func double fmod_studio_system_get_buffer_usage_multiplatform(char* buff_return)
{
	FMOD::Studio::System* fmod_studio_system = nullptr;
	validate_fmod_studio_system(studio_system_selected_ref, fmod_studio_system);

	FMOD_STUDIO_BUFFER_USAGE usage;
	g_fmod_last_result = fmod_studio_system->getBufferUsage(&usage);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = FmodStudioBufferUsageToGMStruct(usage);

	map_return.writeTo(buff_return);

	return 0;
}

func double fmod_studio_system_reset_buffer_usage()
{
	FMOD::Studio::System* fmod_studio_system = nullptr;
	validate_fmod_studio_system(studio_system_selected_ref, fmod_studio_system);

	g_fmod_last_result = fmod_studio_system->resetBufferUsage();
	return 0;
}

func double fmod_studio_system_get_cpu_usage_multiplatform(char* buff_return)
{
	FMOD::Studio::System* fmod_studio_system = nullptr;
	validate_fmod_studio_system(studio_system_selected_ref, fmod_studio_system);

	FMOD_STUDIO_CPU_USAGE usage{};
	FMOD_CPU_USAGE usage_core{};
	g_fmod_last_result = fmod_studio_system->getCPUUsage(&usage, &usage_core);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_studio = {};
	map_studio.addKeyValue("update", usage.update);

	StructStream map_core = {};
	map_core.addKeyValue("convolution1", usage_core.convolution1);
	map_core.addKeyValue("convolution2", usage_core.convolution2);
	map_core.addKeyValue("dsp", usage_core.dsp);
	map_core.addKeyValue("geometry", usage_core.geometry);
	map_core.addKeyValue("stream", usage_core.stream);
	map_core.addKeyValue("update", usage_core.update);

	StructStream map_return = {};
	map_return.addKeyValue("studio", map_studio);
	map_return.addKeyValue("core", map_core);

	map_return.writeTo(buff_return);

	return 0;
}

func double fmod_studio_system_get_memory_usage_multiplatform(char* buff_return)
{
	FMOD::Studio::System* fmod_studio_system = nullptr;
	validate_fmod_studio_system(studio_system_selected_ref, fmod_studio_system);

	FMOD_STUDIO_MEMORY_USAGE memory_usage{};
	g_fmod_last_result = fmod_studio_system->getMemoryUsage(&memory_usage);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = FmodStudioMemoryUsageToGMStruct(memory_usage);

	map_return.writeTo(buff_return);

	return 0;
}

// Plugins:

// func double fmod_studio_system_register_plugin()
//{
//	//FMOD_DSP_DESCRIPTION* description;
//	//g_fmod_last_result = fmod_studio_system->registerPlugin(&memoryusage);
//
//
//	return 0;
// }
//
// func double fmod_studio_system_unregister_plugin(char* name)
//{
//	g_fmod_last_result = fmod_studio_system->unregisterPlugin(name);
//	return 0;
// }

// System callback :

static FMOD_RESULT CALLBACK_fmod_studio_system(FMOD_STUDIO_SYSTEM* system, FMOD_STUDIO_SYSTEM_CALLBACK_TYPE type, void* commanddata, void* userdata)
{
	StructStream async_map = {};

	async_map.addKeyValue("type", "fmod_studio_system_set_callback");
	async_map.addKeyValue("kind", type);

	switch (type)
	{
		case FMOD_STUDIO_SYSTEM_CALLBACK_PREUPDATE:
			break;
		case FMOD_STUDIO_SYSTEM_CALLBACK_POSTUPDATE:
			break;
		case FMOD_STUDIO_SYSTEM_CALLBACK_BANK_UNLOAD:
		{
			FMOD::Studio::Bank* bank = (FMOD::Studio::Bank*)commanddata;
			async_map.addKeyValue("bank_ref", packIndexIntoRef((uint32_t) reinterpret_cast<intptr_t>(bank), GM_FMOD_STUDIO_TYPE_BANK));
			break;
		}
		case FMOD_STUDIO_SYSTEM_CALLBACK_LIVEUPDATE_CONNECTED:
			break;
		case FMOD_STUDIO_SYSTEM_CALLBACK_LIVEUPDATE_DISCONNECTED:
			break;
		case FMOD_STUDIO_SYSTEM_CALLBACK_ALL:
			break;
	}

	async_create_event(async_map);

	return FMOD_OK;
}

func double fmod_studio_system_set_callback(double type)
{
	FMOD::Studio::System* fmod_studio_system = nullptr;
	validate_fmod_studio_system(studio_system_selected_ref, fmod_studio_system);

	g_fmod_last_result = fmod_studio_system->setCallback(CALLBACK_fmod_studio_system, (FMOD_STUDIO_SYSTEM_CALLBACK_TYPE)type);
	return 0;
}

func double fmod_studio_system_set_user_data(double data)
{
	FMOD::Studio::System* fmod_studio_system = nullptr;
	validate_fmod_studio_system(studio_system_selected_ref, fmod_studio_system);

	fmod_studio_system->setUserData((void*)(uint64_t)data);

	return 0;
}

func double fmod_studio_system_get_user_data()
{
	FMOD::Studio::System* fmod_studio_system = nullptr;
	validate_fmod_studio_system(studio_system_selected_ref, fmod_studio_system);

	void* userData = nullptr;
	fmod_studio_system->getUserData(&userData);

	return userData ? (double)(uint64_t)userData : NAN;
}

// Sound Table

func double fmod_studio_system_get_sound_info_multiplatform(char* key, char* buff_return)
{
	FMOD::Studio::System* fmod_studio_system = nullptr;
	validate_fmod_studio_system(studio_system_selected_ref, fmod_studio_system);

	FMOD_STUDIO_SOUND_INFO info;
	g_fmod_last_result = fmod_studio_system->getSoundInfo(key, &info);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = {};
	map_return.addKeyValue("ext_info", FmodCreateSoundExInfoToGMStruct(info.exinfo));
	map_return.addKeyValue("name_or_data", (const char*)info.name_or_data);
	map_return.addKeyValue("mode", (double)info.mode);
	map_return.addKeyValue("sub_sound_index", (double)info.subsoundindex);

	map_return.writeTo(buff_return);

	return 0;
}

// General

func double fmod_studio_system_get_core_system()
{
	FMOD::Studio::System* fmod_studio_system = nullptr;
	validate_fmod_studio_system(studio_system_selected_ref, fmod_studio_system);

	FMOD::System* fmod_system = nullptr;
	fmod_studio_system->getCoreSystem(&fmod_system);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	uint32_t system_id = registerOrFindResource(fmod_system, index_systems, map_systems);

	return (double)packIndexIntoRef(system_id, GM_FMOD_TYPE_SYSTEM);
}

func char* fmod_studio_system_lookup_id(char* path)
{
	FMOD::Studio::System* fmod_studio_system = nullptr;
	validate_fmod_studio_system(studio_system_selected_ref, fmod_studio_system);

	FMOD_GUID guid{};
	g_fmod_last_result = fmod_studio_system->lookupID(path, &guid);

	strncpy_s(gStringBuffer, GUIDtoString(guid).c_str(), sizeof(gStringBuffer) - 1);
	gStringBuffer[sizeof(gStringBuffer) - 1] = '\0';  // Ensure null termination
	return gStringBuffer;
}

func char* fmod_studio_system_lookup_path(char* str_guid)
{
	FMOD::Studio::System* fmod_studio_system = nullptr;
	validate_fmod_studio_system(studio_system_selected_ref, fmod_studio_system);

	FMOD_GUID guid = StringToGUID(str_guid);

	int retrieved;
	gStringBuffer[0] = '\0';
	g_fmod_last_result = fmod_studio_system->lookupPath(&guid, gStringBuffer, sizeof(gStringBuffer), &retrieved);

	return gStringBuffer;
}

func double fmod_studio_system_is_valid()
{
	FMOD::Studio::System* fmod_studio_system = nullptr;
	validate_fmod_studio_system(studio_system_selected_ref, fmod_studio_system);

	return fmod_studio_system->isValid() ? 1.0 : 0.0;
}
