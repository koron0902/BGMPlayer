project(Nyquist CXX)
file(GLOB_RECURSE SOURCES_C ./*.c)
file(GLOB_RECURSE SOURCES_CC ./*.cc)

include_directories(${PROJECT_SOURCE_DIR})

list(APPEND ${SOURCES_CC} ${SOURCES_C})

add_library(${PROJECT_NAME} STATIC ${SOURCES_CC})
target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/3rd)

