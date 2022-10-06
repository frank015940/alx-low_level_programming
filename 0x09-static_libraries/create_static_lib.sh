#!/bin/bash
gcc -Wall -pedantic -Werror -Werror-c *.c
ar rc liball *c.o
