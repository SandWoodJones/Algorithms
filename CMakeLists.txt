cmake_minimum_required(VERSION "3.24.3")

project("Algorithms")

file(GLOB_RECURSE SRC_FILES src/*.c)

string(TOLOWER ${PROJECT_NAME} target) # I like lowercase executables.
add_executable(${target} ${SRC_FILES})

target_include_directories(${target} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

target_link_libraries(${target} m)

add_custom_target(run
    COMMAND ${target}
    DEPENDS ${target}
    WORKING_DIRECTORY ${CMAKE_PROJECT_DIR}
)
