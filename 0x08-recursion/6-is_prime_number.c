#include "main.h"

int is_prime_helper(int n, int i);

/**
 * is_prime_number - Checks whether an input integer is a prime number or not.
 * @n: The number to check.
 *
 * Return: 1 if n is a prime number, otherwise 0.
 */
int is_prime_number(int n)
{
	if (n < 2)
	return (0);
	return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - Recursive helper function to check whether an input
 * integer is a prime number or not.
 * @n: The number to check.
 * @i: The current divisor to check.
 *
 * Return: 1 if n is a prime number, otherwise 0.
 */
int is_prime_helper(int n, int i)
{
	if (n == i)
	return (1);
	if (n % i == 0)
	return (0);
	return (is_prime_helper(n, i + 1));
}
