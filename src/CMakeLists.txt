cmake_minimum_required(VERSION 2.6)

project("googletest-mva")

if (CMAKE_VERSION VERSION_LESS "3.1")
  add_definitions(-std=c++11)
else()
  set(CMAKE_CXX_STANDARD 11)
  set(CMAKE_CXX_STANDARD_REQUIRED ON)
  set(CMAKE_CXX_EXTENSIONS OFF)
endif()

if(LINUX)
  add_compile_options(-DWITH_LINUX)
elseif(APPLE)
  add_compile_options(-DWITH_APPLE) 
else()
  add_compile_options(-DWITH_LINUX)
endif()
 
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
 
add_executable(square_root_app square_root_app.c square_root.c)
target_link_libraries(square_root_app ${GTEST_LIBRARIES} -lpthread -lm)

add_executable(square_root_tests square_root_tests.cc square_root.c)
target_link_libraries(square_root_tests ${GTEST_LIBRARIES} -lpthread -lm)
