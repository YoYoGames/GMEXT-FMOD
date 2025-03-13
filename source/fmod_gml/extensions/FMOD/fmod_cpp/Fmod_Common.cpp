
#include "Fmod_Tools.h"

// https://www.fmod.com/docs/2.03/api/core-api-common.html

// File

func double fmod_file_get_disk_busy()
{
	int busy;
	g_fmod_last_result = FMOD::File_GetDiskBusy(&busy);

	return (double)busy;
}

func double fmod_file_set_disk_busy(double busy)
{
	g_fmod_last_result = FMOD::File_SetDiskBusy((int)busy);

	return 0;
}

// Memory

func double fmod_memory_get_stats_multiplatform(double blocking, char* buff_return)
{
	int currentalloced = 0, maxalloced = 0;
	g_fmod_last_result = FMOD::Memory_GetStats(&currentalloced, &maxalloced, blocking >= 0.5);

	if (g_fmod_last_result != FMOD_OK)
	{
		return 0;
	}

	StructStream map_return = {};
	map_return.addKeyValue("current_alloced", currentalloced);
	map_return.addKeyValue("max_alloced", maxalloced);
	map_return.writeTo(buff_return);

	return 0;
}

// void* CALLBACK_fmod_memory_alloc(unsigned int size, FMOD_MEMORY_TYPE type, const char* source_str) // PLUG MEMORY MANAGER

// void* CALLBACK_fmod_memory_realloc(void* ptr, unsigned int size, FMOD_MEMORY_TYPE type, const char* source_str) // PLUG MEMORY MANAGER

// void  CALLBACK_fmod_memory_free(void* ptr, FMOD_MEMORY_TYPE type, const char* source_str) // PLUG MEMORY MANAGER

// func double fmod_memory_initialize(char* buff_mem,double mem_size,double type)

// Debugging

static FMOD_RESULT CALLBACK_fmod_debug(FMOD_DEBUG_FLAGS flags, const char* file, int line, const char* func_name, const char* message)
{
	StructStream async_map = {};
	async_map.addKeyValue("type", "fmod_debug_initialize");
	async_map.addKeyValue("file", file);
	async_map.addKeyValue("flags", (int)flags);
	async_map.addKeyValue("line", line);
	async_map.addKeyValue("file", file);
	async_map.addKeyValue("func", func_name);
	async_map.addKeyValue("message", message);

	async_create_event(async_map);

	return FMOD_OK;
}

func double fmod_debug_initialize_multiplatform(double flags, double mode, char* filename)
{
	g_fmod_last_result = FMOD::Debug_Initialize((FMOD_DEBUG_FLAGS)flags, (FMOD_DEBUG_MODE)mode, CALLBACK_fmod_debug, filename);
	return 0;
}

// Threading

func double fmod_thread_set_attributes(double type, double affinity, double priority, double stacksize)
{
	g_fmod_last_result =
		FMOD::Thread_SetAttributes((FMOD_THREAD_TYPE)type, (FMOD_THREAD_AFFINITY)affinity, (FMOD_THREAD_PRIORITY)priority, (FMOD_THREAD_STACK_SIZE)stacksize);

	return 0;
}
