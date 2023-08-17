#include "variadic_functions.h"

/**
 * sum_them_all - return the sum of its parameters
 * @n; number of parameters
 * Return: int value
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, x, sum = 0;
	va_list par;

	if (n <= 0)
		return (0);

	va_start(par, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(par, int);
		sum = sum + x;
	}
	va_end(par);
	return (sum);
}
