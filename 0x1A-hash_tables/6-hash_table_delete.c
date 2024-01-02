#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht:  is the hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *tmp, *c;

	for (i = 0; i < ht->size; i++)
	{
		c = ht->array[i];
		while (c)
		{
			tmp = c;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			c = c->next;
		}
	}
	free(ht->array);
	ht->size = 0;
	free(ht);
}
