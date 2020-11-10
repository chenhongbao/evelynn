#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "cnats::nats" for configuration "Release"
set_property(TARGET cnats::nats APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(cnats::nats PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/lib/nats.lib"
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "Ws2_32"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/nats.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS cnats::nats )
list(APPEND _IMPORT_CHECK_FILES_FOR_cnats::nats "${_IMPORT_PREFIX}/lib/nats.lib" "${_IMPORT_PREFIX}/lib/nats.dll" )

# Import target "cnats::nats_static" for configuration "Release"
set_property(TARGET cnats::nats_static APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(cnats::nats_static PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "C"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/nats_static.lib"
  )

list(APPEND _IMPORT_CHECK_TARGETS cnats::nats_static )
list(APPEND _IMPORT_CHECK_FILES_FOR_cnats::nats_static "${_IMPORT_PREFIX}/lib/nats_static.lib" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
