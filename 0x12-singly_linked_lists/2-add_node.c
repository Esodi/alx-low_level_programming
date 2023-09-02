#include "lists.h"

/**
 * add_node - function that returns the number of elements.
 * @head: pointer to a pointer
 * @str: A string.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new, ln = 0;

	new = (list_t *)malloc(sizeof(list_t));
	new->str = strdup(str);
	while (head != NULL)
	{
		ln++;
	}
	new->len = ln;
	new->next = *head;

	*head = new;

	return(new);
}
