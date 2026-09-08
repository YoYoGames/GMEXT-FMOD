# GMEXT-FMOD
Repository for GameMaker's FMOD Extension

This repository was created with the intent of presenting users with the latest version available of the extension (even previous to marketplace updates) and also provide a way for the community to contribute with bug fixes and feature implementation.

This repository ships two extensions, each with its own native source folder and its own CMake build:

* FMOD Core (`GMFMOD`): `source/fmod_gml/extensions/GMFMOD/source/` - Windows, macOS, Linux, Android, iOS
* FMOD Studio (`GMFMODStudio`): `source/fmod_gml/extensions/GMFMODStudio/source/` - Windows, macOS, Linux

The source is organised per extension rather than per platform: the C++ implementation under each
`source/src/native/` is shared by every target, and `source/CMakePresets.json` lists the presets to
build it with.

After compilation the exported dll/dylib/so files is automatically copied into the extension folder inside the included GameMaker project folder.

<br>

## Requirements

In order to use this extension you will require to [download the FMOD SDK v2.03](https://www.fmod.com/download) and install it on your local machine.

> [!IMPORTANT]
> To set up the FMOD extension asset in the IDE, double-click on it and complete the necessary information in the [Extension Options](https://manual.gamemaker.io/monthly/en/The_Asset_Editors/Extensions.htm).
>
> Check the [Getting Started](https://github.com/YoYoGames/GMEXT-FMOD/wiki/GettingStarted) for detailed information.

If you are compiling this extension locally you will need to place the SDKs inside `source/fmod_sdk/` following the given folder structure:

* Windows: `FMOD Studio API Windows/`
* MacOS: `FMOD Studio API macOS/`
* Linux: `FMOD Studio API Linux/`
* Android: `FMOD Studio API Android/`
* iOS: `FMOD Studio API iOS/`
* GDK: `FMOD Studio API Game Core/`
* Switch: `FMOD Studio API Switch/`
* Playstation 4: `FMOD Studio API PS4/`
* Playstation 5: `FMOD Studio API PS5/`

<br>

## Documentation

* Check [the documentation](../../wiki)

The online documentation is regularly updated to ensure it contains the most current information. For those who prefer a different format, we also offer a HTML version. This HTML is directly converted from the GitHub Wiki content, ensuring consistency, although it may follow slightly behind in updates.

We encourage users to refer primarily to the GitHub Wiki for the latest information and updates. The HTML version, included with the extension and within the demo project's data files, serves as a secondary, static reference.

Additionally, if you're contributing new features through PR (Pull Requests), we kindly ask that you also provide accompanying documentation for these features, to maintain the comprehensiveness and usefulness of our resources.

