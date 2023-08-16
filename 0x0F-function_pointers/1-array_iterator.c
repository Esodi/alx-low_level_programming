#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_iterator - arrange array in vertical form
 * @array: pointer to array
 * @size: size of array
 * @action: fuction pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
