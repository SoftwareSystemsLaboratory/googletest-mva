# Google Test Minimal Example

This is a minimal example to show how to create an C/C++ app with unit tests (via GoogleTest).
This is built on CMake, which seems to be the preferred way to work with Google Test. It might be the preferred
way to manage Makefiles in general. I still remember the days of using make with the GNU autotools. (Not a huge
fan. Way too much complexity.)

It's also a preferred way to learn about automatic compilation, especially for students, since writing Makefiles can be time-consuming, especially when trying to make them work on multiple platforms.

This example is inspired by https://www.ibm.com/developerworks/aix/library/au-googletestingframework.html with the following additions:

- Using C++ only when needed. This allows your app to be 100% C and only use C++ for the unit testing aspect.
- Demonstration of how to use CMake
- Demonstration of how to run the code in a simple Docker (see src/Dockerfile).
- Demonstration of continuous integration using Travis, which shows how to run the unit tests.

# Build Status

[![GoogleTest MVA](https://github.com/SoftwareSystemsLaboratory/googletest-mva/actions/workflows/cmake.yml/badge.svg)](https://github.com/SoftwareSystemsLaboratory/googletest-mva/actions/workflows/cmake.yml)

# Prerequisites

- C/C++ 11 Support
- CMake

# Building

```
cd googletest-mva
cmake -S . -B build
cmake --build build
```

Running the tests from the build directory:

```
./build/bin/square_root_tests

[==========] Running 2 tests from 1 test case.
[----------] Global test environment set-up.
[----------] 2 tests from SquareRootTest
[ RUN      ] SquareRootTest.PositiveNos
[       OK ] SquareRootTest.PositiveNos (0 ms)
[ RUN      ] SquareRootTest.NegativeNos
[       OK ] SquareRootTest.NegativeNos (0 ms)
[----------] 2 tests from SquareRootTest (0 ms total)

[----------] Global test environment tear-down
[==========] 2 tests from 1 test case ran. (0 ms total)
[  PASSED  ] 2 tests.

```
