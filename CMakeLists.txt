cmake_minimum_required(VERSION 3.15)

project(protobuf_static_link_test)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(MY_COMPILATION_FLAGS "-Wall")
set(CMAKE_CXX_FLAGS                 "${CMAKE_CXX_FLAGS} ${MY_COMPILATION_FLAGS}")


set (COMPILING_WITH_THE_PROTOBUF TRUE)


set(CMAKE_EXE_LINKER_FLAGS ${CMAKE_EXE_LINKER_FLAGS} "-static-libgcc -static-libstdc++ -static -lrt -Wl,--whole-archive -lpthread -Wl,--no-whole-archive") # See [https://stackoverflow.com/questions/35116327/when-g-static-link-pthread-cause-segmentation-fault-why]



#set(CMAKE_EXE_LINKER_FLAGS ${CMAKE_EXE_LINKER_FLAGS} "-static-libgcc -static-libstdc++ -static -lrt -Wl,--whole-archive -lpthread -Wl,--no-whole-archive") # See [https://stackoverflow.com/questions/35116327/when-g-static-link-pthread-cause-segmentation-fault-why]


find_package (Threads)


#set (Protobuf_USE_STATIC_LIBS ON)
#find_package(Protobuf REQUIRED)
#include_directories(${PROTOBUF_INCLUDE_DIRS})
#include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_executable(
    ${PROJECT_NAME}
    ${SRC_LIST}
    main.cpp
  #  simple_protocol.pb.h
   # simple_protocol.pb.cc
  #  ${PROTO_SRCS}
  #  ${PROTO_HDRS}
)

target_link_libraries(${PROJECT_NAME} ${CMAKE_THREAD_LIBS_INIT} #[[${PROTOBUF_LIBRARIES}]] rt)
