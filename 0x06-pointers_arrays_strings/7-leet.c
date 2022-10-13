#include "main.h"

/**
 * encode - Funtion encodes a character into 1337 based on given criteria.
 *
 * @str: Character to be encoded.
 * @criteria: Either of two criteria to be met for character to be encoded.
 * @code: Number to swap character with if criteria is met.
 */
void encode(char *str, char criteria[2], char code)
{
	/* Check if character meets encoding criteria. Encode if true */
	if (*str == criteria[0] || *str == criteria[1])
		*str = code;
}

/**
 * leet - Function that encodes a string into 1337.
 *        Letters a and A should be replaced by 4
 *        Letters e and E should be replaced by 3
 *        Letters o and O should be replaced by 0
 *        Letters t and T should be replaced by 7
 *        Letters l and L should be replaced by 1
 *
 * @str: Original string.
 *
 * Return: String with 1337 encoding.
 */
char *leet(char *str)
{
	/* Create duplicate pointer to keep str fixed at beginning of string */
	char *codeStr = str;

	/* Loop through given string one character at a time */
	while (*codeStr++)
	{
		/* Funtion tests all criteria on current character/encode it */
		encode(codeStr, "aA", 52);
		encode(codeStr, "eE", 51);
		encode(codeStr, "lL", 49);
		encode(codeStr, "oO", 48);
		encode(codeStr, "tT", 55);
	}

	/* Return pointer to 1337 encodded string and end function */
	return (str);
}
