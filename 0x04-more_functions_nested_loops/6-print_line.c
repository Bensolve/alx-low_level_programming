#include <stdio.h>
#include "main.h"

/**
 * print_line -  draws a straight line in the terminal.
 * @n: character used to draw a straight line
 */
void print_line(int n)
{
	int start;

	for (start = 0; start < n; ++start)
	{
		_putchar(95);

		if (n <= 0)
			_putchar('\n');
	}
	_putchar('\n');
}
