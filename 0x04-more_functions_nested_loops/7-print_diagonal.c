#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: number of \ to be printed
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				if (j < i)
					_putchar(' ');
				else
					_putchar(92);
			}
			_putchar('\n');
		}
	}
}
