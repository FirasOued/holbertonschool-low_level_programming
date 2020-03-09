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
		
	if ((*d).name == NULL)
		printf("Name: (nil)");
	else
		printf("Name: %s\n", (*d).name);

	if ((*d).age == 0)
		printf("Age: (nil)");
	else
		printf("Age: %.1f\n", (*d).age);

	if ((*d).owner == NULL)
		printf("Owner: (nil)");
	else
		printf("Owner: %s\n", (*d).owner);
}
