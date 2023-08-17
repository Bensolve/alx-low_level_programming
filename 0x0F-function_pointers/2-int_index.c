#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - that searches for an integer.
 * @array: collection of elements
 * @size: size of the collection
 * @cmp:  pointer to the function to be used to compare values
 *
 * Return: returns the index of the first element where
 * cmp  function does not return 0
 * return -1 If size <= 0 , If no element matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int num;

	if (array != NULL  && cmp != NULL)
	{
		if (size <= 0)
			return (-1);

		for (num = 0; num < size; num++)
			if (cmp(array[num]))
				return (num);
	}

	return (-1);
}
