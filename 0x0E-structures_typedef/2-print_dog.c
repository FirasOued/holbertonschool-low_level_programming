#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
*print_dog - function that prints elements of struct dog
*@d: poniter ponit to struct dog
*/

void print_dog(struct dog *d)
{
	if (d == 0)
		return;
	else
	{
		if ((*d).name == NULL)
			printf("Name: (nil)\n");

		else
			printf("Name: %s\n", (*d).name);

		printf("Age: %.6f\n", (*d).age);

		if ((*d).owner == NULL)
			printf("Owner: (nil)\n");

		else
			printf("Owner: %s\n", (*d).owner);
	}
}
