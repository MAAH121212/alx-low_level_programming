#include "main.h"
#include <stdio.h>

/**
 * isLower - determines whether ascii is lowercase.
 * @c: character.
 * Return: 1 if true, 0 if false
 */

int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * Isdelimiter - determines whether ascii is a delimiter
 * @c: character
 * Return: 1 if true, 0 if false
 */

int Isdelimiter(char c)
{
	int i;
	char  dele[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
	{
		if (c == dele[i])
			return (1);
		return (0);
	}
}

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 * Return: A pointer to the changed string.
 */

char *cap_string(char *str)
{
	char *A = str;
	int found = 1;

	while (*str)
	{
		if (Isdelimiter(*str))
			found = 1;
		else if (isLower(*str) && found)
		{
			*str = *str - 32;
			found = 0;
		}
		else
			found = 0;
		str++;
	}
	return (A);
}



