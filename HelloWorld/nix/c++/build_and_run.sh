#!/bin/bash
mkdir _build
set -e

echo "---------- running lint ----------"
cpplint --exclude=_build/* --recursive .

cd _build

cmake ..

make

echo "---------- running tests ----------"
CTEST_OUTPUT_ON_FAILURE=1 make test

echo "---------- running app ----------"
apps/HelloWorld/hello_world