#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a copy of string in a new memory allocation
 * @str: contains the original string
 *
 * Return: NULL if str is equal to NULL or
 * low memory space
 * otherwise return a copy of the original string
 */
char *_strdup(char *str)
{
	int i, x;
	char *copie;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	copie = (char *)malloc(sizeof(char) * (i + 1));

	if (str == NULL || copie == NULL)
		return (NULL);
	for (x = 0; x < i; ++x)
	{
		copie[x] = str[x];
	}
	copie[x] = '\0';

	return (copie);
}
