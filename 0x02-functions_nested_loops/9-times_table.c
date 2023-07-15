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
			if (r  == 0)
			{
				_putchar(r + '0');
			}
			if ((r * c) < 10 && r != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + (c * r));
			}
			else if ((c * r) >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(((c * r) / 10) + '0');
				_putchar(((c * r) % 10) + '0');
			}
			r++;
		}
		_putchar('\n');
		c++;
	}
}
