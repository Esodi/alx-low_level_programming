#include"main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @index:  is the index, starting from 0 of the bit you want to set.
 * Return: 1 success, -1 fail.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	int a;

	for (i = 0; n != 0; i++)
	{
		a = *n % 2;
		*n = *n / 2;
		if (i == index)
			a = 1;
	}

	return (a);
}
