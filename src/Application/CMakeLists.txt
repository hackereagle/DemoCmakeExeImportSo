cmake_minimum_required(VERSION 3.4.0)
set(PROJECT_NAME Application)
project(${PROJECT_NAME})

aux_source_directory(. DIR_SRC)

# add Logger library
include_directories(${CMAKE_SOURCE_DIR}/src/SharedObject)
set(myLib ${CMAKE_BINARY_DIR}/lib/libSharedObject.so)

add_executable(${PROJECT_NAME} ${DIR_SRC})
target_link_libraries(${PROJECT_NAME} ${CMAKE_DL_LIBS} ${myLib})
