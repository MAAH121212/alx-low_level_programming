#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all alphabit letters
 *
 * Return: Always 0 (Success)
 *
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
	}
	putchar('\n');
	ch++;

	return (0);
}
