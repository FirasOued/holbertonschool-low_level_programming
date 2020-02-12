#include <stdio.h>
/**
*main - main block
*Description: Print the first 50 fibonacci numbers, starting 1,2
*Numbers must be coma and space separated
*Return: 0
*/

int main(void)
{
	long int n, p, xfib;
	int i;

	n = 1;
	p = 2;
	printf("%li, ", n);
	printf("%li, ", p);

	for (i = 3 ; i <= 50 ; i++)
	{
		xfib = n + p;
		n = p;
		p = xfib;
		if (i != 50)
			printf("%li, ", xfib);
		else
			printf("%li", xfib);

	}
	printf("\n");
	return (0);

}
