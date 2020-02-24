#include "holberton.h"
#include <stdio.h>

/**
*print_diagsums - Print the sum of the 2 diagonals of a square matrix of int
*@a: 2d array int
*@size: size of array 
*/


void print_diagsums(int *a, int size)
{

	int i, s, sizze;

	i = 0;

	s = 0;
	sizze = size * size;
	while (i < sizze)
	{
		if (i % (size + 1) == 0)
			s += a[i];
		i++;
	}
	printf("%d, ", s);


	s = 0;
	i = 0;

	while (i < sizze)
	{
		if (i % (size - 1) == 0 && i != (sizze - 1) && i != 0)
			s += a[i];
		i++;
	}
	printf("%d\n", s);
}
