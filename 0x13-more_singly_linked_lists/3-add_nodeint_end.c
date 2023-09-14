#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: head.
 * @n: int value.
 * Return: new node at end.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *x = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	(*new).n = n;
	(*new).next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while ((*x).next)
	{
		x = (*x).next;
	}
	x->next = new;
	return (new);
}
