#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: list_t
 * Return: size_t.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
		{
			printf("[%u] %s", h->len, h->str);
			count++;
			h = h->next;
		}
		
	}
	return (count);
}
