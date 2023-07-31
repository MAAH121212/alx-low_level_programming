#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{

	for (; *haystack != '\0'; haystack++ )
	{
		char *P = haystack;
		char *I = needle;

		while (*I == *P  && *I != '\0')
		{
			P++;
			I++;
		}
		if (*I == '\0')
			return (haystack);
	}
	return (0);
}
