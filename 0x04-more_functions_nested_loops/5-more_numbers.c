#include "main.h"

/**
 * more_numbers - prints 10 rows of 1 to 14 numbers
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 11; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
				_putchar((j / 10) + '0');

			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
