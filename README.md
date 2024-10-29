# PythonCPPTemplate

This repository is an example of a simple Python program that uses a C++ function for performance


# Installation

In this directory, run `pip install .`, optionally with `-e`.
This will not only package and install the Python package: it will also build with your C++ compiler the
cpp files present in `pythoncpptemplate/cpp`.
This works on Linux provided you have a C++ compiler like GCC installed, it should work on Windows as well but I haven't tried.


# Explanations

`pythoncpptemplate.my_library.my_function` imports and calls a special function `pythoncpptemplate.cpp.computeComplicatedNumber`.

This is a costly function, for which performance could matter. It is implemented in C++.

It is defined from C++ in `pythoncpptemplate/cpp` which also contains some CPython code to make Python aware of it.

Look at `pythoncpptemplate/cpp/src/computeComplicatedNumber.cpp`, which contains the C++ code that implements the complicated function.

Look at `pythoncpptemplate/cpp/src/pythonBindings.cpp` which contains the administrative CPython code to make the connection between Python and C++ work.
This API is well documented here: https://docs.python.org/3/c-api/.