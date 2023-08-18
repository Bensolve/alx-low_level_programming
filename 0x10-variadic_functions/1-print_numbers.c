#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - display of numbers in a line
 * @separator: used to seperate numebers on the line
 * @n: number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, x;
	va_list nums;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(nums, int);
		printf("%d", x);
		if (i < (n - 1) && separator !=  NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(nums);
}
