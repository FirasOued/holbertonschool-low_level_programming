#include <stdio.h>
#include <stdlib.h>


/**
*main - print opcode
*@argc: arguments count
*@argv: arguments value
*Return: 0 on success
*/

int main(int argc, char **argv)
{

	int i, av;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	av = atoi(argv[1]);
	if (av < 0)
	{
		printf("Error\n");
		return (2);
	}

	for (i = 0; i < av; i++)
	{
		printf("%02x", ((unsigned char *)main)[i]);
		printf("\n");
	}
	return (0);
}
