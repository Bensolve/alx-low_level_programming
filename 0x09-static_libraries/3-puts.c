#include "main.h"

/**
 *  _puts - prints a string, followed by a new line, to stdout
 * @str: a pointer the string we want to print
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	for (; *str != '\0'; ++str)
		_putchar(*str);
	_putchar('\n');
}
