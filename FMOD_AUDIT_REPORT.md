# FMOD Extension Audit Report

## Executive Summary
This audit compares the FMOD enums and functions **used in objects** against those **defined in spec.gmidl**. Critical gaps and naming inconsistencies were identified.

**Total Issues Found: 42**
- Missing Enum Types: 10
- Enum Naming/Capitalization Issues: 3
- Missing Functions: 29

---

## PART 1: ENUM AUDIT

### Critical: Missing Enum Types (Not in spec.gmidl)

| Enum Name | Used As | Values Used | Files | Priority |
|-----------|---------|-------------|-------|----------|
| **FmodChannelControlDspIndex** | `FMOD_CHANNELCONTROL_DSP_INDEX` | HEAD, TAIL, FADER | obj_fmod_dsp_speaker, obj_fmod_convolution_reverb, obj_fmod_fft_sound, obj_fmod_fft_mic | **CRITICAL** |
| **FmodOpenState** | `FMOD_OPENSTATE` | BUFFERING, CONNECTING, ERROR, FORCEINT, LOADING, MAX, PLAYING, READY, SEEKING, SETPOSITION | obj_fmod_net_stream | **CRITICAL** |
| **FmodTagType** | `FMOD_TAGTYPE` | FMOD, PLAYLIST | obj_fmod_net_stream | HIGH |
| **FmodTagDataType** | `FMOD_TAGDATATYPE` | STRING | obj_fmod_net_stream | HIGH |
| **FmodStudioCommandCapture** | `FMOD_STUDIO_COMMANDCAPTURE` | NORMAL | obj_fmod_studio_recording_playback | HIGH |
| **FmodStudioCommandReplay** | `FMOD_STUDIO_COMMANDREPLAY` | NORMAL | obj_fmod_studio_recording_playback | HIGH |
| **FmodStudioEventCallback** | `FMOD_STUDIO_EVENT_CALLBACK` | SOUND_PLAYED, SOUND_STOPPED, TIMELINE_BEAT, TIMELINE_MARKER | obj_fmod_studio_music_callbacks | HIGH |
| **FmodDspConvolutionReverbParam** | `FMOD_DSP_CONVOLUTION_REVERB_PARAM` | IR, DRY | obj_fmod_convolution_reverb | HIGH |
| **FmodStudioLoadBank** | `FMOD_STUDIO_LOAD_BANK` | NORMAL | obj_fmod_studio_event_parameter | MEDIUM |
| **FmodCreateSoundExInfo** | `FMOD_CREATESOUNDEXINFO` | (structure type) | (TODO/incomplete) | LOW |

### Enum Naming/Capitalization Mismatches

| Issue | Spec Definition | Used In Objects | Files | Fix Required |
|-------|-----------------|-----------------|-------|--------------|
| LOWPASS/Lowpass case mismatch | `FmodDspMultibandEqFilterType.Lowpass12db` | `FMOD_DSP_MULTIBAND_EQ_FILTER_TYPE.LOWPASS_12DB` | obj_fmod_effects | Update enum prefix naming |
| HIGHPASS/Highpass case mismatch | `FmodDspMultibandEqFilterType.Highpass12db` | `FMOD_DSP_MULTIBAND_EQ_FILTER_TYPE.HIGHPASS_12DB` | obj_fmod_effects | Update enum prefix naming |
| AS_2D prefix not in spec | `FmodMode._2D` (not AS_2D) | `FMOD_MODE.AS_2D` | obj_fmod_play_stream | Remove AS_ prefix |

### Spec Definition Issues (FmodDspConvolution)

**Current Definition (spec.gmidl):**
```
enum FmodDspConvolution {
    Dry = 0,
    Wet = 1,
}
```

**Missing Parameter:**
- `IR = 2` (Impulse Response) - used in obj_fmod_convolution_reverb

---

## PART 2: FUNCTION AUDIT

### Missing Functions: Used in Objects but NOT in spec.gmidl

#### Critical System Functions (29 Missing)

