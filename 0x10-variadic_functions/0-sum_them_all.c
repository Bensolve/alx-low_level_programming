#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of al  numbers
 * @n: the number of arguments
 * @...: the list of arguments
 *
 * Return: the sum of arguments
 * If n == 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i, total, x;

	total = 0;
	if (n == 0)
		return (0);

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(nums, int);
		total = total + x;
	}

	va_end(nums);
	return (total);
}
