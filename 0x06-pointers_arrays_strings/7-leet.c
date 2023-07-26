#include "main.h"

/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */

char *leet(char *n)
{
	char *a = n;
	char keys[] = {'A', 'E', 'O', 'T', 'L'};
	int values[] = {4, 3, 0, 7, 1};
	int i;

	while (*n)
	{
		for (i = 0; i < sizeof(keys) / sizeof(char); i++)
		{
			if (*n == keys[i] || *n == keys[i] + 32)
			{
				*n = values[i] + 48;
			}
		}
		n++;
	}
	return (a);
}
