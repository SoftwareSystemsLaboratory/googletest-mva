# Google Test Minimal Example

This is a minimal example to show how to create an app with actual unit tests.
This is built on CMake, which seems to be the preferred way to work with Google Test.

# Prerequisites


## Linux instructions

```
sudo apt install build-essential cmake
git clone https://github.com/google/googletest
cd googletest
mkdir build
cd build
cmake ..
make
sudo make install

```

## OS X / Homebrew Instructions

```
brew install cmake
git clone https://github.com/google/googletest
cd googletest
mkdir build
cd build
cmake ..
make
make install
```

Once you ahve built googletest, you can run cmake in this folder to create the app and test executables.

```
cd googletest-mva
mkdir build
cmake ..
cd build
make
./square_root_app
./square_root_tests

```
