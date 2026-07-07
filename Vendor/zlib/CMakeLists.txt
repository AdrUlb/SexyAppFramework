set(SOURCES
		Source/adler32.c
		Source/compress.c
		Source/crc32.c
		Source/gzio.c
		Source/uncompr.c
		Source/deflate.c
		Source/trees.c
		Source/zutil.c
		Source/inflate.c
		Source/infblock.c
		Source/inftrees.c
		Source/infcodes.c
		Source/infutil.c
		Source/inffast.c
)

add_library(zlib STATIC ${SOURCES})
target_include_directories(zlib PUBLIC Include)
target_include_directories(zlib PRIVATE Include/zlib)
