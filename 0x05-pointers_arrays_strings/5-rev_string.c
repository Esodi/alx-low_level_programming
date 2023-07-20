#include "main.h"

/**
*rev_string - reverse a string
*@s: pointer to char
*Return: Always 0.
*/

void rev_string(char *s)
{
	char temp = s[0];
	int i;
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		len--;
		temp = s[i];
		s[i] = s[len];
		s[len] = temp;
	}
}
