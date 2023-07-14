#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  main - Entry point
 *
 *  Description: Last digit of a random number
 *
 *  Return: Always 0 (Success)
 *
*/

int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int lastdigit = n % 10;

	if (lastdigit > 5)
		printf("Last digit of %i is %i  and is greater than 5\n" n, lastdigit);
	else if (lastdigit == 0)
		printf("Last digit of %i is %i  and is 0\n" n, lastdigit);
	else if (lastdigit < 6 && lastdigit != 0)
		printf("Last digit of %i is %i  and is less than 6 and not 0\n" n, lastdigit);
	return (0);
}
