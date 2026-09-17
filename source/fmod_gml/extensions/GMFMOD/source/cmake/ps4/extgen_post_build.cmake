add_custom_command(
  TARGET ${PROJECT_NAME} POST_BUILD
  COMMAND "${CMAKE_COMMAND}" -E copy_if_different
          "$<TARGET_FILE:${PROJECT_NAME}>"
          "${_EXT_OUT_DIR}/${PROJECT_NAME}_ps4.prx"
  COMMENT "Copying PS4 (ORBIS) binary to ${_EXT_OUT_DIR}"
)
