#ifndef DOG_H
#define DOG_H
/**
 * struct dog - contain detail of the dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: contain three basic details
 */

struct dog
{
	/**
	 * @name: name of the dog
	 * @age: age of the dog
	 * @owner: owner of the dog
	 */
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /*DOG_H*/
