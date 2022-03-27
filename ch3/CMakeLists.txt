cmake_minimum_required(VERSION 3.18)
project(Test VERSION 1.0)
configure_file(TestConfig.h.in TestConfig.h)
add_subdirectory(src bin)



install(FILES COPYRIGHT README DESTINATION share/doc/cmake/)
install(PROGRAMS runhello.sh DESTINATION bin)
install(DIRECTORY doc/ DESTINATION share/doc/cmake)

