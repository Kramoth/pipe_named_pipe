#!/bin/bash

BASEDIR=$(dirname "$0")

mkdir $BASEDIR/build
mkdir $BASEDIR/bin

cd $BASEDIR/build 

cmake ../fork
make
cp fork_example ../bin
rm -rf *

cmake ../pipe
make
cp pipe ../bin
rm -rf *

cmake ../namedPipe
make
cp writer ../bin
cp reader ../bin
rm -rf *

cd ..
rm -rf build