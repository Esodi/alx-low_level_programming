#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t.
 * @h: head node.
 * Return: the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	size_t c = 0;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		c++;
	}
	return (c);
}
