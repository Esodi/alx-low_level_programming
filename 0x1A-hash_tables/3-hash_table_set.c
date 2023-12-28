#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: is the hash table you want to add or update the key/value to.
 * @key: is the key.
 * @value: is the value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int size, indx, code;
	hash_node_t *new;

	if (key == NULL || ht == NULL)
	{
		return (0);
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	size = ht->size;
	code = hash_djb2((const unsigned char *)key);
	indx = code % size;
	new->key = strdup(key);
	if (new->value != NULL)
	{
		free(new->value);
		new->value = strdup(value);
	}
	else
		new->value = strdup(value);
	if (ht->array[indx] == NULL)
	{
		ht->array[indx] = new;
		new->next = NULL;
		return (1);
	}
	new->next = ht->array[indx];
	ht->array[indx] = new;

	return (1);
}
