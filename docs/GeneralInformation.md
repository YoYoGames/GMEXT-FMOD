@title General Information

This page contains general information related to working with the FMOD extension.

# Handles

Both the [FMOD Core API](https://www.fmod.com/docs/2.02/api/core-api.html) and [FMOD Studio API](https://www.fmod.com/docs/2.02/api/studio-api.html) are accessed through a number of FMOD *objects*. Examples of these are: [System](https://www.fmod.com/docs/2.02/api/core-api-system.html), [Sound](https://www.fmod.com/docs/2.02/api/core-api-sound.html), [Studio::System](https://www.fmod.com/docs/2.02/api/studio-api-system.html) and [Studio::Bank](https://www.fmod.com/docs/2.02/api/studio-api-bank.html).

These objects are represented in the extension by handles, which are largely identical to handles in GameMaker (See [Data Types](https://manual.gamemaker.io/monthly/en/GameMaker_Language/GML_Overview/Data_Types.htm)). More precisely, handles used by the extension store an instance of an FMOD object as follows: 

* The lowest 32 bits store the index of the object *instance*.
* The next 8 bits store the object type.
* The last 10 bits identify the extension.

To create an instance of an FMOD object and get its handle, you call an extension function that returns a handle. Many FMOD objects can be created using the `fmod_system_create_*` functions. For example: 

```gml
system = fmod_system_create();
sound_group = fmod_system_create_sound_group("SoundGroup");
// Etc.
```

[[Warning: While these handles are internally represented in the same way as GameMaker's built-in handles, they are *not* true handles from GameMaker's perspective.]]

# Error Handling

In FMOD, functions always return whether they executed successfully. If not, they return an error code explaining the error that occurred.

Most functions of the FMOD extension don't return this FMOD result directly. Instead, when you call a function of the FMOD extension, the result of the last called function is stored internally with the extension. You can retrieve this value using the function ${function.fmod_last_result}. For example: 

```gml
system = fmod_system_create();
result = fmod_last_result();
show_debug_message("Result of fmod_system_create: {0}", result);
```

[[Note: ${function.fmod_last_result} returns `FMOD_RESULT.OK` in case there were no errors.]]

# Bug Reports

If you experience a crash when using the FMOD extension, please create a [bug report](https://github.com/YoYoGames/GMEXT-FMOD/issues/new?assignees=&labels=extension-bug&projects=&template=extension_bug_report.yml). This allows the GameMaker team to look into the issue and improve the FMOD extension.