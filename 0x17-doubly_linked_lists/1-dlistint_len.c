#include "lists.h"

/**
 * dlistint_len - number of elements in a linked dlistint_t .
 * @h: head.
 * Return: the number of elements in a linked.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	size_t c = 0;

	if (h == NULL)
	{
		c++;
		return (c);
	}
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
		c++;
	}
	c++;
	return (c);
}
