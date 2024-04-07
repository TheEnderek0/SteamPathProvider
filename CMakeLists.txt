cmake_minimum_required(VERSION 3.15)
project(SteamPathProvider)
set(CMAKE_CXX_STANDARD 23)

add_executable(SteamPathProvider src/main.cpp)
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/include/SpeedyKeyV")
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/include/SteamAppPathProvider")

target_link_libraries(SteamPathProvider PUBLIC keyvalues sapp)

target_include_directories(SteamPathProvider PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include/SteamAppPathProvider/include" "${CMAKE_CURRENT_SOURCE_DIR}/include/SpeedyKeyV")