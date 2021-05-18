file(GLOB SOURCES ./*.c test.c)

add_subdirectory(unity)
add_executable(test ${SOURCES})
target_link_libraries(test unity)
target_link_libraries(unity)
