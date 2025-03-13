## IMPORTANT

* This extension is compatible with GameMaker 2023.11.
* This extension requires the user to download the FMOD SDKs (v2.03). (requires registration)
* This extension is compatible with all targets except: HTML5 and WASM.
* The FMOD plugin system is not implemented in this extension.

## CHANGES SINCE ${releaseOldVersion}

https://github.com/YoYoGames/GMEXT-FMOD/compare/${releaseOldVersion}...${releaseNewVersion}

## DESCRIPTION

This is the FMOD extension for GameMaker which allows you to integrate [FMOD](https://fmod.com) in your GameMaker game.

The extension provides the functionality of the [FMOD Core](https://www.fmod.com/core) and [FMOD Studio](https://www.fmod.com/studio) APIs, made accessible through functions, constants and structs that allow you to work with FMOD using GML.

## FEATURES

Use basic to advanced features of FMOD Core API in GameMaker, including: 

* Support for over 20 audio [formats](https://www.fmod.com/docs/2.03/api/core-guide.html#file-formats-support-for-over-20-audio-formats-built-in) built in
* Support for the most optimal sound format for games (FSB)
* Modify FMOD sounds at the sample level, copy over sound data to GM buffers and back
* Detect and work with audio devices
* High quality / efficient streaming and compressed samples
* Internet streaming
* 'Virtual Voices' system allowing for thousands of sounds playing at once
* Channels / Grouping - 'Channel Groups' and hierarchical sub-mixing (buses)
* 3D sound and spatialization, including 3D reverb and polygon based geometry occlusion
* Apply audio effects through the use of DSPs (Digital Signal Processors). 30 special effects are built in.
* Connect DSPs with the DSP Engine - Flexible, programmable soft-synth architecture
* Standard and Convolution Reverb
* Performance
* FMOD Studio API features allowing for adaptive audio in games.

For detailed information, see [Core API Features](https://www.fmod.com/docs/2.03/api/core-guide.html#api-features) and [Studio API Guide](https://www.fmod.com/docs/2.03/api/studio-guide.html).

## DOCUMENTATION

The full documentation of the API is included in the extension asset (included files), as well as available online on the [wiki](https://github.com/YoYoGames/GMEXT-FMOD/wiki).