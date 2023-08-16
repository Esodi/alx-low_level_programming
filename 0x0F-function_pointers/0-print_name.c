#include "function_pointers.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * print_name - function that prints a name
 * @name: pointer to a name assigned
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		(*f)(name);
	else
		exit(EXIT_SUCCESS);
}
