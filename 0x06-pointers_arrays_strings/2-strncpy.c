#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int o;

	for (o = 0; o < n && src[o]; o++)
		dest[o] = src[o];

	while (o < n)
	{
		dest[o] = '\0';
		o++;
	}
	return (dest);
}
