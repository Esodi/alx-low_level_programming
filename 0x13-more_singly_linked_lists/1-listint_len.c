#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: head.
 * Return: number of elements in a list.
 */
size_t listint_len(const listint_t *h)
{
	size_t k = 0;

	for (; h != NULL; k++)
	{
		h = (*h).next;
	}
	return (k);
}
