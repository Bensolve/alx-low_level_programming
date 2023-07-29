#include "main.h"

/**
 * *_strcat - concatenates two string
 * @dest: first string and destination of concatination
 * @src: the second string to add to dest
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int d_len, s_len;

	d_len = 0;
	while (*dest != '\0')
	{
		d_len++;
	}

	s_len = 0;
	while (*src != '\0')
	{
		dest[d_len] = src[s_len];
		d_len++;
		s_len++;
	}
	return (dest);
}
