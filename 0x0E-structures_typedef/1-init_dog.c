#include "dog.h"

/**
 * init_dog - Program that initializes a variable of type struct dog.
 *
 * @d: Pointer to the variable to be initialised.
 * @name: Pointer to a string (char array).
 * @age: An integer.
 * @owner: Pointer to a string (char array).
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog my_dog;

	if (!d)
	{
		d = &my_dog;
		d = malloc(sizeof(struct dog));
		if (!d)
			exit(98);
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
