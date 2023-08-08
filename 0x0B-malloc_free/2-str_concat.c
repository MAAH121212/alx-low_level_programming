#include "main.h"

/**
 * _strlen - find the length of the String
 * @s: String
 * Return: int
 */

int _strlen(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	;
	return (i);
}

/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	int size1, size2, i;

	char *n;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	size1 = _strlen(s1);
	size2 = _strlen(s2);

	n = malloc((size1 + size2) * sizeof(char) + 1);

	if (n == 0)
		return (NULL);

	for (i = 0; i <= size1 + size2; i++)
	{
		if (i < size1)
			n[i] = s1[i];
		else
			n[i] = s2[i - size1];
	}
	n[i] = '\0';
	return (n);
}
