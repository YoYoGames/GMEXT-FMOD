# Old vs New Implementation — Function Coverage

Comparison of:
- **Old**: `C:\Users\jzavala\Desktop\GMEXT-FMOD\source\fmod_gml\extensions\FMOD\fmod_cpp\*.cpp` (492 functions, `func <type> name(...)`)
- **New**: `D:\Github\GMEXT-FMOD\source\fmod_gml\extensions\GMFMOD\source\spec.gmidl` (312 functions, `function name(...)`)

(Note: old names ending in `_multiplatform` were normalized away before comparing — the new spec dropped that suffix but is otherwise the same call.)

**Result: 296 of 492 old functions (60%) have a direct or equivalent counterpart in the new spec. 196 are not yet covered.** The CHECKLIST.md in this folder is stale (says 137 functions / lists whole modules as "future") — the spec has since grown to 312 functions, so treat this file as the current source of truth instead.

---

## 1. Renamed / restructured, NOT real gaps

These old functions have a working equivalent in the new spec under a different name or shape:

| Old | New | Note |
|---|---|---|
| `fmod_dsp_disconnect_from_mutliplatform` | `fmod_dsp_disconnect_from` | old name had a typo ("mutli") |
| `fmod_studio_event_description_is_oneshot` | `fmod_studio_event_description_is_one_shot` | naming convention only |
| `fmod_studio_bank_get_bus_list` | `fmod_studio_bank_get_bus_count` + `fmod_studio_bank_get_bus_at` | list → count/at iterator pattern |
| `fmod_studio_bank_get_event_description_list` | `fmod_studio_bank_get_event_count` + `fmod_studio_bank_get_event_at` | same pattern |
| `fmod_studio_bank_get_vca_list` | `fmod_studio_bank_get_vca_count` + `fmod_studio_bank_get_vca_at` | same pattern |
| `fmod_studio_system_get_bank_list` | `fmod_studio_system_get_bank_count` + `fmod_studio_system_get_bank_at` | same pattern |
| `fmod_studio_event_description_get_instance_list` | `fmod_studio_event_description_get_instance_count` + `get_instance_at` | same pattern |
| `fmod_studio_bus_get_master_bus`* | — | new-only convenience, not a gap |

\* listed again below under "New additions".

Everything else in the tables below is a genuine gap: no equivalent exists anywhere in spec.gmidl today.

---

## 2. Real gaps, by subsystem

### ChannelControl (`fmod_channel_control_*`) — biggest gap area
Missing entirely: **fade points**, most **3D cone/rolloff/occlusion getters**, **mix matrix**, **user data**.
```
add_fade_point
get_fade_points
remove_fade_points
set_fade_point_ramp
get_3d_cone_orientation      (no get; new only has set_3d_cone_settings, no orientation at all)
set_3d_cone_orientation
get_3d_cone_settings
get_3d_custom_rolloff        (new has sound-level custom rolloff, not channel-level)
set_3d_custom_rolloff
get_3d_distance_filter       (new has set_3d_distance_filter but no getter)
get_3d_min_max_distance      (new has set_3d_min_max_distance but no getter)
get_3d_occlusion             (new has set_3d_occlusion but no getter)
get_mix_matrix               (new has dsp_connection-level mix matrix, not channel-level)
set_mix_matrix
set_mix_levels_input         (new has set_mix_levels_output only)
get_user_data
set_user_data
```

### Channel
```
fmod_channel_get_loop_points   (setter fmod_channel_set_loop_points exists, no getter)
```

### DSP
```
fmod_fetch_callbacks
```

### File
```
fmod_file_get_disk_busy
fmod_file_set_disk_busy
```

### Geometry — effectively unusable in new spec
New spec has `geometry_get_polygon_num_vertices`, `geometry_release`, `geometry_save`, `geometry_set_polygon_attributes/position/rotation/scale` — but **no way to create a Geometry object or add a polygon to it**, so this subsystem can't actually be exercised yet.
```
fmod_system_create_geometry        (no way to create a geometry object at all)
fmod_system_load_geometry
fmod_system_get_geometry_occlusion
fmod_system_get_geometry_settings
fmod_system_set_geometry_settings
fmod_geometry_add_polygon
fmod_geometry_get_active
fmod_geometry_set_active
fmod_geometry_get_max_polygons
fmod_geometry_get_num_polygons
fmod_geometry_get_polygon_attributes
fmod_geometry_get_polygon_vertex
fmod_geometry_set_polygon_vertex
fmod_geometry_get_position
fmod_geometry_get_rotation
fmod_geometry_get_scale
fmod_geometry_get_user_data
fmod_geometry_set_user_data
```

