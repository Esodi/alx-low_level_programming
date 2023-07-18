#include "main.h"

/**
*print_rev - print string in reverse
*@s: pointer
*Return: Always 0.
*/

void print_rev(char *s)
{
	int i = 0, m;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	for (m = i; m >= 0; m--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
