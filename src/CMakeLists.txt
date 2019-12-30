add_subdirectory(cocoa)
add_subdirectory(3rd)
add_subdirectory(Nyquist)

add_executable(${PROJECT_NAME} main.cc)
add_dependencies(${PROJECT_NAME} AudioExtention)
add_dependencies(${PROJECT_NAME} Nyquist)
target_link_libraries(${PROJECT_NAME}
		${PROJECT_NAME}-lib
		${CMAKE_BINARY_DIR}/libAudioExtention.a
		${CMAKE_BINARY_DIR}/libNyquist.a
		asound
		pulse
		pulse-simple
		pthread)
