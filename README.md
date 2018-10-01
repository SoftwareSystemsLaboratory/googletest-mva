# Google Test Minimal Example

This is a minimal example to show how to create an app with actual unit tests.

This is built on CMake, which seems to be the preferred way to work with Google Test.

# Prerequisites

Install Google Test. I'm only covering Ubuntu but OS X + Homebrew should work, too.

```
sudo apt install googletest
cd /usr/src/googletest
sudo cmake .
sudo make
sudo make install

```

This should result in everything you need for unit testing being installed to `/usr/local`.

# Now you can try building and running the starter app and tests.


