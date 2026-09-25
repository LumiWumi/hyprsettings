cmake_minimum_required(VERSION 3.16)

project(hyprsettings)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC_SEARCH_PATHS ${CMAKE_CURRENT_SOURCE_DIR}/form)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

add_executable(hyprsettings 
  src/main.cpp 
  src/window.cpp
  include/window.h
)

target_include_directories(hyprsettings PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)

target_link_libraries(hyprsettings PRIVATE Qt6::Widgets)

