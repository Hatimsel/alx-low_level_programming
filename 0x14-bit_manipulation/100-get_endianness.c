#include "main.h"

/**
* get_endianness - checks the endianness.
*
* Return: returns 0 if big endian, 1 if little endian.
*/

int get_endianness(void)
{
	union
	{
		uint32_t i;
		char c[4];
	} endian_test = {1};

	return (endian_test.c[0]);
}
