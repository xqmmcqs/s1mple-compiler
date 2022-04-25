#!/bin/bash
./build/s1mple-compiler $1
bc_filename=`echo $1 | sed 's/\.pas$/.bc/'`
exec_filename=`echo $1 | sed 's/\.pas$//'`
clang $bc_filename -o $exec_filename
