#include <stdio.h>
#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14
 * , followed by a new line.
 */
void more_numbers(void)
{
	int start, num1;

	for (start = 0; start < 10; ++start)
	{
		for (num1 = 0; num1 <= 14; ++num1)
		{
			if (num1 > 9)
				_putchar((num1 / 10) + '0');
			_putchar((num1 % 10) + '0');
		}
		_putchar('\n');
	}
}
