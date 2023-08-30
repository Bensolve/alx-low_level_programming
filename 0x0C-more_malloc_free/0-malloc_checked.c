#include "main.h"

/**
 * malloc_checked -  allocates memory using malloc.
 * @b: number of elements
 * Return: Memory address
 */
void *malloc_checked(unsigned int b)
{
	int *a = malloc(b);

	if (a == NULL)
		exit(98);
	return (a);
}
