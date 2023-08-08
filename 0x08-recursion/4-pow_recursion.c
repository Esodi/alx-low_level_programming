#include "main.h"

/**
 * _pow_recursion - returns an exponent of a number
 * @x: number base
 * @y: exponent itself
 * Return: Always 0.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
