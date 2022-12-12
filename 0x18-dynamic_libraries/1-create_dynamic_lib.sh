#!/bin/bash
gcc *.c -c -fPIC
gcc -Wall -pedantic -Werror -Wextra *.o -shared -o liball.so
export LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH
