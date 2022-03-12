cmake_minimum_required(VERSION 3.10.0)
#set(CMAKE_BUILD_TYPE Debug)
set(PROJECT_NAME DemoCmakeExeImportSo)
project(${PROJECT_NAME})

# Setting cpp standard
set(CMAKE_CXX_FLAGS "-std=c++17${CMAKE_CXX_FLAGS}")

# Setting binary directory 
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)


add_subdirectory(src/SharedObject)
add_subdirectory(src/Application)


set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_CXX_COMPILER "gcc")
set(CMAKE_RULE_MESSAGES ON)
