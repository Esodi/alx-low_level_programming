#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip.
 * @n: 1st num.
 * @m: 2nd num.
 * Return: number of flips.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int c = 0;
	unsigned long int i = 0;

	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (((n >> i) & 1) != ((m >> i) & 1))
		{
			c++;
		}
	}
	return (c);
}
