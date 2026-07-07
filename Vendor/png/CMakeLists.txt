set(SOURCES
		Source/png.c
		Source/pngerror.c
		Source/pngget.c
		Source/pngmem.c
		Source/pngpread.c
		Source/pngread.c
		Source/pngrio.c
		Source/pngrtran.c
		Source/pngrutil.c
		Source/pngset.c
		Source/pngtrans.c
		Source/pngvcrd.c
		Source/pngwio.c
		Source/pngwrite.c
		Source/pngwtran.c
		Source/pngwutil.c
)

add_library(png STATIC ${SOURCES})
target_include_directories(png PUBLIC Include)
target_include_directories(png PRIVATE Include/png)
target_link_libraries(png PUBLIC zlib)
