#include "main.h"

/**
*_strlen - count char
*@s: pointer
*Return: Always 0.
*/

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
