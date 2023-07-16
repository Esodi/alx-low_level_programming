#include "main.h"

/**
*print_numbers - print digit
*
*Return: Always 0.
*/

void print_numbers(void)
{
	int m;

	for (m = '0'; m <= '9'; m++)
	{
		_putchar(m);
	}
	_putchar('\n');
}
