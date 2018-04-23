cmake_minimum_required(VERSION 3.10)
project(logger)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "bin/")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -O3")

set(SOURCE_DIR "src/")
set(SOURCES
    "${SOURCE_DIR}main.cpp"
    "${SOURCE_DIR}fibonacci.cpp"
    )

include_directories("include/" "ext/logger/include")
link_directories("ext/logger/build/lib/")

add_executable(logfib ${SOURCES})
target_link_libraries(logfib "logger")
