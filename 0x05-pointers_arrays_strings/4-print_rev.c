#include "main.h"

/**
 * print_rev -  prints a string, in reverse, followed by a new line.
 * @s: pointer to the string we want to print
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	int len;

	len = 0;
	for (; *s != '\0'; ++s)
		len++;
	s--;

	for (; len > 0; len--)
		_putchar(*s);
	_putchar('\n');
}
