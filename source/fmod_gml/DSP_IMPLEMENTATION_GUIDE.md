# GMEXT-FMOD DSP Parameter Implementation Guide

## Overview
This guide documents the complete DSP parameter enums and effect objects available in the GMEXT-FMOD extension.

## DSP Types Available

### Basic Filters (Already Had Objects)
- **LowPass** (2): `obj_fmod_effects_lowpass`
- **HighPass** (4): `obj_fmod_effects_highass`
- **Echo** (5): `obj_fmod_effects_echo`
- **Flange** (6): `obj_fmod_effects_flange`

### Newly Added Effect Objects
- **Distortion** (7): `obj_fmod_effects_distortion`
- **Normalize** (8): `obj_fmod_effects_normalize`
- **Limiter** (9): `obj_fmod_effects_limiter`
- **ParamEq** (10): `obj_fmod_effects_parameq`
- **PitchShift** (11): `obj_fmod_effects_pitchshift`
- **Chorus** (12): `obj_fmod_effects_chorus`

### Newly Added DSP Objects
- **Oscillator** (1): `obj_fmod_dsp_oscillator`
- **ItLowPass** (3): `obj_fmod_dsp_itlowpass`
- **MultibandEq** (19): `obj_fmod_dsp_multibandeq`
- **ChannelMix** (16): `obj_fmod_dsp_channelmix`
- **Transceiver** (17): `obj_fmod_dsp_transceiver`
- **CompDynEq** (20): `obj_fmod_dsp_compdyneq`

### System DSP Objects (Already Available)
- **Convolution** (15): `obj_fmod_convolution_reverb`
- **ObjectPan** (18): `obj_fmod_studio_object_pan`

### Plugin Types (No Demo Objects - External Plugins)
- **VstPlugin** (13): Load external VST plugins
- **WinampPlugin** (14): Load external Winamp plugins

## Usage Examples

### Creating a Distortion Effect
```gml
// Create a distortion DSP
dsp_distortion = fmod_system_create_dsp_by_type(FmodDspType.Distortion);

// Set the distortion level (0.0 to 1.0+)
fmod_dsp_set_parameter_float(dsp_distortion, FmodDspDistortion.Level, 0.5);

// Add to channel
fmod_channel_control_add_dsp(channel_index, 0, dsp_distortion);

// Toggle bypass
fmod_dsp_set_bypass(dsp_distortion, false);
```

### Creating a Limiter Effect
```gml
// Create a limiter DSP
dsp_limiter = fmod_system_create_dsp_by_type(FmodDspType.Limiter);

// Configure limiter
fmod_dsp_set_parameter_float(dsp_limiter, FmodDspLimiter.ReleaseTime, 500.0);
fmod_dsp_set_parameter_float(dsp_limiter, FmodDspLimiter.MakingGain, 1.0);

// Add to master channel group
fmod_channel_control_add_dsp(fmod_system_get_master_channel_group(), 0, dsp_limiter);
```

### Creating a Chorus Effect
```gml
// Create a chorus DSP
dsp_chorus = fmod_system_create_dsp_by_type(FmodDspType.Chorus);

// Configure dry/wet mix
fmod_dsp_set_parameter_float(dsp_chorus, FmodDspChorus.DryLevel, 0.5);
fmod_dsp_set_parameter_float(dsp_chorus, FmodDspChorus.WetLevel1, 0.5);
fmod_dsp_set_parameter_float(dsp_chorus, FmodDspChorus.Rate, 1.5);
fmod_dsp_set_parameter_float(dsp_chorus, FmodDspChorus.Depth, 0.5);

fmod_channel_control_add_dsp(channel_index, 0, dsp_chorus);
```

### Using MultibandEQ
```gml
// Create multiband EQ
dsp_eq = fmod_system_create_dsp_by_type(FmodDspType.MultibandEq);

// Band A - Low frequency
fmod_dsp_set_parameter_int(dsp_eq, FmodDspMultibandEq.AFilter, FmodDspMultibandEqFilterType.Lowpass12db);
fmod_dsp_set_parameter_float(dsp_eq, FmodDspMultibandEq.AFrequency, 200.0);
fmod_dsp_set_parameter_float(dsp_eq, FmodDspMultibandEq.AQ, 0.707);
fmod_dsp_set_parameter_float(dsp_eq, FmodDspMultibandEq.AGain, 1.0);

// Band B - Mid frequency
fmod_dsp_set_parameter_int(dsp_eq, FmodDspMultibandEq.BFilter, FmodDspMultibandEqFilterType.Peaking);
fmod_dsp_set_parameter_float(dsp_eq, FmodDspMultibandEq.BFrequency, 1000.0);
fmod_dsp_set_parameter_float(dsp_eq, FmodDspMultibandEq.BQ, 1.0);
fmod_dsp_set_parameter_float(dsp_eq, FmodDspMultibandEq.BGain, 2.0); // Boost

fmod_channel_control_add_dsp(channel_index, 0, dsp_eq);
```

