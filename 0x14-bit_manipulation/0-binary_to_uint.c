#include "main.h"

/**
 * pw - gives back power of a number.
 * @base: base.
 * @exp: exponent.
 * Return: r.
 */
int pw(int base, int exp)
{
	int r = 1, i;

	for (i = 0;  i < exp; i++)
	{
		r = base * r;
	}
	return (r);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to char.
 * Return: int value.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int p, n, k = 0;
	int z = 8, i = 0;

	while (*b != '\0')
	{
		if ((*b >= 'a' && *b <= 'z') || (*b >= 'A' && *b <= 'Z') || (b == NULL))
		{
			return (0);
		}
		b++;
	}
	b--;
	while (i < z && *b != '\0')
	{
		p = *b - '0';
		n = p * pw(2, i);
		k = k + n;
		b--;
		i++;
	}
	return (k);
}
