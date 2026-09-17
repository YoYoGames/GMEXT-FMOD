# Xbox Series (Scarlett/GDK) post-build: copy output binary to the extension directory

add_custom_command(
  TARGET ${PROJECT_NAME} POST_BUILD
  COMMAND "${CMAKE_COMMAND}" -E copy_if_different
          "$<TARGET_FILE:${PROJECT_NAME}>"
          "${_EXT_OUT_DIR}/${PROJECT_NAME}_xboxseriesxs.dll"
  COMMENT "Copying Xbox Series (Scarlett) binary to ${_EXT_OUT_DIR}"
)
