#include "main.h"

/**
 * factorial - Entry point
 * @n: integer to be calculated
 * Return: returns factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
