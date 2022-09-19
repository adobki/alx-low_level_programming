#include "main.h"
/**
 * puts2 - Prints every other character of a string, then new line.
 *
 * @str: String to be printed.
 */
void puts2(char *str)
{
	int strLen = 0;
	int countr = 0;

	/* Loop through str character by character to get its length */
	while (str[strLen] != '\0')
		strLen++;

	/* Loop through str two characters at a time and print each one */
	while (countr < strLen)
	{
		_putchar(str[countr]);
		countr += 2;
	}

	/* Print new line character after string */
	_putchar('\n');
}
