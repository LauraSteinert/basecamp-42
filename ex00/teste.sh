#!/bin/sh

NAME=rush03;
gcc main.c ft_putchar.c $NAME.c -o $NAME; 

for x in 1 2 3 4 5 6 7 8 9; do
	for y in 1 2 3 4 5 6 7 8 9; do
		./$NAME $x $y > ./results/$NAME/$x$y.txt
	done
done