#include "main.h"


/**
 * rev_string - Reverses a string
 * @s: The string to be modified
 * Return: void
 */

void rev_string(char *s)

{

	int str = 0, index = 0;
	char tmp;

	while (s[index++])
	str++;

	for (index = str - 1; index >= str / 2; index--)
	{
	tmp = s[index];
	s[index] = s[str - index - 1];
	s[str - index - 1] = tmp;
	}
}