### Memory
```
fmod_memory_get_stats
```

### Reverb3D — also unusable in new spec
New spec has `get_active/set_active/release/set_properties` — but **no way to create a Reverb3D object**.
```
fmod_system_create_reverb_3d       (no way to create one at all)
fmod_reverb_3d_get_properties      (setter exists, no getter)
fmod_reverb_3d_get_3d_attributes
fmod_reverb_3d_set_3d_attributes
fmod_reverb_3d_get_user_data
fmod_reverb_3d_set_user_data
```

### Sound
```
fmod_sound_get_num_tags
fmod_sound_get_sub_sound_parent
fmod_sound_get_user_data
fmod_sound_set_user_data
fmod_sound_lock
fmod_sound_unlock
fmod_sound_seek_data
```

### SoundGroup
```
fmod_sound_group_get_user_data
fmod_sound_group_set_user_data
```

### Studio Bank
```
fmod_studio_bank_get_id
fmod_studio_bank_is_valid
fmod_studio_bank_get_string_info
fmod_studio_bank_load_sample_data
fmod_studio_bank_unload_sample_data
fmod_studio_bank_get_user_data
fmod_studio_bank_set_user_data
```

### Studio Bus
```
fmod_studio_bus_get_id
fmod_studio_bus_is_valid
fmod_studio_bus_get_channel_group
fmod_studio_bus_lock_channel_group
fmod_studio_bus_unlock_channel_group
fmod_studio_bus_get_cpu_usage
fmod_studio_bus_get_memory_usage
fmod_studio_bus_get_mute
fmod_studio_bus_set_mute
fmod_studio_bus_get_port_index
fmod_studio_bus_set_port_index
```

