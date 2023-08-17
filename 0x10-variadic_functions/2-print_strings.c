#include "variadic_functions.h"

/**
 * print_strings - function that print a string
 * @separator: char pointer
 * @n: unsigned int variable
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list par;
	unsigned int i;
	char *x;

	va_start(par, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(par, char*);
		if (x == NULL)
		{
			printf("(nil)");
		}
		else
			printf("%s", x);
		if ((n - i) > 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(par);
	printf("\n");
}
