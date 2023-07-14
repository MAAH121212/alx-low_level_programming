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
	char ch = 'a';

	while (ch <= 'j')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}

