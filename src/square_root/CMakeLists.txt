add_executable(square_root_app square_root_app.c square_root.c)
target_link_libraries(square_root_app ${GTEST_LIBRARIES} -lpthread -lm)

add_executable(square_root_tests square_root_tests.cc square_root.c)
target_link_libraries(square_root_tests ${GTEST_LIBRARIES} -lpthread -lm)
