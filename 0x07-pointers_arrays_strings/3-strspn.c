#include "main.h"

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, o;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (o = 0; accept[o] != s[i]; o++)
		{
			if (accept[o] == '\0')
				return (i);
		}
	}
	return (i);
}
