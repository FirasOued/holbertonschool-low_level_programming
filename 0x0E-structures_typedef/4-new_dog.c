#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
*new_dog - function that create a new dog
*@name: dog's name (pointer)
*@age: dog's age (float)
*@owner: dog's owner (po,iter)
*Return: NULL on function fail
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	int lename, lenown, i;
	struct dog *p = NULL;

	lename = 0;
	while (name[lename])
		lename++;

	lenown = 0;
	while (owner[lenown])
		lenown++;

	p = malloc(sizeof(struct dog));
	if (p == NULL)
	{
		return (NULL);
	}
	(*p).name = malloc(lename * sizeof(p->name));

	if ((*p).name == NULL)
	{
		free((*p).name);
		free(p);
		return (NULL);
	}
	(*p).owner = malloc(lenown * sizeof(p->owner));

	if ((*p).owner == NULL)
	{
		free((*p).name);
		free((*p).owner);
		free(p);
		return (NULL);
	}
	for (i = 0; i <= lename ; i++)
		(*p).name[i] = name[i];

	(*p).age = age;

	for (i = 0 ; i < lenown ; i++)
		(*p).owner[i] = owner[i];

	return (p);
}
