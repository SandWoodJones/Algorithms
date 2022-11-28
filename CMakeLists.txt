cmake_minimum_required(VERSION "3.24.3")

set(CMAKE_C_COMPILER "gcc")

project("Algorithms")

file(GLOB_RECURSE SRC_FILES src/*.c)

string(TOLOWER ${PROJECT_NAME} target) # I like lowercase executables.
add_executable(${target} "")

add_subdirectory(src)

target_compile_options(${target} PRIVATE -Wall -Wextra -g -fdiagnostics-color=always)

target_include_directories(${target} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

target_link_libraries(${target} m)

add_custom_target(run
    COMMAND ${target}
    DEPENDS ${target}
    WORKING_DIRECTORY ${CMAKE_PROJECT_DIR}
)
