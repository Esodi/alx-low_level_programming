#include "hash_tables.h"

/**
 * hash_table - function that creates a hash table.
 * @size: the size of the array.
 * Return: a pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ptr;

	ptr = malloc(sizeof(hash_table_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->size = size;
	ptr->array = NULL;

	return (ptr);
}
