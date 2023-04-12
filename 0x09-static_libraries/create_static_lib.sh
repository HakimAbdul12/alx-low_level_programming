#!/bin/bash
# Get a list of all the .c files in the current directory
C_FILES=$(ls *.c)

# Compile all the .c files into .o files
for FILE in $C_FILES
do
    gcc -c $FILE
done

# Create the static library from the .o files
ar rcs liball.a *.o
