#!/bin/bash
gcc -c 100-main.c -fPIC
gcc -shared 100-main.c -o 100-operations.so
