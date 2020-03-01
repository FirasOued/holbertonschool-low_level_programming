#include <stdio.h>
#include <stdlib.h>


/**
 * main - a function that multiplies two number
 *@argc: a argument counter
 *@argv: a pointer point to argument string
 *
 * Return: return 0 on success, -1 if failure
 */


int main(int argc, char *argv[])
{
	int num1, num2;


	num1 = num2 = 0;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
		return (0);
	}
	else
		printf("Error\n");

	return (1);
}
