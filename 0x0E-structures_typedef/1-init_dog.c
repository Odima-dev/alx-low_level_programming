#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize variables
 * @d: the variable
 * @name: participant
 * @age: participant
 * @owner: participant
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
