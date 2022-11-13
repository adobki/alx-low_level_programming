#include "main.h"

/**
 * to_upper - A function that capitalises a given letter if it is lowercase.
 *            It works based on the premise that uppercase letters are 32
 *            points behind their lowercase counterparts in the ASCII table.
 *            (i.e. in ASCII A = 65, a = 97. 65 - 97 = -32.)
 *
 * @str: Pointer to the character to be capitalised if lower.
 */
void to_upper(char *str)
{
	/* Check if current letter is lowercase using ASCII value */
	if (*str >= 97 && *str <= 122)
		/* Convert to uppercase by subtracting 32 from ASCII value */
		*str -= 32;
}

/**
 * cap_string - Function that capitalises each word in a string using the
 *              following word separators:
 *              space, tabulation, new line, and , ; . ! ? " ( ) { }
 *
 * @str: Pointer to original string/character array.
 *
 * Return: Original string with all letters changed to uppercase.
 */
char *cap_string(char *str)
{
	/* Create array of given word separators */
	char sep[] = " \t\n,;.!?\"(){}", *cap_str = str;
	int countr, sepc = sizeof(sep);

	/* Check if first character is lowercase and capitalise it */
	to_upper(cap_str++);

	/* Loop through given string one character at a time */
	while (*cap_str)
	{
		/* Check if current character is one of given separators */
		for (countr = 0; countr < sepc; countr++)
			if (*cap_str == sep[countr])
				/* Check if character after separator is lowercase */
				to_upper(++cap_str), cap_str--;

		/* Move to next character in string */
		cap_str++;
	}

	/* Return uppercase string and end function */
	return (str);
}
