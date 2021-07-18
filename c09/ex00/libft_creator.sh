#!/bin/sh
gcc -c -Wall -Werror -Wextra *.c
ar -rcs libft.a *.o
ranlib libft.a
rm *.o
