#ifndef DOG
#define DOG
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - Data structure for a dog's biodata.
 *
 * @name: The dog's name.
 * @age: The dog's age.
 * @owner: The name of the dog's owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *, char *, float, char *);
#endif /* #ifndef DOG */

