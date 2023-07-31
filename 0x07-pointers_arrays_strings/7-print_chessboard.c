#include "main.h"

/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */

void print_chessboard(char (*a)[8])
{
	unsigned int i, p;

	for (i = 0; i < 8; i++)
	{
		for (p = 0; p < 8; p++)
		{
			_putchar(a[i][p]);
		}
		_putchar('\n');
	}
}
