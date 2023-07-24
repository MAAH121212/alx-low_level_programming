#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	int i, k;
	char pop;

	for (i = 0; s[i] != '\0'; ++i)
		;

	for (k = 0; k < i / 2; k++)
	{
		pop = s[k];
		s[k] = s[i - 1 - k];
		s[i - 1 - k] = pop;
	}
}
