#include <stdio.h>
#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * @dest: destination string
 * @src: source of the string
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, c;

	i = 0;
	while (*(src + i) != '\0')
		i++;
	for (c = 0; c < i; c++)
		dest[c] = src[c];
	dest[i] = '\0';
	return (dest);
}
