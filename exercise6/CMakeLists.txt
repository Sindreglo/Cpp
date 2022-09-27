cmake_minimum_required(VERSION 3.1)

project(exercise6)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -Wextra")


find_package(Boost 1.54.0 COMPONENTS system REQUIRED)
include_directories(${Boost_INCLUDE_DIR})

# Forstår ikke hvordan man har to executable samtidig.
#add_executable(exercise6 oppgave1.cpp)
add_executable(exercise6 oppgave2.cpp)
target_link_libraries(exercise6 ${Boost_LIBRARIES})
