cmake_minimum_required(VERSION 3.0.0)
project(cinterface VERSION 0.1.0)

include(CTest)
enable_testing()

add_subdirectory(ch1)
add_subdirectory(ch2)
add_subdirectory(ch3)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
