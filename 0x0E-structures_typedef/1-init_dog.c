#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize struct dog
 * @d: name of structure to be initialised
 * @name: ame of dog
 * @age: age of the dog
 * @owner: owner name of the dog
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
