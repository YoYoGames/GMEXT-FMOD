add_custom_command(
  TARGET ${PROJECT_NAME} POST_BUILD
  COMMAND "${CMAKE_COMMAND}" -E copy_if_different
          "$<TARGET_FILE:${PROJECT_NAME}>"
          "${_EXT_OUT_DIR}/${PROJECT_NAME}_ps5.prx"
  COMMENT "Copying PS5 (Prospero) binary to ${_EXT_OUT_DIR}"
)
