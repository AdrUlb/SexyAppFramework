set(CLIBSOURCES
		Source/jcapimin.c
		Source/jcapistd.c
		Source/jctrans.c
		Source/jcparam.c
		Source/jdatadst.c
		Source/jcinit.c
		Source/jcmaster.c
		Source/jcmarker.c
		Source/jcmainct.c
		Source/jcprepct.c
		Source/jccoefct.c
		Source/jccolor.c
		Source/jcsample.c
		Source/jchuff.c
		Source/jcphuff.c
		Source/jcdctmgr.c
		Source/jfdctfst.c
		Source/jfdctflt.c
		Source/jfdctint.c
)

set(DLIBSOURCES
		Source/jdapimin.c
		Source/jdapistd.c
		Source/jdtrans.c
		Source/jdatasrc.c
		Source/jdmaster.c
		Source/jdinput.c
		Source/jdmarker.c
		Source/jdhuff.c
		Source/jdphuff.c
		Source/jdmainct.c
		Source/jdcoefct.c
		Source/jdpostct.c
		Source/jddctmgr.c
		Source/jidctfst.c
		Source/jidctflt.c
		Source/jidctint.c
		Source/jidctred.c
		Source/jdsample.c
		Source/jdcolor.c
		Source/jquant1.c
		Source/jquant2.c
		Source/jdmerge.c
)

set(COMSOURCES
		Source/jcomapi.c
		Source/jutils.c
		Source/jerror.c
		Source/jmemmgr.c
		Source/jmemnobs.c
)

set(SOURCES ${CLIBSOURCES} ${DLIBSOURCES} ${COMSOURCES})

add_library(jpeg STATIC ${SOURCES})
target_include_directories(jpeg PUBLIC Include)
target_include_directories(jpeg PRIVATE Include/jpeg)
target_compile_definitions(jpeg PUBLIC -D_VISUALC_)
target_compile_definitions(jpeg PUBLIC -D_LIB)
