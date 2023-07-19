#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 -  prints 10 times the alphabet, in lowercase
 *  followed by a new line
 */
void print_alphabet_x10(void)
{
	int start, finish;

	for (start = 0; start < 10; ++start)
	{
		for (finish = 97; finish <= 122; ++finish)
			_putchar(finish);
		_putchar('\n');
	}
}
