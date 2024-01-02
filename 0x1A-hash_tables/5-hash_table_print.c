#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht:  is the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, printed = 0;
	hash_node_t *tmp;

	if (!ht)
	{
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			if (printed)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			printed = 1;
			tmp = tmp->next;
		}
	}
	printf("}\n");
}

