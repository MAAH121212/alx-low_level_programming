#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, o;

	i = 0;
	while (haystack[i] != '\0')
	{
		o = 0;

		while (needle[o] == haystack[i]  && needle[o] != '\0')
		{
			haystack[i]++;
			needle[o]++;
		}
		if (needle[o] == '\0')
			return (haystack);
	}
	return (0);
}
