#include "main.h"
/**
  * _isalpha - Checks alphabetic character
  * Return: Shows 1 when c is a letter
  * shows 0 when c is not a character
  * @c: The character in ASCII code
  */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
		if (c >= 91 && c <= 96)
		{
			continue;
		}
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
