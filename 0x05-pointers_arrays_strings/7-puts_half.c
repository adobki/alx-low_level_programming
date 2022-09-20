#include "main.h"
/**
 * puts_half - Prints second half of a string, then new line.
 *             If the number of characters is odd, the function should
 *             print the last n characters of the string, where
 *             n = (length_of_the_string - 1) / 2
 *
 * @str: String to be printed.
 */
void puts_half(char *str)
{
	int strLen = 0;
	int countr = 0;

	/* Loop through str character by character to get its length */
	while (str[strLen] != '\0')
		strLen++;

	/* Check if number of characters is odd, then print required string */
	if (strLen % 2 > 0)
		countr = (strLen + 1) / 2;
	else
		countr = strLen / 2;

	/* Loop through str and print each character from the middle to the end */
	while (countr < strLen)
		_putchar(str[countr++]);

	/* Print new line character after string */
	_putchar('\n');
}
