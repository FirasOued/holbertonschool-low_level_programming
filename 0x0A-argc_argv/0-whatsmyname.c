#include <stdio.h>

/**
*main - print the name of the program
*@argc: arguments count
*@argv: pointer point to argument string
*Return: 0
*/

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
