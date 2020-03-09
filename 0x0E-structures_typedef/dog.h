#ifndef DOG_H
#define DOG_H

/**
*struct dog - data struct
*@name: dog's name (pointer)
*@age: dog's age (float)
*@owner: dog's owner (pointer)
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
