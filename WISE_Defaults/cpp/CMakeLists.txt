cmake_minimum_required (VERSION 3.12)
project (DefaultsFile VERSION ${WISE_VERSION} DESCRIPTION "Server Side MQTT Communication")

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

add_library(defaultsfile STATIC
    wise_defaults.pb.cc
    wise_config.pb.cc
)

target_include_directories(defaultsfile PUBLIC
    ${PROTOBUF_INCLUDE_DIR}
    ${TYPES_INCLUDE_DIR}
)

set_target_properties(defaultsfile PROPERTIES VERSION ${WISE_VERSION})
set_target_properties(defaultsfile PROPERTIES SOVERSION ${WISE_SO_VERSION})
set_target_properties(defaultsfile PROPERTIES DEFINE_SYMBOL "")

set_target_properties(defaultsfile PROPERTIES
    PUBLIC_HEADER wise_defaults.pb.h
    PUBLIC_HEADER wise_config.pb.h
)

configure_file(DefaultsFile.pc.in DefaultsFile.pc @ONLY)

install(FILES ${CMAKE_BINARY_DIR}/DefaultsFile.pc DESTINATION ${CMAKE_INSTALL_DATAROOTDIR}/pkgconfig)
install(TARGETS defaultsfile DESTINATION /usr/lib)

set(DEFAULTS_FILE_INCLUDE_DIRS
        ${PROJECT_SOURCE_DIR}
    CACHE INTERNAL "${PROJECT_NAME}: Include Directories" FORCE)

if (WISE_OUTPUT_DIRECTORY)
if (MSVC)
add_custom_command(TARGET defaultsfile POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy
            ${CMAKE_CURRENT_BINARY_DIR}/defaultsfile.lib
            ${WISE_OUTPUT_DIRECTORY}/${CMAKE_BUILD_TYPE}
)
else ()
add_custom_command(TARGET defaultsfile POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy
            ${CMAKE_CURRENT_BINARY_DIR}/libdefaultsfile.a
            ${WISE_OUTPUT_DIRECTORY}/${CMAKE_BUILD_TYPE}
)
endif ()
endif ()
