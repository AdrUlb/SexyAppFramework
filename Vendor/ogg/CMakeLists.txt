set(SOURCES
		Source/bitwise.c
		Source/block.c
		Source/codebook.c
		Source/floor0.c
		Source/floor1.c
		Source/framing.c
		Source/info.c
		Source/mapping0.c
		Source/mdct.c
		Source/registry.c
		Source/res012.c
		Source/sharedbook.c
		Source/synthesis.c
		Source/vorbisfile.c
		Source/window.c
)
add_library(ogg STATIC ${SOURCES})
target_include_directories(ogg PUBLIC Include)
target_include_directories(ogg PRIVATE Include/ogg)
