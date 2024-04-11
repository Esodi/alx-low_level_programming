#include "search_algos.h"

/**
 * binary_search - searches for a value using the Binary search algorithm.
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value:  value to search for.
 * Return: index where value is located.
 */
int binary_search(int *array, size_t size, int value)
{
	int high = size - 1;
	int low = 0;
	int mid, i;

	if (size == 0 || array == NULL)
	{
		return (-1);
	}
	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i == high)
			{
				printf("%d\n", array[i]);
			}
			else
				printf("%d, ", array[i]);
		}
		mid = low + (high - low) / 2;
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] > value)
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
	}
	return (-1);
}
