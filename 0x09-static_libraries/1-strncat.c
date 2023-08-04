#include "main.h"

/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, o;

	i = 0;

	while (dest[i])
		i++;

	for (o = 0; o < n && src[o]; o++)
		dest[i++] = src[o];
	dest[i++] = '\0';

	return (dest);
}
