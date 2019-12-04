project(Cocoa-Editor CXX)

file(GLOB_RECURSE SOURCE ./*.cc)
list(REMOVE_ITEM ${SOURCE} main.cc)

add_library(${PROJECT_NAME}-lib ${SOURCE})
target_include_directories(${PROJECT_NAME}-lib PUBLIC ${$PROJECT_SOURCE_DIR})
set_target_properties(${PROJECT_NAME}-lib PROPERTIES OUTPUT_NAME ${PROJECT_NAME})

add_executable(${PROJECT_NAME} main.cc)
target_link_libraries(${PROJECT_NAME} ${PROJECT_NAME}-lib)