### Creating an Oscillator (Tone Generator)
```gml
// Create oscillator
dsp_osc = fmod_system_create_dsp_by_type(FmodDspType.Oscillator);

// Set sine wave at 440 Hz
fmod_dsp_set_parameter_int(dsp_osc, FmodDspOscillator.Type, FmodDspOscillatorType.Sine);
fmod_dsp_set_parameter_float(dsp_osc, FmodDspOscillator.Rate, 440.0);

fmod_channel_control_add_dsp(channel_index, 0, dsp_osc);
```

### Using a Parametric EQ
```gml
// Create parametric EQ
dsp_peq = fmod_system_create_dsp_by_type(FmodDspType.ParamEq);

// Center frequency at 2kHz, 1 octave bandwidth, +6dB gain
fmod_dsp_set_parameter_float(dsp_peq, FmodDspParamEq.Center, 2000.0);
fmod_dsp_set_parameter_float(dsp_peq, FmodDspParamEq.Bandwidth, 2.0);
fmod_dsp_set_parameter_float(dsp_peq, FmodDspParamEq.Gain, 6.0);

fmod_channel_control_add_dsp(channel_index, 0, dsp_peq);
```

## DSP Parameter Reference

### Echo Parameters
- `Delay`: 10ms to 5000ms - echo delay time
- `Feedback`: 0.0 to 1.0 - echo feedback amount
- `DryLevel`: 0.0 to 1.0 - dry signal level
- `WetLevel`: 0.0 to 1.0 - wet (echoed) signal level

### Flange Parameters
- `DryLevel`: 0.0 to 1.0
- `WetLevel`: 0.0 to 1.0
- `Speed`: 0.1 to 10.0 Hz
- `Depth`: 0.0 to 1.0

### Distortion Parameters
- `Level`: 0.0 to 1.0+ - amount of distortion

### Normalize Parameters
- `FadeTime`: Time to fade volume to target
- `Threshold`: Threshold level
- `MaxAmplitude`: Maximum output amplitude (typically 1.0)

### Limiter Parameters
- `ReleaseTime`: Time for limiter to release (milliseconds)
- `MakingGain`: Amount of makeup gain to apply

### ParamEq Parameters
- `Center`: Center frequency in Hz (20Hz to 20kHz)
- `Bandwidth`: Bandwidth in octaves
- `Gain`: Gain in dB (-80.0 to +10.0)

### PitchShift Parameters
- `Pitch`: Pitch shift in semitones
- `FftSize`: FFT size (typically 256-4096)
- `MaxChannels`: Maximum channels to process

### Chorus Parameters
- `DryLevel`: 0.0 to 1.0 - unprocessed signal
- `WetLevel1`/`WetLevel2`/`WetLevel3`: Chorus tap levels
- `Rate`: Modulation rate in Hz (0.0 to 10.0)
- `Depth`: Modulation depth (0.0 to 1.0)

### MultibandEq Parameters
Available for bands A, B, C, D:
- `X_Filter`: Filter type (see FmodDspMultibandEqFilterType)
- `X_Frequency`: Center frequency
- `X_Q`: Q factor / bandwidth
- `X_Gain`: Gain in dB

## Filter Types (for MultibandEq)
- `Lowpass12db`: 12dB/octave low-pass
- `Lowpass24db`: 24dB/octave low-pass
- `Lowpass48db`: 48dB/octave low-pass
- `Highpass12db`: 12dB/octave high-pass
- `Highpass24db`: 24dB/octave high-pass
- `Highpass48db`: 48dB/octave high-pass
- `Notch`: Notch filter
- `Allpass`: All-pass filter
- `Peaking`: Peaking filter (boost/cut)
- `Lowshelf`: Low-shelf filter
- `Highshelf`: High-shelf filter

## Best Practices

1. **Always Test Parameters**: DSP parameters have different ranges; test to find suitable values
2. **Use Dry/Wet Mix**: For effects, keep dry signal to maintain clarity
3. **Monitor CPU**: Too many active DSPs can impact performance
4. **Bypass Before Release**: Use `fmod_dsp_set_bypass()` to toggle effects efficiently
5. **Release Resources**: Always call `fmod_dsp_release()` when done with a DSP
6. **Order Matters**: DSP order in the chain affects the final sound

## Common Chains

### Vocal Enhancement
1. High-pass filter (remove rumble)
2. Parametric EQ (shape tone)
3. Limiter (prevent clipping)
4. Chorus (add width)

### Bass Enhancement
1. Low-pass filter (remove harshness)
2. Parametric EQ (boost presence)
3. Distortion (add aggression)
4. Limiter (control dynamics)

### Guitar Effect
1. Echo (space)
2. Distortion (saturation)
3. Flange (modulation)
4. Normalization (level control)
