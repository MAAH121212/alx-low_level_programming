#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	int size = 0;
	int i = 0;
	char *n;

	if (str == 0)
		return (0);
	for (; str[size] != '\0'; size++)
		n = malloc(sizeof(*str) + 1);

	if (n == 0)
	{
		return (0);
	}
	else
	{
		for (; i < size; i++)
			n[i] = str[i];
	}
	return (n);
}
