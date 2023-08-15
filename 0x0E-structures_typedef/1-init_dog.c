#include <stdio.h>
#include "dog.h"

/**
 * init_dog - t initialize a variable of type struct dog
 * @d: instance of struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
	}
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
