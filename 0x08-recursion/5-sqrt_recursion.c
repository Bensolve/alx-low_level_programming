#include "main.h"

/**
 * _sqrt - find the natural square root of a num
 * @n: given number
 * @x: number
 * Return: square root
 */
int _sqrt(int n, int x)
{
	if (n == (x * x))
		return (x);
	else if (n < (x * x))
		return (-1);
	else
		return (_sqrt(n, x + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: given number
 *
 * Return: square root of a number
 * -1 f n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
