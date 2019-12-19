add_subdirectory(cocoa)
add_subdirectory(3rd)
add_subdirectory(Nyquist)

add_executable(${PROJECT_NAME} main.cc)
target_link_libraries(${PROJECT_NAME}
		${PROJECT_NAME}-lib
		${CMAKE_BINARY_DIR}/libAudioExtention.a
		${CMAKE_BINARY_DIR}/libNyquist.a
		asound
		pthread)
