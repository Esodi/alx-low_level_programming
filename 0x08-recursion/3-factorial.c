#include "main.h"

/**
 * factorial - gives a factorial of a number
 * @n: a certain number
 * Return: Always 0.
 */

int factorial(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	else if ((n == 1) | (n == 0))
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
