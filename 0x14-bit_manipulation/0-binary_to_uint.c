#include "main.h"

/**
* binary_to_uint - converts a binary to an unsigned number
*
* @b: a pointer character
*
* Return: returns the converted string;
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;
	int j = 0;

	for (i = strlen(b) - 1; i >= 0; i--, j++)
	{
		if (b[i] == '0')
		{
			continue;
		}
		else if (b[i] == '1')
		{
			result += (1 << j);
		}
		else
		{
		return (0);
		}
	}
	return (result);
}
