#include "main.h"

/**
 * print_chessboard - Function that prints the chessboard.
 *
 * @a: A pointer to a two dimensional array with 8 rows [and columns].
 */

void print_chessboard(char (*a)[8])
{
	int row = 0;
	int col = 0;
	int index = 0;
	char (*str)[8] = a;

	while (row++ < 8)
	{
		while (col++ < 8)
		{
			putchar((*str)[index++]);
		}

	putchar('\n');
	col = 0;
	}

}
