# FMOD extgen Implementation Checklist

## Phase 1: Foundation ✅ COMPLETE

### Specification
- [x] **spec.gmidl** - 137 function signatures across 4 modules
  - [x] System module (75 functions)
  - [x] Sound module (41 functions)
  - [x] Channel module (16 functions)
  - [x] Common module (5 functions)

### C++ Implementation
- [x] **gmfmod_system.cpp** - System initialization, sound/DSP creation, playback control
- [x] **gmfmod_sound.cpp** - Sound loading, properties, manipulation
- [x] **gmfmod_channel.cpp** - Channel playback and grouping
- [x] **gmfmod_common.cpp** - Utilities and error tracking

### Headers
- [x] **GMFMOD_native.h** - Include guard (minimal, relies on Fmod_Tools.h)
- [x] **GMFMOD_native.cpp** - Minimal (auto-generated content should go here)

### Configuration
- [x] **config.json** - Already configured for proper extgen operation
- [x] **extgen.schema.json** - Validated configuration schema

---

## Phase 2: Build & Verify 🔄 NEXT

### Build
- [ ] **Run extgen** to generate:
  - [ ] GML bindings from spec.gmidl
  - [ ] CMake build files
  - [ ] Updated GMFMOD.yy extension file
  - [ ] Documentation (if enabled)

- [ ] **Compile C++** for target platforms:
  - [ ] Windows DLL
  - [ ] macOS dylib
  - [ ] Linux .so
  - [ ] Android JNI (optional)
  - [ ] iOS native (optional)

### Testing
- [ ] **Syntax validation**
  - [ ] spec.gmidl parses correctly
  - [ ] C++ compiles without errors
  - [ ] No undefined symbol references

- [ ] **Minimal test** (Core playback)
  ```gml
  // Should work with these 4 modules
  fmod_system_create()
  fmod_system_init()
  fmod_system_create_sound_multiplatform()
  fmod_system_play_sound_multiplatform()
  fmod_system_update_multiplatform()
  ```

- [ ] **GML API** 
  - [ ] GMFMOD_API.gml generated correctly
  - [ ] ExtensionCore_api.gml created
  - [ ] All 137 functions available in GML

---

## Phase 3: Expand Modules 📈 FUTURE

Priority order for remaining 14 modules (235+ functions):

### High Priority (Required for advanced use)
- [ ] Fmod_ChannelControl (61) - Volume, mute, pan, DSP chains
- [ ] Fmod_DSP (40) - Audio effects and processing
- [ ] Fmod_Studio_System (51) - Studio event playback
- [ ] Fmod_Studio_EventInstance (37) - Event control

### Medium Priority (Extended functionality)
- [ ] Fmod_Geometry (20) - 3D spatial audio
- [ ] Fmod_SoundGroup (16) - Batch sound management
- [ ] Fmod_Reverb3D (9) - 3D reverb effects
- [ ] Fmod_Studio_Bank (16) - Event bank loading
- [ ] Fmod_Studio_Bus (15) - Mixer buses

### Lower Priority (Specialized features)
- [ ] Fmod_DSPConnection (9) - DSP graph connections
- [ ] Fmod_ChannelGroup (8) - Channel grouping
- [ ] Fmod_Studio_EventDescription (27) - Event metadata
- [ ] Fmod_Studio_CommandReplay (21) - Replay functionality
- [ ] Fmod_Studio_VCA (3) - Virtual control amplitude

---

## File Checklist

### Created
```
✅ GMFMOD/source/spec.gmidl                          (137 functions)
✅ GMFMOD/source/src/native/gmfmod_system.cpp         (System module)
✅ GMFMOD/source/src/native/gmfmod_sound.cpp          (Sound module)
✅ GMFMOD/source/src/native/gmfmod_channel.cpp        (Channel module)
✅ GMFMOD/source/src/native/gmfmod_common.cpp         (Common module)
✅ GMFMOD/source/IMPLEMENTATION_SUMMARY.md            (Documentation)
✅ GMFMOD/source/CHECKLIST.md                         (This file)
```

