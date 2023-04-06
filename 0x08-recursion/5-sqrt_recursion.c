#include "main.h"

int _sqrt_helper(int n, int i);

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to compute the square root of.
 *
 * Return: The natural square root of n, or -1 if n does not have a natural
 * square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);
	return (_sqrt_helper(n, 0));
}

/**
 * _sqrt_helper - Recursive helper function to compute the natural square root
 * of a number.
 * @n: The number to compute the square root of.
 * @i: The current integer to check.
 *
 * Return: The natural square root of n, or -1 if n does not have a natural
 * square root.
 */
int _sqrt_helper(int n, int i)
{
	if (i * i > n)
	return (-1);
	if (i * i == n)
	return (i);
	return (_sqrt_helper(n, i + 1));
}
