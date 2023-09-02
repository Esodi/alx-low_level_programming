#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: destination.
 * @src: source.
 * @n: bytes.
 * Return: new dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