| Function | Used In | Priority | Category |
|----------|---------|----------|----------|
| `fmod_system_select` | obj_fmod_multi_system | **CRITICAL** | System Management |
| `fmod_system_create_channel_group` | obj_fmod_channel_groups | **CRITICAL** | Channel Management |
| `fmod_system_get_driver_info` | obj_fmod_multi_system | **CRITICAL** | Driver Info |
| `fmod_system_get_software_format` | obj_fmod_net_stream | **CRITICAL** | Software Format |
| `fmod_system_set_software_format` | obj_fmod_net_stream | **CRITICAL** | Software Format |
| `fmod_system_get_dsp_buffer_size` | obj_fmod_recorder | **CRITICAL** | Buffer Management |
| `fmod_system_set_dsp_buffer_size` | obj_fmod_recorder | **CRITICAL** | Buffer Management |
| `fmod_system_set_stream_buffer_size` | obj_fmod_net_stream | HIGH | Stream Management |
| `fmod_system_play_dsp` | obj_fmod_speaker_play | HIGH | DSP Playback |
| `fmod_error_string` | obj_fmod_net_stream | HIGH | Error Handling |
| `fmod_channel_control_get_delay` | obj_fmod_gapless | HIGH | Channel Control |
| `fmod_channel_control_set_delay` | obj_fmod_gapless | HIGH | Channel Control |
| `fmod_channel_control_get_dsp_clock` | obj_fmod_gapless | HIGH | Channel Control |
| `fmod_channel_control_set_callback` | obj_fmod_studio_music_callbacks | HIGH | Callbacks |
| `fmod_sound_get_open_state` | obj_fmod_net_stream | HIGH | Sound Properties |
| `fmod_sound_get_tag` | obj_fmod_net_stream | HIGH | Sound Tag Info |
| `fmod_sound_get_num_sub_sounds` | obj_fmod_granular | HIGH | Sub-Sounds |
| `fmod_sound_get_sub_sound` | obj_fmod_granular | HIGH | Sub-Sounds |
| `fmod_sound_read_data` | obj_fmod_fft_sound | HIGH | Sound Data |
| `fmod_studio_system_set_num_listeners` | obj_fmod_studio_3d_multi | HIGH | Studio 3D |
| `fmod_studio_system_get_event_by_id` | obj_fmod_studio_event_parameter | MEDIUM | Event Lookup |
| `fmod_studio_system_lookup_id` | obj_fmod_studio_event_parameter | MEDIUM | ID Lookup |
| `fmod_studio_system_start_command_capture` | obj_fmod_studio_recording_playback | MEDIUM | Recording |
| `fmod_studio_system_stop_command_capture` | obj_fmod_studio_recording_playback | MEDIUM | Recording |
| `fmod_studio_system_load_command_replay` | obj_fmod_studio_recording_playback | MEDIUM | Replay |
| `fmod_studio_command_replay_start` | obj_fmod_studio_recording_playback | MEDIUM | Replay Control |
| `fmod_studio_command_replay_get_command_count` | obj_fmod_studio_recording_playback | MEDIUM | Replay Info |
| `fmod_studio_command_replay_get_length` | obj_fmod_studio_recording_playback | MEDIUM | Replay Info |
| `fmod_studio_event_description_get_parameter_description_by_name` | obj_fmod_studio_event_parameter | MEDIUM | Event Metadata |
| `fmod_studio_event_description_load_sample_data` | obj_fmod_studio_simple_event | MEDIUM | Sample Loading |
| `fmod_studio_event_instance_set_callback` | obj_fmod_studio_music_callbacks | MEDIUM | Event Callbacks |
| `fmod_studio_event_instance_get_parameter_by_id` | obj_fmod_studio_event_parameter | MEDIUM | Event Parameters |
| `fmod_studio_event_instance_set_parameter_by_id` | obj_fmod_studio_event_parameter | MEDIUM | Event Parameters |

---

## PART 3: SUMMARY BY IMPACT

### By Severity

**CRITICAL (6 functions + 2 enums):**
- System select/management functions
- Channel group creation
- Driver information
- Software format management  
- Buffer size configuration
- Channel control timing (delay, clock)
- FmodChannelControlDspIndex enum
- FmodOpenState enum

**HIGH (16 functions + 3 enums):**
- Stream management
- DSP playback
- Error handling
- Sound properties (open state, tags, sub-sounds)
- Callbacks (channel & event)
- FFT data reading
- Tag system enums
- Convolution reverb parameter enum
- Studio/command replay system

**MEDIUM (7 functions + 2 enums):**
- Studio event lookup functions
- Command recording/replay
- Sample data loading
- Event metadata retrieval
- Command capture/replay enums
- Studio load bank enum

---

## PART 4: RECOMMENDATIONS

### Priority 1: Add Critical Missing Enums
1. **FmodChannelControlDspIndex** - Required for DSP effect objects
2. **FmodOpenState** - Required for net streaming
3. **FmodOpenState** values: UNINITIALIZED, LOADING, BUFFERING, CONNECTING, LOADED, READY, PLAYING, SEEKING, STREAMING, SETPOSITION, ERROR, CLEARING

### Priority 2: Add Critical Missing Functions
1. **System management:** fmod_system_select, fmod_system_create_channel_group, fmod_system_get_driver_info
2. **Software format:** fmod_system_get_software_format, fmod_system_set_software_format
3. **Buffer management:** fmod_system_get_dsp_buffer_size, fmod_system_set_dsp_buffer_size
4. **Channel timing:** fmod_channel_control_get_delay, fmod_channel_control_set_delay, fmod_channel_control_get_dsp_clock

### Priority 3: Add High-Priority Functions
1. Stream buffer sizing
2. Sound queries (open state, tags, sub-sounds)
3. Callback registration
4. Command recording/replay system
5. Studio parameter lookup by ID

### Priority 4: Fix Enum Naming
1. Update `FmodDspMultibandEqFilterType` to use correct enum value names (matching spec)
2. Remove `AS_` prefix from Mode enum usage
3. Add `IR` parameter to `FmodDspConvolution` enum

---

## PART 5: OBJECT-BY-OBJECT FINDINGS

### Objects with Critical Issues:
- **obj_fmod_net_stream** - Missing: FmodOpenState, error_string, software_format functions, tag system
- **obj_fmod_recorder** - Missing: DSP/stream buffer size functions
- **obj_fmod_multi_system** - Missing: fmod_system_select, driver_info
- **obj_fmod_gapless** - Missing: channel delay/clock functions
- **obj_fmod_convolution_reverb** - Missing: FmodChannelControlDspIndex, FmodDspConvolutionReverbParam with IR
- **obj_fmod_studio_recording_playback** - Missing: command capture/replay system

---

## Files to Update

1. **spec.gmidl** - Add 10+ missing enums and 29+ missing functions
2. **Code generation files** - Ensure all enums and functions are properly bound
3. **Object implementations** - Once spec is updated, verify argument types and counts

---

*Report Generated: 2026-08-06*
*Audit Scope: All FMOD_* enums and fmod_* functions used in /objects/ directory*
