#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdarg.h>
#include <unistd.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char x);

/**
 * struct choice - name of the structure
 * @c: character
 * @i: integer
 * @f: float
 * @s: string
 */
typedef struct choice
{
	char c;
	int i;
	float f;
	char *s;
} ch;

#endif /*VARIADIC_FUNCTIONS_H*/
