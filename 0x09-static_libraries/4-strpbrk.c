#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, o;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		o = 0;

		while (accept[o] != 0)
		{
			if (accept[o] == s[i])
			{
				p = &s[i];
				return (p);
			}
			o++;
		}
		i++;
	}
	return (0);
}
