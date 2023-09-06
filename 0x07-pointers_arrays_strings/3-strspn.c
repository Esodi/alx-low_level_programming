#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: string.
 * @accept: string.
 * Return: number of bytes in the initial segment of s.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, len = 0, j;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				i++;
			}
		}
		i++;
	}
	return (len);
}

