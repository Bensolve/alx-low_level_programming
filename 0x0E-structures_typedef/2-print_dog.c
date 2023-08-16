#include <stdio.h>
#include "dog.h"

/**
 * print_dog - display struct dog variables
 * @d: collection of struct dog variables
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
	}
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age == -1)
		printf("Age: (nil)\n");
	else
		printf("Age: %.1f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);


}