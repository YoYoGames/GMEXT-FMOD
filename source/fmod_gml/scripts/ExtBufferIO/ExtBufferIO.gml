
#macro BUFFER_STRUCT (255)
#macro BUFFER_ARRAY (254)
#macro BUFFER_BUFFER (253)
#macro BUFFER_POINTER (252)
#macro BUFFER_UNDEFINED (251)
#macro BUFFER_TYPED_ARRAY (250)

#macro EXT_BUFFER_RETURN_SIZE (2048)

/// @returns {Any}
function ext_buffer_unpack(_buff, _as_map = false)
{
	var _type = buffer_read(_buff, buffer_u8);
	
	switch(_type)
	{		
		case BUFFER_ARRAY:
		{
			var _size = buffer_read(_buff, buffer_u16);
			var _array = array_create(_size);
			for (var _i = 0 ; _i < _size ; _i++) {
				_array[_i] = ext_buffer_unpack(_buff, _as_map);
			}
			return _array;
		}
		case BUFFER_TYPED_ARRAY:
		{
			var _size = buffer_read(_buff, buffer_u16);
			var _elem_type = buffer_read(_buff, buffer_u8);
			var _array = array_create(_size);
			for (var _i = 0 ; _i < _size ; _i++) {
				_array[_i] = buffer_read(_buff, _elem_type);
			}
			return _array;
		}
		case BUFFER_STRUCT:
		{
			var _size = buffer_read(_buff, buffer_u16);
					
			if(_as_map)
			{
				var _map = ds_map_create()
				for (var _i = 0 ; _i < _size ; _i++)
				{
					var _key = ext_buffer_unpack(_buff);
					var _value = ext_buffer_unpack(_buff);
					ds_map_add(_map, _key, _value);
				}
				return _map
			}
			else
			{
				var _struct = {};
				for (var _i = 0 ; _i < _size ; _i++)
				{
					var _key = ext_buffer_unpack(_buff);
					var _value = ext_buffer_unpack(_buff);
					struct_set(_struct, _key, _value);
				}
				return _struct;
			}
		}
		case BUFFER_UNDEFINED:
		{
			return undefined;
		}
		default: return buffer_read(_buff, _type);
	}
}

function ext_buffer_pack(_buffer, _value, _type = undefined)
{
	// Encode any value as <<type><data>>
	
	// Array encoded as <<type><size><<child><child>...>>
	if(is_array(_value))
	{
		var _length = array_length(_value)
		
		buffer_write(_buffer, buffer_u8, BUFFER_ARRAY);
		buffer_write(_buffer, buffer_u16, _length);
	
		// For all children encode <value>
		for(var _i = 0; _i < _length; _i++)
		{
			// Encode value (propagate type)
			ext_buffer_pack(_buffer, _value[_i], _type);
		}
	}
	// Struct encoded as <<type><size><<child><child>...>>
	else if(is_struct(_value))
	{
		var _names = struct_get_names(_value)
		var _length = array_length(_names)
		
		buffer_write(_buffer, buffer_u8, BUFFER_STRUCT);
		buffer_write(_buffer, buffer_u16, _length);
		
		// For all children encode <<key><value>>
		for (var _i = 0 ; _i < _length ; _i++)
		{
			var _key = _names[_i]
			
			// Encode key
			buffer_write(_buffer, buffer_string, _key);
			// Encode value (propagate type)
			ext_buffer_pack(_buffer, _value[$ _key], _type);
		}
	}
	// Forced type cast (used for typed arrays|structs and buffers)
	else if (!is_undefined(_type))
	{
		buffer_write(_buffer, buffer_u8, _type);
	
		// Encode buffer as <<type><size><address>>
		if (_type == BUFFER_BUFFER)
		{
			// Allow optional
			var _length = is_undefined(_value) ? 0 : buffer_get_size(_value);
			var _address = is_undefined(_value) ? ptr(0) : buffer_get_address(_value);
			
			buffer_write(_buffer, buffer_u32, _length);
			buffer_write(_buffer, buffer_u64, _address);
		}
		// Encode buffer as <<type><address>>
		else if (_type == BUFFER_POINTER)
		{
			// Allow optional
			var _address = is_undefined(_value) ? 0 : _value;
			
			buffer_write(_buffer, buffer_u64, _address);
		}
		else
		{
			buffer_write(_buffer, _type, _value);
		}
	}
	// Auto detect type
	else {
		if(is_ptr(_value))
		{
			buffer_write(_buffer, buffer_u8, BUFFER_POINTER);
			buffer_write(_buffer, buffer_u64, _value);
		}
		else if(is_string(_value))
		{
			buffer_write(_buffer, buffer_u8, buffer_string);
			buffer_write(_buffer, buffer_string, _value);
		}
		else if(is_bool(_value))
		{
			buffer_write(_buffer, buffer_u8, buffer_bool);
			buffer_write(_buffer, buffer_bool, _value);
		}
		else if(is_int32(_value))
		{
			buffer_write(_buffer, buffer_u8, buffer_s32);
			buffer_write(_buffer, buffer_s32, _value);
		}
		else if(is_int64(_value))
		{
			buffer_write(_buffer, buffer_u8, buffer_u64);
			buffer_write(_buffer, buffer_u64, _value);
		}
		else if(is_real(_value))
		{
			buffer_write(_buffer, buffer_u8, buffer_f64);
			buffer_write(_buffer, buffer_f64, _value);
		}
		else
		{
			show_debug_message($"[ERROR] {_GMFUNCTION_} :: Cannot encoding value: '{_value}', invalid type.");
		}
	}
}

/// @returns {Pointer}
function ext_pack_args(_args) {
	
	static _ext_args_buffer = buffer_create(1, buffer_grow, 1);
	
	var _length = array_length(_args);
	
	buffer_seek(_ext_args_buffer, buffer_seek_start, 0);
	buffer_write(_ext_args_buffer, buffer_u16, _length);
	for (var _i = 0; _i < _length; _i++) {
		var _arg = _args[_i];
		ext_buffer_pack(_ext_args_buffer, _arg[0], _arg[1]);
	}
	return buffer_get_address(_ext_args_buffer);
}

/// @returns {Id.Buffer}
function ext_return_buffer() {
	static _return_buffer = buffer_create(EXT_BUFFER_RETURN_SIZE, buffer_fixed, 1);
	buffer_seek(_return_buffer, buffer_seek_start, 0);
	return _return_buffer;
}

/// @returns {Pointer}
function ext_return_buffer_address() {
	var _buffer = ext_return_buffer();
	buffer_poke(_buffer, 0, buffer_u8, BUFFER_UNDEFINED);
	return buffer_get_address(_buffer);
}

