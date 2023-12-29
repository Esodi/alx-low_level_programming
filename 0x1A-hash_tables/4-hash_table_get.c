#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: is the hash table you want to look into.
 * @key: is the key you are looking for.
 * Return: the value associated with the element, or NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int ind, size;
	hash_node_t *tmp;
	char *value = NULL;

	size = ht->size;
	ind = key_index((const unsigned char *)key, (unsigned long int)size);
	tmp = ht->array[ind];
	while (tmp->next)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			value = strdup(tmp->value);
			return (value);
		}
		tmp = tmp->next;
	}
	return (value);
}
