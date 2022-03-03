cmake_minimum_required(VERSION 3.4.0)
set(PROJECT_NAME SharedObject)
project(${PROJECT_NAME})

aux_source_directory(. DIR_SRC)
add_library(${PROJECT_NAME} SHARED ${DIR_SRC})
target_link_libraries(${PROJECT_NAME} ${CMAKE_DL_LIBS})


