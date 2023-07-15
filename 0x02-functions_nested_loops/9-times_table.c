#include "main.h"

/**
*times_table - 9 times table
*
*Return: Always 0.
*/
void times_table(void)
{
	int c, r;

	c = 0;
	while (c < 10)
	{
		r = 0;
		while (r < 10)
		{
			_putchar(((c * r) / 10) + '0');
			_putchar(((c * r) % 10) + '0');
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			r++;
		}
		_putchar('\n');
		c++;
	}
}
