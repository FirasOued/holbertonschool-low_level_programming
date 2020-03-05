#include <stdlib.h>

/**
*array_range -function that creates an array of integers
*@min: the startin integer
*@max: the ending integer
*Return: pointer point to array
*/


int *array_range(int min, int max)
{
	int i;
	int *p;

	p = malloc(sizeof(*p) * (max - min + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < (max - min + 1); i++)
		p[i] = min + i;

	if (min > max)
		return (NULL);

	return (p);
}
