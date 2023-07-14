#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a program that prints all single digit numbers
 *
 * Return: Always 0 (Success)
 *
*/

int main(void)
{
	int ch = 0;

	while (ch <= 9)
	{
		putchar(ch + '0');
		ch++;
	}
	putchar('\n');
	return (0);
}

