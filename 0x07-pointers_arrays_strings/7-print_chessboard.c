#include "main.h"
/**
 * print_chessboard - prints a two dimensional arrays of 8 rows and 8 columns
 * @a: is the pointer to the array
 * return: void
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
