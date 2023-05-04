#include "main.h"

/**
* get_bit - gets the value of a given index
*
* @n: the number provided
* @index: the index in which the operation will be performed
* Return: returns the value of the the bit
*/

int get_bit(unsigned long int n, unsigned int index)
{

	if (index >= sizeof(unsigned long int) * 8)
	{
	return (-1);
	}
	return ((n >> index) & 1);
}
