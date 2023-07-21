#include "main.h"

/**
 * print_square - prints a square, followed by a new line;
 * @size: size of the square
 */

void print_square(int size)
{
	int row, col;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (row = 1; row <= size; size++)
		{
			for (col = 1; col <= row; row++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
