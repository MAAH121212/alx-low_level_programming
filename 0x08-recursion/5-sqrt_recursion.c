#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: an input of type int.
 * Return: The square root of n.
 */

int _sqrt_recursion(int n)
{
	int val = 1;

	if (val * val == n)
	{
		return (val);
	}
	else if (val * val < n)
	{
		return (_sqrt_recursion(n), val + 1);
	}
	else
	{
		return (-1);
	}
}
