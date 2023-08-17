#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function given as a parameter on
 * each element of an array.
 * @array: collection of elements
 * @size: the size of the collection
 * @action: points to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int start;

	if (action != NULL && array != NULL)
	{
	}
	for (start = 0; start < size; ++start)
		action(array[start]);
}
