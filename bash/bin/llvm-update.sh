#!/bin/bash

llvmgit="http://llvm.org/git"

cd ~/repositories; pushd . &> /dev/null;
if [ -d llvm.git ]; then
    cd llvm.git;
    echo "Updating llvm ..."
    git pull
    echo ""
else
    echo "Cloning llvm ..."
    git clone $llvmgit/llvm.git llvm.git
    echo ""
    cd llvm.git;
fi

tools=(clang)
for e in ${tools[@]}; do
if [ -d tools/$e ]; then
    cd tools/$e
    echo "Updating $e ..."
    git pull
    echo ""
    cd - &> /dev/null
else
    cd tools
    echo "Cloning $e ..."
    git clone $llvmgit/$e
    echo ""
    cd - &> /dev/null
fi
done

projects=(libcxx libcxxabi test-suite)
projects=(libcxx libcxxabi compiler-rt openmp test-suite)
for e in ${projects[@]}; do
if [ -d projects/$e ]; then
    cd projects/$e
    echo "Updating $e ..."
    git pull
    echo ""
    cd - &> /dev/null
else
    cd projects
    echo "Cloning $e ..."
    git clone $llvmgit/$e
    echo ""
    cd - &> /dev/null
fi
done

popd &> /dev/null

