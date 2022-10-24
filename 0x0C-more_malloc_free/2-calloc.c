#include "main.h"


#include <string.h>
/**
 * _calloc - Function that allocates memory for an array, using malloc. It
 *           allocates memory for an array of nmemb elements of size bytes
 *           each. The allocated memory is initialised to zeros. This is a
 *           replica of the standard library function calloc().
 *
 * @nmemb: Number of elements/variable type to allocate memory for.
 * @size: Size (in bytes) of given element/variable type.
 *
 * Return: Pointer to the allocated memory.
 *         NULL if it fails OR nmemb == 0 or size == 0.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int length = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(length);
	if (!array)
		return (NULL);

	while (length--)
		*(array + length) = 0;

	return (array);
}
