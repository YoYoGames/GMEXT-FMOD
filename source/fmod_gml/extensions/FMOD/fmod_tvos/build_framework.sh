#!/bin/bash

# Exit immediately if a command exits with a non-zero status
set -e

# Get the directory containing the script
SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd -P)"

# Define your project/workspace settings
PROJECT_NAME="${SCRIPT_DIR}/YYFMOD.xcodeproj"
SCHEME_NAME="YYFMOD"
TARGET_NAME="YYFMOD"

# Define output directories
OUTPUT_DIR="${SCRIPT_DIR}/build"
DEVICE_DIR="${OUTPUT_DIR}/appletvos"
SIMULATOR_DIR="${OUTPUT_DIR}/appletvsimulator"
XCFRAMEWORK_DIR="${OUTPUT_DIR}/XCFramework"
ZIP_DIR="${SCRIPT_DIR}/../tvOSSourceFromMac"

# Check if the build directory exists and remove it
if [ -d "${OUTPUT_DIR}" ]; then
  echo "Removing existing build directory: ${OUTPUT_DIR}"
  rm -rf "${OUTPUT_DIR}"
else
  echo "No existing build directory to remove."
fi

# Create output directories
mkdir -p "${DEVICE_DIR}"
mkdir -p "${SIMULATOR_DIR}"
mkdir -p "${XCFRAMEWORK_DIR}"
mkdir -p "${ZIP_DIR}"

# Clean build
xcodebuild \
  -project "${PROJECT_NAME}" \
  -scheme "${SCHEME_NAME}" \
  clean

# Build for device
xcodebuild \
  -project "${PROJECT_NAME}" \
  -scheme "${SCHEME_NAME}" \
  -sdk appletvos \
  -configuration Release \
  BUILD_LIBRARY_FOR_DISTRIBUTION=YES \
  CONFIGURATION_BUILD_DIR="${DEVICE_DIR}"

# Build for simulator
xcodebuild \
  -project "${PROJECT_NAME}" \
  -scheme "${SCHEME_NAME}" \
  -sdk appletvsimulator \
  -configuration Release \
  BUILD_LIBRARY_FOR_DISTRIBUTION=YES \
  CONFIGURATION_BUILD_DIR="${SIMULATOR_DIR}"

# Create XCFramework
xcodebuild -create-xcframework \
  -library "${DEVICE_DIR}/lib${TARGET_NAME}.a" \
  -library "${SIMULATOR_DIR}/lib${TARGET_NAME}.a" \
  -output "${XCFRAMEWORK_DIR}/lib${TARGET_NAME}.xcframework"

# Zip the XCFramework
cd "${XCFRAMEWORK_DIR}"
zip -r "${ZIP_DIR}/lib${TARGET_NAME}.zip" "lib${TARGET_NAME}.xcframework"

echo "XCFramework has been zipped at ${ZIP_DIR}/lib${TARGET_NAME}.zip"
