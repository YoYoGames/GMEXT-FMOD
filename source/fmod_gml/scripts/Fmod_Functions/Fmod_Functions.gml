// feather ignore GM1041
// feather ignore GM1042

/// @param {string} file
/// @returns {string}
function fmod_path_bundle(_file)
{
	if (os_type == os_switch || os_type == os_switch2)
	{
		if (GM_build_type == "exe")
			return $"rom:/{working_directory}{_file}";
		else
			return $"host:/{working_directory}{_file}";
	}
	else if (os_type == os_android)
	{
		return $"file:///android_asset/{_file}";
	}
	
	return $"{working_directory}{_file}";
}

/// @param {string} file
/// @returns {string}
function fmod_path_user(_file) {
	return $"{game_save_id}{_file}";
}
