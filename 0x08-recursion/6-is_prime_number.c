#include "main.h"

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int check_prime(int n, int oth);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - expect two integers.
 * @n: input of type integer.
 * @oth: input of type integer.
 * Return: n and oth.
 */

int check_prime(int n, int oth)
{
	if (n % oth == 0 || n <= 1)
	{
		return (0);
	}
	else if (oth >= n && n > 1)
	{
		return (1);
	}
	else
	{
		return (check_prime(n, oth + 1));
	}
}
