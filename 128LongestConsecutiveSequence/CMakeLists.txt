cmake_minimum_required(VERSION 3.30)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
project(solution)
set(MAIN_SOURCES
  solution.cpp
)
add_executable(
  ${PROJECT_NAME}
  ${MAIN_SOURCES}
)
