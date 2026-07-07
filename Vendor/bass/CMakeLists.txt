add_library(bass SHARED IMPORTED GLOBAL)
set_target_properties(bass PROPERTIES
		IMPORTED_LOCATION "${CMAKE_CURRENT_SOURCE_DIR}/bass.dll"
		IMPORTED_IMPLIB "${CMAKE_CURRENT_SOURCE_DIR}/bass.lib"
)
target_include_directories(bass INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/Include)
