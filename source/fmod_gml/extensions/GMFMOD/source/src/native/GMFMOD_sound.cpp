#include "GMFMOD_sound.h"
#include <string_view>
#include <cstring>

using namespace gm_structs;

// ============================================================
// Sound - Creation & Loading
// ============================================================

uint64_t fmod_system_create_sound(std::string_view name_or_data, double mode)
{
	uint64_t result = 0;

	if (getCurrentSystem() == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return result;
	}

	FMOD::System* system = getCurrentSystem();
	FMOD::Sound* sound = nullptr;
	g_fmod_last_result = system->createSound(name_or_data.data(), (FMOD_MODE)(int)mode, nullptr, &sound);

	if (g_fmod_last_result == FMOD_OK && sound != nullptr)
	{
		uint32_t sound_id = registerOrFindResource(sound, index_sounds, map_sounds);
		result = packIndexIntoRef(sound_id, GM_FMOD_TYPE_SOUND);
	}
	return result;
}

uint64_t fmod_system_create_stream(std::string_view name_or_data, double mode)
{
	uint64_t result = 0;

	if (getCurrentSystem() == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return result;
	}

	FMOD::System* system = getCurrentSystem();
	FMOD::Sound* sound = nullptr;
	g_fmod_last_result = system->createStream(name_or_data.data(), (FMOD_MODE)(int)mode, nullptr, &sound);

	if (g_fmod_last_result == FMOD_OK && sound != nullptr)
	{
		uint32_t sound_id = registerOrFindResource(sound, index_sounds, map_sounds);
		result = packIndexIntoRef(sound_id, GM_FMOD_TYPE_SOUND);
	}
	return result;
}

uint64_t fmod_system_play_sound(uint64_t sound_ref, uint64_t channel_group_ref, double pause)
{
	uint64_t result = 0;

	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	if (sound == nullptr)
		return result;

	FMOD::ChannelGroup* channel_group = nullptr;
	validate_fmod_channel_group(channel_group_ref, channel_group);

	if (channel_group == nullptr)
		return result;

	if (getCurrentSystem() == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_HANDLE;
		return result;
	}

	FMOD::System* system = getCurrentSystem();
	FMOD::Channel* channel = nullptr;
	g_fmod_last_result = system->playSound(sound, channel_group, (pause != 0.0), &channel);

	if (g_fmod_last_result == FMOD_OK && channel != nullptr)
	{
		uint32_t channel_id = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(channel));
		result = packIndexIntoRef(channel_id, GM_FMOD_TYPE_CHANNEL);
	}
	return result;
}

// ============================================================
// Sound - Properties
// ============================================================

double fmod_sound_get_length(uint64_t sound_ref, double length_type)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	if (sound == nullptr)
		return 0.0;

	unsigned int length = 0;
	g_fmod_last_result = sound->getLength(&length, (FMOD_TIMEUNIT)(int)length_type);
	return (double)length;
}

double fmod_sound_set_defaults(uint64_t sound_ref, double frequency, double priority)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	if (sound == nullptr)
		return 0;

	g_fmod_last_result = sound->setDefaults((float)frequency, (int)priority);
	return 0;
}

double fmod_sound_set_mode(uint64_t sound_ref, double mode)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	if (sound == nullptr)
		return 0;

	g_fmod_last_result = sound->setMode((FMOD_MODE)(int)mode);
	return 0;
}

double fmod_sound_get_mode(uint64_t sound_ref)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	if (sound == nullptr)
		return 0.0;

	FMOD_MODE mode = FMOD_MODE(0);
	g_fmod_last_result = sound->getMode(&mode);
	return (double)mode;
}

// ============================================================
// Sound - Loop
// ============================================================

double fmod_sound_set_loop_count(uint64_t sound_ref, double count)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	if (sound == nullptr)
		return 0;

	g_fmod_last_result = sound->setLoopCount((int)count);
	return 0;
}

double fmod_sound_get_loop_count(uint64_t sound_ref)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	if (sound == nullptr)
		return 0.0;

	int count = 0;
	g_fmod_last_result = sound->getLoopCount(&count);
	return (double)count;
}

double fmod_sound_set_loop_points(uint64_t sound_ref, double loop_start, double loop_start_type, double loop_end, double loop_end_type)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	if (sound == nullptr)
		return 0;

	g_fmod_last_result = sound->setLoopPoints(
		(unsigned int)loop_start, (FMOD_TIMEUNIT)(int)loop_start_type,
		(unsigned int)loop_end, (FMOD_TIMEUNIT)(int)loop_end_type
	);
	return 0;
}

