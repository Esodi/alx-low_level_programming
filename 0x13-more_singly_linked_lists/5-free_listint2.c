#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: head.
 */
void free_listint2(listint_t **head)
{
	listint_t *y;

	if (y == NULL)
	{
		return;
	}
	while (*y)
	{
		y = (*y)->next;
		free(*y);
		*y = temp;
	}
	*y = NULL;
}

