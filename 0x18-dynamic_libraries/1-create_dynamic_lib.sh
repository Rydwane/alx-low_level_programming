#!/bin/bash
# Find all .c files in the current directory
files=$(find . -name "*.c")
# Compile all .c files into object files
for file in $files
do
  gcc -c -fPIC $file
done
# Create the dynamic library
gcc -shared -o liball.so *.o
