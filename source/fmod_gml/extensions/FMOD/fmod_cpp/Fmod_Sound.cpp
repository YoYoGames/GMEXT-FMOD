
#include "Fmod_Tools.h"

// https://www.fmod.com/docs/2.03/api/core-api-sound.html

std::map<uint32_t, FMOD::Sound*> map_sounds = {};
uint32_t index_sounds = 0;

// Format information

func char* fmod_sound_get_name(double sound_ref)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	gStringBuffer[0] = '\0';
	g_fmod_last_result = sound->getName(gStringBuffer, sizeof(gStringBuffer));

	return gStringBuffer;
}

func double fmod_sound_get_format_multiplatform(double sound_ref, char* buff_return)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	FMOD_SOUND_TYPE type;
	FMOD_SOUND_FORMAT format;
	int channels;
	int bits;

	g_fmod_last_result = sound->getFormat(&type, &format, &channels, &bits);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = {};
	map_return.addKeyValue("type", (int)type);
	map_return.addKeyValue("format", (int)format);
	map_return.addKeyValue("channels", channels);
	map_return.addKeyValue("bits", bits);

	map_return.writeTo(buff_return);

	return 0;
}

func double fmod_sound_get_length(double sound_ref, double length_type)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	unsigned int length;
	g_fmod_last_result = sound->getLength(&length, (FMOD_TIMEUNIT)length_type);

	return (double)length;
}

func double fmod_sound_get_num_tags_multiplatform(double sound_ref, char* buff_return)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	int numtags;
	int numtagsupdated;

	g_fmod_last_result = sound->getNumTags(&numtags, &numtagsupdated);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = {};
	map_return.addKeyValue("num_tags", (double)numtags);
	map_return.addKeyValue("num_tags_updated", (double)numtagsupdated);

	map_return.writeTo(buff_return);

	return 0;
}

func double fmod_sound_get_tag_multiplatform(double sound_ref, double tag_index, char* buff_args, char* buff_return)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	auto args = buffer_unpack((uint8_t*)buff_args);

	uint32_t length = 0;
	auto buffer_data = YYGetBuffer(args[0], length);

	FMOD_TAG tag;
	g_fmod_last_result = sound->getTag(nullptr, (int)tag_index, &tag);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = {};
	map_return.addKeyValue("name", (const char*)tag.name);
	map_return.addKeyValue("type", (int)tag.type);
	map_return.addKeyValue("update", (bool)tag.updated);
	map_return.addKeyValue("data_len", (int)tag.datalen);
	map_return.addKeyValue("data_type", (int)tag.datatype);

	// Truncate copy data value to the input buffer size
	auto length_to_copy = tag.datalen > length ? length : tag.datalen;
	memcpy(buffer_data, tag.data, length_to_copy);

	map_return.writeTo(buff_return);

	return 0;
}

// Defaults when played

func double fmod_sound_set_3d_cone_settings(double sound_ref, double inside_cone_angle, double outside_cone_angle, double outside_volume)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	g_fmod_last_result = sound->set3DConeSettings((float)inside_cone_angle, (float)outside_cone_angle, (float)outside_volume);

	return 0;
}

func double fmod_sound_get_3d_cone_settings_multiplatform(double sound_ref, char* buff_return)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	float insideconeangle;
	float outsideconeangle;
	float outsidevolume;

	g_fmod_last_result = sound->get3DConeSettings(&insideconeangle, &outsideconeangle, &outsidevolume);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = {};
	map_return.addKeyValue("inside_cone_angle", (double)insideconeangle);
	map_return.addKeyValue("outside_cone_angle", (double)outsideconeangle);
	map_return.addKeyValue("outside_evolume", (double)outsidevolume);

	map_return.writeTo(buff_return);

	return 0;
}

func double fmod_sound_set_3d_custom_rolloff_multiplatform(double sound_ref, char* buff_args)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	auto args = buffer_unpack((uint8_t*)buff_args);
	auto vector_points = YYGetArray(args[0]);

	FMOD_VECTOR points[100]{};

	for (int i = 0; i < vector_points.size(); i++)
	{
		auto map = YYGetStruct(vector_points[i]);
		points[i] = FmodVectorFromMap(map);
	}

	g_fmod_last_result = sound->set3DCustomRolloff(points, (int)vector_points.size());

	return 0;
}

