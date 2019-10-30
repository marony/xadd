#!/bin/sh

#clang++ -o xadd xadd.cpp

export CC=/usr/bin/clang
export CXX=/usr/bin/clang++

rmdir build
mkdir build
cd build

cmake ..
make

