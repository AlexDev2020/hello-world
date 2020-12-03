cmake_minimum_required( VERSION 3.16 )

project( hello )

aux_source_directory( ${CMAKE_CURRENT_SOURCE_DIR} SOURCES )

add_library( ${PROJECT_NAME} STATIC ${SOURCES} )
