cmake_minimum_required(VERSION 2.8)

PROJECT(re2_sample)

find_library(RE2_LIBRARY
	NAMES re2
	PATHS
		/usr/lib
		/usr/local/lib)

set(CMAKE_CXX_FLAGS "-g -Wall")
set(CMAKE_C_FLAGS "-g -Wall")

include_directories(/usr/local/include)

add_executable(re2_sample re2_sample.cpp)
target_link_libraries(re2_sample ${RE2_LIBRARY})
