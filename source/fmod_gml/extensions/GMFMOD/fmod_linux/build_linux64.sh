#!/bin/sh

if g++ -m64 \
    -std=c++17 \
    ../fmod_cpp/*.cpp \
    -Wl,-rpath,assets/ -fPIC -fpermissive -DOS_Linux \
    -L"../../../../fmod_sdk/FMOD Studio API Linux/api/core/lib/x86_64" \
    -lfmod \
    -L"../../../../fmod_sdk/FMOD Studio API Linux/api/studio/lib/x86_64" \
    -lfmodstudio \
    -I"../../../../fmod_sdk/FMOD Studio API Linux/api/core/inc" \
    -I"../../../../fmod_sdk/FMOD Studio API Linux/api/studio/inc" \
    -shared -o ../YYFMOD.so
then
    echo "BUILD SUCCESS";
else
    echo "BUILD FAILED";
fi