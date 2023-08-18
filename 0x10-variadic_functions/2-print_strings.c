#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print the texts
 * @separator: as the name suggest
 * @n: number of texts passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list words;

	if (separator != NULL)
	{
		va_start(words, n);
		for (i = 0; i < n; i++)
		{
			const char *word = va_arg(words, const char *);

			if (word == NULL)
				printf("(nil)");
			else
				printf("%s", word);
			if (i < (n - 1))
				printf("%s", separator);
		}
		va_end(words);
		printf("\n");
	}
}
