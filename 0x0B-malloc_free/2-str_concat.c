#include "main.h"
#include <stdio.h>
#include <string.h>

char *str_concat(char *s1, char *s2)
{
	char *cat;
	size_t l1;
	size_t l2;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	l1 = strlen(s1);
	l2 = strlen(s2);
	cat = (char *)malloc((l1 + l2 + 1) * sizeof(char));
	if (cat != NULL)
	{
		strcpy(cat, s1);
		_putchar(' ');
		strcat(cat, s2);
	}
	return cat;
}
