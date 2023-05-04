#include "main.h"

/**
* flip_bits - flips a number to get another one
*
* @n: the number to be fliped
* @m: the resulted number
* Return: returns the number of bits you would need to flip.
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int count = 0;

	while (x)
	{
	if (x & 1)
	{
	count++;
	}
	x >>= 1;
	}
	return (count);
}
