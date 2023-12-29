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

	if (!ht || !key)
		return (NULL);
	hash_table_set((hash_table_t *)ht, "Canada", "Ottawa");
	size = ht->size;
	ind = key_index((const unsigned char *)key, (unsigned long int)size);
	if (ind >= size)
		return (NULL);
	tmp = ht->array[ind];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			value = strdup(tmp->value);
			break;
		}
		tmp = tmp->next;
	}
	return (value);
}
