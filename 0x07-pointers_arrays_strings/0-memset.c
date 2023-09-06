#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: pointer to the memory area.
 * @b: constant byte.
 * @n: amount.
 * Return: constant byte.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}
	return (s);
}