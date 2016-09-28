cmake_minimum_required(VERSION 3.5)
project(proto)

find_package(Protobuf REQUIRED)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp people.pb.h people.pb.cc)

add_executable(proto ${SOURCE_FILES})
target_link_libraries(proto ${PROTOBUF_LIBRARY})