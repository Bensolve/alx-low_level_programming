#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9
 * followed by a new line.
 * do not print 2 and 4
 */
void print_most_numbers(void)
{
	int start;

	for (start = 48; start <= 57; ++start)
	{
		if (start == 50 || start == 52)
		{
		}
		else
			_putchar(start);
	}
	_putchar('\n');
}
