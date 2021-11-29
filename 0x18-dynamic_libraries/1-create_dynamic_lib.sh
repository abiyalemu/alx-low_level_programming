#!/bin/bash
gcc -c -wall -werror -fPIC *.c
gcc -share -o liball.so *.o
