add_library(j2k-codec SHARED IMPORTED GLOBAL)
set_target_properties(j2k-codec PROPERTIES
		IMPORTED_LOCATION "${CMAKE_CURRENT_SOURCE_DIR}/j2k-codec.dll"
		IMPORTED_IMPLIB "${CMAKE_CURRENT_SOURCE_DIR}/j2k-codec.lib"
)
target_include_directories(j2k-codec INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/Include)
