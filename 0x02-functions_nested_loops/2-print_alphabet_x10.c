#include "main.h"

/**
*print_alphabet_x10 - prints lowercase alphabet 10 times
*int_alphabet_x10 - returns int value
*Return: Always 0.
*/
void print_alphabet_x10(void)
{
	char c;
	int i;

	i = 0;
	while (i < 10)
	{
		c = 'a';
		while (ch <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
