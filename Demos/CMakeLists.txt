function(add_demo NAME)
	file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS
			"${CMAKE_CURRENT_SOURCE_DIR}/${NAME}/*.cpp"
			"${CMAKE_CURRENT_SOURCE_DIR}/${NAME}/*.h"
			"${CMAKE_CURRENT_SOURCE_DIR}/Shared/*.cpp"
			"${CMAKE_CURRENT_SOURCE_DIR}/Shared/*.h"
	)

	add_executable(${NAME} WIN32 ${SOURCES})

	target_include_directories(${NAME} PRIVATE
			${CMAKE_CURRENT_SOURCE_DIR}/${NAME}
			${CMAKE_CURRENT_SOURCE_DIR}/Shared
	)

	target_link_libraries(${NAME} PRIVATE SexyAppFramework)
	set_target_properties(${NAME} PROPERTIES FOLDER "Demos")

	add_custom_command(
			TARGET ${NAME} POST_BUILD
			COMMAND ${CMAKE_COMMAND} -E copy_directory "${CMAKE_CURRENT_SOURCE_DIR}/Shared/Assets" $<TARGET_FILE_DIR:${NAME}>
	)

	add_custom_command(
			TARGET ${NAME} POST_BUILD
			COMMAND ${CMAKE_COMMAND} -E copy_if_different $<TARGET_RUNTIME_DLLS:${NAME}> $<TARGET_FILE_DIR:${NAME}>
			COMMAND_EXPAND_LISTS
	)

	add_custom_command(
			TARGET ${NAME} POST_BUILD
			COMMAND ${CMAKE_COMMAND} -E copy_if_different $<TARGET_RUNTIME_DLLS:${NAME}> $<TARGET_FILE_DIR:${NAME}>
			COMMAND_EXPAND_LISTS
	)

	add_custom_command(
			TARGET ${NAME} POST_BUILD
			COMMAND ${CMAKE_COMMAND} -E copy_directory ${CMAKE_SOURCE_DIR}/Vendor/dxwrapper $<TARGET_FILE_DIR:${NAME}>
			COMMAND_EXPAND_LISTS
	)
endfunction()

add_demo(Demo1)
add_demo(Demo2)
add_demo(Demo3)
add_demo(Demo4)
add_demo(Demo5)
add_demo(Hun-garr)
add_demo(V12Demo)
add_demo(XMLDemo)
