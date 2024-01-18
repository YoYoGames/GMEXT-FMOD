

/**
 * @func fmod_file_get_disk_busy
 * @desc Information function to retrieve the state of FMOD disk access.
 * @returns {double}
 * @func_end
*/
function fmod_file_get_disk_busy() {}


/**
 * @func fmod_file_set_disk_busy
 * @desc Sets the busy state for disk access ensuring mutual exclusion of file operations.
 * @param {double} busy Busy state where 1 represent the begining of disk access and 0 represents the end of disk access.
 * @func_end
*/
function fmod_file_set_disk_busy(busy_) {}


/**
 * @func fmod_memory_get_stats
 * @desc Returns information on the memory usage of FMOD.
 * @param {double} blocking Flag to indicate whether to favour speed or accuracy. Specifying true for this parameter will flush the DSP network to make sure all queued allocations happen immediately, which can be costly.
 * @returns {struct} {current_alloced:int, max_alloced:int}
 * @func_end
*/
function fmod_memory_get_stats(blocking_,buff_return_) {}


/**
 * @func fmod_debug_initialize
 * @desc Specify the level and delivery method of log messages when using the logging version of FMOD.
 * @param {constant.FMOD_DEBUG_FLAGS} flags Debug level, type and display control flags. More than one mode can be set at once by combining them with the OR operator. 
 * @param {constant.FMOD_DEBUG_MODE} Destination for log messages.
 * @param {string} filename Filename to use when mode is set to file, only required when using that mode. (UTF-8 string)
 * @func_end
*/
function fmod_debug_initialize(flags,mode,filename) {}


/**
 * @func fmod_thread_set_attributes
 * @desc Specify the affinity, priority and stack size for all FMOD created threads.
 * @param {constant.FMOD_THREAD_TYPE} type_ Identifier for an FMOD thread.
 * @param {constant.FMOD_THREAD_AFFINITY} affinity Bitfield of desired CPU cores to assign the given thread to.
 * @param {constant.FMOD_THREAD_PRIORITY} priority Scheduling priority to assign the given thread to.
 * @param {constant.FMOD_THREAD_STACK_SIZE} stacksize Amount of stack space available to the given thread.
 * @func_end
*/
function fmod_thread_set_attributes(type,affinity,priority,stacksize) {}


/**
 * @func fmod_last_error
 * @desc Retrieve the status of the last operation
 * @returns {constant.FMOD_RESULT}
 * @func_end
*/
function fmod_last_error() {}


/**
 * @module Common
 * @title Common
 * @desc The following set of functions are all for checking the availability of certain aspects of the Steam client or server API. This means that these functions should be used before any other Steam API function call to ensure that the client/server setup is correct and communicating with your game:
 * @section_func

 * @ref fmod_file_get_disk_busy
 * @ref fmod_file_set_disk_busy
 * @ref fmod_memory_get_stats
 * @ref fmod_debug_initialize
 * @ref fmod_thread_set_attributes
 * @ref fmod_last_error

 * @section_end
 * @module_end
 */
 