#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function to free a dog
 * @d: pointer
 */
void free_dog(dog_t *d)
{
	free(d);
	free(d->name);
	free(d->owner);
}
