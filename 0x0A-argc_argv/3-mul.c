#include <stdio.h>
#include <stdlib.h>

/**
*main - progrman that multiplies two numbers
*@argc: argument count
*@argv: pointer point to argument string
*Return: 0
*/

int main(int argc, char *argv[])
{
	int num1, num2, res;

	num1 = 0;
	num2 = 0;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		res = num1 * num2;
		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
	}
	return (1);
}
