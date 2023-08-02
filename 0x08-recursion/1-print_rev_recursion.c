#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The string to be printed.
 */

void _print_rev_recursion(char *s)
{
	char *p;

	if (*s != '\0')
	{
		*p = *s;
		p++;
	}
	if (*p == *s)
	{
		_putchar(*p);
		p--;
	}
}
