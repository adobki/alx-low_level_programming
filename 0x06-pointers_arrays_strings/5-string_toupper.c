#include "main.h"

/**
 * string_toupper - Function that changes all lowercase letters of a string
 *                 to uppercase.
 *                 It works based on the premise that uppercase letters are 32
 *                 points ahead of their lowercase counterparts in the ASCII
 *                 table. (i.e. in ASCII A = 65, a = 97. 65 - 97 = -32)
 *
 * @str: Original string.
 *
 * Return: Original string with all letters changed to uppercase.
 */

char *string_toupper(char *str)
{
	/* Loop through given string one character at a time */
	while (*str)
	{
		/* Check if current letter is lowercase using ASCII value */
		if (*str >= 97 && *str <= 122)
			/* Convert to uppercase by subtracting 32 from ASCII */
			*str -= 32;
		/* Move to next character in string */
		str++;
	}

	/* Return uppercase string and end function */
	return (str);
}
