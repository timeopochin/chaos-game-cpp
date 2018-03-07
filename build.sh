#!/bin/bash

rm build/*

cp src/* build
cp include/* build

cd build
qmake -project
echo "QT += widgets" >> build.pro
qmake build.pro
make

cd ..
cp build/build bin/output

./bin/output
