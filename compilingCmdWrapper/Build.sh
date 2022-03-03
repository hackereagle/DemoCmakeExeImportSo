#!/bin/bash
rm -r build
cmake -E make_directory build
time -p cmake -E chdir build cmake -DCMAKE_BUILD_TYPE=Debug ..
time -p cmake --build build