### Studio CommandReplay — entire object type missing
```
fmod_studio_command_replay_get_system_object
fmod_studio_command_replay_get_command_info
fmod_studio_command_replay_get_command_string
fmod_studio_command_replay_get_command_at_time
fmod_studio_command_replay_seek_to_command
fmod_studio_command_replay_seek_to_time
fmod_studio_command_replay_set_bank_path
fmod_studio_command_replay_get_paused
fmod_studio_command_replay_set_paused
fmod_studio_command_replay_is_valid
fmod_studio_command_replay_start
fmod_studio_command_replay_stop
fmod_studio_command_replay_get_user_data
fmod_studio_command_replay_set_user_data
```
(Note: `set_create_instance_callback` / `set_frame_callback` / `set_load_bank_callback` ARE present in the new spec — only the rest of the object's API is missing.)

### Studio EventDescription
```
fmod_studio_event_description_is_valid
fmod_studio_event_description_is_3d
fmod_studio_event_description_is_stream
fmod_studio_event_description_is_doppler_enabled
fmod_studio_event_description_get_id
fmod_studio_event_description_get_min_max_distance
fmod_studio_event_description_get_sound_size
fmod_studio_event_description_get_sample_loading_state
fmod_studio_event_description_unload_sample_data
fmod_studio_event_description_set_callback
fmod_studio_event_description_get_user_data
fmod_studio_event_description_set_user_data
fmod_studio_event_description_get_user_property
fmod_studio_event_description_get_user_property_by_index
fmod_studio_event_description_get_user_property_count
fmod_studio_event_description_get_parameter_description_by_id
fmod_studio_event_description_get_parameter_description_by_index
fmod_studio_event_description_get_parameter_label_by_id
fmod_studio_event_description_get_parameter_label_by_index
fmod_studio_event_description_get_parameter_label_by_name
```
(`get_parameter_description_count` exists in the new spec — only the "count" half of the count/by-index pair was implemented.)

### Studio EventInstance
```
fmod_studio_event_instance_is_valid
fmod_studio_event_instance_is_virtual
fmod_studio_event_instance_get_3d_attributes
fmod_studio_event_instance_get_channel_group
fmod_studio_event_instance_get_cpu_usage
fmod_studio_event_instance_get_memory_usage
fmod_studio_event_instance_get_min_max_distance
fmod_studio_event_instance_get_listener_mask
fmod_studio_event_instance_set_listener_mask
fmod_studio_event_instance_get_reverb_level
fmod_studio_event_instance_set_reverb_level
fmod_studio_event_instance_get_property
fmod_studio_event_instance_set_property
fmod_studio_event_instance_keyoff
fmod_studio_event_instance_set_parameter_by_id_with_label
fmod_studio_event_instance_set_parameter_by_name_with_label
fmod_studio_event_instance_get_user_data
fmod_studio_event_instance_set_user_data
```
(same count/by-index gap as EventDescription: `get_parameter_count` exists, `get_parameter_description_by_id/by_index` does not.)

### Studio System
```
fmod_studio_system_is_valid
fmod_studio_system_lookup_path
fmod_studio_system_load_bank_custom
fmod_studio_system_get_bank_by_id
fmod_studio_system_get_bus_by_id
fmod_studio_system_get_vca_by_id
fmod_studio_system_get_sound_info
fmod_studio_system_get_cpu_usage
fmod_studio_system_get_buffer_usage
fmod_studio_system_reset_buffer_usage
fmod_studio_system_get_memory_usage
fmod_studio_system_get_num_listeners
fmod_studio_system_get_listener_attributes
fmod_studio_system_get_listener_weight
fmod_studio_system_get_advanced_settings
fmod_studio_system_set_advanced_settings
fmod_studio_system_set_callback
fmod_studio_system_get_user_data
fmod_studio_system_set_user_data
fmod_studio_system_get_parameter_by_id
fmod_studio_system_set_parameter_by_id
fmod_studio_system_get_parameter_description_by_id
fmod_studio_system_get_parameter_description_by_name
fmod_studio_system_get_parameter_description_count
fmod_studio_system_get_parameter_description_list
fmod_studio_system_get_parameter_label_by_id
fmod_studio_system_get_parameter_label_by_name
fmod_studio_system_set_parameter_by_id_with_label
fmod_studio_system_set_parameter_by_name_with_label
```
(`get/set_parameter_by_name` exist; the by-id variants and all parameter-description introspection do not.)

### System (core) — diagnostics/advanced config mostly missing
```
fmod_system_count
fmod_system_get_version
fmod_system_get_master_sound_group
fmod_system_get_advanced_settings
fmod_system_set_advanced_settings
fmod_system_get_network_proxy
fmod_system_set_network_proxy
fmod_system_get_network_timeout
fmod_system_set_network_timeout
fmod_system_get_speaker_mode_channels
fmod_system_get_speaker_position
fmod_system_set_speaker_position
fmod_system_get_reverb_properties
fmod_system_set_reverb_properties
fmod_system_get_default_mix_matrix
fmod_system_get_cpu_usage
fmod_system_get_file_usage
fmod_system_get_stream_buffer_size      (setter exists, no getter)
fmod_system_get_3d_num_listeners
fmod_system_set_3d_num_listeners
fmod_system_set_3d_rolloff_callback
fmod_system_mixer_suspend
fmod_system_mixer_resume
fmod_system_lock_dsp
fmod_system_unlock_dsp
fmod_system_get_user_data
fmod_system_set_user_data
fmod_system_attach_channel_group_to_port
fmod_system_detach_channel_group_from_port
fmod_system_create_sound_group
```

### Thread
```
fmod_thread_set_attributes
```

---

## 3. New-only additions (no old equivalent, or old equivalent already listed in §1)

```
fmod_error_string
fmod_path_bundle
fmod_path_user
fmod_studio_bank_get_parent_studio_system
fmod_studio_bus_get_master_bus
fmod_studio_event_description_get_instance_at        (see §1 list→count/at)
fmod_studio_event_description_get_parameter_count
fmod_studio_event_instance_get_parameter_count
fmod_studio_system_create_event_instance
```

---

## 4. Suggested priority if closing the gap

1. **ChannelControl 3D/mix-matrix getters + user_data** — biggest single bucket, touches almost every audio object type (Channel, Sound, SoundGroup, DSP, DSPConnection, Reverb3D, all Studio types all need `user_data` symmetrically).
2. **Studio System / EventDescription / EventInstance "by_id" + parameter description introspection** — needed for anything that inspects event parameters generically instead of by name.
3. **Geometry & Reverb3D creation** (`fmod_system_create_geometry`, `fmod_system_create_reverb_3d`) — without these the rest of those two modules (already partially stubbed in spec) can't be used at all.
4. **Studio CommandReplay** — whole object is missing except its 3 callback setters.
5. Everything else (System diagnostics, Thread, Memory, File) is lower-impact/introspection-only.
