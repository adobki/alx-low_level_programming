#include "main.h"
#include <stdlib.h>

/**
 * strLen - Function that counts characters in a given string.
 *
 * @str: String with characters to be counted.
 *
 * Return: Number of characters found in given string, str.
 */
int strLen(char *str)
{
	int length = 0;

	while (*str)
		str++, length++;

	return (length);
}

/**
 * cleanUp - Function only exists to overcome ALX's Betty requirement of
 *           <= 40 lines per function. These lines were originally [and
 *           can still be] in the calling function, infinite_add, in any/
 *           every other use case beyond the ALX SE Course.
 *
 * @r: Return string.
 * @size_r: Size of r.
 * @buffer: Source string.
 * @bufferBack: Buffer's root byte for deallocating with free().
 *
 * Return: Pointer to a string.
 */
char *cleanUp(char *r, int size_r, char *buffer, char *bufferBack)
{
	int countr = 0, length = strLen(buffer) + 1;

	if (size_r < length)
		return (NULL);

	while (countr < length)
		r[countr] = buffer[countr], countr++;
	free(bufferBack);

	return (r);
}

/**
 * infinite_add - Function that adds two numbers stored in strings. Function
 *                doesn't validate input, as it is assumed that:
 *                   i) n1 & n2 contain only digits and not other chars,
 *                  ii) n1 & n2 != NULL, always integer (including 0).
 *
 * @n1: First number to be added.
 * @n2: Second number to be added.
 * @r: Buffer to store the result of the addition.
 * @size_r: Buffer size.
 *
 * Return: Pointer to the result of the addition, r.
 *         0 on failure (can't store result in r).
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int n1Len = strLen(n1), n2Len = strLen(n2), length = n1Len + n2Len;
	int sum, rem = 0, diff = n1Len - n2Len;
	char *num1, *num2, *buffer, *bufferBack;

	buffer = malloc((length + 1) * sizeof(char));
	if (!buffer || size_r < (n1Len > n2Len ? n1Len : n2Len))
		return (NULL);
	bufferBack = buffer, buffer += length, *buffer-- = 0;

	/* Assign longer string to num1, shorter one to num2 */
	if (n2Len > n1Len)
		num1 = n2, num2 = n1, n1Len = n2Len, n2Len = strLen(n1), diff *= -1;
	else
		num1 = n1, num2 = n2;

	while (n1Len--)
	{
		if (n2Len)
			sum = (num1[n1Len] - '0') + (num2[--n2Len] - '0') + rem;
		else if (diff)
			sum = (num1[n1Len] - '0') + rem;

		if (length < 0)
			return (NULL);
		*buffer-- = sum % 10 + '0', rem = sum / 10, length--;

	}

	if (rem)
	{
		if (length < 0)
			return (NULL);
		*buffer = rem + '0';
	}
	else
		buffer++;

	return (cleanUp(r, size_r, buffer, bufferBack));
}
