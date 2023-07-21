#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int hei, wid;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (hei = 1; hei <= size; hei++)
		{
			for (wid = 1; wid <= size; wid++)
			{
				if ((hei + wid) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar(' ');
		}
	}
}
