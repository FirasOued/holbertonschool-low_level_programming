#include <stdlib.h>

/**
*_calloc -function that allocates memory for array
*@nmemb: number of element inside the array
*@size: bytes of each element
*Return: pointer point to array otherwise NULL ( on fail)
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		p[i] = 0;

	return (p);
}
