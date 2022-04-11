#!/bin/bash
filename=`echo $1 | sed 's/\.bc$/.ll/'`
llvm-dis $1 -o $filename