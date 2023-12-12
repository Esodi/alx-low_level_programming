#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t.
 * @head: double pointer.
 * @str: constant char.
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *s = strdup(str);
	list_t *new;
	list_t *tmp = *head;
	size_t c = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = s;
	if (new->str == NULL)
		return (NULL);
	while (s[c] != '\0')
	{
		c++;
	}
	new->len = c;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new;

	return (new);
}


