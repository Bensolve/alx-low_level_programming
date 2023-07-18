#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase,
 * followed by a new line.
 */
void print_alphabet(void)
{
	int start;

	for (start = 97; start <= 122; ++start)
		_putchar(start);
	_putchar('\n');
}
