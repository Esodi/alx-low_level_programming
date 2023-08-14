#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - pri nts the dog's particulars
 * @d: pointer to a structure
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->age == 0.0)
		d->age = 0.0;
	if (d->owner == NULL)
		d->owner = "(nil)";
	if (d == NULL)
		exit(0);
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
