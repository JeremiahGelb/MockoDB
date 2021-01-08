echo "---------- running lint ----------"
cpplint --exclude=_build/* --recursive .

cd _build

cmake ..

make

echo "---------- running tests ----------"
test/run_tests

echo "---------- running app ----------"
apps/HelloWorld/hello_world