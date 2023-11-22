# PythonCPPTemplate
This repository is an example of a Python program that uses a C++ function for performance


# Installation

In this directory, run `pip install .`


# Explanations

`src/pythoncpptemplate` is where the main Python codebase is.
This is where should be used all the user-friendlyness of Python.

It defines a function which calls `pythoncpptemplate.cppmodule.computeComplicatedNumber`.

This is a costly function, for which performance matters. It is implemented in C++.

This function is defined from C++ in `cppmodule` together with some CPython code to make Python aware of it.

Look at `cppmodule/computeComplicatedNumber.cpp`, which contains the C++ code that implements the complicated function.

Look at `cppmodule/src/pythonBindings.cpp` which contains the administrative CPython code to make the connection between Python and C++ work. This API is well documented here: https://docs.python.org/3/c-api/.