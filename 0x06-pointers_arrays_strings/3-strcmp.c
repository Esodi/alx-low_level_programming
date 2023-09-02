#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: str 1
 * @s2: str 2
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int strc;
	int str1 = (int)*s1;
	int str2 = (int)*s2;

	while (*s1 != '\0' && *s2 != '\0')
	{
		strc = str1 - str2;
		s1++;
		s2++;
	}
	return (strc);
}
