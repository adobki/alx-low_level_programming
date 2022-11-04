#include "dog.h"

/**
 * strLen - Function counts number of characters in a given string.
 *
 * @str: String to be counted.
 *
 * Return: Number of characters in given string.
 */
int strLen(char *str)
{
	int length = 0;

	while (*str++)
		length++;

	return (length);
}

/**
 * new_dog - Function that creates a new dog (struct dog).
 *           NOTE: Funtion has to store a copy of name and owner.
 *
 * @name: Name of the new dog.
 * @age: Age of the new dog.
 * @owner: Name of the new dog's owner.
 *
 * Return: Pointer to new, initilised struct dog on success.
 *         NULL on error.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	char *nameCpy, *ownerCpy;
	int nameLen = strLen(name), ownerLen = strLen(owner), countr = 0;

	nameCpy = malloc((nameLen + 1) * sizeof(char));
	if (!nameCpy)
		return (NULL);
	ownerCpy = malloc((ownerLen + 1) * sizeof(char));
	if (!ownerCpy)
	{
		free(nameCpy);
		return (NULL);
	}

	while (*name)
		*nameCpy++ = *name++, countr++;

	*nameCpy = '\0';
	nameCpy -= countr;

	countr = 0;
	while (*owner)
		*(ownerCpy + countr++) = *owner++;
	*(ownerCpy + countr) = '\0';

	newDog = malloc(sizeof(dog_t));
	if (!newDog)
	{
		free(nameCpy), free(ownerCpy);
		return (NULL);
	}
	newDog->age = age;
	newDog->name = nameCpy;
	newDog->owner = ownerCpy;

	return (newDog);
}
