#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: int number.
 * @index: bit position.
 * Return: the bit indicated.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;
	int x;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	for (i = 0; i <= index; i++)
	{
		x = n % 2;
		n = n / 2;
	}
	return (x);
}
