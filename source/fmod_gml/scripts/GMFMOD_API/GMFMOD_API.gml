// ##### extgen :: Auto-generated file do not edit!! #####

// #####################################################################
// # Macros
// #####################################################################

// #####################################################################
// # Enums
// #####################################################################

// #####################################################################
// # Constructors
// #####################################################################

/**
 * @returns {Struct.FmodChannelRef}
 */
function FmodChannelRef() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 287688359;

    self._ref = undefined;

}

/**
 * @returns {Struct.FmodChannelGroupRef}
 */
function FmodChannelGroupRef() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 1748069326;

    self._ref = undefined;

}

/**
 * @returns {Struct.FmodSoundRef}
 */
function FmodSoundRef() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 237087423;

    self._ref = undefined;

}

/**
 * @returns {Struct.FmodSystemRef}
 */
function FmodSystemRef() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 3684475095;

    self._ref = undefined;

}

/**
 * @returns {Struct.FmodDSPConnectionRef}
 */
function FmodDSPConnectionRef() constructor
{
    /**
     * Internally generated hash for quick validation
     * @ignore
     */
    static __uid = 67812655;

    self._ref = undefined;

}

// #####################################################################
// # Codecs
// #####################################################################

/**
 * @func __FmodChannelRef_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodChannelRef} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodChannelRef_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: _ref, type: UInt64
        if (!is_numeric(self._ref)) show_error($"{_where} :: self._ref expected number", true);
        buffer_write(_buffer, buffer_u64, self._ref);

    }
}

/**
 * @func __FmodChannelRef_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodChannelRef}
 * @ignore
 */
function __FmodChannelRef_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodChannelRef();
    with (_inst)
    {
        // field: _ref, type: UInt64
        self._ref = buffer_read(_buffer, buffer_u64);

    }

    return _inst;
}

/**
 * @func __FmodChannelGroupRef_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodChannelGroupRef} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodChannelGroupRef_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: _ref, type: UInt64
        if (!is_numeric(self._ref)) show_error($"{_where} :: self._ref expected number", true);
        buffer_write(_buffer, buffer_u64, self._ref);

    }
}

/**
 * @func __FmodChannelGroupRef_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodChannelGroupRef}
 * @ignore
 */
function __FmodChannelGroupRef_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodChannelGroupRef();
    with (_inst)
    {
        // field: _ref, type: UInt64
        self._ref = buffer_read(_buffer, buffer_u64);

    }

    return _inst;
}

/**
 * @func __FmodSoundRef_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodSoundRef} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodSoundRef_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: _ref, type: UInt64
        if (!is_numeric(self._ref)) show_error($"{_where} :: self._ref expected number", true);
        buffer_write(_buffer, buffer_u64, self._ref);

    }
}

/**
 * @func __FmodSoundRef_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodSoundRef}
 * @ignore
 */
function __FmodSoundRef_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodSoundRef();
    with (_inst)
    {
        // field: _ref, type: UInt64
        self._ref = buffer_read(_buffer, buffer_u64);

    }

    return _inst;
}

/**
 * @func __FmodSystemRef_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodSystemRef} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodSystemRef_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: _ref, type: UInt64
        if (!is_numeric(self._ref)) show_error($"{_where} :: self._ref expected number", true);
        buffer_write(_buffer, buffer_u64, self._ref);

    }
}

/**
 * @func __FmodSystemRef_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodSystemRef}
 * @ignore
 */
function __FmodSystemRef_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodSystemRef();
    with (_inst)
    {
        // field: _ref, type: UInt64
        self._ref = buffer_read(_buffer, buffer_u64);

    }

    return _inst;
}

/**
 * @func __FmodDSPConnectionRef_encode(_inst, _buffer, _offset, _where)
 * @param {Struct.FmodDSPConnectionRef} _inst
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @param {String} _where
 * @ignore
 */
function __FmodDSPConnectionRef_encode(_inst, _buffer, _offset, _where = _GMFUNCTION_)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);
    with (_inst)
    {
        // field: _ref, type: UInt64
        if (!is_numeric(self._ref)) show_error($"{_where} :: self._ref expected number", true);
        buffer_write(_buffer, buffer_u64, self._ref);

    }
}

/**
 * @func __FmodDSPConnectionRef_decode(_buffer, _offset)
 * @param {Id.Buffer} _buffer
 * @param {Real} _offset
 * @returns {Struct.FmodDSPConnectionRef}
 * @ignore
 */
function __FmodDSPConnectionRef_decode(_buffer, _offset)
{
    buffer_seek(_buffer, buffer_seek_start, _offset);

    _inst = new FmodDSPConnectionRef();
    with (_inst)
    {
        // field: _ref, type: UInt64
        self._ref = buffer_read(_buffer, buffer_u64);

    }

    return _inst;
}

