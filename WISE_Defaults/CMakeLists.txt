cmake_minimum_required (VERSION 3.13)
if (MSVC)
set (CMAKE_SYSTEM_VERSION 10.0.22000.0)
endif (MSVC)
project (DefaultsFile VERSION ${PROMETHEUS_VERSION} DESCRIPTION "Server Side MQTT Communication")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_STANDARD 11)
set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

SET(PROTOBUF_INCLUDE_DIR "error" CACHE STRING "The path to the protobuf include files")
SET(LOWLEVEL_INCLUDE_DIR "error" CACHE STRING "The path to the includes from HSS LowLevel")

if (MSVC)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DNOMINMAX -DPROTOBUF_USE_DLLS -D_CRT_SECURE_NO_WARNINGS /Zc:__cplusplus")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /MD -D_AFXDLL")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} /MDd -D_AFXDLL /W4")
else ()
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wall")
endif (MSVC)

add_library(defaultsfile STATIC
    cpp/wise_defaults.pb.cc
    cpp/wise_config.pb.cc
)

target_include_directories(defaultsfile
    PUBLIC ${PROTOBUF_INCLUDE_DIR}
    PUBLIC ${LOWLEVEL_INCLUDE_DIR}
)

set_target_properties(defaultsfile PROPERTIES VERSION ${CMAKE_PROJECT_VERSION})
set_target_properties(defaultsfile PROPERTIES SOVERSION ${CMAKE_PROJECT_VERSION_MAJOR})
set_target_properties(defaultsfile PROPERTIES DEFINE_SYMBOL "")

set_target_properties(defaultsfile PROPERTIES
    PUBLIC_HEADER cpp/wise_defaults.pb.h
    PUBLIC_HEADER cpp/wise_config.pb.h
)