// ============================================================
// Sound - 3D & Distance
// ============================================================

double fmod_sound_set_3d_min_max_distance(uint64_t sound_ref, double min, double max)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	if (sound == nullptr)
		return 0;

	g_fmod_last_result = sound->set3DMinMaxDistance((float)min, (float)max);
	return 0;
}

double fmod_sound_set_3d_cone_settings(uint64_t sound_ref, double inside_cone_angle, double outside_cone_angle, double outside_volume)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	if (sound == nullptr)
		return 0;

	g_fmod_last_result = sound->set3DConeSettings((float)inside_cone_angle, (float)outside_cone_angle, (float)outside_volume);
	return 0;
}

// ============================================================
// Sound - Release
// ============================================================

double fmod_sound_release(uint64_t sound_ref)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	if (sound == nullptr)
		return 0;

	g_fmod_last_result = sound->release();
	if (g_fmod_last_result == FMOD_OK)
	{
		unregisterResource(sound, map_sounds);
	}
	return 0;
}

uint64_t fmod_sound_get_system_object(uint64_t sound_ref)
{
	uint64_t result = 0;

	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	if (sound == nullptr)
		return result;

	FMOD::System* system = nullptr;
	g_fmod_last_result = sound->getSystemObject(&system);

	if (g_fmod_last_result == FMOD_OK && system != nullptr)
	{
		uint32_t system_id = registerOrFindResource(system, index_systems, map_systems);
		result = packIndexIntoRef(system_id, GM_FMOD_TYPE_SYSTEM);
	}
	return result;
}

// ============================================================
// Sound - Tags
// ============================================================

// Decodes a UTF-16 tag payload into UTF-8. FMOD hands these over as raw bytes, so the
// byte order comes from the tag's datatype rather than from the host.
static std::string fmod_tag_utf16_to_utf8(const unsigned char* bytes, unsigned int byte_len, bool big_endian)
{
	std::string out;
	out.reserve(byte_len);

	unsigned int count = byte_len / 2;
	for (unsigned int i = 0; i < count; ++i)
	{
		uint16_t unit = big_endian
			? (uint16_t)((bytes[i * 2] << 8) | bytes[i * 2 + 1])
			: (uint16_t)((bytes[i * 2 + 1] << 8) | bytes[i * 2]);

		if (unit == 0)
			break; // NUL terminated

		uint32_t cp = unit;

		// Combine a surrogate pair when the low half is present.
		if (unit >= 0xD800 && unit <= 0xDBFF && (i + 1) < count)
		{
			uint16_t low = big_endian
				? (uint16_t)((bytes[(i + 1) * 2] << 8) | bytes[(i + 1) * 2 + 1])
				: (uint16_t)((bytes[(i + 1) * 2 + 1] << 8) | bytes[(i + 1) * 2]);

			if (low >= 0xDC00 && low <= 0xDFFF)
			{
				cp = 0x10000 + (((uint32_t)(unit - 0xD800)) << 10) + (uint32_t)(low - 0xDC00);
				++i;
			}
		}

		if (cp < 0x80)
		{
			out.push_back((char)cp);
		}
		else if (cp < 0x800)
		{
			out.push_back((char)(0xC0 | (cp >> 6)));
			out.push_back((char)(0x80 | (cp & 0x3F)));
		}
		else if (cp < 0x10000)
		{
			out.push_back((char)(0xE0 | (cp >> 12)));
			out.push_back((char)(0x80 | ((cp >> 6) & 0x3F)));
			out.push_back((char)(0x80 | (cp & 0x3F)));
		}
		else
		{
			out.push_back((char)(0xF0 | (cp >> 18)));
			out.push_back((char)(0x80 | ((cp >> 12) & 0x3F)));
			out.push_back((char)(0x80 | ((cp >> 6) & 0x3F)));
			out.push_back((char)(0x80 | (cp & 0x3F)));
		}
	}

	return out;
}