// #####################################################################
// # Functions
// #####################################################################

/**
 * @param {Struct.FmodChannelRef} _channel_ref
 * @param {Real} _frequency
 * @returns {Real}
 */
function fmod_channel_set_frequency(_channel_ref, _frequency)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _channel_ref, type: struct FmodChannelRef
    if (_channel_ref.__uid != 287688359) show_error($"{_GMFUNCTION_} :: _channel_ref expected FmodChannelRef", true);
    __FmodChannelRef_encode(_channel_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _frequency, type: Float64
    if (!is_numeric(_frequency)) show_error($"{_GMFUNCTION_} :: _frequency expected number", true);
    buffer_write(__args_buffer, buffer_f64, _frequency);

    var __return_value__ = __fmod_channel_set_frequency(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodChannelRef} _channel_ref
 * @returns {Real}
 */
function fmod_channel_get_frequency(_channel_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _channel_ref, type: struct FmodChannelRef
    if (_channel_ref.__uid != 287688359) show_error($"{_GMFUNCTION_} :: _channel_ref expected FmodChannelRef", true);
    __FmodChannelRef_encode(_channel_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_channel_get_frequency(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodChannelRef} _channel_ref
 * @param {Real} _priority
 * @returns {Real}
 */
function fmod_channel_set_priority(_channel_ref, _priority)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _channel_ref, type: struct FmodChannelRef
    if (_channel_ref.__uid != 287688359) show_error($"{_GMFUNCTION_} :: _channel_ref expected FmodChannelRef", true);
    __FmodChannelRef_encode(_channel_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _priority, type: Float64
    if (!is_numeric(_priority)) show_error($"{_GMFUNCTION_} :: _priority expected number", true);
    buffer_write(__args_buffer, buffer_f64, _priority);

    var __return_value__ = __fmod_channel_set_priority(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodChannelRef} _channel_ref
 * @returns {Real}
 */
function fmod_channel_get_priority(_channel_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _channel_ref, type: struct FmodChannelRef
    if (_channel_ref.__uid != 287688359) show_error($"{_GMFUNCTION_} :: _channel_ref expected FmodChannelRef", true);
    __FmodChannelRef_encode(_channel_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_channel_get_priority(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodChannelRef} _channel_ref
 * @param {Real} _position
 * @param {Real} _time_unit
 * @returns {Real}
 */
function fmod_channel_set_position(_channel_ref, _position, _time_unit)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _channel_ref, type: struct FmodChannelRef
    if (_channel_ref.__uid != 287688359) show_error($"{_GMFUNCTION_} :: _channel_ref expected FmodChannelRef", true);
    __FmodChannelRef_encode(_channel_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _position, type: Float64
    if (!is_numeric(_position)) show_error($"{_GMFUNCTION_} :: _position expected number", true);
    buffer_write(__args_buffer, buffer_f64, _position);

    // param: _time_unit, type: Float64
    if (!is_numeric(_time_unit)) show_error($"{_GMFUNCTION_} :: _time_unit expected number", true);
    buffer_write(__args_buffer, buffer_f64, _time_unit);

    var __return_value__ = __fmod_channel_set_position(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodChannelRef} _channel_ref
 * @param {Real} _time_unit
 * @returns {Real}
 */
function fmod_channel_get_position(_channel_ref, _time_unit)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _channel_ref, type: struct FmodChannelRef
    if (_channel_ref.__uid != 287688359) show_error($"{_GMFUNCTION_} :: _channel_ref expected FmodChannelRef", true);
    __FmodChannelRef_encode(_channel_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _time_unit, type: Float64
    if (!is_numeric(_time_unit)) show_error($"{_GMFUNCTION_} :: _time_unit expected number", true);
    buffer_write(__args_buffer, buffer_f64, _time_unit);

    var __return_value__ = __fmod_channel_get_position(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodChannelRef} _channel_ref
 * @param {Struct.FmodChannelGroupRef} _channel_group_ref
 * @returns {Real}
 */
function fmod_channel_set_channel_group(_channel_ref, _channel_group_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _channel_ref, type: struct FmodChannelRef
    if (_channel_ref.__uid != 287688359) show_error($"{_GMFUNCTION_} :: _channel_ref expected FmodChannelRef", true);
    __FmodChannelRef_encode(_channel_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _channel_group_ref, type: struct FmodChannelGroupRef
    if (_channel_group_ref.__uid != 1748069326) show_error($"{_GMFUNCTION_} :: _channel_group_ref expected FmodChannelGroupRef", true);
    __FmodChannelGroupRef_encode(_channel_group_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_channel_set_channel_group(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodChannelRef} _channel_ref
 * @returns {Struct.FmodChannelGroupRef}
 */
function fmod_channel_get_channel_group(_channel_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _channel_ref, type: struct FmodChannelRef
    if (_channel_ref.__uid != 287688359) show_error($"{_GMFUNCTION_} :: _channel_ref expected FmodChannelRef", true);
    __FmodChannelRef_encode(_channel_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __ret_buffer = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_channel_get_channel_group(buffer_get_address(__args_buffer), buffer_tell(__args_buffer), buffer_get_address(__ret_buffer), buffer_get_size(__ret_buffer));

    var __result__ = undefined;
    __result__ = __FmodChannelGroupRef_decode(__ret_buffer, buffer_tell(__ret_buffer));
    return __result__;
}

/**
 * @param {Struct.FmodChannelRef} _channel_ref
 * @param {Real} _loop_count
 * @returns {Real}
 */
function fmod_channel_set_loop_count(_channel_ref, _loop_count)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _channel_ref, type: struct FmodChannelRef
    if (_channel_ref.__uid != 287688359) show_error($"{_GMFUNCTION_} :: _channel_ref expected FmodChannelRef", true);
    __FmodChannelRef_encode(_channel_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _loop_count, type: Float64
    if (!is_numeric(_loop_count)) show_error($"{_GMFUNCTION_} :: _loop_count expected number", true);
    buffer_write(__args_buffer, buffer_f64, _loop_count);

    var __return_value__ = __fmod_channel_set_loop_count(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodChannelRef} _channel_ref
 * @returns {Real}
 */
function fmod_channel_get_loop_count(_channel_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _channel_ref, type: struct FmodChannelRef
    if (_channel_ref.__uid != 287688359) show_error($"{_GMFUNCTION_} :: _channel_ref expected FmodChannelRef", true);
    __FmodChannelRef_encode(_channel_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_channel_get_loop_count(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodChannelRef} _channel_ref
 * @param {Real} _loop_start
 * @param {Real} _loop_start_type
 * @param {Real} _loop_end
 * @param {Real} _loop_end_type
 * @returns {Real}
 */
function fmod_channel_set_loop_points(_channel_ref, _loop_start, _loop_start_type, _loop_end, _loop_end_type)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _channel_ref, type: struct FmodChannelRef
    if (_channel_ref.__uid != 287688359) show_error($"{_GMFUNCTION_} :: _channel_ref expected FmodChannelRef", true);
    __FmodChannelRef_encode(_channel_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _loop_start, type: Float64
    if (!is_numeric(_loop_start)) show_error($"{_GMFUNCTION_} :: _loop_start expected number", true);
    buffer_write(__args_buffer, buffer_f64, _loop_start);

    // param: _loop_start_type, type: Float64
    if (!is_numeric(_loop_start_type)) show_error($"{_GMFUNCTION_} :: _loop_start_type expected number", true);
    buffer_write(__args_buffer, buffer_f64, _loop_start_type);

    // param: _loop_end, type: Float64
    if (!is_numeric(_loop_end)) show_error($"{_GMFUNCTION_} :: _loop_end expected number", true);
    buffer_write(__args_buffer, buffer_f64, _loop_end);

    // param: _loop_end_type, type: Float64
    if (!is_numeric(_loop_end_type)) show_error($"{_GMFUNCTION_} :: _loop_end_type expected number", true);
    buffer_write(__args_buffer, buffer_f64, _loop_end_type);

    var __return_value__ = __fmod_channel_set_loop_points(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodChannelRef} _channel_ref
 * @returns {Real}
 */
function fmod_channel_is_virtual(_channel_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _channel_ref, type: struct FmodChannelRef
    if (_channel_ref.__uid != 287688359) show_error($"{_GMFUNCTION_} :: _channel_ref expected FmodChannelRef", true);
    __FmodChannelRef_encode(_channel_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_channel_is_virtual(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodChannelRef} _channel_ref
 * @returns {Real}
 */
function fmod_channel_get_index(_channel_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _channel_ref, type: struct FmodChannelRef
    if (_channel_ref.__uid != 287688359) show_error($"{_GMFUNCTION_} :: _channel_ref expected FmodChannelRef", true);
    __FmodChannelRef_encode(_channel_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_channel_get_index(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodChannelRef} _channel_ref
 * @returns {Struct.FmodSoundRef}
 */
function fmod_channel_get_current_sound(_channel_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _channel_ref, type: struct FmodChannelRef
    if (_channel_ref.__uid != 287688359) show_error($"{_GMFUNCTION_} :: _channel_ref expected FmodChannelRef", true);
    __FmodChannelRef_encode(_channel_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __ret_buffer = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_channel_get_current_sound(buffer_get_address(__args_buffer), buffer_tell(__args_buffer), buffer_get_address(__ret_buffer), buffer_get_size(__ret_buffer));

    var __result__ = undefined;
    __result__ = __FmodSoundRef_decode(__ret_buffer, buffer_tell(__ret_buffer));
    return __result__;
}

/**
 * @param {Struct.FmodChannelRef} _channel_ref
 * @returns {Struct.FmodSystemRef}
 */
function fmod_channel_get_system_object(_channel_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _channel_ref, type: struct FmodChannelRef
    if (_channel_ref.__uid != 287688359) show_error($"{_GMFUNCTION_} :: _channel_ref expected FmodChannelRef", true);
    __FmodChannelRef_encode(_channel_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __ret_buffer = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_channel_get_system_object(buffer_get_address(__args_buffer), buffer_tell(__args_buffer), buffer_get_address(__ret_buffer), buffer_get_size(__ret_buffer));

    var __result__ = undefined;
    __result__ = __FmodSystemRef_decode(__ret_buffer, buffer_tell(__ret_buffer));
    return __result__;
}

/**
 * @returns {Struct.FmodSystemRef}
 */
function fmod_system_create()
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __ret_buffer = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_system_create(buffer_get_address(__ret_buffer), buffer_get_size(__ret_buffer));

    var __result__ = undefined;
    __result__ = __FmodSystemRef_decode(__ret_buffer, buffer_tell(__ret_buffer));
    return __result__;
}

// Skipping function fmod_system_init (no wrapper is required)


/**
 * @param {Struct.FmodSystemRef} _system_ref
 * @returns {Real}
 */
function fmod_system_release(_system_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _system_ref, type: struct FmodSystemRef
    if (_system_ref.__uid != 3684475095) show_error($"{_GMFUNCTION_} :: _system_ref expected FmodSystemRef", true);
    __FmodSystemRef_encode(_system_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_system_release(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodSystemRef} _system_ref
 * @returns {Real}
 */
function fmod_system_close(_system_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _system_ref, type: struct FmodSystemRef
    if (_system_ref.__uid != 3684475095) show_error($"{_GMFUNCTION_} :: _system_ref expected FmodSystemRef", true);
    __FmodSystemRef_encode(_system_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_system_close(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

// Skipping function fmod_system_update (no wrapper is required)


/**
 * @param {Real} _index
 * @returns {Struct.FmodChannelRef}
 */
function fmod_system_get_channel(_index)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __ret_buffer = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_system_get_channel(_index, buffer_get_address(__ret_buffer), buffer_get_size(__ret_buffer));

    var __result__ = undefined;
    __result__ = __FmodChannelRef_decode(__ret_buffer, buffer_tell(__ret_buffer));
    return __result__;
}

/**
 * @returns {Struct.FmodChannelGroupRef}
 */
function fmod_system_get_master_channel_group()
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __ret_buffer = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_system_get_master_channel_group(buffer_get_address(__ret_buffer), buffer_get_size(__ret_buffer));

    var __result__ = undefined;
    __result__ = __FmodChannelGroupRef_decode(__ret_buffer, buffer_tell(__ret_buffer));
    return __result__;
}

// Skipping function fmod_system_set_output (no wrapper is required)


// Skipping function fmod_system_get_output (no wrapper is required)


// Skipping function fmod_system_get_num_drivers (no wrapper is required)


// Skipping function fmod_system_set_driver (no wrapper is required)


// Skipping function fmod_system_get_driver (no wrapper is required)


// Skipping function fmod_system_set_software_channels (no wrapper is required)


// Skipping function fmod_system_get_software_channels (no wrapper is required)


/**
 * @param {String} _name_or_data
 * @param {Real} _mode
 * @returns {Struct.FmodSoundRef}
 */
function fmod_system_create_sound(_name_or_data, _mode)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __ret_buffer = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_system_create_sound(_name_or_data, _mode, buffer_get_address(__ret_buffer), buffer_get_size(__ret_buffer));

    var __result__ = undefined;
    __result__ = __FmodSoundRef_decode(__ret_buffer, buffer_tell(__ret_buffer));
    return __result__;
}

/**
 * @param {String} _name_or_data
 * @param {Real} _mode
 * @returns {Struct.FmodSoundRef}
 */
function fmod_system_create_stream(_name_or_data, _mode)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __ret_buffer = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_system_create_stream(_name_or_data, _mode, buffer_get_address(__ret_buffer), buffer_get_size(__ret_buffer));

    var __result__ = undefined;
    __result__ = __FmodSoundRef_decode(__ret_buffer, buffer_tell(__ret_buffer));
    return __result__;
}

/**
 * @param {Struct.FmodSoundRef} _sound_ref
 * @param {Struct.FmodChannelGroupRef} _channel_group_ref
 * @param {Real} _pause
 * @returns {Struct.FmodChannelRef}
 */
function fmod_system_play_sound(_sound_ref, _channel_group_ref, _pause)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _sound_ref, type: struct FmodSoundRef
    if (_sound_ref.__uid != 237087423) show_error($"{_GMFUNCTION_} :: _sound_ref expected FmodSoundRef", true);
    __FmodSoundRef_encode(_sound_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _channel_group_ref, type: struct FmodChannelGroupRef
    if (_channel_group_ref.__uid != 1748069326) show_error($"{_GMFUNCTION_} :: _channel_group_ref expected FmodChannelGroupRef", true);
    __FmodChannelGroupRef_encode(_channel_group_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _pause, type: Float64
    if (!is_numeric(_pause)) show_error($"{_GMFUNCTION_} :: _pause expected number", true);
    buffer_write(__args_buffer, buffer_f64, _pause);

    var __ret_buffer = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_system_play_sound(buffer_get_address(__args_buffer), buffer_tell(__args_buffer), buffer_get_address(__ret_buffer), buffer_get_size(__ret_buffer));

    var __result__ = undefined;
    __result__ = __FmodChannelRef_decode(__ret_buffer, buffer_tell(__ret_buffer));
    return __result__;
}

/**
 * @param {Struct.FmodSoundRef} _sound_ref
 * @param {Real} _length_type
 * @returns {Real}
 */
function fmod_sound_get_length(_sound_ref, _length_type)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _sound_ref, type: struct FmodSoundRef
    if (_sound_ref.__uid != 237087423) show_error($"{_GMFUNCTION_} :: _sound_ref expected FmodSoundRef", true);
    __FmodSoundRef_encode(_sound_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _length_type, type: Float64
    if (!is_numeric(_length_type)) show_error($"{_GMFUNCTION_} :: _length_type expected number", true);
    buffer_write(__args_buffer, buffer_f64, _length_type);

    var __return_value__ = __fmod_sound_get_length(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodSoundRef} _sound_ref
 * @param {Real} _frequency
 * @param {Real} _priority
 * @returns {Real}
 */
function fmod_sound_set_defaults(_sound_ref, _frequency, _priority)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _sound_ref, type: struct FmodSoundRef
    if (_sound_ref.__uid != 237087423) show_error($"{_GMFUNCTION_} :: _sound_ref expected FmodSoundRef", true);
    __FmodSoundRef_encode(_sound_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _frequency, type: Float64
    if (!is_numeric(_frequency)) show_error($"{_GMFUNCTION_} :: _frequency expected number", true);
    buffer_write(__args_buffer, buffer_f64, _frequency);

    // param: _priority, type: Float64
    if (!is_numeric(_priority)) show_error($"{_GMFUNCTION_} :: _priority expected number", true);
    buffer_write(__args_buffer, buffer_f64, _priority);

    var __return_value__ = __fmod_sound_set_defaults(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodSoundRef} _sound_ref
 * @param {Real} _mode
 * @returns {Real}
 */
function fmod_sound_set_mode(_sound_ref, _mode)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _sound_ref, type: struct FmodSoundRef
    if (_sound_ref.__uid != 237087423) show_error($"{_GMFUNCTION_} :: _sound_ref expected FmodSoundRef", true);
    __FmodSoundRef_encode(_sound_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _mode, type: Float64
    if (!is_numeric(_mode)) show_error($"{_GMFUNCTION_} :: _mode expected number", true);
    buffer_write(__args_buffer, buffer_f64, _mode);

    var __return_value__ = __fmod_sound_set_mode(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodSoundRef} _sound_ref
 * @returns {Real}
 */
function fmod_sound_get_mode(_sound_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _sound_ref, type: struct FmodSoundRef
    if (_sound_ref.__uid != 237087423) show_error($"{_GMFUNCTION_} :: _sound_ref expected FmodSoundRef", true);
    __FmodSoundRef_encode(_sound_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_sound_get_mode(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodSoundRef} _sound_ref
 * @param {Real} _count
 * @returns {Real}
 */
function fmod_sound_set_loop_count(_sound_ref, _count)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _sound_ref, type: struct FmodSoundRef
    if (_sound_ref.__uid != 237087423) show_error($"{_GMFUNCTION_} :: _sound_ref expected FmodSoundRef", true);
    __FmodSoundRef_encode(_sound_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _count, type: Float64
    if (!is_numeric(_count)) show_error($"{_GMFUNCTION_} :: _count expected number", true);
    buffer_write(__args_buffer, buffer_f64, _count);

    var __return_value__ = __fmod_sound_set_loop_count(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodSoundRef} _sound_ref
 * @returns {Real}
 */
function fmod_sound_get_loop_count(_sound_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _sound_ref, type: struct FmodSoundRef
    if (_sound_ref.__uid != 237087423) show_error($"{_GMFUNCTION_} :: _sound_ref expected FmodSoundRef", true);
    __FmodSoundRef_encode(_sound_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_sound_get_loop_count(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodSoundRef} _sound_ref
 * @param {Real} _loop_start
 * @param {Real} _loop_start_type
 * @param {Real} _loop_end
 * @param {Real} _loop_end_type
 * @returns {Real}
 */
function fmod_sound_set_loop_points(_sound_ref, _loop_start, _loop_start_type, _loop_end, _loop_end_type)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _sound_ref, type: struct FmodSoundRef
    if (_sound_ref.__uid != 237087423) show_error($"{_GMFUNCTION_} :: _sound_ref expected FmodSoundRef", true);
    __FmodSoundRef_encode(_sound_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _loop_start, type: Float64
    if (!is_numeric(_loop_start)) show_error($"{_GMFUNCTION_} :: _loop_start expected number", true);
    buffer_write(__args_buffer, buffer_f64, _loop_start);

    // param: _loop_start_type, type: Float64
    if (!is_numeric(_loop_start_type)) show_error($"{_GMFUNCTION_} :: _loop_start_type expected number", true);
    buffer_write(__args_buffer, buffer_f64, _loop_start_type);

    // param: _loop_end, type: Float64
    if (!is_numeric(_loop_end)) show_error($"{_GMFUNCTION_} :: _loop_end expected number", true);
    buffer_write(__args_buffer, buffer_f64, _loop_end);

    // param: _loop_end_type, type: Float64
    if (!is_numeric(_loop_end_type)) show_error($"{_GMFUNCTION_} :: _loop_end_type expected number", true);
    buffer_write(__args_buffer, buffer_f64, _loop_end_type);

    var __return_value__ = __fmod_sound_set_loop_points(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodSoundRef} _sound_ref
 * @param {Real} _min
 * @param {Real} _max
 * @returns {Real}
 */
function fmod_sound_set_3d_min_max_distance(_sound_ref, _min, _max)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _sound_ref, type: struct FmodSoundRef
    if (_sound_ref.__uid != 237087423) show_error($"{_GMFUNCTION_} :: _sound_ref expected FmodSoundRef", true);
    __FmodSoundRef_encode(_sound_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _min, type: Float64
    if (!is_numeric(_min)) show_error($"{_GMFUNCTION_} :: _min expected number", true);
    buffer_write(__args_buffer, buffer_f64, _min);

    // param: _max, type: Float64
    if (!is_numeric(_max)) show_error($"{_GMFUNCTION_} :: _max expected number", true);
    buffer_write(__args_buffer, buffer_f64, _max);

    var __return_value__ = __fmod_sound_set_3d_min_max_distance(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodSoundRef} _sound_ref
 * @param {Real} _inside_cone_angle
 * @param {Real} _outside_cone_angle
 * @param {Real} _outside_volume
 * @returns {Real}
 */
function fmod_sound_set_3d_cone_settings(_sound_ref, _inside_cone_angle, _outside_cone_angle, _outside_volume)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _sound_ref, type: struct FmodSoundRef
    if (_sound_ref.__uid != 237087423) show_error($"{_GMFUNCTION_} :: _sound_ref expected FmodSoundRef", true);
    __FmodSoundRef_encode(_sound_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _inside_cone_angle, type: Float64
    if (!is_numeric(_inside_cone_angle)) show_error($"{_GMFUNCTION_} :: _inside_cone_angle expected number", true);
    buffer_write(__args_buffer, buffer_f64, _inside_cone_angle);

    // param: _outside_cone_angle, type: Float64
    if (!is_numeric(_outside_cone_angle)) show_error($"{_GMFUNCTION_} :: _outside_cone_angle expected number", true);
    buffer_write(__args_buffer, buffer_f64, _outside_cone_angle);

    // param: _outside_volume, type: Float64
    if (!is_numeric(_outside_volume)) show_error($"{_GMFUNCTION_} :: _outside_volume expected number", true);
    buffer_write(__args_buffer, buffer_f64, _outside_volume);

    var __return_value__ = __fmod_sound_set_3d_cone_settings(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodSoundRef} _sound_ref
 * @returns {Real}
 */
function fmod_sound_release(_sound_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _sound_ref, type: struct FmodSoundRef
    if (_sound_ref.__uid != 237087423) show_error($"{_GMFUNCTION_} :: _sound_ref expected FmodSoundRef", true);
    __FmodSoundRef_encode(_sound_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_sound_release(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodSoundRef} _sound_ref
 * @returns {Struct.FmodSystemRef}
 */
function fmod_sound_get_system_object(_sound_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _sound_ref, type: struct FmodSoundRef
    if (_sound_ref.__uid != 237087423) show_error($"{_GMFUNCTION_} :: _sound_ref expected FmodSoundRef", true);
    __FmodSoundRef_encode(_sound_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __ret_buffer = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_sound_get_system_object(buffer_get_address(__args_buffer), buffer_tell(__args_buffer), buffer_get_address(__ret_buffer), buffer_get_size(__ret_buffer));

    var __result__ = undefined;
    __result__ = __FmodSystemRef_decode(__ret_buffer, buffer_tell(__ret_buffer));
    return __result__;
}

/**
 * @param {Struct.FmodChannelGroupRef} _channel_group_ref
 * @returns {Real}
 */
function fmod_channel_group_get_num_channels(_channel_group_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _channel_group_ref, type: struct FmodChannelGroupRef
    if (_channel_group_ref.__uid != 1748069326) show_error($"{_GMFUNCTION_} :: _channel_group_ref expected FmodChannelGroupRef", true);
    __FmodChannelGroupRef_encode(_channel_group_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_channel_group_get_num_channels(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodChannelGroupRef} _channel_group_ref
 * @param {Real} _index
 * @returns {Struct.FmodChannelRef}
 */
function fmod_channel_group_get_channel(_channel_group_ref, _index)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _channel_group_ref, type: struct FmodChannelGroupRef
    if (_channel_group_ref.__uid != 1748069326) show_error($"{_GMFUNCTION_} :: _channel_group_ref expected FmodChannelGroupRef", true);
    __FmodChannelGroupRef_encode(_channel_group_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _index, type: Float64
    if (!is_numeric(_index)) show_error($"{_GMFUNCTION_} :: _index expected number", true);
    buffer_write(__args_buffer, buffer_f64, _index);

    var __ret_buffer = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_channel_group_get_channel(buffer_get_address(__args_buffer), buffer_tell(__args_buffer), buffer_get_address(__ret_buffer), buffer_get_size(__ret_buffer));

    var __result__ = undefined;
    __result__ = __FmodChannelRef_decode(__ret_buffer, buffer_tell(__ret_buffer));
    return __result__;
}

/**
 * @param {Struct.FmodChannelGroupRef} _channel_group_ref
 * @param {Struct.FmodChannelGroupRef} _child_channel_group_ref
 * @param {Real} _propagate_dsp_clock
 * @returns {Struct.FmodDSPConnectionRef}
 */
function fmod_channel_group_add_group(_channel_group_ref, _child_channel_group_ref, _propagate_dsp_clock)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _channel_group_ref, type: struct FmodChannelGroupRef
    if (_channel_group_ref.__uid != 1748069326) show_error($"{_GMFUNCTION_} :: _channel_group_ref expected FmodChannelGroupRef", true);
    __FmodChannelGroupRef_encode(_channel_group_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _child_channel_group_ref, type: struct FmodChannelGroupRef
    if (_child_channel_group_ref.__uid != 1748069326) show_error($"{_GMFUNCTION_} :: _child_channel_group_ref expected FmodChannelGroupRef", true);
    __FmodChannelGroupRef_encode(_child_channel_group_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _propagate_dsp_clock, type: Float64
    if (!is_numeric(_propagate_dsp_clock)) show_error($"{_GMFUNCTION_} :: _propagate_dsp_clock expected number", true);
    buffer_write(__args_buffer, buffer_f64, _propagate_dsp_clock);

    var __ret_buffer = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_channel_group_add_group(buffer_get_address(__args_buffer), buffer_tell(__args_buffer), buffer_get_address(__ret_buffer), buffer_get_size(__ret_buffer));

    var __result__ = undefined;
    __result__ = __FmodDSPConnectionRef_decode(__ret_buffer, buffer_tell(__ret_buffer));
    return __result__;
}

/**
 * @param {Struct.FmodChannelGroupRef} _channel_group_ref
 * @returns {Real}
 */
function fmod_channel_group_get_num_groups(_channel_group_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _channel_group_ref, type: struct FmodChannelGroupRef
    if (_channel_group_ref.__uid != 1748069326) show_error($"{_GMFUNCTION_} :: _channel_group_ref expected FmodChannelGroupRef", true);
    __FmodChannelGroupRef_encode(_channel_group_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_channel_group_get_num_groups(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodChannelGroupRef} _channel_group_ref
 * @param {Real} _group_index
 * @returns {Struct.FmodChannelGroupRef}
 */
function fmod_channel_group_get_group(_channel_group_ref, _group_index)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _channel_group_ref, type: struct FmodChannelGroupRef
    if (_channel_group_ref.__uid != 1748069326) show_error($"{_GMFUNCTION_} :: _channel_group_ref expected FmodChannelGroupRef", true);
    __FmodChannelGroupRef_encode(_channel_group_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    // param: _group_index, type: Float64
    if (!is_numeric(_group_index)) show_error($"{_GMFUNCTION_} :: _group_index expected number", true);
    buffer_write(__args_buffer, buffer_f64, _group_index);

    var __ret_buffer = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_channel_group_get_group(buffer_get_address(__args_buffer), buffer_tell(__args_buffer), buffer_get_address(__ret_buffer), buffer_get_size(__ret_buffer));

    var __result__ = undefined;
    __result__ = __FmodChannelGroupRef_decode(__ret_buffer, buffer_tell(__ret_buffer));
    return __result__;
}

/**
 * @param {Struct.FmodChannelGroupRef} _channel_group_ref
 * @returns {Struct.FmodChannelGroupRef}
 */
function fmod_channel_group_get_parent_group(_channel_group_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _channel_group_ref, type: struct FmodChannelGroupRef
    if (_channel_group_ref.__uid != 1748069326) show_error($"{_GMFUNCTION_} :: _channel_group_ref expected FmodChannelGroupRef", true);
    __FmodChannelGroupRef_encode(_channel_group_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __ret_buffer = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_channel_group_get_parent_group(buffer_get_address(__args_buffer), buffer_tell(__args_buffer), buffer_get_address(__ret_buffer), buffer_get_size(__ret_buffer));

    var __result__ = undefined;
    __result__ = __FmodChannelGroupRef_decode(__ret_buffer, buffer_tell(__ret_buffer));
    return __result__;
}

/**
 * @param {Struct.FmodChannelGroupRef} _channel_group_ref
 * @returns {String}
 */
function fmod_channel_group_get_name(_channel_group_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _channel_group_ref, type: struct FmodChannelGroupRef
    if (_channel_group_ref.__uid != 1748069326) show_error($"{_GMFUNCTION_} :: _channel_group_ref expected FmodChannelGroupRef", true);
    __FmodChannelGroupRef_encode(_channel_group_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_channel_group_get_name(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodChannelGroupRef} _channel_group_ref
 * @returns {Real}
 */
function fmod_channel_group_release(_channel_group_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _channel_group_ref, type: struct FmodChannelGroupRef
    if (_channel_group_ref.__uid != 1748069326) show_error($"{_GMFUNCTION_} :: _channel_group_ref expected FmodChannelGroupRef", true);
    __FmodChannelGroupRef_encode(_channel_group_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __return_value__ = __fmod_channel_group_release(buffer_get_address(__args_buffer), buffer_tell(__args_buffer));

    return __return_value__;
}

/**
 * @param {Struct.FmodChannelGroupRef} _channel_group_ref
 * @returns {Struct.FmodSystemRef}
 */
function fmod_channel_group_get_system_object(_channel_group_ref)
{
    var __available__ = __GMFMOD_is_available();
    if (!__available__) return;

    var __args_buffer = __ext_core_get_args_buffer();

    // param: _channel_group_ref, type: struct FmodChannelGroupRef
    if (_channel_group_ref.__uid != 1748069326) show_error($"{_GMFUNCTION_} :: _channel_group_ref expected FmodChannelGroupRef", true);
    __FmodChannelGroupRef_encode(_channel_group_ref, __args_buffer, buffer_tell(__args_buffer), _GMFUNCTION_);

    var __ret_buffer = __ext_core_get_ret_buffer();

    var __return_value__ = __fmod_channel_group_get_system_object(buffer_get_address(__args_buffer), buffer_tell(__args_buffer), buffer_get_address(__ret_buffer), buffer_get_size(__ret_buffer));

    var __result__ = undefined;
    __result__ = __FmodSystemRef_decode(__ret_buffer, buffer_tell(__ret_buffer));
    return __result__;
}

/// @ignore
function __GMFMOD_get_decoders()
{
    static __decoders__ = [
        __FmodChannelRef_decode,
        __FmodChannelGroupRef_decode,
        __FmodSoundRef_decode,
        __FmodSystemRef_decode,
        __FmodDSPConnectionRef_decode
    ];
    return __decoders__;
}
/// @ignore
function __GMFMOD_is_available()
{
    static __available__ = extension_exists("GMFMOD");
    return __available__;
}
