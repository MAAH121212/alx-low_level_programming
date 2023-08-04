#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	int res = 0;
	char *c;

	while(--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c >'9')
				return (printf("Error\n"), 1);
		res += atoi(argv[argc]);
	}
	printf("%d\n", res);
	return (0);
}
