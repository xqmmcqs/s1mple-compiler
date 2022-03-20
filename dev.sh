#!/bin/bash
docker build . -t s1mple-compiler
docker run --rm -it --mount type=bind,source="$(pwd)"/,target=/usr/src/app/ s1mple-compiler