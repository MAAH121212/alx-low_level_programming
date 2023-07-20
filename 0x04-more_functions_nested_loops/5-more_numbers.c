#include "main.h"

/**
 * more_numbers - print more numbers
 */

void more_numbers(void)
{
	int i = 1;
	int c = 0;

	do {
		if (c <= 14)
			_putchar(c + 48);
	} while (i <= 10);
	_putchar('\n');
}
