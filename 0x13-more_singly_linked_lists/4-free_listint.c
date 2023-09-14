#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: head.
 */
void free_listint(listint_t *head)
{
	listint_t *x;

	while (head)
	{
		x = head->next;
		free(head);
		head = x;
	}
}
