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
	int d_len, s_len, start;

	d_len = 0;
	while (*dest != '\0')
	{
		dest++;
		d_len++;
	}

	s_len = 0;
	while (*src != '\0')
	{
		src++;
		s_len++;
	}

	for (start = 0; start < s_len; start++)
		dest[d_len + start] = src[start];
	dest[d_len + start] = '\0';
	return (dest);
}
