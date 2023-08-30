#include "lists.h"

/**
 * free_listint -  frees a listint_t list.
 * @head: points to head node
 */
void free_listint(listint_t *head)
{
	listint_t *now;

	now = head;
	if (now != NULL)
	{
		head = head->next;
		free(now->next);
		free(now);
	}
}
