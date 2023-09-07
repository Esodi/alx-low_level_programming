#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: a list itself.
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t k = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		k++;
		h = (*h).next;
	}
	return (k);
}
