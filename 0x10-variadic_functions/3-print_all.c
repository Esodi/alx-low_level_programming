#include "variadic_functions.h"
#include <string.h>

/**
 * print_all - prints all types of arguments
 * @format: constant pointer to char
 */
void print_all(const char * const format, ...)
{
	int x, n;
	va_list par;
	ch q;
	char *b = "";

	va_start(par, format);
	n = strlen(format);
	x = 0;
	while (x < n)
	{
		switch (format[x])
		{
			case 'c':
				q.c = (char)va_arg(par, int);
				printf("%c", q.c);
				break;
			case 'i':
				q.i = va_arg(par, int);
				printf("%d", q.i);
				break;
			case 'f':
				q.f = (float)va_arg(par, double);
				printf("%f", q.f);
				break;
			case 's':
				q.s = va_arg(par, char*);
				if (q.s == NULL)
					q.s = "(nil)";
				printf("%s", q.s);
				break;
			default:
				b = ", ";
				break;
		}
		if (x < n - 1)
			printf("%s", b);
		x++;
	}
	va_end(par);
	printf("\n");
}
