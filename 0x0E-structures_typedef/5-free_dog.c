#include "dog.h"

/**
 * free_dog - Function that frees dogs.
 *
 * @d: Pointer to a dog that needs to be freed.
 */

void free_dog(dog_t *d)
{
	if (d)
		free(d->name), free(d->owner), free(d);
}
