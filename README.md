C macros
========

A collection of random, more or less useful C preprocessor macros.

## Usage

This repository can be used either as a library of includes or as a reference when trying to
implement a specific macro.

A lot of the macros depend on `__VA_OPT__` support. This has been added to the standard in C++20 but
is also available in gcc and clang for C.

## Development

There are two directories in this repository:
* `src/` This directory is for all the code of the generic implementations. 
* `tests/` This directory contains all the tests for all implementations.

