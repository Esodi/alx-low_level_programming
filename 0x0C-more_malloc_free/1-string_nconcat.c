#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: string 1.
 * @s2: string 2.
 * @n: amount.
 * Return: a concatinated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1 = (s1 != NULL) ? strlen(s1) : 0;
	unsigned int l2 = (s2 != NULL) ? strlen(s2) : 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= l2)
		n = l2;
	str = malloc((l1 + n + 1) * sizeof(char));
	if (str != NULL)
	{
		strcpy(str, s1);
		strncat(str, s2, n);
	}

	return (str);
}
	