func double fmod_sound_get_3d_custom_rolloff_multiplatform(double sound_ref, char* buff_return)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	FMOD_VECTOR* points = nullptr;
	int numpoints;

	g_fmod_last_result = sound->get3DCustomRolloff(&points, &numpoints);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	ArrayStream vec_return = {};
	for (int i = 0; i < numpoints; i++)
	{
		vec_return << FmodVectorToGMStruct(points[i]);
	}

	vec_return.writeTo(buff_return);

	return 0;
}

func double fmod_sound_set_3d_min_max_distance(double sound_ref, double min, double max)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	g_fmod_last_result = sound->set3DMinMaxDistance((float)min, (float)max);

	return 0;
}

func double fmod_sound_get_3d_min_max_distance_multiplatform(double sound_ref, char* buff_return)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	float min;
	float max;

	g_fmod_last_result = sound->get3DMinMaxDistance(&min, &max);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = {};
	map_return.addKeyValue("min_distance", min);
	map_return.addKeyValue("max_distance", max);

	map_return.writeTo(buff_return);

	return 0;
}

func double fmod_sound_set_defaults(double sound_ref, double frequency, double priority)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	g_fmod_last_result = sound->setDefaults((float)frequency, (int)priority);

	return 0;
}

func double fmod_sound_get_defaults_multiplatform(double sound_ref, char* buff_return)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	float frequency;
	int priority;

	g_fmod_last_result = sound->getDefaults(&frequency, &priority);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = {};
	map_return.addKeyValue("frequency", (double)frequency);
	map_return.addKeyValue("priority", priority);

	map_return.writeTo(buff_return);

	return 0;
}

func double fmod_sound_set_mode(double sound_ref, double mode)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	g_fmod_last_result = sound->setMode((FMOD_MODE)mode);

	return 0;
}

func double fmod_sound_get_mode(double sound_ref)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	FMOD_MODE mode;

	g_fmod_last_result = sound->getMode(&mode);

	return (double)mode;
}

func double fmod_sound_set_loop_count(double sound_ref, double count)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	g_fmod_last_result = sound->setLoopCount((int)count);

	return 0;
}

func double fmod_sound_get_loop_count(double sound_ref)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	int count;

	g_fmod_last_result = sound->getLoopCount(&count);

	return count;
}

func double fmod_sound_set_loop_points(double sound_ref, double loop_start, double loop_start_type, double loop_end, double loop_end_type)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	g_fmod_last_result = sound->setLoopPoints((uint32_t)loop_start, (FMOD_TIMEUNIT)loop_start_type, (uint32_t)loop_end, (FMOD_TIMEUNIT)loop_end_type);

	return 0;
}

func double fmod_sound_get_loop_points_multiplatform(double sound_ref, double loop_start_type, double loop_end_type, char* buff_return)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	unsigned int loopstart;
	unsigned int loopend;
	g_fmod_last_result = sound->getLoopPoints(&loopstart, (FMOD_TIMEUNIT)loop_start_type, &loopend, (FMOD_TIMEUNIT)loop_end_type);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = {};
	map_return.addKeyValue("loop_start", (int)loopstart);
	map_return.addKeyValue("loop_end", (int)loopend);

	map_return.writeTo(buff_return);

	return 0;
}

// Relationship management

func double fmod_sound_set_sound_group(double sound_ref, double sound_group_ref)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	FMOD::SoundGroup* sound_group = nullptr;
	validate_fmod_sound_group(sound_group_ref, sound_group);

	g_fmod_last_result = sound->setSoundGroup(sound_group);

	return 0;
}

func double fmod_sound_get_sound_group(double sound_ref)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	FMOD::SoundGroup* sound_group = nullptr;
	g_fmod_last_result = sound->getSoundGroup(&sound_group);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	uint32_t sound_group_id = registerOrFindResource(sound_group, index_sound_groups, map_sound_groups);
	return (double)packIndexIntoRef(sound_group_id, GM_FMOD_TYPE_SOUND_GROUP);
}

func double fmod_sound_get_num_sub_sounds(double sound_ref)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	int num;
	g_fmod_last_result = sound->getNumSubSounds(&num);

	return num;
}

func double fmod_sound_get_sub_sound(double sound_ref, double sub_sound_index)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	FMOD::Sound* sub_sound = nullptr;
	g_fmod_last_result = sound->getSubSound((int)sub_sound_index, &sub_sound);

	if (g_fmod_last_result != FMOD_OK)
	{
		TRACE(fmodResultToString(g_fmod_last_result));
		return 0;
	}

	uint32_t sub_sound_id = registerOrFindResource(sub_sound, index_sounds, map_sounds);
	return (double)packIndexIntoRef(sub_sound_id, GM_FMOD_TYPE_SOUND);
}

