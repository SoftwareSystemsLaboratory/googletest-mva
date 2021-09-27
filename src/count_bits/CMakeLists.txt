add_executable(countbits_app countbits_app.c countbits.c)

add_executable(countbits_tests countbits_tests.cc countbits.c)
target_link_libraries(countbits_tests ${GTEST_LIBRARIES} -lpthread -lm)
