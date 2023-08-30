#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: head node
 * @n: data of node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *new, *now;

	new = (listint_t *)malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	now = *head;
	if (now == NULL)
		*head = new;
	else
	{
		while (now->next != NULL)
			now = now->next;
		now->next = new;
	}
	return (*head);
}
