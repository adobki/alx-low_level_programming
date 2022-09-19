#include "main.h"
/**
 * _strlen - A function that returns the length of a string.
 *
 * @s: String whose length is to be checked.
 *
 * Return: String length.
 */
int _strlen(char *s)
{
	int strLen = 0;

	/* Loop through s character by character till end of string character \0 */
	while (s[strLen] != '\0')
		strLen++;

	/* Return current character position as length of string */
	return (strLen);
}
