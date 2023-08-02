#include "main.h"

/**
 * _square - a function that expect two integers.
 * @n: input of type integer.
 * @val: input of type integer.
 * Return: int.
 */

int _square(int n, int val)
{
	if (val * val == n)
	{
		return (val);
	}
	else if (val * val < n)
	{
		return (_square(n, val + 1));
	}
	else
	{
		return (-1);
	}
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: an input of type int.
 * Return: The square root of n.
 */

int _sqrt_recursion(int n)
{
	return (_square(n, 1));
}
