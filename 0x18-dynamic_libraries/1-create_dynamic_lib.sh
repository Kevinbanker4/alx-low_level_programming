#!/bin/bash
gcc -fpic -c -Wall -pedantic -Werror -Wextra *.c
gcc -shared -o liball.so *.o
