# GMEXT-FMOD
Repository for GameMaker's FMOD Extension

This repository was created with the intent of presenting users with the latest version available of the extension (even previous to marketplace updates) and also provide a way for the community to contribute with bug fixes and feature implementation.

This extension will work on Desktop, Mobile and Consoles.

* Windows: `source/fmod_vs/`
* XCode: `source/fmod_xcode/`
* Switch: `source/fmod_switch/`
* Android: `source/fmod_android/`
* Playstation: `source/fmod_playstation/`
* Xbox: `source/fmod_gdk/`

After compilation the exported dll/dylib/so file is automatically copied into the extension folder inside the included GameMaker project folder.

<br>

## Requirements

In order to compile for Windows/macOS/Linux you are required to [download the FMOD SDK v2.02](https://www.fmod.com/download) and place it inside `source/fmod_sdk/` following the given folder structure:

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

The online documentation is regularly updated to ensure it contains the most current information. For those who prefer a different format, we also offer a PDF version. This PDF is directly converted from the GitHub Wiki content, ensuring consistency, although it may follow slightly behind in updates.

We encourage users to refer primarily to the GitHub Wiki for the latest information and updates. The PDF version, included with the extension and within the demo project's data files, serves as a secondary, static reference.

Additionally, if you're contributing new features through PR (Pull Requests), we kindly ask that you also provide accompanying documentation for these features, to maintain the comprehensiveness and usefulness of our resources.