// TODO: lossy by construction — see the `data` field note in spec.gmidl. Binary tags
// return an empty string because they cannot survive the round trip; swap this for a
// caller-supplied buffer out-param to expose them.
static std::string fmod_tag_data_to_string(const FMOD_TAG& tag)
{
	if (tag.data == nullptr || tag.datalen == 0)
		return std::string();

	const unsigned char* bytes = static_cast<const unsigned char*>(tag.data);

	switch (tag.datatype)
	{
	case FMOD_TAGDATATYPE_STRING:
	case FMOD_TAGDATATYPE_STRING_UTF8:
	{
		const char* chars = static_cast<const char*>(tag.data);
		// FMOD counts the NUL in datalen for some tag types and omits it for others.
		size_t len = 0;
		while (len < tag.datalen && chars[len] != '\0')
			++len;
		return std::string(chars, len);
	}

	case FMOD_TAGDATATYPE_STRING_UTF16:
		return fmod_tag_utf16_to_utf8(bytes, tag.datalen, false);

	case FMOD_TAGDATATYPE_STRING_UTF16BE:
		return fmod_tag_utf16_to_utf8(bytes, tag.datalen, true);

	case FMOD_TAGDATATYPE_INT:
	{
		// Width is whatever the tag says: 8, 16, 32 or 64 bit.
		long long value = 0;
		switch (tag.datalen)
		{
		case 1: { int8_t v;  memcpy(&v, tag.data, 1); value = v; break; }
		case 2: { int16_t v; memcpy(&v, tag.data, 2); value = v; break; }
		case 4: { int32_t v; memcpy(&v, tag.data, 4); value = v; break; }
		case 8: { int64_t v; memcpy(&v, tag.data, 8); value = v; break; }
		default: return std::string();
		}
		return std::to_string(value);
	}

	case FMOD_TAGDATATYPE_FLOAT:
	{
		if (tag.datalen == 4) { float v;  memcpy(&v, tag.data, 4); return std::to_string(v); }
		if (tag.datalen == 8) { double v; memcpy(&v, tag.data, 8); return std::to_string(v); }
		return std::string();
	}

	case FMOD_TAGDATATYPE_BINARY:
	default:
		return std::string();
	}
}

FmodSoundTag fmod_sound_get_tag(uint64_t sound_ref, std::string_view name, double index)
{
	FmodSoundTag result{};

	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	if (sound == nullptr)
		return result;

	// FMOD uses a null name to mean "any tag"; an empty GML string means the same here.
	std::string name_str(name);
	FMOD_TAG tag = {};
	g_fmod_last_result = sound->getTag(name_str.empty() ? nullptr : name_str.c_str(), (int)index, &tag);

	if (g_fmod_last_result != FMOD_OK)
		return result;

	result.type = (gm_enums::FmodTagType)tag.type;
	result.datatype = (gm_enums::FmodTagDataType)tag.datatype;
	result.name = tag.name != nullptr ? tag.name : "";
	result.data = fmod_tag_data_to_string(tag);
	result.datalen = (double)tag.datalen;
	result.updated = tag.updated ? 1.0 : 0.0;

	return result;
}

// ============================================================
// Sound - Additional Properties
// ============================================================

double fmod_sound_get_format(uint64_t sound_ref)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	if (sound == nullptr)
		return 0;

	FMOD_SOUND_FORMAT format = FMOD_SOUND_FORMAT_NONE;
	int channels = 0;
	int bits = 0;
	g_fmod_last_result = sound->getFormat(nullptr, &format, &channels, &bits);
	return (double)format;
}

std::string fmod_sound_get_name(uint64_t sound_ref)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	if (sound == nullptr)
		return "";

	char name[512]{};
	g_fmod_last_result = sound->getName(name, sizeof(name));
	return std::string(name);
}

FmodSoundDefaults fmod_sound_get_defaults(uint64_t sound_ref)
{
	FmodSoundDefaults result{};

	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	if (sound == nullptr)
	{
		return result;
	}

	float frequency = 0.0f;
	int priority = 0;
	g_fmod_last_result = sound->getDefaults(&frequency, &priority);
	result.frequency = (double)frequency;
	result.priority = (double)priority;
	return result;
}

FmodLoopPoints fmod_sound_get_loop_points(uint64_t sound_ref, double start_type, double end_type)
{
	FmodLoopPoints result{};

	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	if (sound == nullptr)
		return result;

	unsigned int loop_start = 0, loop_end = 0;
	g_fmod_last_result = sound->getLoopPoints(
		&loop_start, (FMOD_TIMEUNIT)(int)start_type,
		&loop_end, (FMOD_TIMEUNIT)(int)end_type
	);
	result.loop_start = (double)loop_start;
	result.loop_end = (double)loop_end;
	return result;
}

