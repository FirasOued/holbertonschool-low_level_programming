#include "dog.h"

/**
*init_dog - function that intialize a variable of type struc dog
*@d: pointer point to struct dog
*@name: dog's name (pointer)
*@age: dog's age (float)
*@owner: dog's owner (poniter)
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
