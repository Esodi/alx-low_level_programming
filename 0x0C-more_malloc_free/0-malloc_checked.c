#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function that allocate memory
 * @b: positive integer
 * Return: Allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *mal = malloc(b);
	if (mal == NULL)
	{
		exit (98);
	}
	else
		return (mal);
}
