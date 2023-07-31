#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */

void print_diagsums(int *a, int size)
{
	unsigned int s1 = 0, s2 = 0, s;

	for (s = 0; s < size; s++)
	{
		s1 += a[s];
		s2 += a[size - s - 1];
		a += size;
	}
	printf("%d,", s1);
	printf("%d\n", s2);
}
