set(BINARY ${CMAKE_PROJECT_NAME})

file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true *.h *.cpp)

set(SOURCES ${SOURCES})

link_directories( /usr/lib/x86_linux-gnu )

set(PROJECT_LINK_LIBS libncurses.so)

add_executable(${BINARY}_run ${SOURCES})

add_library(${BINARY}_lib STATIC ${SOURCES})

target_link_libraries(${BINARY}_run ${PROJECT_LINK_LIBS} )

target_link_libraries(${BINARY}_lib ${PROJECT_LINK_LIBS} )

