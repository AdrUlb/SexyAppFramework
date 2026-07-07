set(SOURCES Source/ImageLib.cpp)

add_library(ImageLib STATIC ${SOURCES})
target_include_directories(ImageLib PUBLIC Include)
target_link_libraries(ImageLib PRIVATE PakLib jpeg png j2k-codec)
