cmake_minimum_required (VERSION 3.18)

set (CMAKE_BUILD_TYPE Release CACHE STRING "Build type")

project(highs-example)

find_package (highs CONFIG REQUIRED)
if (highs_FOUND)                
  message (STATUS "Found HiGHS: ${highs_DIR}")
  list (APPEND OPENTURNS_PRIVATE_LIBRARIES highs::highs)
endif ()

add_library(foo Solver.cxx)
target_link_libraries(foo PRIVATE highs::highs)

add_executable(bar main.cxx)
target_link_libraries(bar PRIVATE foo)
