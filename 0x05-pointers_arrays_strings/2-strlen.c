#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int i = 0;

	for (i = 0; *s != '\0'; s++)
		i++;
	return (i);
}
