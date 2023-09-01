#include "main.h"

/**
 * bmod - a function
 * @q: an  uint
 * Return: an int
 */
int bmod(unsigned long int *q)
{
	int w, r;

	w = *q * 0.5;
	r = *q - (2 * w);
	*q = *q * 0.5;
	return (r);
}

/**
 * print_binary - prints the binary representation of a number.
 * @n: int num.
 * Return: binary num.
 */
void print_binary(unsigned long int n)
{
	int j, l = 0;
	char *s;
	unsigned long int tmp, k = 256, i;

	if (n == 0)
		_putchar('0');
	else if (n == 1)
		_putchar('1');
	else
	{
		i = 1;
		while (i <= k)
		{
			tmp = bmod(&n);
			*s = (tmp + '0');
			s++;
			i++;
			l++;
		}
		s--;
		while (*s != '1')
		{
			s--;
			l--;
		}
		for (j = 0; j < l; j++)
		{
			_putchar(*s);
			s--;
		}
	}
}
