#!/bin/bash
gcc -fPIC -shared -o custom-gm.so lottery.c -ldl
LD_PRELOAD=./custom-gm.so ./gm