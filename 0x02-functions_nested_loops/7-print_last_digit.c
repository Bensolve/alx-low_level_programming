#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 *
 * @last: character to be checked
 * Return: the last digit and value
 * of the last digit
 */
int print_last_digit(int last)
{
	int n;

	n = last % 10;
	if (n < 0)
		n = -1*n;
	_putchar(n + '0');
	return (n);
}
