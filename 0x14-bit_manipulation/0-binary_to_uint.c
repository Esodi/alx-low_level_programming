#include "main.h"

/**
 * pawa - power.
 * @base: base.
 * @exp: exp.
 * Return: ans.
 */
int pawa(int base, int exp)
{
	int i = 0, ans = 1;

	for (; i < exp; i++)
	{
		ans = ans * base;
	}
	return (ans);
}

/**
 * binary_to_uint - convert binary to decimal.
 * @b: binary value.
 * Return: decimal value.
 */
unsigned int binary_to_uint(const char *b)
{
	int n[65], c = 0, j = 0, i, f;
	unsigned int a = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (*b != '\0')
	{
		if (*b == '1' || *b == '0')
		{
			n[c++] = *b - '0';
			b++;
		}
		else
			return (0);
	}
	c--;
	for (i = c; i >= 0; i--)
	{
		f = pawa(2, i);
		a = (n[j++] * f) + a;
	}
	return (a);
}
