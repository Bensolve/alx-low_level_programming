#include <stdio.h>
#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: the given number
 *
 * Return: -1 if n is less than 0
 * 1 for factorial of 0
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
