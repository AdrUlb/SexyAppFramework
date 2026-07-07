cmake_minimum_required(VERSION 4.3.1)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(SexyAppFramework)

if(MSVC)
	add_definitions(-D_CRT_SECURE_NO_WARNINGS)
endif()

add_subdirectory(Vendor/zlib)
add_subdirectory(Vendor/png)
add_subdirectory(Vendor/jpeg)
add_subdirectory(Vendor/j2k-codec)
add_subdirectory(Vendor/jpeg2000)
add_subdirectory(Vendor/ogg)
add_subdirectory(Vendor/bass)
add_subdirectory(PakLib)
add_subdirectory(ImageLib)
add_subdirectory(SexyAppFramework)
add_subdirectory(Demos)
