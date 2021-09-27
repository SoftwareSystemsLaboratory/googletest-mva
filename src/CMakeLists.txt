project(GoogleTestMVA)

cmake_minimum_required(VERSION 2.8.12)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
 
add_executable(square_root_app square_root_app.c square_root.c)
target_link_libraries(square_root_app ${GTEST_LIBRARIES} -lpthread -lm)

add_executable(square_root_tests square_root_tests.cc square_root.c)
target_link_libraries(square_root_tests ${GTEST_LIBRARIES} -lpthread -lm)

add_executable(countbits_app countbits_app.c countbits.c)

add_executable(countbits_tests countbits_tests.cc countbits.c)
target_link_libraries(countbits_tests ${GTEST_LIBRARIES} -lpthread -lm)
