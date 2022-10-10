#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initializes dog info
 * @d: struct defining dof structure
 * @name: name of dog
 * @age: dog's age
 * @owner: dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
