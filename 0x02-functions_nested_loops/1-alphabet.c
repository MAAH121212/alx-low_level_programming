#include"main.h"

/**
 * print_alphabit - utilizes on the _putchar to print
 *                 the alphabit a-z
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');

	return (0);
}
