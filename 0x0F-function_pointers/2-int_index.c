#include "function_pointers.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * int_index - function that searches for integers
 * @array: pointer to an array
 * @size: array's size
 * @cmp: function pointer
 * Return: 1st index (SUCCESS), -1 (NULL);
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i <= size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
