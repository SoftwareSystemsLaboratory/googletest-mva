FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
  square_root_tests
  square_root_tests.cc
  square_root.c
)
target_link_libraries(
  square_root_tests
  gtest_main
)

include(GoogleTest)
gtest_discover_tests(square_root_tests)
