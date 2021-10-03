FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
  countbits_tests
  countbits_tests.cc
  countbits.c
)
target_link_libraries(
  countbits_tests
  gtest_main
)

include(GoogleTest)
gtest_discover_tests(countbits_tests)
