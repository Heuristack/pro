#!/bin/bash

cd ~/repositories/llvm.git; pushd . &> /dev/null;

tools=(clang)
for e in ${tools[@]}; do
    cd tools/$e
    echo "Updating $e ..."
    git pull
    echo ""
    cd - &> /dev/null
done

projects=(libcxx libcxxabi compiler-rt openmp test-suite)
projects=(libcxx libcxxabi test-suite)
for e in ${projects[@]}; do
    cd projects/$e
    echo "Updating $e ..."
    git pull
    echo ""
    cd - &> /dev/null
done

popd &> /dev/null

