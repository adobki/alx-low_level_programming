#include "main.h"

/**
 * encode - Funtion encodes a character using ROT13 based on given criteria.
 *
 * @str: Character to be encoded.
 */
void encode(char *str)
{
	int length = 52;
	char abc26[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (length--)
	{
		if (*str == abc26[length])
		{
			*str = rot13[length];
			break;
		}
	}
}

/**
 * rot13 - Function that encodes a string using ROT13.
 *        Source: https://en.wikipedia.org/wiki/ROT13
 *
 * @str: Original string.
 *
 * Return: String with ROT-13 encoding.
 */
char *rot13(char *str)
{
	/* Create duplicate pointer to keep str fixed at beginning of string */
	char *codeStr = str;

	/* Loop through given string one character at a time */
	while (*codeStr)
	{
		/* Call funtion to test all criteria on current character/encode it */
		encode(codeStr);
		codeStr++;
	}

	/* Return pointer to ROT13 encodded string and end function */
	return (str);
}
