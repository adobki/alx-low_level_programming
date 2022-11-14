#include "main.h"

/**
 * printBlanks - Function that prints blanks after EOF/buffer in print_buffer
 *               function. It is a piece of that function. It only exists to
 *               accomodate ALX/Betty's restriction of 40 lines per function.
 *
 * @index: Buffer to be printed.
 *
 * Return: New file position (index).
 */

int printBlanks(int index)
{
	while (index % 10)
		if ((index % 2) == 0)
			printf("  "), index++;
		else
			printf("   "), index++;

	return (index);
}

/**
 * print_buffer - Function that prints bytes the way standard hex viewers do.
 *                It uses given size of bytes from a buffer, @b. It prints out
 *                10 bytes per line, in seven space-separated columns, but only
 *                prints a new line if size <= 0.
 *                Column 1:
 *                Position of 1st byte of the line in hex (8 zero-padded chars)
 *                Columns 2 - 6:
 *                The hex content (2 chars) of the buffer, 2 bytes at a time.
 *                Column 7:
 *                Content of the buffer. Prints . if the byte is not printable.
 *
 * @b: Buffer to be printed.
 * @size: Number of bytes to be printed from the given buffer.
 */

void print_buffer(char *b, int size)
{
	int countr = 0, countr2 = 0, index = 0, column = 1, isEOF = 0;
	char cache[10];

	if (!b || size < 1)
	{
		printf("\n");
		return;
	}

	while (1)
	{
		if (index >= size)
		{
			isEOF = 1;
			if (column != 7)
				column = 7, index = printBlanks(index);
		}

		if (column == 1)
			printf("%08x: ", index), column++;

		if (column > 1 && column < 7)
		{
			cache[countr] = b[index];
			if ((index % 2) == 0)
				printf("%02x", b[index]), index++, countr++;
			else
				printf("%02x ", b[index]), index++, column++, countr++;
		} else
		{
			countr2 = 0;
			while (countr2 < countr)
				if (cache[countr2] >= ' ' && cache[countr2] <= '~')
					printf("%c", cache[countr2++]);
				else
					printf("."), countr2++;
			printf("\n"), column = 1, countr = 0, countr2 = 0;
			if (isEOF)
				break;
}	}	}