### Existing (No changes needed)
```
✅ GMFMOD/source/config.json                         (Already configured)
✅ GMFMOD/source/extgen.schema.json                  (Reference)
✅ GMFMOD/source/src/native/GMFMOD_native.h          (Minimal)
✅ GMFMOD/source/src/native/GMFMOD_native.cpp        (Minimal)
```

### Auto-Generated (After extgen runs)
```
⏳ GMFMOD/source/src/native/gm_fmod_*.cpp            (Per-module generated)
⏳ scripts/GMFMOD_API/GMFMOD_API.gml                 (GML bindings)
⏳ scripts/ExtensionCore_api/ExtensionCore_api.gml   (Runtime API)
⏳ extensions/GMFMOD/GMFMOD.yy                       (Extension config)
```

---

## Known Limitations / TODO

### StructStream Serialization
- [ ] Verify extgen handles StructStream::toGMValue() correctly
- [ ] May need to refactor struct returns to use JSON or binary buffers
- [ ] Functions marked with _multiplatform need validation

### Placeholder Implementations
The following functions are stubbed out (return 0/nullptr) and need real implementations:
- `fmod_system_set_3d_listener_attributes_multiplatform()` - 3D listener setup
- `fmod_system_get_3d_listener_attributes_multiplatform()` - 3D listener query
- `fmod_system_set_reverb_properties_multiplatform()` - Reverb setup
- `fmod_system_get_reverb_properties_multiplatform()` - Reverb query
- `fmod_system_attach_channel_group_to_port_multiplatform()` - Port attachment
- `fmod_system_get_record_num_drivers_multiplatform()` - Recording devices
- `fmod_system_get_record_driver_info_multiplatform()` - Recording device info
- `fmod_system_record_*()` - Recording functions (5)
- `fmod_system_create_geometry()` - 3D geometry creation
- `fmod_system_load_geometry_multiplatform()` - Geometry loading
- `fmod_system_get_geometry_*()` - Geometry queries
- `fmod_sound_lock_multiplatform()` - Raw sound data access
- `fmod_sound_unlock_multiplatform()` - Sound data release

### Missing Function Reference
Some functions have simplified implementations:
- `fmod_sound_delete_sync_point()` - Needs FMOD_SYNCPOINT handle mapping
- `fmod_sound_get_sync_point_multiplatform()` - Complex struct return
- `fmod_sound_read_data_multiplatform()` - Raw data reading
- `fmod_sound_set_3d_custom_rolloff_multiplatform()` - Array data marshalling
- `fmod_system_set_callback()` - Callback mechanism not implemented
- `fmod_system_set_3d_rolloff_callback()` - Callback not implemented

These can be filled in from the existing Fmod_*.cpp implementations when needed.

---

## Quick Start (After Build)

```gml
/// Create and play a sound
function example_play_sound() {
    // Initialize system
    var system = fmod_system_create();
    fmod_system_select(system);
    fmod_system_init(32, FMOD_INIT.NORMAL);
    
    // Create sound
    var sound = fmod_system_create_sound_multiplatform(
        "audio/test.wav", 
        FMOD_MODE.DEFAULT, 
        undefined
    );
    
    // Play sound
    var channel = fmod_system_play_sound_multiplatform(
        sound, 
        fmod_system_get_master_channel_group(),  // Use master group
        false  // paused=false, start playing immediately
    );
    
    // Optional: Configure channel
    fmod_channel_set_frequency(channel, 44100);  // Playback frequency
    
    return {system, sound, channel};
}

function example_update() {
    // Call every frame in your game loop
    fmod_system_update_multiplatform();
}

function example_cleanup(objects) {
    fmod_sound_release(objects.sound);
    fmod_system_release(objects.system);
}
```

---

**Last Updated**: 2026-08-04
**Next Action**: Run extgen build process
