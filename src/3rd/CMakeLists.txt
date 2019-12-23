project(AudioExtention C CXX)

file(GLOB_RECURSE SOURCE_C ./*.c)
file(GLOB_RECURSE SOURCE_CC ./*.cc)

list(APPEND ${SOURCE_CC} ${SOURCE_C})

add_library(${PROJECT_NAME} ${SOURCE_CC})
target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR})