func double fmod_sound_get_sub_sound_parent(double sound_ref)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	FMOD::Sound* parent_sound = nullptr;
	g_fmod_last_result = sound->getSubSoundParent(&parent_sound);

	if (g_fmod_last_result != FMOD_OK)
	{
		TRACE(fmodResultToString(g_fmod_last_result));
		return 0;
	}

	uint32_t parent_sound_id = registerOrFindResource(parent_sound, index_sounds, map_sounds);
	return (double)packIndexIntoRef(parent_sound_id, GM_FMOD_TYPE_SOUND);
}

// Data reading

func double fmod_sound_get_open_state_multiplatform(double sound_ref, char* buff_return)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	FMOD_OPENSTATE open_state;
	unsigned int percentbuffered;
	bool starving = false;
	bool diskbusy = false;

	g_fmod_last_result = sound->getOpenState(&open_state, &percentbuffered, &starving, &diskbusy);

	StructStream map_return = {};
	map_return.addKeyValue("open_state", (int)open_state);
	map_return.addKeyValue("percent_buffered", percentbuffered);
	map_return.addKeyValue("starving", starving);
	map_return.addKeyValue("disk_busy", diskbusy);

	map_return.writeTo(buff_return); 

	return 0;
}

func double fmod_sound_read_data_multiplatform(double sound_ref, char* buff_args)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	auto args = buffer_unpack((uint8_t*)buff_args);
	uint32_t buffer_length = 0;
	void* buffer = YYGetBuffer(args[0], buffer_length);
	uint32_t length = YYGetUint32(args[1]);
	uint32_t offset = YYGetUint32(args[2]);

	if (!buffer)
	{
		return -1;
	}

	auto pBuffer = ((uint8_t*)buffer) + offset;
	length = std::min(length, buffer_length - offset);

	if (offset >= buffer_length)
	{
		return -1;
	}

	uint32_t read = 0;
	g_fmod_last_result = sound->readData(pBuffer, length, &read);

	return (double)read;
}

func double fmod_sound_seek_data(double sound_ref, double pcm)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	g_fmod_last_result = sound->seekData((int)pcm);

	return 0;
}

func double fmod_sound_lock_multiplatform(double sound_ref, char* buff_args, char* buff_return)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	auto args = buffer_unpack((uint8_t*)buff_args);
	uint32_t length = YYGetUint32(args[0]);
	uint32_t offset = YYGetUint32(args[1]);
	uint32_t buffer_len1 = 0;
	void* gml_buffer1 = YYGetBuffer(args[2], buffer_len1);
	uint32_t buffer_len2 = 0;
	void* gml_buffer2 = YYGetBuffer(args[3], buffer_len2);

	StructStream map_return = {};
	if (!gml_buffer1 || !gml_buffer2)
	{
		map_return.writeTo(buff_return);
		return 0;
	}

	if ((buffer_len1 < length) || (buffer_len2 < length))
	{
		map_return.writeTo(buff_return);
		return 0;
	}

	void* buffer1 = nullptr;
	void* buffer2 = nullptr;
	uint32_t len1 = 0, len2 = 0;
	g_fmod_last_result = sound->lock(offset, length, &buffer1, &buffer2, &len1, &len2);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	if (buffer1 != nullptr)
	{
		StructStream map_buffer1 = {};

		memcpy(gml_buffer1, buffer1, len1);
		map_return.addKeyValue("length", len1);
		map_return.addKeyValue("patch_address", (uint64_t) reinterpret_cast<intptr_t>(buffer1));

		map_return.addKeyValue("buffer1", map_buffer1);
	}

	if (buffer2 != nullptr)
	{
		StructStream map_buffer2 = {};

		memcpy(gml_buffer2, buffer2, len2);
		map_return.addKeyValue("length", len2);
		map_return.addKeyValue("patch_address", (uint64_t) reinterpret_cast<intptr_t>(buffer2));

		map_return.addKeyValue("buffer2", map_buffer2);
	}

	map_return.writeTo(buff_return);

	return 0;
}

