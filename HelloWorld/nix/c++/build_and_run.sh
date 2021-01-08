#!/bin/bash
mkdir _build
set -e

echo "---------- running lint ----------"
cpplint --exclude=_build/* --recursive .

cd _build

cmake ..

make

echo "---------- running tests ----------"
make test

echo "---------- running app ----------"
apps/HelloWorld/hello_world