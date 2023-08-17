#include "variadic_functions.h"

/**
 * printnum - function that prints numbers
 * @num: number itself
 */
void printnum(int num)
{
	int box[20];
	int i, j;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num == 0)
	{
		_putchar('0');
		return;
	}
	i = 0;
	while (num > 0)
	{
		box[i++] = ((num % 10) + '0');
		num = num / 10;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(box[j]);
	}
}

/**
 * printstr - prints a string
 * @s: char pointer
 */
void printstr(const char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
}

/**
 * print_numbers - function that prints numbers
 * @separator: char pointer
 * @n: int variable
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int x;
	va_list par;
	
	if (separator == NULL)
	{
		NULL;
	}
	va_start(par, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(par, int);
		printnum(x);
		if (i < (n - 1))
		{
			printstr(separator);
		}
	}
	_putchar('\n');
	va_end(par);
}
