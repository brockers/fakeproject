Welcome to fakeproject
===================

This is your initial README file.  Basically you should now
be able to build your fakeproject application by running:

autoreconf --install
./configure
make

...and run your unit tests (found in the test/ directory) with

make check

Couple things about your setup:

1) The default email address in configure.ac should probably be changed.
2) Your c header files should go in the include/ directory.
   (new .h file can then be referenced with #include "include/newfilename.h")
3) Your source code should go in the src/ directory.
   (new source code file names will then need to be added to the SOURCES line
	 in src/Makefile.am.)
4) Any additional libraries you need can be linked in src/Makefile.am
   (See the existing examples in the file.)

Good Luck!
