#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int i, o;

	i = 0;

	while (dest[i])
		i++;

	for (o = 0; src[o]; o++)
	{
		dest[i] = src[o];
		i++;
	}
	return (dest);
}
