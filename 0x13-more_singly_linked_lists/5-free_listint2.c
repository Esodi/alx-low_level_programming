#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: head.
 */
void free_listint2(listint_t **head)
{
	listint_t *y;

	if (head == NULL)
	{
		return;
	}
	while (*head)
	{
		y = (*head)->next;
		free(*head);
		*head = y;
	}
	*head = NULL;
}

