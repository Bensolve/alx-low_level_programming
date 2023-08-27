#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: head node
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nums;

	nums = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0](nil)\n");
		else
			printf("[%lu] %s\n", nums, h->str);
		h = h->next;
		nums++;
	}
	return (nums);
}
