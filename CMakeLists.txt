cmake_minimum_required(VERSION 3.10.0)

project(learn_muduo_recipes)

set(CXX_FLAGS
        -g
        # -DVALGRIND
        -DCHECK_PTHREAD_RETURN_VALUE
        -D_FILE_OFFSET_BITS=64
        -Wall
        -Wextra
        # -Werror
        -Wconversion
        -Wno-unused-parameter
        -Wold-style-cast
        -Woverloaded-virtual
        -Wpointer-arith
        -Wshadow
        -Wwrite-strings
        -march=native
        # -MMD
        -std=c++11
        -rdynamic
        )
#if(CMAKE_BUILD_BITS EQUAL 32)
#    list(APPEND CXX_FLAGS "-m32")
#endif()
#if(CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
#    list(APPEND CXX_FLAGS "-Wno-null-dereference")
#    list(APPEND CXX_FLAGS "-Wno-sign-conversion")
#    list(APPEND CXX_FLAGS "-Wno-unused-local-typedef")
#    list(APPEND CXX_FLAGS "-Wthread-safety")
#    list(REMOVE_ITEM CXX_FLAGS "-rdynamic")
#endif()
string(REPLACE ";" " " CMAKE_CXX_FLAGS "${CXX_FLAGS}")

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0")

add_subdirectory(base)
add_subdirectory(reactor)

