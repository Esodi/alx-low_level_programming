#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: destination.
 * @src: source.
 * @n: bytes.
 * Return: strncat pointer.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[i] != '\0' && i < n)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}
