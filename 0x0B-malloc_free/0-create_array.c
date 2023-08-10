#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars, with a specific char
 * @size: size of the array
 * @c: char to be initilizied in the array
 *
 * Return: NULL if size is equal to zero
 * a pointer to the array, if it works or
 * NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *new = (char *)malloc(size * sizeof(char));

	if (new == NULL)
		return (NULL);
	for (i = 0; i < size; ++i)
		new[i] = c;
	return (new);
}

