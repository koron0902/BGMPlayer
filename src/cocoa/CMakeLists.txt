file(GLOB_RECURSE SOURCE ./*.cc)
#file(GLOB_RECURSE LIBNYQUIST ${CMAKE_BINARY_DIR}/bin/*.a)

add_library(${PROJECT_NAME}-lib ${SOURCE})
#target_link_libraries(${PROJECT_NAME}-lib
#				${LIBNYQUIST})
target_include_directories(${PROJECT_NAME}-lib PUBLIC ${$PROJECT_SOURCE_DIR}/src)
#target_include_directories(${PROJECT_NAME}-lib PUBLIC ${$PROJECT_SOURCE_DIR}/3rd/nyquist/include/libnyquist)
set_target_properties(${PROJECT_NAME}-lib PROPERTIES OUTPUT_NAME ${PROJECT_NAME})
