#include "lists.h"

/**
 * add_node - function that returns the number of elements.
 * @head: pointer to a pointer
 * @str: A string.
 * Return: new node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int ln = 0;

	new = (list_t *)malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
		return (NULL);
	while (str[ln])
	{
		ln++;
	}
	new->len = ln;
	new->next = *head;
	*head = new;

	return (new);
}
