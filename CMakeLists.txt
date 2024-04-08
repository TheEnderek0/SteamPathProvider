cmake_minimum_required(VERSION 3.20)
project(SteamPathProvider CXX)
set(CMAKE_CXX_STANDARD 23)

add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/include/SteamAppPathProvider")
add_executable(SteamPathProvider src/main.cpp)

target_link_libraries(SteamPathProvider PUBLIC SAPP)