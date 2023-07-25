#include "main.h"

/**
 * swap_int -  swaps the values of two integers.
 * @a: first character to be swapped.
 * @b: second character to be swapped.
 */
void swap_int(int *a, int *b)
{
	int hold;

	hold = *a;
	*a = *b;
	*b = hold;
}