FmodSoundMinMaxDistance fmod_sound_get_3d_min_max_distance(uint64_t sound_ref)
{
	FmodSoundMinMaxDistance result{};

	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	if (sound == nullptr)
		return result;

	float min_distance = 0.0f, max_distance = 0.0f;
	g_fmod_last_result = sound->get3DMinMaxDistance(&min_distance, &max_distance);
	result.min_distance = (double)min_distance;
	result.max_distance = (double)max_distance;
	return result;
}

FmodConeSettings fmod_sound_get_3d_cone_settings(uint64_t sound_ref)
{
	FmodConeSettings result{};

	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	if (sound == nullptr)
		return result;

	float inside_cone_angle = 0.0f, outside_cone_angle = 0.0f, outside_volume = 0.0f;
	g_fmod_last_result = sound->get3DConeSettings(&inside_cone_angle, &outside_cone_angle, &outside_volume);
	result.inside_cone_angle = (double)inside_cone_angle;
	result.outside_cone_angle = (double)outside_cone_angle;
	result.outside_volume = (double)outside_volume;
	return result;
}

double fmod_sound_set_3d_custom_rolloff(uint64_t sound_ref, const gm::wire::GMValue& points, double num_points)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	if (sound == nullptr)
		return 0;

	// Custom rolloff requires array conversion - for now return unsupported
	g_fmod_last_result = FMOD_ERR_UNSUPPORTED;
	return 0;
}

void fmod_sound_get_3d_custom_rolloff(uint64_t sound_ref)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	if (sound == nullptr)
		return;

	// Custom rolloff requires array conversion - for now return unsupported
	g_fmod_last_result = FMOD_ERR_UNSUPPORTED;
}

// ============================================================
// Sound - Sync Points
// ============================================================

double fmod_sound_get_num_sync_points(uint64_t sound_ref)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	if (sound == nullptr)
		return 0;

	int num_sync_points = 0;
	g_fmod_last_result = sound->getNumSyncPoints(&num_sync_points);
	return (double)num_sync_points;
}

FmodSyncPointInfo fmod_sound_get_sync_point(uint64_t sound_ref, double sync_point_index, double offset_type)
{
	FmodSyncPointInfo result{};

	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	if (sound == nullptr)
		return result;

	FMOD_SYNCPOINT* sync_point = nullptr;
	unsigned int offset = 0;
	g_fmod_last_result = sound->getSyncPoint((int)sync_point_index, &sync_point);
	if (g_fmod_last_result == FMOD_OK)
	{
		g_fmod_last_result = sound->getSyncPointInfo(sync_point, nullptr, 0, &offset, (FMOD_TIMEUNIT)(int)offset_type);
		result.offset = (double)offset;
	}
	return result;
}

double fmod_sound_add_sync_point(uint64_t sound_ref, double offset, double offset_type, std::string_view name)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	if (sound == nullptr)
		return 0;

	FMOD_SYNCPOINT* sync_point = nullptr;
	g_fmod_last_result = sound->addSyncPoint((unsigned int)offset, (FMOD_TIMEUNIT)(int)offset_type, name.data(), &sync_point);
	return (double)(uintptr_t)sync_point;
}

double fmod_sound_delete_sync_point(uint64_t sound_ref, double sync_point_index)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	if (sound == nullptr)
		return 0;

	FMOD_SYNCPOINT* sync_point = nullptr;
	g_fmod_last_result = sound->getSyncPoint((int)sync_point_index, &sync_point);
	if (g_fmod_last_result == FMOD_OK)
	{
		g_fmod_last_result = sound->deleteSyncPoint(sync_point);
	}
	return 0;
}

// ============================================================
// Sound - Music (MOD/S3M/XM/IT/MIDI)
// ============================================================

double fmod_sound_get_music_num_channels(uint64_t sound_ref)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	if (sound == nullptr)
		return 0;

	int num_channels = 0;
	g_fmod_last_result = sound->getMusicNumChannels(&num_channels);
	return (double)num_channels;
}

double fmod_sound_set_music_channel_volume(uint64_t sound_ref, double channel_index, double volume)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	if (sound == nullptr)
		return 0;

	g_fmod_last_result = sound->setMusicChannelVolume((int)channel_index, (float)volume);
	return 0;
}

