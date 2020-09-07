cmake_minimum_required(VERSION 3.10)

project(Tetris)

set(Tetris_HEADERS)
set(Tetris_SOURCES)

set(SFML_INCLUDE_DIR)
set(SFML_LIBRARY_DIR)
set(SFML_DIR)

if (UNIX)
	set(SFML_INCLUDE_DIR "${CMAKE_CURRENT_LIST_DIR}/external/unix/sfml/include/")
	set(SFML_LIBRARY_DIR "${CMAKE_CURRENT_LIST_DIR}/external/unix/sfml/lib/")
	set(SFML_DIR "${CMAKE_CURRENT_LIST_DIR}/external/unix/sfml/lib/cmake/SFML/")
endif()

if (WIN32)
	set(SFML_INCLUDE_DIR "${CMAKE_CURRENT_LIST_DIR}/externa/win32/sfml/include/")
	set(SFML_LIBRARY_DIR "${CMAKE_CURRENT_LIST_DIR}/external/win32/sfml/lib/")
	set(SFML_DIR "${CMAKE_CURRENT_LIST_DIR}/external/win32/sfml/lib/cmake/SFML/")
endif()

link_directories(SFML_LIBRARY_DIR)
include_directories(SFML_INCLUDE_DIR)

find_package(SFML 2.5.1 COMPONENTS "system" "window" "graphics" "network" "audio")

if(SFML_FOUND)

	include("${CMAKE_CURRENT_LIST_DIR}/headers/CMakeLists.txt")
	include("${CMAKE_CURRENT_LIST_DIR}/sources/CMakeLists.txt")
	include("${CMAKE_CURRENT_LIST_DIR}/entry/CMakeLists.txt")

	add_executable(Tetris  ${Tetris_HEADERS} 
						   ${Tetris_SOURCES})

	target_link_libraries(Tetris "sfml-system" "sfml-window" "sfml-graphics" "sfml-network" "sfml-audio")
endif()

