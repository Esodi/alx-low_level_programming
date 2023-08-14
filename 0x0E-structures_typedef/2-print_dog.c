#include <stdio.h>
#include "dog.h"

/**
 * print_dog - pri nts the dog's particulars
 * @d: pointer to a structure
 * Return: void
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