double fmod_sound_get_music_channel_volume(uint64_t sound_ref, double channel_index)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	if (sound == nullptr)
		return 0;

	float volume = 0.0f;
	g_fmod_last_result = sound->getMusicChannelVolume((int)channel_index, &volume);
	return (double)volume;
}

double fmod_sound_set_music_speed(uint64_t sound_ref, double speed)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	if (sound == nullptr)
		return 0;

	g_fmod_last_result = sound->setMusicSpeed((float)speed);
	return 0;
}

double fmod_sound_get_music_speed(uint64_t sound_ref)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	if (sound == nullptr)
		return 0;

	float speed = 0.0f;
	g_fmod_last_result = sound->getMusicSpeed(&speed);
	return (double)speed;
}

// ============================================================
// Sound - Sound Groups
// ============================================================

double fmod_sound_set_sound_group(uint64_t sound_ref, uint64_t sound_group_ref)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	if (sound == nullptr)
		return 0;

	FMOD::SoundGroup* sound_group = nullptr;
	validate_fmod_sound_group(sound_group_ref, sound_group);

	if (sound_group == nullptr)
		return 0;

	g_fmod_last_result = sound->setSoundGroup(sound_group);
	return 0;
}

uint64_t fmod_sound_get_sound_group(uint64_t sound_ref)
{
	uint64_t result = 0;

	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	if (sound == nullptr)
		return result;

	FMOD::SoundGroup* sound_group = nullptr;
	g_fmod_last_result = sound->getSoundGroup(&sound_group);

	if (g_fmod_last_result == FMOD_OK && sound_group != nullptr)
	{
		uint32_t group_id = registerOrFindResource(sound_group, index_sound_groups, map_sound_groups);
		result = packIndexIntoRef(group_id, GM_FMOD_TYPE_SOUND_GROUP);
	}
	return result;
}

// ============================================================
// Sound - Streaming State
// ============================================================

FmodSoundOpenState fmod_sound_get_open_state(uint64_t sound_ref)
{
	FmodSoundOpenState result{};

	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	if (sound == nullptr)
		return result;

	FMOD_OPENSTATE open_state = FMOD_OPENSTATE_READY;
	unsigned int percent_buffered = 0;
	bool starving = false;
	bool disk_busy = false;
	g_fmod_last_result = sound->getOpenState(&open_state, &percent_buffered, &starving, &disk_busy);

	result.open_state = (gm_enums::FmodOpenState)(int)open_state;
	result.percent_buffered = (double)percent_buffered;
	result.starving = starving ? 1.0 : 0.0;
	result.disk_busy = disk_busy ? 1.0 : 0.0;
	return result;
}

// ============================================================
// Sound - Sub Sounds
// ============================================================

double fmod_sound_get_num_sub_sounds(uint64_t sound_ref)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	if (sound == nullptr)
		return 0.0;

	int num_sub_sounds = 0;
	g_fmod_last_result = sound->getNumSubSounds(&num_sub_sounds);
	return (double)num_sub_sounds;
}

uint64_t fmod_sound_get_sub_sound(uint64_t sound_ref, double index)
{
	uint64_t result = 0;

	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	if (sound == nullptr)
		return result;

	FMOD::Sound* sub_sound = nullptr;
	g_fmod_last_result = sound->getSubSound((int)index, &sub_sound);

	if (g_fmod_last_result == FMOD_OK && sub_sound != nullptr)
	{
		uint32_t sound_id = registerOrFindResource(sub_sound, index_sounds, map_sounds);
		result = packIndexIntoRef(sound_id, GM_FMOD_TYPE_SOUND);
	}
	return result;
}

// ============================================================
// Sound - Raw Data
// ============================================================

double fmod_sound_read_data(uint64_t sound_ref, gm::wire::GMBuffer data, double length)
{
	FMOD::Sound* sound = nullptr;
	validate_fmod_sound(sound_ref, sound);

	if (sound == nullptr)
		return 0.0;

	void* buffer = data.data();
	if (buffer == nullptr)
	{
		g_fmod_last_result = FMOD_ERR_INVALID_PARAM;
		return 0.0;
	}

	// Never read past the end of the GML buffer, whatever length was asked for.
	uint64_t capacity = data.length();
	uint64_t requested = (length > 0.0) ? (uint64_t)length : capacity;
	if (requested > capacity)
		requested = capacity;

	unsigned int read = 0;
	g_fmod_last_result = sound->readData(buffer, (unsigned int)requested, &read);
	return (double)read;
}
