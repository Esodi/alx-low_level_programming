#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: head.
 * Return: returns the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *z;
	int i;

	if (!head || !*head)
	{
		return (0);
	}
	i = (*head)->n;
	z = (*head)->next;
	free(*head);
	*head = z;

	return (i);
}
