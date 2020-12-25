cmake_minimum_required(VERSION 3.15)

project(protobuf_static_link_test)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(MY_COMPILATION_FLAGS "-Wall -std=c++17 -lstdc++fs -pthread")
set(CMAKE_CXX_FLAGS                 "${CMAKE_CXX_FLAGS} ${MY_COMPILATION_FLAGS}")
set(CMAKE_CXX_FLAGS_DEBUG           "${CMAKE_CXX_FLAGS} ${MY_COMPILATION_FLAGS} -g -DDREAL_DEBUG -DDREAL_TRACE -fno-inline")
set(CMAKE_CXX_FLAGS_MINSIZEREL      "${CMAKE_CXX_FLAGS} ${MY_COMPILATION_FLAGS} -Os -DNDEBUG")
set(CMAKE_CXX_FLAGS_RELEASE         "${CMAKE_CXX_FLAGS} ${MY_COMPILATION_FLAGS} -O3 -DNDEBUG")
set(CMAKE_CXX_FLAGS_RELWITHDEBINFO  "${CMAKE_CXX_FLAGS} ${MY_COMPILATION_FLAGS} -O2 -g")

set(CMAKE_EXE_LINKER_FLAGS "-static-libgcc -static-libstdc++ -static")


find_package (Threads)


set (Protobuf_USE_STATIC_LIBS ON)
find_package(Protobuf REQUIRED)
include_directories(${PROTOBUF_INCLUDE_DIRS})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_executable(
    ${PROJECT_NAME}
    ${SRC_LIST}
    main.cpp
    simple_protocol.pb.h
    simple_protocol.pb.cc
    ${PROTO_SRCS} 
    ${PROTO_HDRS}
)

target_link_libraries(${PROJECT_NAME} ${CMAKE_THREAD_LIBS_INIT} ${PROTOBUF_LIBRARIES} rt)
