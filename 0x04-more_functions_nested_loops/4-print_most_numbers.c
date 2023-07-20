#include "main.h"

/**
 * print_most_numbers - print num except 2 and 4
 *
 * return: void
 */


void print_most_numbers(void)
{
	int pop;

	for (pop = 0; pop <= 9; pop++)
	{
		if (pop == 2 || pop == 4)
			continue;
		_putchar(pop + 48);
	}
	_putchar('\n');
}
