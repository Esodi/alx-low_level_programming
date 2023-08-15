#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
	int l1, l2;

	l1 = strlen(name);
	l2 = strlen(owner);
	mal = malloc(sizeof(dog_t));
	if (mal == NULL)
	{
		return (NULL);
	}
	mal->name = malloc((l1 + 1) *  sizeof(char));
	if (mal->name == NULL)
	{
		free(mal);
		return (NULL);
	}
	mal->owner = malloc((l2 + 1) * sizeof(char));
	if (mal->owner == NULL)
	{
		free(mal);
		free(mal->name);
		return (NULL);
	}	
	strcpy(mal->name, name);
	mal->age = age;
	strcpy(mal->owner, owner);

	return (mal);
}
