# Nintendo Switch post-build: copy .nro, .nrr, and .nrs to the output directory
add_custom_command(
  TARGET ${PROJECT_NAME} POST_BUILD
  COMMAND "${CMAKE_COMMAND}" -E copy_if_different
          "$<TARGET_FILE_DIR:${PROJECT_NAME}>/$<TARGET_FILE_BASE_NAME:${PROJECT_NAME}>.nro"
          "${_EXT_OUT_DIR}/$<TARGET_FILE_BASE_NAME:${PROJECT_NAME}>.nro"
  COMMAND "${CMAKE_COMMAND}" -E copy_if_different
          "$<TARGET_FILE_DIR:${PROJECT_NAME}>/$<TARGET_FILE_BASE_NAME:${PROJECT_NAME}>.nrr"
          "${_EXT_OUT_DIR}/$<TARGET_FILE_BASE_NAME:${PROJECT_NAME}>.nrr"
  COMMAND "${CMAKE_COMMAND}" -E copy_if_different
          "$<TARGET_FILE_DIR:${PROJECT_NAME}>/$<TARGET_FILE_BASE_NAME:${PROJECT_NAME}>.nrs"
          "${_EXT_OUT_DIR}/$<TARGET_FILE_BASE_NAME:${PROJECT_NAME}>.nrs"
  COMMENT "Copying Nintendo Switch files (.nro, .nrr, .nrs) to ${_EXT_OUT_DIR}"
)
