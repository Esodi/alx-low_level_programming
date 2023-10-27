#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: int number.
 * @index: position of a number.
 * Return: 1 success, 0 fail.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n = *n & ~(1UL << index);
	return (1);
}
