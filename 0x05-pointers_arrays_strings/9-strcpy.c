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
	while (*src != '\0')
		*dest++ = *src++;
	*dest = '\0';
	return (dest);
}
