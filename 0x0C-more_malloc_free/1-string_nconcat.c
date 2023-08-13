#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - concatinate s2 to s1 according to number of bits given
 * @s1: string one
 * @s2: string two
 * @n: number of bytes
 * Return: Concantinated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conc;
	unsigned int l1 = strlen(s1);
	unsigned int l2 = strlen(s2);

	conc = malloc((l1 + n + 1) * sizeof(char));
	if (conc == NULL)
		return (NULL);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	strcpy(conc, s1);
	if (n >= l2)
		strcat(conc, s2);
	else
		strncat(conc, s2, n);
	return (conc);
}
