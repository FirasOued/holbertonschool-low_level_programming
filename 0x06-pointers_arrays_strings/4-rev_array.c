#include "holberton.h"

/**
*reverse_array - function that reverses the content
*@a: pointer point to an array
*@n: elements of the array
*/

void reverse_array(int *a, int n)
{
	int i;
	int b;

	n--;
	for (i = 0 ; i <= n ; i++)
	{
		b = a[n];
		a[n] = a[i];
		a[i] = b;
		n--;
	}
}
