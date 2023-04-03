#include "main.h"

/**
 * _memset - Fills memory with constant byte
 *
 * @s: destination pointer
 *
 * @b: constant byte
 *
 * @n: number of bytes
 *
 * Return: returns result s
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
