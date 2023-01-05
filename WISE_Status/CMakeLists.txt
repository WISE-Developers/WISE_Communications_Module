cmake_minimum_required (VERSION 3.13)
if (MSVC)
set (CMAKE_SYSTEM_VERSION 10.0.22000.0)
endif (MSVC)
project (ProtoStatus VERSION ${PROMETHEUS_VERSION} DESCRIPTION "Job Status Protobuf Library")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_STANDARD 11)
set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

SET(PROTOBUF_INCLUDE_DIR "error" CACHE STRING "The path to the protobuf include files")
SET(LOWLEVEL_INCLUDE_DIR "error" CACHE STRING "The path to the includes from HSS LowLevel")
SET(THIRD_PARTY_INCLUDE_DIR "error" CACHE STRING "The path to third party include files")
SET(BOOST_INCLUDE_DIR "error" CACHE STRING "The path to boost include files")

if (MSVC)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DNOMINMAX -DPROTOBUF_USE_DLLS -D_CRT_SECURE_NO_WARNINGS /Zc:__cplusplus")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /MD -D_AFXDLL")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} /MDd -D_AFXDLL /W4")
else ()
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wall")
endif (MSVC)

add_library(protostatus STATIC
    cpp/status.pb.cc
    cpp/ProtoStatus.cpp
)

target_include_directories(protostatus
    PUBLIC ${PROTOBUF_INCLUDE_DIR}
    PUBLIC ${LOWLEVEL_INCLUDE_DIR}
    PUBLIC ${THIRD_PARTY_INCLUDE_DIR}
    PUBLIC ${BOOST_INCLUDE_DIR}
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include
)

set_target_properties(protostatus PROPERTIES VERSION ${CMAKE_PROJECT_VERSION})
set_target_properties(protostatus PROPERTIES SOVERSION ${CMAKE_PROJECT_VERSION_MAJOR})
set_target_properties(protostatus PROPERTIES DEFINE_SYMBOL "")

set_target_properties(protostatus PROPERTIES
    PUBLIC_HEADER include/status.pb.h
    PUBLIC_HEADER include/ProtoStatus.h
)
