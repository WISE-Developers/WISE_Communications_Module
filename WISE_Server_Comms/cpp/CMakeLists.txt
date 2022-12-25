cmake_minimum_required (VERSION 3.12)
project (ServerComms VERSION ${WISE_VERSION} DESCRIPTION "Server Side MQTT Communication")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_STANDARD 11)
set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

if (MSVC)
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /MT")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} /MTd /W4")
else ()
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wall")
endif (MSVC)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D_NO_MFC")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -D_DEBUG -DDEBUG")

add_library(servercomms STATIC
    file_upload.pb.cc
    validation_report.pb.cc
)

target_include_directories(servercomms PUBLIC
    ${PROTOBUF_INCLUDE_DIR}
    ${TYPES_INCLUDE_DIR}
)

set_target_properties(servercomms PROPERTIES VERSION ${WISE_VERSION})
set_target_properties(servercomms PROPERTIES SOVERSION ${WISE_SO_VERSION})
set_target_properties(servercomms PROPERTIES DEFINE_SYMBOL "")

set_target_properties(servercomms PROPERTIES
    PUBLIC_HEADER file_upload.pb.h
    PUBLIC_HEADER server_comms.pb.h
)

configure_file(ServerComms.pc.in ServerComms.pc @ONLY)

install(FILES ${CMAKE_BINARY_DIR}/ServerComms.pc DESTINATION ${CMAKE_INSTALL_DATAROOTDIR}/pkgconfig)
install(TARGETS servercomms DESTINATION /usr/lib)

set(SERVER_COMMS_INCLUDE_DIRS
        ${PROJECT_SOURCE_DIR}
    CACHE INTERNAL "${PROJECT_NAME}: Include Directories" FORCE)

if (WISE_OUTPUT_DIRECTORY)
if (MSVC)
add_custom_command(TARGET servercomms POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy
            ${CMAKE_CURRENT_BINARY_DIR}/servercomms.lib
            ${WISE_OUTPUT_DIRECTORY}/${CMAKE_BUILD_TYPE}
)
else ()
add_custom_command(TARGET servercomms POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy
            ${CMAKE_CURRENT_BINARY_DIR}/libservercomms.a
            ${WISE_OUTPUT_DIRECTORY}/${CMAKE_BUILD_TYPE}
)
endif ()
endif ()
