#include "holberton.h"
#include <stdio.h>

/**
*print_array - function that prints n elements of an array of integers
*@a: pointer piont to integer
*@n: number of elementsof the array to be printed
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);

		if (i != (n - 1))
			printf(", ");

	}
	printf("\n");

}
