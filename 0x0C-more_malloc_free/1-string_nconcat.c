#include "main.h"

/**
 * _strlen - checks  the lenght of a string
 * @s: string to be checked
 *
 * Return the lenght of a string
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	for (; *s != '\0'; ++s)
		len++;
	return (len);
}

/**
 * string_nconcat - concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 * @n: to check the lenght
 *
 * Return: s1
 * Null if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int  s1_len, s2_len, lens, i, j;
	unsigned int total;
	char *res;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1_len = _strlen(s1);
	s2_len = _strlen(s2);

	lens = n;
	total = s1_len + s2_len;

	if (lens >= s2_len)
	{
		lens = s2_len;
		res = malloc(sizeof(char) * (total + 1));
	}
	else
		res = malloc(sizeof(char) * (s1_len + n + 1));

	if (res == NULL)
		return (NULL);
	for (i = 0; i < s1_len; i++)
		res[i] = s1[i];
	for (j = 0; j < lens; j++)
		res[i++] = s2[j];
	res[i++] = '\0';

	return (res);
}

