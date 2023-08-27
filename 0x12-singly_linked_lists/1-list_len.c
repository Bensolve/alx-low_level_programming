#include "lists.h"

/**
 * list_len -  returns the number of elements in a linked list_t list.
 * @h: head node
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t nums;

	nums = 0;

	while (h != NULL)
	{
		nums++;
		h = h->next;
	}
	return (nums);
}
