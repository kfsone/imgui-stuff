CMAKE_MINIMUM_REQUIRED(VERSION 3.11)

PROJECT(imgui-stuff)

SET(CMAKE_CXX_STANDARD 20)
SET(CMAKE_CXX_STANDARD_REQUIRED TRUE)

INCLUDE(FetchContent)
FetchContent_Declare(
	imguiwrap
	GIT_REPOSITORY	https://github.com/kfsone/imguiwrap.git
	GIT_TAG			origin/main
)
FetchContent_MakeAvailable(imguiwrap)

include_directories(${CMAKE_SOURCE_DIR})

MACRO(gui_executable target)
	ADD_EXECUTABLE(${target} WIN32 items/${target}/main.cpp wrapper.h)
	TARGET_LINK_LIBRARIES(${target} PUBLIC imguiwrap)
ENDMACRO()

gui_executable(focus-window)
