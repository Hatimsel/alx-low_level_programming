#include "main.h"

/**
 * string_toupper - Switches lower to uppercases
 *
 * @str: the string to be switched
 * Return: returns the result
 */


char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
