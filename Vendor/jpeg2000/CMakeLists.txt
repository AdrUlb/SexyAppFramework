set(SOURCES
		Source/jas_cm.c
		Source/jas_debug.c
		Source/jas_getopt.c
		Source/jas_icc.c
		Source/jas_iccdata.c
		Source/jas_image.c
		Source/jas_init.c
		Source/jas_malloc.c
		Source/jas_seq.c
		Source/jas_stream.c
		Source/jas_string.c
		Source/jas_tvp.c
		Source/jas_version.c
		Source/jp2_cod.c
		Source/jp2_dec.c
		Source/jp2_enc.c
		Source/jpc_bs.c
		Source/jpc_cs.c
		Source/jpc_dec.c
		Source/jpc_enc.c
		Source/jpc_math.c
		Source/jpc_mct.c
		Source/jpc_mqcod.c
		Source/jpc_mqdec.c
		Source/jpc_mqenc.c
		Source/jpc_qmfb.c
		Source/jpc_t1cod.c
		Source/jpc_t1dec.c
		Source/jpc_t1enc.c
		Source/jpc_t2cod.c
		Source/jpc_t2dec.c
		Source/jpc_t2enc.c
		Source/jpc_tagtree.c
		Source/jpc_tsfb.c
		Source/jpc_util.c
)
add_library(jpeg2000 STATIC ${SOURCES})
target_include_directories(jpeg2000 PUBLIC Include)
target_include_directories(jpeg2000 PRIVATE Include/jpeg2000)
target_compile_definitions(jpeg2000 PUBLIC -DHAVE_STDINT_H)
