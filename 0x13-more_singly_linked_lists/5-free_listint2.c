#include "lists.h"

/**
 * free_listint2 - that frees a listint_t list.
 * @head: head pointer
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *now, *next;

	if (head == NULL)
		return;

	now = *head;
	while (now != NULL)
	{
		next = now->next;
		free(now);
		now = next;
	}
	*head = NULL;
}
