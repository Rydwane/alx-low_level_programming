#!/bin/bash

# Get all .c files in current directory
files=(*.c)

# Create object files for each .c file
for file in ${files[@]}; do
    gcc -c -fPIC $file
done

# Create the dynamic library from the object files
gcc -shared -o liball.so *.o
