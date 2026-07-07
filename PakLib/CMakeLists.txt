set(SOURCES Source/PakInterface.cpp)

add_library(PakLib STATIC ${SOURCES})
target_include_directories(PakLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/Include)
