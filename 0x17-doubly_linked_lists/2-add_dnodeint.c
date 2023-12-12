#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning.
 * @head: the head.
 * @n: data.
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		exit(1);
	}
	new->n = n;
	new->next = *head;
	*head = new; 

	return (new);
}
