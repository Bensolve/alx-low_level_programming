#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: a concatenated string
 * otherwise NULL
 */
char *str_concat(char *s1, char *s2)
{
	int s1_len, s2_len, count;
	char *cat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_len = 0;
	while (s1[s1_len] != '\0')
		s1_len++;

	s2_len = 0;
	while (s2[s2_len] != '\0')
		s2_len++;

	cat = (char *)malloc((s1_len + s2_len + 1) * sizeof(char));

	if (cat == NULL)
		return (NULL);
	for (count = 0; count < s1_len; count++)
		cat[count] = s1[count];
	for (count = 0; count < s2_len; count++)
		cat[s1_len + count] = s2[count];
	cat[s1_len + s2_len] = '\0';

	return (cat);
}


