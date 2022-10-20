#include "main.h"

/**
 * create_array - Function that creates an array of chars, and initializes it
 *                with a specific char.
 *
 * @size: Size of array to create.
 * @c: Char to initialise (fill) array with.
 *
 * Return: Pointer to the array of chars on success.
 *         NULL on error.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int countr = 0;
	char *array;

	if (size > 0)
	{
		array = malloc(size * sizeof(c));
		if (!array)
			return (NULL);

		while (countr < size)
			array[countr++] = c;

		return (array);
	}

	return (NULL);
}
