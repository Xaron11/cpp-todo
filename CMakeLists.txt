cmake_minimum_required(VERSION 3.0)
project(todo)

set(CMAKE_CXX_STANDARD 20)

file(GLOB_RECURSE SRC_FILES "src/*.cpp" "src/*.h")

add_executable(todo ${SRC_FILES}
)
