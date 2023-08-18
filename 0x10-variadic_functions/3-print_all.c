#include "variadic_functions.h"
#include <string.h>

/**
 * print_all - prints all types of arguments
 * @format: constant pointer to char
 */
void print_all(const char * const format, ...)
{
	int x = 0;
	va_list par;
	ch q;
	char *b = "";

	va_start(par, format);
	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					q.c = (char)va_arg(par, int);
					printf("%s%c", b, q.c);
					break;
				case 'i':
					q.i = va_arg(par, int);
					printf("%s%d", b, q.i);
					break;
				case 'f':
					q.f = (float)va_arg(par, double);
					printf("%s%f", b, q.f);
					break;
				case 's':
					q.s = va_arg(par, char*);
					if (q.s == NULL)
						q.s = "(nil)";
					printf("%s%s", b, q.s);
					break;
				default:
					x++;
					continue;
			}
			b = ", ";
			x++;
		}
	}
	printf("\n");
	va_end(par);
}
