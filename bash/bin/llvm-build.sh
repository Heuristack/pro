#!/bin/bash

cd ~/repositories;
if [ ! -d llvm.build ]; then mkdir llvm.build; fi

cd llvm.build
cmake -DCMAKE_INSTALL_PREFIX=$INSTALL ../llvm
if [ "${INSTALL}" == "" ]; then cmake --build .;
else cmake --build . --target install; fi
cd - &> /dev/null

