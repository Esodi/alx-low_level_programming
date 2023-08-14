#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - new dog prototype
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: mal pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mal;

	mal = malloc(sizeof(dog_t));
	if (mal == NULL)
	{
		return (NULL);
	}
	mal->name = name;
	mal->age = age;
	mal->owner = owner;

	return (mal);
}
