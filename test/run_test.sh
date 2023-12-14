#!/bin/bash

../bin/my_program

file='./output.txt'
read line < $file
if [ "$line" = "PASSWORD" ]; then
    echo PASSED
    exit 0
else
    echo FAILED
    exit 1
fi

