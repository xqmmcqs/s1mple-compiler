#!/bin/bash
basepath="$(cd `dirname $0`; pwd)"
java -jar "/usr/local/lib/antlr-4.9.3-complete.jar" -Dlanguage=Cpp -no-listener -visitor -o "$basepath/src/runtime" "$basepath/src/Pascal.g4"
mkdir -p build
cd build
cmake ..
cmake --build .