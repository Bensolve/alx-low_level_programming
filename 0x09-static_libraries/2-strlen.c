#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: character to be be checked
 *
 * Return: the length
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	for (; *s != '\0'; ++s)
		len++;
	return (len);
}
