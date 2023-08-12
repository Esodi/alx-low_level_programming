#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - returns a characters
 * @size: size of array
 * @c: a character value
 * Return: 0 (Success)
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	a = malloc(size * sizeof(char));
	if (size == 0)
		return (NULL);
	if (a != NULL)
	{
		i = 0;
		while (i < size)
		{
			a[i] = c;
			i++;
		}
	}
	return (a);
}