func double fmod_sound_unlock_multiplatform(double sound_ref, char* buff_args)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	auto args = buffer_unpack((uint8_t*)buff_args);
	uint32_t buffer_len1 = 0;
	void* buffer1 = YYGetBuffer(args[0], buffer_len1);
	uint32_t len1 = YYGetUint32(args[1]);
	void* address1 = YYGetPointer(args[2]);

	uint32_t buffer_len2 = 0;
	void* buffer2 = YYGetBuffer(args[3], buffer_len2);
	uint32_t len2 = YYGetUint32(args[4]);
	void* address2 = YYGetPointer(args[5]);

	if (address1)
	{
		memcpy(address1, buffer1, len1);
	}

	if (address2)
	{
		memcpy(address2, buffer2, len2);
	}

	g_fmod_last_result = sound->unlock(address1, address2, len1, len2);

	return 0;
}

// Music

func double fmod_sound_get_music_num_channels(double sound_ref)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	int num;
	g_fmod_last_result = sound->getMusicNumChannels(&num);

	return (double)num;
}

func double fmod_sound_set_music_channel_volume(double sound_ref, double channel_index, double volume)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	g_fmod_last_result = sound->setMusicChannelVolume((int)channel_index, (float)volume);

	return 0;
}

func double fmod_sound_get_music_channel_volume(double sound_ref, double channel_index)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	float volume;
	g_fmod_last_result = sound->getMusicChannelVolume((int)channel_index, &volume);

	return (double)volume;
}

func double fmod_sound_set_music_speed(double sound_ref, double speed)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	g_fmod_last_result = sound->setMusicSpeed((float)speed);

	return 0;
}

func double fmod_sound_get_music_speed(double sound_ref)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	float speed;
	g_fmod_last_result = sound->getMusicSpeed(&speed);

	return (double)speed;
}

// Synchronization / Markers

func double fmod_sound_get_sync_point_multiplatform(double sound_ref, double point_index, double offset_type, char* buff_return)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	FMOD_SYNCPOINT* sync_point;
	g_fmod_last_result = sound->getSyncPoint((int)point_index, &sync_point);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = {};
	char name[100]{};

	uint32_t offset = 0;
	g_fmod_last_result = sound->getSyncPointInfo(sync_point, name, 100, &offset, (FMOD_TIMEUNIT)offset_type);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	map_return.addKeyValue("name", name);
	map_return.addKeyValue("offset", (int)offset);


	map_return.writeTo(buff_return);
	return 0;
}

func double fmod_sound_get_num_sync_points(double sound_ref)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	int num;
	g_fmod_last_result = sound->getNumSyncPoints(&num);

	return (double)num;
}

func double fmod_sound_add_sync_point(double sound_ref, double offset, double offset_type, char* name)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	FMOD_SYNCPOINT* sync_point;	 // just declare it, we wont use it :)
	g_fmod_last_result = sound->addSyncPoint((uint32_t)offset, (FMOD_TIMEUNIT)offset_type, name, &sync_point);

	return 0;
}

func double fmod_sound_delete_sync_point(double sound_ref, double point_index)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	FMOD_SYNCPOINT* sync_point;
	g_fmod_last_result = sound->getSyncPoint((int)point_index, &sync_point);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	g_fmod_last_result = sound->deleteSyncPoint(sync_point);

	return 0;
}

// General

func double fmod_sound_release(double sound_ref)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	int num_sub_sounds = 0;
	g_fmod_last_result = sound->getNumSubSounds(&num_sub_sounds);

	// Check if we need to clean the `map_sounds` of any of the sub sounds.
	for (int sub_sound_index = 0; sub_sound_index < num_sub_sounds; ++sub_sound_index)
	{
		FMOD::Sound* sub_sound;
		g_fmod_last_result = sound->getSubSound(sub_sound_index, &sub_sound);

		unregisterResource(sub_sound, map_sounds);
	}

	unregisterResource(sound, map_sounds);

	// This will also release all the sub-sounds
	g_fmod_last_result = sound->release();

	return 0;
}

func double fmod_sound_get_system_object(double sound_ref)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	FMOD::System* fmod_system = nullptr;
	g_fmod_last_result = sound->getSystemObject(&fmod_system);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	auto system_id = registerOrFindResource(fmod_system, index_systems, map_systems);

	return (double)packIndexIntoRef(system_id, GM_FMOD_TYPE_SYSTEM);
}

func double fmod_sound_set_user_data(double sound_ref, double data)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	setCustomUserData(sound, data);
	return 0;
}

func double fmod_sound_get_user_data(double sound_ref)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	return getCustomUserData(sound);
}
