#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: character to draw diagonal line
 */
void print_diagonal(int n)
{
	int start, old;

	if (n <= 0)
		_putchar('\n');
	for (start = 0; start < n; ++start)
	{
		for (old = 0; old < start; ++old)
			_putchar(32);
		_putchar(92);
		_putchar('\n');
	}
}
